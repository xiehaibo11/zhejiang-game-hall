package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.j.n;
import org.json.JSONObject;

public final class ft implements com.kwad.sdk.core.d<n.a> {
    private static void a(n.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.status = jSONObject.optInt("status");
    }

    private static JSONObject b(n.a aVar, JSONObject jSONObject) {
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
        a((n.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((n.a) bVar, jSONObject);
    }
}
