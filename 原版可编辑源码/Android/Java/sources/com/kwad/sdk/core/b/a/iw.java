package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.g.a.a.b;
import org.json.JSONObject;

public final class iw implements com.kwad.sdk.core.d<b.a> {
    private static void a(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.nJ = jSONObject.optInt("timerName");
        aVar.nK = jSONObject.optInt("time");
    }

    private static JSONObject b(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.nJ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "timerName", aVar.nJ);
        }
        if (aVar.nK != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "time", aVar.nK);
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
