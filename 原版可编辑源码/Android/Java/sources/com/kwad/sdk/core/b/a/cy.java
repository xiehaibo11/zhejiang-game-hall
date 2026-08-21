package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.c.e;
import org.json.JSONObject;

public final class cy implements com.kwad.sdk.core.d<e.a> {
    private static void a(e.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.rx = jSONObject.optString("dialogEvent");
        if (aVar.rx == JSONObject.NULL) {
            aVar.rx = "";
        }
    }

    private static JSONObject b(e.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.rx != null && !aVar.rx.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "dialogEvent", aVar.rx);
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
