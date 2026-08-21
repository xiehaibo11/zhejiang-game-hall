package com.tkay.expressad.atsignalcommon.webEnvCheck;

import com.tkay.expressad.atsignalcommon.windvane.l;
import org.json.JSONException;
import org.json.JSONObject;

public class WebGLCheckjs extends l {
    public void webglState(Object obj, String str) {
        try {
            new JSONObject(str).optInt("webgl");
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}
