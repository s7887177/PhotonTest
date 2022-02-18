using UnityEngine;

[CreateAssetMenu(menuName = "PlayerSettings", fileName = "Player Settings")]
public class PlayerSettings : ScriptableObject
{
    [Range(20f,400f)]
    [SerializeField]
    public float mouseSensitivity;
    public void SetMouseSensitivity(float value)
    {
        this.mouseSensitivity = value;
    }
}
