package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class dm implements com.kwad.sdk.core.d<AdMatrixInfo.FullScreenInfo> {
    private static void a(AdMatrixInfo.FullScreenInfo fullScreenInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        fullScreenInfo.interactionInfo = new AdMatrixInfo.AdInteractionInfo();
        fullScreenInfo.interactionInfo.parseJson(jSONObject.optJSONObject("interactionInfo"));
    }

    private static JSONObject b(AdMatrixInfo.FullScreenInfo fullScreenInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "interactionInfo", fullScreenInfo.interactionInfo);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.FullScreenInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.FullScreenInfo) bVar, jSONObject);
    }
}
