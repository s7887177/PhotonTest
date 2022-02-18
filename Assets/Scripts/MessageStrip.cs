using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MessageStrip : MonoBehaviour
{
    public bool isOwner;
    public string message
    {
        get => textUI.text;
        set => textUI.text = value;
    }
    [SerializeField] HorizontalLayoutGroup textHLG;
    [SerializeField] TextMeshProUGUI textUI;

    private void OnValidate()
    {
        if (!textHLG) return;
        if (!textUI) return;
        textHLG.reverseArrangement = isOwner;
        textUI.alignment = isOwner ? TextAlignmentOptions.Right : TextAlignmentOptions.Left;
    }
}