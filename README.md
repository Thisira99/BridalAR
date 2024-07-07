# Virtual Wedding Dress Application using Augmented Reality

This project demonstrates the use of augmented reality (AR) to allow users to try on virtual wedding dresses. It leverages Unity MARS and the LiDAR sensor on iPhone 12 Pro (or later) for accurate body tracking and measurement.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project is an AR-based application designed to provide users with an interactive and immersive experience of trying on wedding dresses virtually. Using the Unity MARS package and iPhone LiDAR sensor, the application captures real-time body measurements and fits virtual dresses accurately.

## Features

- Real-time body tracking using Unity MARS and iPhone LiDAR sensor
- Virtual try-on of wedding dresses and jewelry
- Customizable 3D models of dresses and jewelry
- Capture and save snapshots of AR rendering views
  
## Requirements

- Unity 2023 (or later) [Download Unity](https://unity.com/releases/editor/whats-new/2023.1.0)
- Unity MARS package [Unity MARS](https://unity.com/products/mars)
- iPhone 12 Pro or later (for LiDAR sensor)
- Xcode (latest version) [Download Xcode](https://developer.apple.com/xcode/)
- Visual Studio (latest version) [Download Visual Studio](https://visualstudio.microsoft.com/vs/)
- Git (for cloning the repository) [Download Git](https://git-scm.com/)

## Installation

Follow these steps to set up and run the project:

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/Thisira99/BridalAr
    cd BridalAr
    ```

2. **Download Unity:**

    Download and install Unity 2023 (or later) from the [Unity Download Page](https://unity.com/releases/editor/whats-new/2023.1.0).

3. **Open Project in Unity:**

    - Launch Unity Hub.
    - Click on the "Add" button.
    - Select the cloned project folder (`virtual-wedding-dress-ar`).
    - Open the project.

4. **Install Required Packages:**

    - Open Unity.
    - Go to `Window -> Package Manager`.
    - Search for and install the following packages:
        - Unity MARS
        - AR Foundation
        - ARKit XR Plugin

5. **Configure iOS Build Settings:**

    - Go to `File -> Build Settings`.
    - Select `iOS` and click on `Switch Platform`.
    - Ensure the following settings are configured:
        - In `Player Settings -> Other Settings`, set the `Target minimum iOS Version` to 13.0 or later.
        - In `XR Plug-in Management`, ensure `ARKit` is selected under `iOS`.
    
6. **Open Xcode:**

    - Open the project in Xcode by selecting `Build Settings -> Build`.
    - This will generate an Xcode project file.
    - Open the generated `.xcodeproj` file in Xcode.

7. **Configure Xcode:**

    - Ensure your Apple Developer account is linked in Xcode.
    - Set the appropriate `Bundle Identifier` and `Team` in Xcode project settings.
    - Connect your iPhone (12 Pro or later) to your Mac.

8. **Build and Run:**

    - Click the `Run` button in Xcode to build and deploy the application to your connected iPhone.

## Usage

1. **Capture Body Measurements:**

    - Click on the `Virtual Try-on` option to open the camera.
    - Follow the on-screen instructions to capture real-time video of your body.

2. **Select Dresses and Jewelry:**

    - Browse the Brides Gallery to select wedding dresses and jewelry.
    - Use the virtual try-on feature to see how they fit in real-time.

3. **Customize and Snapshot:**

    - Customize the dress (e.g., color) using the customization options.
    - Take a snapshot of your AR view for future reference.
    - Save snapshots to your phone's gallery.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.

## License


