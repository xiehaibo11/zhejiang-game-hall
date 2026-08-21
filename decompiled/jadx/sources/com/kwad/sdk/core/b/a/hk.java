package com.kwad.sdk.core.b.a;

import com.kwad.sdk.i.b;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class hk implements com.kwad.sdk.core.d<b.C0224b> {
    private static void a(b.C0224b c0224b, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0224b.aCZ = jSONObject.optInt("enable_monitor");
        c0224b.aDa = jSONObject.optString("c_sc_name");
        if (c0224b.aDa == JSONObject.NULL) {
            c0224b.aDa = "";
        }
        c0224b.aDb = jSONObject.optString("c_pcl_name");
        if (c0224b.aDb == JSONObject.NULL) {
            c0224b.aDb = "";
        }
        c0224b.aDc = jSONObject.optString("m_gam_name");
        if (c0224b.aDc == JSONObject.NULL) {
            c0224b.aDc = "";
        }
        c0224b.aDd = jSONObject.optString("m_gsv_name");
        if (c0224b.aDd == JSONObject.NULL) {
            c0224b.aDd = "";
        }
        c0224b.aDe = jSONObject.optString("m_gpv_name");
        if (c0224b.aDe == JSONObject.NULL) {
            c0224b.aDe = "";
        }
    }

    private static JSONObject b(b.C0224b c0224b, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0224b.aCZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enable_monitor", c0224b.aCZ);
        }
        if (c0224b.aDa != null && !c0224b.aDa.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "c_sc_name", c0224b.aDa);
        }
        if (c0224b.aDb != null && !c0224b.aDb.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "c_pcl_name", c0224b.aDb);
        }
        if (c0224b.aDc != null && !c0224b.aDc.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "m_gam_name", c0224b.aDc);
        }
        if (c0224b.aDd != null && !c0224b.aDd.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "m_gsv_name", c0224b.aDd);
        }
        if (c0224b.aDe != null && !c0224b.aDe.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "m_gpv_name", c0224b.aDe);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((b.C0224b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((b.C0224b) bVar, jSONObject);
    }
}
