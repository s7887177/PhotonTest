using UnityEngine;
public class InputNames 
{
    public const string CANCEL =
#if UNITY_WEBGL
            "WebCancel"
#else
            "Cancel"
#endif
        ;
}
public class GameController : MonoBehaviour
{
    [SerializeField]
    private UICaller playerSettingsUICaller;
    enum State
    {
        Game,
        UI,
    }
    private State state = State.Game;

    private void Update()
    {
        switch (state)
        {
            case State.Game:
                this.OnGameUpdate();
                break;
            case State.UI:
                this.OnUIUpdate();
                break;
            default:
                break;
        }
    }

    private void ChagneState(State state)
    {
        switch (this.state)
        {
            case State.Game:
                this.OnGameLeave();
                break;
            case State.UI:
                this.OnUILeave();
                break;
            default:
                break;
        }

        this.state = state;
        switch (state)
        {
            case State.Game:
                this.OnGameEnter();
                break;
            case State.UI:
                this.OnUIEnter();
                break;
            default:
                break;
        }
    }


    private void OnGameEnter()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    private void OnGameLeave()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

    private void OnUIEnter()
    {
        this.playerSettingsUICaller.Open();
    }

    private void OnUILeave()
    {
        this.playerSettingsUICaller.Close();
    }

    private void OnGameUpdate()
    {
        if (Input.GetButtonDown(InputNames.CANCEL))
        {
            this.ChagneState(State.UI);
        }
    }
    private void OnUIUpdate()
    {
        if (Input.GetButtonDown(InputNames.CANCEL))
        {
            this.ChagneState(State.Game);

        }
    }

    
}
