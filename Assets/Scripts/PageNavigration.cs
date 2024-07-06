using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PageNavigration : MonoBehaviour
{
    public void SwitchToBodyTrackingBride()
    {
        // Change the screen orientation to Landscape Left
        Screen.orientation = ScreenOrientation.Portrait;

        // Load the landscape scene
        SceneManager.LoadScene("BodyTrackingBride");
    }
    public void SwitchToBrideGallery()
    {
        // Change the screen orientation to Landscape Left
        Screen.orientation = ScreenOrientation.Portrait;

        // Load the landscape scene
        SceneManager.LoadScene("BrideGallery");
    }
    public void SwitchToCapture()
    {
        // Change the screen orientation to Landscape Left
        Screen.orientation = ScreenOrientation.Portrait;

        // Load the landscape scene
        SceneManager.LoadScene("Capture");
    }
    public void SwitchToPreview()
    {
        // Change the screen orientation to Landscape Left
        Screen.orientation = ScreenOrientation.Portrait;

        // Load the landscape scene
        SceneManager.LoadScene("Preview");
    }

    public void SwitchToHome()
    {
        // Change the screen orientation to Landscape Left
        Screen.orientation = ScreenOrientation.Portrait;

        // Load the landscape scene
        SceneManager.LoadScene("Home");
    }

    
    public void NavigateBack()
    {
        // Check if there is a previous scene in the build settings
        if (SceneManager.GetActiveScene().buildIndex > 0)
        {
            // Load the previous scene by decrementing the build index
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
        }
        else
        {
            // If there is no previous scene, you can handle it as needed
            Debug.LogWarning("There is no previous scene to navigate back to.");
        }
    }

}
