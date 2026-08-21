package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.report.z;
import org.json.JSONObject;

public final class bj implements com.kwad.sdk.core.d<z.a> {
    private static void a(z.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.templateId = jSONObject.optString("template_id");
        if (aVar.templateId == JSONObject.NULL) {
            aVar.templateId = "";
        }
        aVar.asK = jSONObject.optString("template_show_type");
        if (aVar.asK == JSONObject.NULL) {
            aVar.asK = "";
        }
        aVar.asL = jSONObject.optInt("award_task_name");
        aVar.asM = jSONObject.optInt("jumps_liveroom_type");
        aVar.asN = jSONObject.optInt("universe_feature_freg");
        aVar.asP = jSONObject.optInt("is_special_preload");
        aVar.asQ = jSONObject.optInt("card_type");
    }

    private static JSONObject b(z.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.templateId != null && !aVar.templateId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "template_id", aVar.templateId);
        }
        if (aVar.asK != null && !aVar.asK.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "template_show_type", aVar.asK);
        }
        if (aVar.asL != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "award_task_name", aVar.asL);
        }
        if (aVar.asM != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "jumps_liveroom_type", aVar.asM);
        }
        if (aVar.asN != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "universe_feature_freg", aVar.asN);
        }
        if (aVar.asP != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "is_special_preload", aVar.asP);
        }
        if (aVar.asQ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "card_type", aVar.asQ);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((z.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((z.a) bVar, jSONObject);
    }
}
