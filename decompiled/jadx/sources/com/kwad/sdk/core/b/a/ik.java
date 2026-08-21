package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.l;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ik implements com.kwad.sdk.core.d<l.a> {
    private static void a(l.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.key = jSONObject.optString("key");
        if (aVar.key == JSONObject.NULL) {
            aVar.key = "";
        }
        aVar.value = jSONObject.optString("value");
        if (aVar.value == JSONObject.NULL) {
            aVar.value = "";
        }
    }

    private static JSONObject b(l.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.key != null && !aVar.key.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "key", aVar.key);
        }
        if (aVar.value != null && !aVar.value.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "value", aVar.value);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((l.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((l.a) bVar, jSONObject);
    }
}
