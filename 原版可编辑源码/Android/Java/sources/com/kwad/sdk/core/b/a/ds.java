package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.e;
import org.json.JSONObject;

public final class ds implements com.kwad.sdk.core.d<e.a> {
    private static void a(e.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.Tx = jSONObject.optString("target");
        if (aVar.Tx == JSONObject.NULL) {
            aVar.Tx = "";
        }
    }

    private static JSONObject b(e.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.Tx != null && !aVar.Tx.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "target", aVar.Tx);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((e.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((e.a) bVar, jSONObject);
    }
}
