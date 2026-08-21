package com.kwad.sdk.core.b.a;

import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class gb implements com.kwad.sdk.core.d<com.kwad.sdk.h.a.a> {
    private static void a(com.kwad.sdk.h.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.sceneId = jSONObject.optString("sceneId");
        if (aVar.sceneId == JSONObject.NULL) {
            aVar.sceneId = "";
        }
        aVar.aCa = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("packages");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                com.kwad.sdk.h.a.b bVar = new com.kwad.sdk.h.a.b();
                bVar.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                aVar.aCa.add(bVar);
            }
        }
    }

    private static JSONObject b(com.kwad.sdk.h.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.sceneId != null && !aVar.sceneId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sceneId", aVar.sceneId);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "packages", aVar.aCa);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.h.a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.h.a.a) bVar, jSONObject);
    }
}
