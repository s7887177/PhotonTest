using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
public class TextAnimation : MonoBehaviour
{
    [SerializeField]
    TextMeshProUGUI _text;
    [SerializeField]
    string[] _strings;
    int _cursor;
    int cursor
    {
        get => _cursor;
        set
        {
            if(value >= _strings.Length)
            {
                if (_isLoop)
                {
                    _cursor = 0;
                    return;
                }
                else
                {
                    _isEnd = true;
                    return;
                }
            }
            else
            {
                _cursor = value;
            }
        }
    }
    bool _isEnd;
    [SerializeField]
    bool _isLoop;
    [SerializeField]
    float _interval;
    float _timer;
    // Update is called once per frame
    private void Start()
    {
        
    }
    void Update()
    {
        if (!_isEnd)
        {
            if (_timer > _interval)
            {
                _timer -= _interval;
                _text.text = _strings[cursor++];
            }
            _timer += Time.deltaTime;
        }
    }
}
