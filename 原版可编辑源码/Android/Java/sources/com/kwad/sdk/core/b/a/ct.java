package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class ct implements com.kwad.sdk.core.d<AdMatrixInfo.EndCardInfo> {
    private static void a(AdMatrixInfo.EndCardInfo endCardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        endCardInfo.cardShowPlayCount = jSONObject.optInt("cardShowPlayCount");
        endCardInfo.cardType = jSONObject.optInt("cardType");
    }

    private static JSONObject b(AdMatrixInfo.EndCardInfo endCardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (endCardInfo.cardShowPlayCount != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardShowPlayCount", endCardInfo.cardShowPlayCount);
        }
        if (endCardInfo.cardType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardType", endCardInfo.cardType);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.EndCardInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.EndCardInfo) bVar, jSONObject);
    }
}
