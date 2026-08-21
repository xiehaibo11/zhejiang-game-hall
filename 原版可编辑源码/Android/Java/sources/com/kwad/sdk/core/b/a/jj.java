package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.aq;
import org.json.JSONObject;

public final class jj implements com.kwad.sdk.core.d<aq.a> {
    private static void a(aq.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.status = jSONObject.optInt("status");
    }

    private static JSONObject b(aq.a aVar, JSONObject jSONObject) {
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
        a((aq.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((aq.a) bVar, jSONObject);
    }
}
