package com.mbridge.msdk.mbjscommon.webEnvCheck;

public class WebGLCheckjs extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    public WebGLCheckjs() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void webglState(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r2.<init>(r3)     // Catch: org.json.JSONException -> L1a
            java.lang.String r3 = "webgl"
            int r3 = r2.optInt(r3)     // Catch: org.json.JSONException -> L1a
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L1a
            r0.c(r3)     // Catch: org.json.JSONException -> L1a
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L1a
            r3.a(r2)     // Catch: org.json.JSONException -> L1a
            goto L1e
        L1a:
            r2 = move-exception
            r2.printStackTrace()
        L1e:
            return
    }
}
