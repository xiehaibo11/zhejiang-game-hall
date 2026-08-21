package com.tkay.expressad.atsignalcommon.webEnvCheck;

public class WebGLCheckjs extends com.tkay.expressad.atsignalcommon.windvane.l {
    public WebGLCheckjs() {
            r0 = this;
            r0.<init>()
            return
    }

    public void webglState(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lb
            r1.<init>(r2)     // Catch: org.json.JSONException -> Lb
            java.lang.String r2 = "webgl"
            r1.optInt(r2)     // Catch: org.json.JSONException -> Lb
            return
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            return
    }
}
