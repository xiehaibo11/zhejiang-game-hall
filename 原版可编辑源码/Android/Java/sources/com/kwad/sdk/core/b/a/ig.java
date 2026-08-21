package com.kwad.sdk.core.b.a;

import com.kwad.sdk.m.k;
import org.json.JSONObject;

public final class ig implements com.kwad.sdk.core.d<k.a.a> {
    private static void a(k.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aMN = jSONObject.optString("s_cn");
        if (aVar.aMN == JSONObject.NULL) {
            aVar.aMN = "";
        }
        aVar.aMO = jSONObject.optString("s_mn");
        if (aVar.aMO == JSONObject.NULL) {
            aVar.aMO = "";
        }
    }

    private static JSONObject b(k.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aMN != null && !aVar.aMN.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "s_cn", aVar.aMN);
        }
        if (aVar.aMO != null && !aVar.aMO.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "s_mn", aVar.aMO);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((k.a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((k.a.a) bVar, jSONObject);
    }
}
