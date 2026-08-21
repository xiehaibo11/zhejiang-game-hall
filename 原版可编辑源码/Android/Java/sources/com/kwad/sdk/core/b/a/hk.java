package com.kwad.sdk.core.b.a;

import com.kwad.sdk.i.b;
import org.json.JSONObject;

public final class hk implements com.kwad.sdk.core.d<b.b> {
    private static void a(b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.aCZ = jSONObject.optInt("enable_monitor");
        bVar.aDa = jSONObject.optString("c_sc_name");
        if (bVar.aDa == JSONObject.NULL) {
            bVar.aDa = "";
        }
        bVar.aDb = jSONObject.optString("c_pcl_name");
        if (bVar.aDb == JSONObject.NULL) {
            bVar.aDb = "";
        }
        bVar.aDc = jSONObject.optString("m_gam_name");
        if (bVar.aDc == JSONObject.NULL) {
            bVar.aDc = "";
        }
        bVar.aDd = jSONObject.optString("m_gsv_name");
        if (bVar.aDd == JSONObject.NULL) {
            bVar.aDd = "";
        }
        bVar.aDe = jSONObject.optString("m_gpv_name");
        if (bVar.aDe == JSONObject.NULL) {
            bVar.aDe = "";
        }
    }

    private static JSONObject b(b.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.aCZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enable_monitor", bVar.aCZ);
        }
        if (bVar.aDa != null && !bVar.aDa.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "c_sc_name", bVar.aDa);
        }
        if (bVar.aDb != null && !bVar.aDb.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "c_pcl_name", bVar.aDb);
        }
        if (bVar.aDc != null && !bVar.aDc.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "m_gam_name", bVar.aDc);
        }
        if (bVar.aDd != null && !bVar.aDd.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "m_gsv_name", bVar.aDd);
        }
        if (bVar.aDe != null && !bVar.aDe.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "m_gpv_name", bVar.aDe);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((b.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((b.b) bVar, jSONObject);
    }
}
