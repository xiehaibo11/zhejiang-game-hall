package com.kwad.components.ad.reward;

import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.t;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class i extends com.kwad.sdk.core.network.d {
    public i(AdTemplate adTemplate) {
        putBody("callbackUrlInfo", com.kwad.sdk.core.response.b.a.bD(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
        com.kwad.components.core.p.a.b bVar = new com.kwad.components.core.p.a.b(adTemplate.mAdScene);
        JSONArray jSONArray = new JSONArray();
        t.putValue(jSONArray, bVar.toJson());
        putBody("impInfo", jSONArray);
        try {
            String strBE = com.kwad.sdk.core.response.b.a.bE(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            if (TextUtils.isEmpty(strBE)) {
                return;
            }
            putBody("serverExt", new JSONObject(strBE));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    @Override
    public final String getUrl() {
        return com.kwad.sdk.h.xg();
    }
}
