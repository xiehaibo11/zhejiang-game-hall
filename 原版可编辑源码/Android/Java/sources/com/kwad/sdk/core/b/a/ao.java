package com.kwad.sdk.core.b.a;

import com.kwad.sdk.ranger.a.a;
import org.json.JSONObject;

public final class ao implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.a.a> {
    private static void a(com.kwad.sdk.ranger.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aHb = jSONObject.optString("nodeClassName");
        if (aVar.aHb == JSONObject.NULL) {
            aVar.aHb = "";
        }
        aVar.aHc = jSONObject.optString("childFieldName");
        if (aVar.aHc == JSONObject.NULL) {
            aVar.aHc = "";
        }
        aVar.aHd = jSONObject.optBoolean("childFieldIsStatic");
        aVar.aHe = jSONObject.optString("reportKey");
        if (aVar.aHe == JSONObject.NULL) {
            aVar.aHe = "";
        }
        aVar.aHf = new a.b();
        aVar.aHf.parseJson(jSONObject.optJSONObject("childMethod"));
        aVar.aHg = new com.kwad.sdk.ranger.a.a();
        aVar.aHg.parseJson(jSONObject.optJSONObject("deepNode"));
    }

    private static JSONObject b(com.kwad.sdk.ranger.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aHb != null && !aVar.aHb.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "nodeClassName", aVar.aHb);
        }
        if (aVar.aHc != null && !aVar.aHc.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "childFieldName", aVar.aHc);
        }
        if (aVar.aHd) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "childFieldIsStatic", aVar.aHd);
        }
        if (aVar.aHe != null && !aVar.aHe.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "reportKey", aVar.aHe);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "childMethod", aVar.aHf);
        com.kwad.sdk.utils.t.a(jSONObject, "deepNode", aVar.aHg);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.ranger.a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.ranger.a.a) bVar, jSONObject);
    }
}
