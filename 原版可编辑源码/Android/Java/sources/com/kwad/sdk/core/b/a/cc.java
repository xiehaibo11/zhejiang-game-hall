package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ac;
import org.json.JSONObject;

public final class cc implements com.kwad.sdk.core.d<ac.a> {
    private static void a(ac.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.UX = jSONObject.optBoolean("clickActionButton");
        aVar.UY = jSONObject.optString("adTemplate");
        if (aVar.UY == JSONObject.NULL) {
            aVar.UY = "";
        }
        aVar.UZ = jSONObject.optInt("area");
        aVar.Va = new com.kwad.sdk.core.webview.d.b.c();
        aVar.Va.parseJson(jSONObject.optJSONObject("logParam"));
    }

    private static JSONObject b(ac.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.UX) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "clickActionButton", aVar.UX);
        }
        if (aVar.UY != null && !aVar.UY.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adTemplate", aVar.UY);
        }
        if (aVar.UZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "area", aVar.UZ);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "logParam", aVar.Va);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ac.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ac.a) bVar, jSONObject);
    }
}
