package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.ah;
import org.json.JSONObject;

public final class gf implements com.kwad.sdk.core.d<ah.a> {
    private static void a(ah.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.status = jSONObject.optInt("status");
        aVar.errorMsg = jSONObject.optString("errorMsg");
        if (aVar.errorMsg == JSONObject.NULL) {
            aVar.errorMsg = "";
        }
    }

    private static JSONObject b(ah.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", aVar.status);
        }
        if (aVar.errorMsg != null && !aVar.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "errorMsg", aVar.errorMsg);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ah.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ah.a) bVar, jSONObject);
    }
}
