package com.kwad.sdk.core.b.a;

import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.sdk.commercial.model.WebViewCommercialMsg;
import org.json.JSONObject;

public final class jl implements com.kwad.sdk.core.d<WebViewCommercialMsg> {
    private static void a(WebViewCommercialMsg webViewCommercialMsg, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        webViewCommercialMsg.category = jSONObject.optString("category");
        if (webViewCommercialMsg.category == JSONObject.NULL) {
            webViewCommercialMsg.category = "";
        }
        webViewCommercialMsg.tag = jSONObject.optString(RemoteMessageConst.Notification.TAG);
        if (webViewCommercialMsg.tag == JSONObject.NULL) {
            webViewCommercialMsg.tag = "";
        }
        webViewCommercialMsg.msg = jSONObject.optJSONObject("msg");
        webViewCommercialMsg.extraParam = jSONObject.optJSONObject("extraParam");
        webViewCommercialMsg.eventId = jSONObject.optString("event_id");
        if (webViewCommercialMsg.eventId == JSONObject.NULL) {
            webViewCommercialMsg.eventId = "";
        }
        webViewCommercialMsg.rate = jSONObject.optDouble("rate");
        webViewCommercialMsg.suffixRatio = jSONObject.optString("suffixRatio");
        if (webViewCommercialMsg.suffixRatio == JSONObject.NULL) {
            webViewCommercialMsg.suffixRatio = "";
        }
    }

    private static JSONObject b(WebViewCommercialMsg webViewCommercialMsg, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (webViewCommercialMsg.category != null && !webViewCommercialMsg.category.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "category", webViewCommercialMsg.category);
        }
        if (webViewCommercialMsg.tag != null && !webViewCommercialMsg.tag.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, RemoteMessageConst.Notification.TAG, webViewCommercialMsg.tag);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "msg", webViewCommercialMsg.msg);
        com.kwad.sdk.utils.t.putValue(jSONObject, "extraParam", webViewCommercialMsg.extraParam);
        if (webViewCommercialMsg.eventId != null && !webViewCommercialMsg.eventId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "event_id", webViewCommercialMsg.eventId);
        }
        if (webViewCommercialMsg.rate != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rate", webViewCommercialMsg.rate);
        }
        if (webViewCommercialMsg.suffixRatio != null && !webViewCommercialMsg.suffixRatio.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "suffixRatio", webViewCommercialMsg.suffixRatio);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((WebViewCommercialMsg) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((WebViewCommercialMsg) bVar, jSONObject);
    }
}
