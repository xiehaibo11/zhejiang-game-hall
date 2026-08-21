package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ad;
import com.qihoo360.replugin.RePlugin;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class dx implements com.kwad.sdk.core.d<ad.b> {
    private static void a(ad.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.creativeId = jSONObject.optLong("creativeId", new Long(RePlugin.PROCESS_UI).longValue());
    }

    private static JSONObject b(ad.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", bVar.creativeId);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ad.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ad.b) bVar, jSONObject);
    }
}
