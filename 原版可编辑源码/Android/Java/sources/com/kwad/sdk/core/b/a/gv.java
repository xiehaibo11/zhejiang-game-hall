package com.kwad.sdk.core.b.a;

import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class gv implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.b.a.b> {
    private static void a(com.kwad.sdk.ranger.b.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.avp = jSONObject.optInt("func_ratio_count");
        bVar.aHr = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("func_values");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                com.kwad.sdk.ranger.b.a.a aVar = new com.kwad.sdk.ranger.b.a.a();
                aVar.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                bVar.aHr.add(aVar);
            }
        }
    }

    private static JSONObject b(com.kwad.sdk.ranger.b.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.avp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "func_ratio_count", bVar.avp);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "func_values", bVar.aHr);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.ranger.b.a.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.ranger.b.a.b) bVar, jSONObject);
    }
}
