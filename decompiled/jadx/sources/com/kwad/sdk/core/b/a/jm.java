package com.kwad.sdk.core.b.a;

import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.kwad.sdk.commercial.model.WebViewLoadMsg;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class jm implements com.kwad.sdk.core.d<WebViewLoadMsg> {
    private static void a(WebViewLoadMsg webViewLoadMsg, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        webViewLoadMsg.url = jSONObject.optString("url");
        if (webViewLoadMsg.url == JSONObject.NULL) {
            webViewLoadMsg.url = "";
        }
        webViewLoadMsg.state = jSONObject.optInt(CallMraidJS.b);
        webViewLoadMsg.interval = jSONObject.optString("interval");
        if (webViewLoadMsg.interval == JSONObject.NULL) {
            webViewLoadMsg.interval = "";
        }
        webViewLoadMsg.failReason = jSONObject.optString("fail_reason");
        if (webViewLoadMsg.failReason == JSONObject.NULL) {
            webViewLoadMsg.failReason = "";
        }
        webViewLoadMsg.costTime = jSONObject.optString(HiAnalyticsConstant.BI_KEY_COST_TIME);
        if (webViewLoadMsg.costTime == JSONObject.NULL) {
            webViewLoadMsg.costTime = "";
        }
    }

    private static JSONObject b(WebViewLoadMsg webViewLoadMsg, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (webViewLoadMsg.url != null && !webViewLoadMsg.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", webViewLoadMsg.url);
        }
        if (webViewLoadMsg.state != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, CallMraidJS.b, webViewLoadMsg.state);
        }
        if (webViewLoadMsg.interval != null && !webViewLoadMsg.interval.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "interval", webViewLoadMsg.interval);
        }
        if (webViewLoadMsg.failReason != null && !webViewLoadMsg.failReason.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fail_reason", webViewLoadMsg.failReason);
        }
        if (webViewLoadMsg.costTime != null && !webViewLoadMsg.costTime.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, HiAnalyticsConstant.BI_KEY_COST_TIME, webViewLoadMsg.costTime);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((WebViewLoadMsg) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((WebViewLoadMsg) bVar, jSONObject);
    }
}
