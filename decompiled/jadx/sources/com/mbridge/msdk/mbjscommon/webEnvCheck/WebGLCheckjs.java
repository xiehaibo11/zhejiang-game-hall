package com.mbridge.msdk.mbjscommon.webEnvCheck;

import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class WebGLCheckjs extends AbsMbridgeDownload {
    @Override // com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload
    public void sendNoticeAndCallBackClick(Object obj, String str) {
    }

    public void webglState(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            com.mbridge.msdk.foundation.controller.a.f().c(jSONObject.optInt("webgl"));
            com.mbridge.msdk.foundation.controller.a.f().a(jSONObject);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}
