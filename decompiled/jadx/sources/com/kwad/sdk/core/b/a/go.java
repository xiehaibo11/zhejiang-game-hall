package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.v;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class go implements com.kwad.sdk.core.d<v.a> {
    private static void a(v.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.playableExtraData = jSONObject.optString("playableExtraData");
        if (aVar.playableExtraData == JSONObject.NULL) {
            aVar.playableExtraData = "";
        }
    }

    private static JSONObject b(v.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.playableExtraData != null && !aVar.playableExtraData.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playableExtraData", aVar.playableExtraData);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((v.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((v.a) bVar, jSONObject);
    }
}
