using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageCapture : MonoBehaviour
{
    public string savePath = "CapturedImage";
    public int numberOfImages = 10;
    public float captureInterval = 1.0f;
   

    private int imageCount = 0;

    void Start()
    {
        
    }

    void OnCaptureButtonClick()
    {
        if (imageCount < numberOfImages)
        {
            CaptureAndSaveImage();
            imageCount++;
        }
    }

    void CaptureAndSaveImage()
    {
        string imagePath = $"{savePath}_{imageCount}.png";
        ScreenCapture.CaptureScreenshot(imagePath);
        // You can save it as a file if needed
        // System.IO.File.WriteAllBytes(imagePath, capturedImage);
    }
}
