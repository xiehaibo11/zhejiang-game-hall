package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.d;
import org.json.JSONObject;

public final class dr implements com.kwad.sdk.core.d<d.a> {
    private static void a(d.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.data = jSONObject.optString("data");
        if (aVar.data == JSONObject.NULL) {
            aVar.data = "";
        }
    }

    private static JSONObject b(d.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.data != null && !aVar.data.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "data", aVar.data);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((d.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((d.a) bVar, jSONObject);
    }
}
