package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class fu implements com.kwad.sdk.core.d<AdMatrixInfo.NeoVideoInfo> {
    private static void a(AdMatrixInfo.NeoVideoInfo neoVideoInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        neoVideoInfo.interactionInfo = new AdMatrixInfo.AdInteractionInfo();
        neoVideoInfo.interactionInfo.parseJson(jSONObject.optJSONObject("interactionInfo"));
    }

    private static JSONObject b(AdMatrixInfo.NeoVideoInfo neoVideoInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "interactionInfo", neoVideoInfo.interactionInfo);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.NeoVideoInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.NeoVideoInfo) bVar, jSONObject);
    }
}
