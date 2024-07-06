using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSwitchManager : MonoBehaviour
{
    public List<GameObject> models = new List<GameObject>(); // Add your 3D models here.
    private int currentIndex = -1;
    private Stack<int> undoStack = new Stack<int>();
    private Stack<int> redoStack = new Stack<int>();
    public float rotationSpeed = 90.0f;
    public float scaleStep = 0.1f;

    private void Start()
    {
        SwitchModel(0); // Start by showing the first model.
    }

    public void PerformAction(int action)
    {
        switch (action)
        {
            case 1:
                SwitchModel(action);
                break;
            case 2:
                Undo();
                break;
            case 3:
                Redo();
                break;
            case 4:
                RotateLeft();
                break;
            case 5:
                RotateRight();
                break;
            case 6:
                ScaleUp();
                break;
            case 7:
                ScaleDown();
                break;
            default:
                Debug.LogWarning("Invalid action: " + action);
                break;
        }
    }

    public void SwitchModel(int action)
    {
        if (models.Count == 0)
            return;

        if (action == 1 && currentIndex < models.Count - 1)
        {
            undoStack.Push(currentIndex);
            currentIndex++;
            redoStack.Clear();
        }

        // Deactivate all models first
        foreach (GameObject model in models)
        {
            model.SetActive(false);
        }
        models[currentIndex].SetActive(true);
    }

    public void Undo()
    {
        if (undoStack.Count > 0)
        {
            redoStack.Push(currentIndex);
            currentIndex = undoStack.Pop();
            models.ForEach(model => model.SetActive(false));
            models[currentIndex].SetActive(true);
        }
    }

    public void Redo()
    {
        if (redoStack.Count > 0)
        {
            undoStack.Push(currentIndex);
            currentIndex = redoStack.Pop();
            models.ForEach(model => model.SetActive(false));
            models[currentIndex].SetActive(true);
        }
    }

    public void RotateLeft()
    {
        if (models.Count == 0)
            return;

        models[currentIndex].transform.Rotate(Vector3.up, -rotationSpeed);
    }

    public void RotateRight()
    {
        if (models.Count == 0)
            return;

        models[currentIndex].transform.Rotate(Vector3.up, rotationSpeed);
    }

    public void ScaleUp()
    {
        if (models.Count == 0)
            return;

        models[currentIndex].transform.localScale += new Vector3(scaleStep, scaleStep, scaleStep);
    }

    public void ScaleDown()
    {
        if (models.Count == 0)
            return;

        models[currentIndex].transform.localScale -= new Vector3(scaleStep, scaleStep, scaleStep);
    }
}