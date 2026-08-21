package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.b;
import org.json.JSONObject;

public final class dp implements com.kwad.sdk.core.d<b.a> {
    private static void a(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.data = jSONObject.optString("data");
        if (aVar.data == JSONObject.NULL) {
            aVar.data = "";
        }
    }

    private static JSONObject b(b.a aVar, JSONObject jSONObject) {
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
        a((b.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((b.a) bVar, jSONObject);
    }
}
