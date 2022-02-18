using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

[CreateAssetMenu(menuName = "UIController")]
public class UICaller : ScriptableObject
{

    bool isOpened => current;
    bool isClosed => !current;

    public GameObject prefab;
    [System.NonSerialized]
    private GameObject current;

    public GameObject Open()
    {
        if (this.isOpened) return this.current;
        Debug.Log("Opening");
        var canvas = new GameObject("Canvas").AddComponent<Canvas>();
        canvas.gameObject.AddComponent<CanvasScaler>();
        canvas.gameObject.AddComponent<GraphicRaycaster>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        this.current = GameObject.Instantiate(this.prefab);
        this.current.GetComponent<RectTransform>().SetParent(canvas.transform,false);
        return this.current;
    }


    public void Close()
    {
        if (this.isClosed) return;
        GameObject.Destroy(this.current.transform.parent.gameObject);
    }
}
