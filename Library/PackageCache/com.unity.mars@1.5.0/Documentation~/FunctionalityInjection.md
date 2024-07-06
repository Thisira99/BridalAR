---
uid: mars-injection
---

# Functionality Injection

Unity MARS apps operate in a wide variety of contexts, from Editor Simulation to AR devices. In order to support multiple contexts without requiring changes to user code, core functionality is accessed through a shim layer called Functionality Injection. Functionality Injection is an integration pattern that gives generic access to a wide variety of data provider packages. A pair of C# interfaces define the API for a given feature. By convention, one has a name beginning with `IProvides`, implements `IFunctionalityProvider` and defines methods or events that a data provider class must implement in order for Unity MARS to use them. The other interface, the name of which usually begins with `IUses` and implements `IFunctionalitySubscriber<TProvider>`, is implemented by classes that need access to the provider methods. `TProvider` is constrained to types which implement `IFunctionalityProvider` to ensure that the system can load and unload a provider for any subscriber type.

The goal of Functionality Injection is to make it as easy as possible to add extra functionality to user scripts. You can add/remove a subscriber interface without changing anything else in your class. Functionality Injection serves a similar purpose to the concept of Subsystems and Loaders in XR Management, but with more granular configuration capabilities, and is used to expose many features of Unity MARS in addition to AR platform integrations.

The core Functionality Injection interfaces defined by Unity MARS can be found in the `Packages/Unity MARS/Interfaces` folder under the `Providers` and `Subscribers` sub-folders. Some examples of these interfaces are:

`IProvidesPlaneFinding` / `IUsesPlaneFinding`

`IProvidesFaceTracking` / `IUsesFaceTracking`

`IProvidesCameraPose` / `IUsesCameraPose`

These interfaces, and other supporting types, are defined in a separate assembly from the Unity MARS `Runtime` and `Editor` assemblies to simplify dependencies where possible. In some cases, third-party assemblies will only need to reference `Unity.MARS.Interfaces` and `Unity.XRTools.ModuleLoader.Interfaces`, whose APIs change far less frequently than the `Runtime` assemblies do. As long as a provider or subscriber can implement the required interface methods and/or events in isolation, no other reference to Unity MARS code should be necessary.

`IFunctionalityProvider` defines three methods:
- `void LoadProvider()`
- `void UnloadProvider()`
- `void ConnectSubscriber(object subscriber)`

`IFunctionalitySubscriber<TProvider>` defines a `TProvider provider` property which the system can use to connect providers to subscribers by calling `ConnectSubscriber` on all providers with each subscriber as the argument. This gives implementors of `IFunctionalitySubscriber<TProvider>` implicit access to a provider which the system can select at runtime, depending on the context. For convenience, it is recommended that all implementations of `IFunctionalitySubscriber<TProvider>` define a complimentary class with extension methods that map to the methods and/or events defined in the `TProvider` interface. This avoids requiring subscriber code to access the `provider` property, and enables classes to implement multiple subscriber types without the need for awkward casting to differentiate between `provider` properties.

For a concrete example of a functionality subscriber, consider `MARSPlaneVisualizer`. This class implements `IUsesPlaneFinding` so it can call `this.GetPlanes(planes)` and subscribe to events in order to create GameObjects that render visuals for AR planes. An instance of `MARSPlaneVisualizer` will get planes from a variety of providers depending on the context. In Edit Mode instant Simulation, Unity MARS will connect `SimulatedPlanesProvider` to it and provide all the planes from the active environment. In Play Mode and Edit Mode continuous Simulation, the default provider will be the `SimulatedDiscoveryPlanesProvider` which provides the planes that have currently been discovered during a particular session. In mobile Player builds with the Unity MARS AR Foundation Providers package in the project, the `ARFoundationPlanesProvider` will provide planes exposed through AR Subsystems. Note that you can also disable the `Simulate In Play Mode` option under `Project Settings > MARS > Simulation` to test what providers will be selected in Player builds. Use the `Override Platform In Playmode` option under `Project Settings > Module Loader` to emulate different build targets.

You can see what [Functionality Islands](#functionality-islands) are active and what providers are loaded within those islands by looking at the inspector for the Functionality Injection Module under `Assets/Module Loader/Settings/Resources/FunctionalityInjectionModule`. The inspector also lists the aggregate list of all Provider and Subscriber types known to the system. You can also modify the `Default Island` which is used by all scenes in Play Mode (without simulation) and in Player builds. The `Default Island` can also be overridden using the `Functionality Island` field in the `MARSSession` inspector under the `Advanced` foldout.

## Writing new Providers

Some applications or extended workflows may require new functionality providers. For example, in order to enable live face tracking in the Editor, third parties may create a new Face Tracking provider which uses the webcam or some other device in order to provide head and landmark poses to Unity MARS. This simply involves creating some class which implements the corresponding `IProvides` interface type, in this case `IProvidesFaceTracking`. From there, it is up to the implementor to define the appropriate interface methods or invoke events where appropriate. The providers in `com.unity.mars-ar-foundation-providers` serve as a good example of how to wrap an existing library, but depending on the use case, they may not be a perfect fit. There is an imitation of a Face Tracking Provider in the Unity MARS samples (accessed via the Package Manager UI) which may be more helpful at showing the basics of provider implementation. It is more complex than the trivial `IProvidesFoo` example in the Module Loader package, but not as complex as the AR Foundation providers.

All providers need to implement `void LoadProvider()`, `void UnloadProvider()`, and `void ConnectSubscriber(object subscriber)`. `LoadProvider` and `UnloadProvider` are called by the system when providers are added to and removed from Functionality Islands. `UnloadProvider` is called on all providers in a Functionality Island when the Island itself is unloaded or removed from the Functionality Injection Module. This may happen as they are explicitly added by setup code, as is the case in the context of simulation, or it will happen implicitly as subscribers are collected and the system evaluates what kind of providers are required. These methods are similar to `Awake` and `Destroy` for `MonoBehaviour` types. They give implementors an opportunity to do set up and tear down work.

`ConnectSubscriber` is called by the system when injecting functionality on potential subscriber objects. This happens automatically on scene load in `MARSSceneModule` and can also be triggered by user code calling `InjectFunctionality` or other variants of that method. The provider is responsible for checking whether the incoming object implements a corresponding subscriber interface and setting the subscriber's corresponding `provider` property to `this`. Providers can use the `IFunctionalityProvider.TryConnectSubscriber<TProvider>` extension method to do this for convenience. Be careful to check that this method is implemented, as it is easy to overlook. If a class implements _more than one_ functionality provider interface type, it _must_ call `TryConnectSubscriber<TProvider>` once for each provider interface it implements.

## Base classes for Providers

The only requirement for a functionality provider is a type that implements `IFunctionalityProvider`. This means that providers can inherit from practically any type. Providers can be `MonoBehaviors` if necessary. For example, if implementors wish to take advantage of the `Update` callback to do some work every frame, it is a good idea to inherit from `MonoBehaviour`. The simplest provider type is just a normal C# `class`, but it can also inherit from practically any type, as long as it has a zero-parameter constructor method and can be activated via `Activator.CreateInstance`. In the case of a `MonoBehaviour` provider, it is possible to provide a Prefab in the `Functionality Island` default providers list which will be instantiated when that provider is needed. If that prefab has already been instantiated, it will be reused if any of its components provide other functionality. Otherwise, a new GameObject is created for every `MonoBehavior` provider which is required.

The system will not allow providers to inherit from `ScriptableObject` because these objects rely on calling special methods to create and destroy them. Without the ability to define an Asset with serialized data, there is no advantage to using a `ScriptableObject` over a normal C# class. However, providers can inherit from `ScriptableSettingsBase` which is defined in `com.unity.xrtools.utils` if implementors wish to define an asset with serialized fields, and treat the provider like a singleton.

## Providing data to the Unity MARS Database

Some types of providers are expected to expose data to the [Unity MARS Database](MARSConcepts.md#the-mars-database) (also covered [here](SoftwareDevelopmentGuide.md#mars-database)). This functionality is exposed by `IUsesMARSData<T>`, `IUsesMARSTrackableData<T>` and `IProvidesTraits<T>`. Providers should generally implement `IProvidesTraits<T>` and either of the `Data<T>` interfaces if they provide data that can be used by Proxies. The Unity MARS Database stores data in collections organized by C# type. Implementors of `IUsesMARSData<T>` can add, update, and remove data of any type `T`. Providers should use `IUsesMARSTrackableData<T>` for data types which implement the `IMRTrackable` interface. Any data type which can provide a `Pose` and `MarsTrackableId` should implement `IMRTrackable`. This allows platform-provided trackable IDs to be used in place of IDs which are supplied by the Unity MARS Database.

Proxies will match to a particular data ID based on their conditions which operate on individual `Traits`. Thus, in order for the data added via `IUsesMARSData<T>` to be useful, the provider must also expose Traits associated with this data. Refer to `TraitNames` and `TraitDefinitions` in the `Unity.MARS.Query` namespace for examples of some common traits that Proxies will expect to find. The Functionality Providers in the AR Foundation Providers package demonstrate the expected usages of these traits. Implementors of `IProvidesTraits<T>` are required to implement `static TraitDefinition[] GetStaticProvidedTraits()` and `TraitDefinition[] GetProvidedTraits()` to inform the system what traits they will provide.

Providers follow an Add/Update/Remove pattern to interact with the Unity MARS Database. These methods generally map to platform APIs, for example plane finding, where planes are added/updated/removed. Because the ID is part of `MRTrackable` data types, `IUsesMARSTrackableData` combines Add and Update in to `AddOrUpdate`. A provider should call `AddData` which returns a data ID, and associate that ID with the data so it can be used to call `UpdateData` when it changes and later `RemoveData` if it is no longer available. In the case of `IUsesMARSTrackableData`, `AddOrUpdateData` and `RemoveData` return the Unity MARS Database ID (an `int` which is different from the MarsTrackableId) which can be used to add, update, or remove the associated trait data. Alongside their calls to `IUsesMARSData<T>` and `IUsesMARSTrackableData<T>` methods, providers should call the corresponding `AddOrUpdateTrait` or `RemoveTrait` method with the appropriate Unity MARS Database ID. Refer to the example Face Tracking Provider in the Unity MARS samples (accessed via the Package Manager UI) for a demonstration of how most providers will interact with the Unity MARS Database.

<a name="provider-selection"></a>
## How a Provider is selected

Unity MARS apps are expected to have a wide variety of integrations. The Functionality Injection (FI) module and functionality islands handle many different scenarios, including:

* Having one, obvious choice for a particular type of functionality.
* Having several choices where explicit configuration must specify the default for certain situations.
* Specifying exactly which providers are used in which situations, and for which GameObjects.

The Scene and Functionality Injection modules automatically load providers that:

* Match the subscriber interfaces on GameObjects in the Scene.
* Provide the traits required by conditions within the Scene.

Any Scene GameObjects that implement provider interfaces take precedence over providers in the active functionality island’s defaults. This way, you can make sure that the provider you need is present and running in the Scene. Scripts can set a different provider of the same type to the active island at runtime, but the standard behavior is that providers are set up at Scene load and stay the same throughout the run of the Scene.

When `InjectFunctionality` is called on a list of objects (for example, when setting up Simulation or setting up MARS at runtime), the system selects and initializes providers based on **functionality subscribers** in the Scene. The `ProviderSelectionOptions` attribute allows you to annotate their provider types with extra information. The first parameter is `Priority`, which you can use to "promote" or "demote" a provider in the provider selection process. If more than one type implements a certain provider interface, MARS selects the provider with the highest `Priority` value. If more than one provider type with the same `Priority` value exists, MARS chooses the first type in the list arbitrarily and logs a warning. The behavior, in this case, is undefined and can change unexpectedly.

When selecting providers based on **trait requirements** (generally done at the same time as subscriber requirements), the system first collects all providers which implement `IProvidesTraits` and provide at least one of the required traits. This is done by calling `RequireProvidersWithDefaultProviders`. If there is only one provider in the list, MARS selects it. Otherwise, this list of providers is then sorted by the number of traits the provider contains and the Scene requires (the "score"), in descending order. If two providers have an equal score, MARS checks if either one is a default provider in the functionality island and, if so, that provider takes precedence. If both providers are or aren't in the defaults list, MARS compares their priorities and sorts the types in descending order. If the first two providers in the list do not have an equal "score" and priority, MARS selects the first one. Otherwise, MARS still selects the first one but also logs a warning. The behavior, in this case, is undefined and can change unexpectedly.

You can use **functionality islands** to manually override provider selection. Adding a provider class or prefab to a functionality island does not guarantee that MARS will load it at runtime. The defaults only exist to disambiguate provider selection in SetupDefaultProviders. Functionality island defaults take precedence over `Priority` when selecting providers based on subscriber requirements. As explained above, defaults take precedence over `Priority` when selecting based on trait requirements, but are only taken into  account when providers have an equal "score." In all cases where more than one provider exists for a given provider type, you should make sure a default is set on the active island.

Generally, provider packages should provide example functionality island Assets as a starting point. In most cases, apps start with a foundational provider like the AR Foundation Providers package or a face tracker and add extra default providers to the included functionality islands as needed.

## Writing a MonoBehaviour Functionality Subscriber

The MARS Scene Module injects functionality on all MonoBehaviours in a scene when it is loaded. However, a GameObject with a `MonoBehaviour` subscriber could be instantiated after this point so it's a good practice for MonoBehaviours to inject functionality on themselves if needed. This is usually the case for custom Conditions or Actions where their proxies are instantiated at runtime. Do this by calling the `CheckAndInjectFunctionality()` extension method in `Awake()`:

   ```
   public class _MonoBehaviour_Subscriber : MonoBehaviour, IFunctionalitySubscriber<TProvider>
   {
     IProvidesTProvider IFunctionalitySubscriber<IProvidesTProvider>.provider { get; set; }

     void Awake()
     {
       this.CheckAndInjectFunctionality();
     }
   }
   ```
If the MonoBehaviour subscribes to more than one provider, then to avoid running injection twice, validate and inject the providers in separate steps using the HasProvider<>() and the InjectFunctionality() extension methods:

   ```
   public class _MonoBehaviour_Multi_Subscriber : MonoBehaviour, IFunctionalitySubscriber<TProvider1>, IFunctionalitySubscriber<TProvider2>
   {
     IProvidesTProvider1 IFunctionalitySubscriber<IProvidesTProvider1>.provider { get; set; }
     IProvidesTProvider2 IFunctionalitySubscriber<IProvidesTProvider2>.provider { get; set; }

     void Awake()
     {
       if (!this.HasProvider<IProvidesTProvider1>() || !this.HasProvider<IProvidesTProvider2>())
         transform.root.gameObject.InjectFunctionality();
     }
   }
   ```

## Creating new Provider/Subscriber interfaces

What if the desired functionality is not adequately described by an existing pair of interfaces? The solution is quite simple. Any assembly can reference the `Unity.XRTools.ModuleLoader.Interfaces` assembly to get access to `IFunctionalityProvider` and `IFunctionalitySubscriber`, and implement new pairs of interfaces to describe new functionality. The system relies on reflection to collect all types that inherit from `IFunctionalityProvider` and `IFunctionalitySubscriber` wherever they are used. For example, the `Functionality Island` inspector will list all provider types with more than one implementation in the first column of the default provider list, regardless of where they are defined. Refer to the Module Loader samples for a trivial example of how to implement new kinds of functionality.

## Functionality Islands

A Functionality Island is an object used to provide functionality to subscriber objects. It contains a group of providers and APIs to inject functionality into subscriber objects and manage providers. The `FunctionalityIsland` class inherits from `ScriptableObject` and can be backed by an asset which contains serialized settings for how to select and activate default providers. Multiple Functionality Islands can exist with different default providers, either as assets in the project, or used simultaneously at runtime. They are not connected to each other, and thus you can think of subscriber objects as "residents" of the island used to inject functionality.

The Functionality Injection Module (FI Module) manages functionality islands. To ensure that all modules that provide functionality can be added to all islands, all islands must be added to the FI Module before modules finish loading. Unity MARS assumes that the modules are always accessible. If you're using an island that hasn't been set up, or if you try to set up an island too late in the workflow, MARS generates a warning. This ensures that you don't receive any confusing errors later on. In most cases, you don't need to write code that manipulates islands; instead, you set the Island reference on the MARS Session GameObject in the Scene, or use the active island to inject functionality into GameObjects.

The active island is set in MARSSceneModule on Scene start, based on the override set in MARSSession. If no override is set, the active island is always the default island. Islands hold serialized references to a list of default providers. These serialized settings define configuration-specific defaults for when you set up the Scene. The `FunctionalityIsland.SetupDefaultProviders()` method is responsible for this step. MARSSceneModule calls this method when the Scene starts.

The serialized defaults contained in functionality islands factor into provider selection. Create and modify functionality island Assets to control what providers are used in which Scenes and on which platforms. If your Project only has one provider for a given provider type, you don't need to create defaults unless the provider requires a prefab.

To set up a default, navigate to the functionality island's Inspector window and follow these steps:

1. Add a new row in the **Default Providers** list.
2. Choose the provider interface that needs a default.
3. Either choose the default provider type, or set a Prefab reference for that provider.

When you add a Prefab, all provider components within that Prefab are used, if required. You don't need to specify the Prefab for each provider type you want to load. If you do need to specify your Prefab twice (which can happen in certain overlapping situations), it is only instanced once, and the same instance is re-used when MARS processes the next row that contains it.
