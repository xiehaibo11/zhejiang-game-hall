package com.kwad.sdk.core.b.a;

import com.qihoo360.replugin.RePlugin;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class e implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.d.b.a> {
    private static void a(com.kwad.sdk.core.webview.d.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.UX = jSONObject.optBoolean("clickActionButton");
        aVar.UZ = jSONObject.optInt("area");
        aVar.jG = jSONObject.optInt("itemClickType");
        aVar.azc = jSONObject.optInt("convertPageType", new Integer(RePlugin.PROCESS_UI).intValue());
        aVar.Va = new com.kwad.sdk.core.webview.d.b.c();
        aVar.Va.parseJson(jSONObject.optJSONObject("logParam"));
        aVar.JK = jSONObject.optBoolean("needReport", new Boolean("true").booleanValue());
        aVar.creativeId = jSONObject.optLong("creativeId", new Long(RePlugin.PROCESS_UI).longValue());
        aVar.JT = jSONObject.optString("liveItemId");
        if (aVar.JT == JSONObject.NULL) {
            aVar.JT = "";
        }
        aVar.azd = jSONObject.optInt("sceneType");
        aVar.adStyle = jSONObject.optInt("adStyle", new Integer(RePlugin.PROCESS_UI).intValue());
    }

    private static JSONObject b(com.kwad.sdk.core.webview.d.b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.UX) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "clickActionButton", aVar.UX);
        }
        if (aVar.UZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "area", aVar.UZ);
        }
        if (aVar.jG != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "itemClickType", aVar.jG);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "convertPageType", aVar.azc);
        com.kwad.sdk.utils.t.a(jSONObject, "logParam", aVar.Va);
        com.kwad.sdk.utils.t.putValue(jSONObject, "needReport", aVar.JK);
        com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", aVar.creativeId);
        if (aVar.JT != null && !aVar.JT.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "liveItemId", aVar.JT);
        }
        if (aVar.azd != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sceneType", aVar.azd);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "adStyle", aVar.adStyle);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.webview.d.b.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.webview.d.b.a) bVar, jSONObject);
    }
}
