#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IFunctionalityProviderU5BU5D_tB72CD75329111EB1A1462937C6A6FCC5AA8F0C73;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct IUsesFunctionalityInjection_tD20885CBA68BFD9F9EA5B7F5FD479BB4E7F91F32;
struct ImmortalModuleAttribute_t850FC59273C118BC25B5884426D8665EF520542A;
struct ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24;
struct ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C;
struct ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523;
struct ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19;
struct String_t;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces[];
IL2CPP_EXTERN_C RuntimeClass* IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* IUsesFunctionalityInjectionMethods_InjectFunctionalitySingle_mEF19F99908EE9E8853429B5443D3D561CB90E390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IUsesFunctionalityInjectionMethods_InjectFunctionality_m2DAEA905AACE1BDB22C14A305CF59C816A32A89A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmortalModuleAttribute__ctor_m29DE5D8D90450AD0E10789D1A82F5BEAA0AB0474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleBehaviorCallbackOrderAttribute__ctor_m5B00A108E1A577280AC39416B10E21EA41B22EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleOrderAttribute_get_order_m7C16DBA951599A1E4E2DE2A7B4073E50DFCC93B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleUnloadOrderAttribute__ctor_m2B6C17AEA59BB214DDF44B8E39FDEB3BFB74DF93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProviderSelectionOptionsAttribute__ctor_mF6B1259B4D8F77F2954B7683965333EAF5E28CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProviderSelectionOptionsAttribute_get_DisallowAutoCreation_m801ED289575D04551B05E2D0CF2F1B6CC2D8F83C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProviderSelectionOptionsAttribute_get_ExcludedPlatforms_mD01B50BD00C19966F47DA88374A2327DEA82F7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProviderSelectionOptionsAttribute_get_Priority_m43F51B376E34FCDA0A58FEA15675173E6D478988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var;

struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tE3EA2DD06D7970D48A4E3FB4488E07B4CEBEABA6 
{
};
struct List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66  : public RuntimeObject
{
	IFunctionalityProviderU5BU5D_tB72CD75329111EB1A1462937C6A6FCC5AA8F0C73* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct FunctionalityProviderMethods_t1C39C8F9453717AAF5861F66638A4D46D3301928  : public RuntimeObject
{
};
struct FunctionalitySubscriberMethods_t0882B29B103146B47E50B4A26DCD9C82940113D4  : public RuntimeObject
{
};
struct IUsesFunctionalityInjectionMethods_t77522EC2385F73531507929895D3FF08FD788B02  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct ImmortalModuleAttribute_t850FC59273C118BC25B5884426D8665EF520542A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___U3CorderU3Ek__BackingField;
};
struct ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___U3CPriorityU3Ek__BackingField;
	RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___U3CExcludedPlatformsU3Ek__BackingField;
	bool ___U3CDisallowAutoCreationU3Ek__BackingField;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ModuleAssetCallbackOrderAttribute_tCA50D198540F09C693EE998C4EE2D267FF4AB978  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};
struct ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};
struct ModuleBuildCallbackOrderAttribute_tB0FA944D005ECEAE9C4836DC4EB818408F377875  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};
struct ModuleSceneCallbackOrderAttribute_tCD9FA5DC6A96D98E5C417DC896DE23261CA0B04D  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};
struct ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523  : public ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C
{
};
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	int32_t ___value__;
};
struct List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66_StaticFields
{
	IFunctionalityProviderU5BU5D_tB72CD75329111EB1A1462937C6A6FCC5AA8F0C73* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___0_order, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_inline (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmortalModuleAttribute__ctor_m29DE5D8D90450AD0E10789D1A82F5BEAA0AB0474 (ImmortalModuleAttribute_t850FC59273C118BC25B5884426D8665EF520542A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmortalModuleAttribute__ctor_m29DE5D8D90450AD0E10789D1A82F5BEAA0AB0474_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ImmortalModuleAttribute__ctor_m29DE5D8D90450AD0E10789D1A82F5BEAA0AB0474_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ImmortalModuleAttribute__ctor_m29DE5D8D90450AD0E10789D1A82F5BEAA0AB0474_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBehaviorCallbackOrderAttribute__ctor_m5B00A108E1A577280AC39416B10E21EA41B22EF6 (ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24* __this, int32_t ___0_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleBehaviorCallbackOrderAttribute__ctor_m5B00A108E1A577280AC39416B10E21EA41B22EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleBehaviorCallbackOrderAttribute_t0E0C43154995F8E98F0F6195EB007E2C36BB2E24_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ModuleBehaviorCallbackOrderAttribute__ctor_m5B00A108E1A577280AC39416B10E21EA41B22EF6_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_order));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ModuleBehaviorCallbackOrderAttribute__ctor_m5B00A108E1A577280AC39416B10E21EA41B22EF6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 14));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 15));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 16));
		int32_t L_0 = ___0_order;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 17));
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 19));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleOrderAttribute_get_order_m7C16DBA951599A1E4E2DE2A7B4073E50DFCC93B0 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_get_order_m7C16DBA951599A1E4E2DE2A7B4073E50DFCC93B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ModuleOrderAttribute_get_order_m7C16DBA951599A1E4E2DE2A7B4073E50DFCC93B0_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ModuleOrderAttribute_get_order_m7C16DBA951599A1E4E2DE2A7B4073E50DFCC93B0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 20));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 21));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 22));
		int32_t L_0 = __this->___U3CorderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 23));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 24));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 25));
		int32_t L_0 = ___0_value;
		__this->___U3CorderU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10 (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___0_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_order));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 26));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 27));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 28));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 29));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 30));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 31));
		int32_t L_0 = ___0_order;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 32));
		ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_inline(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 32));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 33));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleUnloadOrderAttribute__ctor_m2B6C17AEA59BB214DDF44B8E39FDEB3BFB74DF93 (ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523* __this, int32_t ___0_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleUnloadOrderAttribute__ctor_m2B6C17AEA59BB214DDF44B8E39FDEB3BFB74DF93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleUnloadOrderAttribute_tB32D7E609E465CBF2C3BBB84B6970D98BFDA3523_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ModuleUnloadOrderAttribute__ctor_m2B6C17AEA59BB214DDF44B8E39FDEB3BFB74DF93_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_order));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ModuleUnloadOrderAttribute__ctor_m2B6C17AEA59BB214DDF44B8E39FDEB3BFB74DF93_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 34));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 35));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 36));
		int32_t L_0 = ___0_order;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 37));
		ModuleOrderAttribute__ctor_m433DE91712E074A6A55189F13BA7FFD8B4E74E10(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 39));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderSelectionOptionsAttribute_get_Priority_m43F51B376E34FCDA0A58FEA15675173E6D478988 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_get_Priority_m43F51B376E34FCDA0A58FEA15675173E6D478988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ProviderSelectionOptionsAttribute_get_Priority_m43F51B376E34FCDA0A58FEA15675173E6D478988_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_get_Priority_m43F51B376E34FCDA0A58FEA15675173E6D478988_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 40));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 41));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 42));
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 44));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 45));
		int32_t L_0 = ___0_value;
		__this->___U3CPriorityU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ProviderSelectionOptionsAttribute_get_ExcludedPlatforms_mD01B50BD00C19966F47DA88374A2327DEA82F7D2 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_get_ExcludedPlatforms_mD01B50BD00C19966F47DA88374A2327DEA82F7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ProviderSelectionOptionsAttribute_get_ExcludedPlatforms_mD01B50BD00C19966F47DA88374A2327DEA82F7D2_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_get_ExcludedPlatforms_mD01B50BD00C19966F47DA88374A2327DEA82F7D2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 46));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 47));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 48));
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_0 = __this->___U3CExcludedPlatformsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 49));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 50));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 51));
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_0 = ___0_value;
		__this->___U3CExcludedPlatformsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExcludedPlatformsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderSelectionOptionsAttribute_get_DisallowAutoCreation_m801ED289575D04551B05E2D0CF2F1B6CC2D8F83C (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_get_DisallowAutoCreation_m801ED289575D04551B05E2D0CF2F1B6CC2D8F83C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ProviderSelectionOptionsAttribute_get_DisallowAutoCreation_m801ED289575D04551B05E2D0CF2F1B6CC2D8F83C_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_get_DisallowAutoCreation_m801ED289575D04551B05E2D0CF2F1B6CC2D8F83C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 52));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 53));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 54));
		bool L_0 = __this->___U3CDisallowAutoCreationU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute__ctor_mF6B1259B4D8F77F2954B7683965333EAF5E28CE9 (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___0_priority, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___1_excludedPlatforms, bool ___2_disallowAutoCreation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute__ctor_mF6B1259B4D8F77F2954B7683965333EAF5E28CE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ProviderSelectionOptionsAttribute__ctor_mF6B1259B4D8F77F2954B7683965333EAF5E28CE9_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_priority), (&___1_excludedPlatforms), (&___2_disallowAutoCreation));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute__ctor_mF6B1259B4D8F77F2954B7683965333EAF5E28CE9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 55));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 56));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 57));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 58));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 58));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 59));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 60));
		int32_t L_0 = ___0_priority;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 61));
		ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_inline(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 61));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 62));
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_1 = ___1_excludedPlatforms;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 63));
		ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_inline(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 63));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 64));
		bool L_2 = ___2_disallowAutoCreation;
		__this->___U3CDisallowAutoCreationU3Ek__BackingField = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 65));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFunctionalityInjectionMethods_InjectFunctionality_m2DAEA905AACE1BDB22C14A305CF59C816A32A89A (RuntimeObject* ___0_user, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_objects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesFunctionalityInjectionMethods_InjectFunctionality_m2DAEA905AACE1BDB22C14A305CF59C816A32A89A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IUsesFunctionalityInjectionMethods_InjectFunctionality_m2DAEA905AACE1BDB22C14A305CF59C816A32A89A_RuntimeMethod_var);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_user), (&___1_objects));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IUsesFunctionalityInjectionMethods_InjectFunctionality_m2DAEA905AACE1BDB22C14A305CF59C816A32A89A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 66));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 67));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 68));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 69));
		RuntimeObject* L_0 = ___0_user;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 70));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 70));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___1_objects;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 71));
		NullCheck(L_1);
		InterfaceActionInvoker2< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66* >::Invoke(0, IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var, L_1, L_2, (List_1_tC4E8EB6F3F1CAC1AB042E805C396768E7B6BCD66*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 72));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUsesFunctionalityInjectionMethods_InjectFunctionalitySingle_mEF19F99908EE9E8853429B5443D3D561CB90E390 (RuntimeObject* ___0_user, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUsesFunctionalityInjectionMethods_InjectFunctionalitySingle_mEF19F99908EE9E8853429B5443D3D561CB90E390_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IUsesFunctionalityInjectionMethods_InjectFunctionalitySingle_mEF19F99908EE9E8853429B5443D3D561CB90E390_RuntimeMethod_var);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_user), (&___1_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IUsesFunctionalityInjectionMethods_InjectFunctionalitySingle_mEF19F99908EE9E8853429B5443D3D561CB90E390_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 73));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 74));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 75));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 76));
		RuntimeObject* L_0 = ___0_user;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 77));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IFunctionalitySubscriber_1_t1FA7CF79E0ABFB6809CE444AD38A19D37F62E955_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 77));
		RuntimeObject* L_2 = ___1_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 78));
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IProvidesFunctionalityInjection_t80707721553049FAC0B1028FE253430C6F2CC5A9_il2cpp_TypeInfo_var, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 78));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 79));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_inline (ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleOrderAttribute_tC5174F5858FAD294C635E1F324B3F0AE371E488C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ModuleOrderAttribute_set_order_m910A6ADF78201DABB6E72A0DF34ECBFA25B270C8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 23));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 24));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 25));
		int32_t L_0 = ___0_value;
		__this->___U3CorderU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_set_Priority_m37564C5CA5FFBB6BF10B0E1ED5771D4B5B1DF8D4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 44));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 45));
		int32_t L_0 = ___0_value;
		__this->___U3CPriorityU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_inline (ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19* __this, RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderSelectionOptionsAttribute_t8A8B7A7E8FF368D9DBDB9FF4D53B817858F07A19_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ProviderSelectionOptionsAttribute_set_ExcludedPlatforms_m2F6283B6F929D7474B9D47E4B3C681AF0672858A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 49));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 50));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XRTools_ModuleLoader_Interfaces + 51));
		RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* L_0 = ___0_value;
		__this->___U3CExcludedPlatformsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExcludedPlatformsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
