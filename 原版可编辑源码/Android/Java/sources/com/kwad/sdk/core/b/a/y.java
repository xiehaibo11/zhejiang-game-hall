package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class y implements com.kwad.sdk.core.d<AdInfo.AdMaterialInfo> {
    private static void a(AdInfo.AdMaterialInfo adMaterialInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adMaterialInfo.materialType = jSONObject.optInt("materialType", new Integer("2").intValue());
        adMaterialInfo.videoVoice = jSONObject.optBoolean("videoVoice", new Boolean("false").booleanValue());
        adMaterialInfo.materialFeatureList = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("materialFeature");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                AdInfo.AdMaterialInfo.MaterialFeature materialFeature = new AdInfo.AdMaterialInfo.MaterialFeature();
                materialFeature.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                adMaterialInfo.materialFeatureList.add(materialFeature);
            }
        }
    }

    private static JSONObject b(AdInfo.AdMaterialInfo adMaterialInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "materialType", adMaterialInfo.materialType);
        com.kwad.sdk.utils.t.putValue(jSONObject, "videoVoice", adMaterialInfo.videoVoice);
        com.kwad.sdk.utils.t.putValue(jSONObject, "materialFeature", adMaterialInfo.materialFeatureList);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.AdMaterialInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.AdMaterialInfo) bVar, jSONObject);
    }
}
