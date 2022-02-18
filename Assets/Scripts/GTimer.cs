using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class GTimer : MonoBehaviour
{
    public static GTimer Instance;
    private void Awake()
    {
        if (Instance == null) Instance = this;
        else Destroy(this);
    }
    private void Update()
    {
    }
}
