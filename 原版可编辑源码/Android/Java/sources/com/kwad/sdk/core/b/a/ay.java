package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ak;
import org.json.JSONObject;

public final class ay implements com.kwad.sdk.core.d<ak.a> {
    private static void a(ak.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.status = jSONObject.optInt("status");
    }

    private static JSONObject b(ak.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", aVar.status);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ak.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ak.a) bVar, jSONObject);
    }
}
