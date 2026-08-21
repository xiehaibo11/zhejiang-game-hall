package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener;
import org.json.JSONObject;

public final class x implements com.kwad.sdk.core.d<WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo> {
    private static void a(WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo adLiveMessageItemInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adLiveMessageItemInfo.userName = jSONObject.optString("userName");
        if (adLiveMessageItemInfo.userName == JSONObject.NULL) {
            adLiveMessageItemInfo.userName = "";
        }
        adLiveMessageItemInfo.content = jSONObject.optString("content");
        if (adLiveMessageItemInfo.content == JSONObject.NULL) {
            adLiveMessageItemInfo.content = "";
        }
    }

    private static JSONObject b(WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo adLiveMessageItemInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adLiveMessageItemInfo.userName != null && !adLiveMessageItemInfo.userName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "userName", adLiveMessageItemInfo.userName);
        }
        if (adLiveMessageItemInfo.content != null && !adLiveMessageItemInfo.content.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "content", adLiveMessageItemInfo.content);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((WebCardRegisterLiveMessageListener.AdLiveMessageInfoList.AdLiveMessageItemInfo) bVar, jSONObject);
    }
}
