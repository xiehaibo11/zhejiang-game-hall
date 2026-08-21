package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class fi implements com.kwad.sdk.core.d<AdInfo.MaterialSize> {
    private static void a(AdInfo.MaterialSize materialSize, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        materialSize.width = jSONObject.optInt("width");
        materialSize.height = jSONObject.optInt("height");
    }

    private static JSONObject b(AdInfo.MaterialSize materialSize, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (materialSize.width != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "width", materialSize.width);
        }
        if (materialSize.height != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", materialSize.height);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.MaterialSize) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.MaterialSize) bVar, jSONObject);
    }
}
