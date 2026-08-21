package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class da implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.a.b> {
    private static void a(com.kwad.sdk.crash.online.monitor.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.appId = jSONObject.optString(com.tkay.expressad.videocommon.e.b.u);
        if (bVar.appId == JSONObject.NULL) {
            bVar.appId = "";
        }
        bVar.aBc = jSONObject.optString("pluginListenerName");
        if (bVar.aBc == JSONObject.NULL) {
            bVar.aBc = "";
        }
        bVar.aBd = jSONObject.optString("reportMethodName");
        if (bVar.aBd == JSONObject.NULL) {
            bVar.aBd = "";
        }
        bVar.aBe = jSONObject.optString("otherProxyClassName");
        if (bVar.aBe == JSONObject.NULL) {
            bVar.aBe = "";
        }
        bVar.aBf = jSONObject.optString("otherFieldName");
        if (bVar.aBf == JSONObject.NULL) {
            bVar.aBf = "";
        }
        bVar.aBg = jSONObject.optString("otherLevelFieldName");
        if (bVar.aBg == JSONObject.NULL) {
            bVar.aBg = "";
        }
        bVar.aBh = jSONObject.optString("blockTag");
        if (bVar.aBh == JSONObject.NULL) {
            bVar.aBh = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.crash.online.monitor.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.appId != null && !bVar.appId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.videocommon.e.b.u, bVar.appId);
        }
        if (bVar.aBc != null && !bVar.aBc.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pluginListenerName", bVar.aBc);
        }
        if (bVar.aBd != null && !bVar.aBd.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "reportMethodName", bVar.aBd);
        }
        if (bVar.aBe != null && !bVar.aBe.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "otherProxyClassName", bVar.aBe);
        }
        if (bVar.aBf != null && !bVar.aBf.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "otherFieldName", bVar.aBf);
        }
        if (bVar.aBg != null && !bVar.aBg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "otherLevelFieldName", bVar.aBg);
        }
        if (bVar.aBh != null && !bVar.aBh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "blockTag", bVar.aBh);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.crash.online.monitor.a.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.crash.online.monitor.a.b) bVar, jSONObject);
    }
}
