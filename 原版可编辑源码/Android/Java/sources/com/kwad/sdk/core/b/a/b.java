package com.kwad.sdk.core.b.a;

import com.kwad.sdk.ranger.d;
import org.json.JSONObject;

public final class b implements com.kwad.sdk.core.d<d.a> {
    private static void a(d.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aGL = jSONObject.optString("originalActStr");
        if (aVar.aGL == JSONObject.NULL) {
            aVar.aGL = "";
        }
        aVar.aGM = jSONObject.optString("targetField");
        if (aVar.aGM == JSONObject.NULL) {
            aVar.aGM = "";
        }
    }

    private static JSONObject b(d.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aGL != null && !aVar.aGL.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "originalActStr", aVar.aGL);
        }
        if (aVar.aGM != null && !aVar.aGM.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "targetField", aVar.aGM);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((d.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((d.a) bVar, jSONObject);
    }
}
