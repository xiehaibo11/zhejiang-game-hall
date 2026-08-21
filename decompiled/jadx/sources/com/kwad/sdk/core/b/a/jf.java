package com.kwad.sdk.core.b.a;

import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class jf implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.x> {
    private static void a(com.kwad.components.core.webview.b.b.x xVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        xVar.Xj = jSONObject.optString("status");
        if (xVar.Xj == JSONObject.NULL) {
            xVar.Xj = "";
        }
        xVar.errorCode = jSONObject.optInt("errorCode");
        xVar.errorReason = jSONObject.optString(HiAnalyticsConstant.HaKey.BI_KEY_ERRORREASON);
        if (xVar.errorReason == JSONObject.NULL) {
            xVar.errorReason = "";
        }
        xVar.nM = jSONObject.optInt("currentTime");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.x xVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (xVar.Xj != null && !xVar.Xj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", xVar.Xj);
        }
        if (xVar.errorCode != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "errorCode", xVar.errorCode);
        }
        if (xVar.errorReason != null && !xVar.errorReason.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, HiAnalyticsConstant.HaKey.BI_KEY_ERRORREASON, xVar.errorReason);
        }
        if (xVar.nM != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentTime", xVar.nM);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.x) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.x) bVar, jSONObject);
    }
}
