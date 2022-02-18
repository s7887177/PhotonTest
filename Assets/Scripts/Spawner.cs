using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Spawner<T> : MonoBehaviour where T : Component
{
    [SerializeField] private T prefab;
    [SerializeField] private List<T> children;
    public T Spawn()
    {
        var rt =GameObject.Instantiate(prefab);
        rt.transform.parent = this.transform;
        children.Add(rt);
        return rt;
    }
}

public class MessageContoller : ScriptableObject
{
    

    public TextMeshProUGUI messageTextUI;
    public void OnSendButtonClick()
    {
        var message = messageTextUI.text;
    }
}
