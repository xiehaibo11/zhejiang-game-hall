package com.kwad.sdk.core.b.a;

import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class ii implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.b.a.d> {
    private static void a(com.kwad.sdk.ranger.b.a.d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        dVar.aHt = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("ranger");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                com.kwad.sdk.ranger.b.a.c cVar = new com.kwad.sdk.ranger.b.a.c();
                cVar.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                dVar.aHt.add(cVar);
            }
        }
    }

    private static JSONObject b(com.kwad.sdk.ranger.b.a.d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "ranger", dVar.aHt);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.ranger.b.a.d) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.ranger.b.a.d) bVar, jSONObject);
    }
}
