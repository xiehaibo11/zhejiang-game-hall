package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.au;
import org.json.JSONObject;

public final class ew implements com.kwad.sdk.core.d<au.a> {
    private static void a(au.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.jG = jSONObject.optInt("itemClickType");
    }

    private static JSONObject b(au.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.jG != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "itemClickType", aVar.jG);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((au.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((au.a) bVar, jSONObject);
    }
}
