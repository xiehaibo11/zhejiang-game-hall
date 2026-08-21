package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class gs implements com.kwad.sdk.core.d<AdMatrixInfo.PreLandingPageTKInfo> {
    private static void a(AdMatrixInfo.PreLandingPageTKInfo preLandingPageTKInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        preLandingPageTKInfo.preLandingPageShowType = jSONObject.optInt("preLandingPageShowType", new Integer("1").intValue());
    }

    private static JSONObject b(AdMatrixInfo.PreLandingPageTKInfo preLandingPageTKInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "preLandingPageShowType", preLandingPageTKInfo.preLandingPageShowType);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.PreLandingPageTKInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.PreLandingPageTKInfo) bVar, jSONObject);
    }
}
