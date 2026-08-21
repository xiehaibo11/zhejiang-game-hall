package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ar;
import org.json.JSONObject;

public final class iq implements com.kwad.sdk.core.d<ar.a> {
    private static void a(ar.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.Vx = jSONObject.optInt("taskStatus");
    }

    private static JSONObject b(ar.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.Vx != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "taskStatus", aVar.Vx);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ar.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ar.a) bVar, jSONObject);
    }
}
