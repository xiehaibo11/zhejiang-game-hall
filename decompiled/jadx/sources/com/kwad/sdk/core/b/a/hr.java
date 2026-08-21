package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class hr implements com.kwad.sdk.core.d<com.kwad.components.core.webview.b.b.t> {
    private static void a(com.kwad.components.core.webview.b.b.t tVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        tVar.Xe = jSONObject.optBoolean("needPromopt");
        tVar.JK = jSONObject.optBoolean("needReport");
        tVar.showTime = jSONObject.optInt("showTime");
        tVar.Xf = jSONObject.optLong("playDuration");
    }

    private static JSONObject b(com.kwad.components.core.webview.b.b.t tVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (tVar.Xe) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "needPromopt", tVar.Xe);
        }
        if (tVar.JK) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "needReport", tVar.JK);
        }
        if (tVar.showTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showTime", tVar.showTime);
        }
        if (tVar.Xf != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playDuration", tVar.Xf);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.components.core.webview.b.b.t) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.components.core.webview.b.b.t) bVar, jSONObject);
    }
}
