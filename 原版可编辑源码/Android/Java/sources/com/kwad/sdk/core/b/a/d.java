package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class d implements com.kwad.sdk.core.d<AdMatrixInfo.ActionBarInfoNew> {
    private static void a(AdMatrixInfo.ActionBarInfoNew actionBarInfoNew, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        actionBarInfoNew.maxTimeOut = jSONObject.optLong("maxTimeOut");
        actionBarInfoNew.cardType = jSONObject.optInt("cardType");
    }

    private static JSONObject b(AdMatrixInfo.ActionBarInfoNew actionBarInfoNew, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (actionBarInfoNew.maxTimeOut != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "maxTimeOut", actionBarInfoNew.maxTimeOut);
        }
        if (actionBarInfoNew.cardType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardType", actionBarInfoNew.cardType);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.ActionBarInfoNew) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.ActionBarInfoNew) bVar, jSONObject);
    }
}
