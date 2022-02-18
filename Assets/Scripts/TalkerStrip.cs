using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TalkerStrip : MonoBehaviour
{
    public bool isOwner;
    internal TextMeshProUGUI nameUI;
    internal Image avatarUI;
    
    [SerializeField] HorizontalLayoutGroup talkerHLG;
    public MessageStripSpawner spawner;

    public void Refresh()
    {
        if (!talkerHLG) return;
        talkerHLG.reverseArrangement = isOwner;
        talkerHLG.childAlignment = isOwner ? TextAnchor.UpperRight : TextAnchor.UpperLeft;
    }

    private void OnValidate()
    {
        Refresh();
    }

    public void AddMessage(string message)
    {
        var messageStrip = spawner.Spawn(message, isOwner);
    }
}
