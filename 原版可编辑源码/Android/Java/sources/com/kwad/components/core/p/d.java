package com.kwad.components.core.p;

import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.t;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class d extends com.kwad.sdk.core.network.d {
    public long PD;

    public d(int i, AdTemplate adTemplate) {
        String strBD = com.kwad.sdk.core.response.b.a.bD(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        try {
            String strBE = com.kwad.sdk.core.response.b.a.bE(com.kwad.sdk.core.response.b.d.cg(adTemplate));
            try {
                if (!TextUtils.isEmpty(strBE)) {
                    putBody("serverExt", new JSONObject(strBE));
                }
            } catch (JSONException e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
            if (!TextUtils.isEmpty(strBD) && strBD != null) {
                JSONObject jSONObject = new JSONObject(strBD);
                t.putValue(jSONObject, "checkType", i);
                putBody("callbackUrlInfo", jSONObject.toString());
            }
        } catch (Exception e2) {
            com.kwad.sdk.core.e.c.printStackTrace(e2);
        }
        com.kwad.components.core.p.a.b bVar = new com.kwad.components.core.p.a.b(adTemplate.mAdScene);
        JSONArray jSONArray = new JSONArray();
        t.putValue(jSONArray, bVar.toJson());
        putBody("impInfo", jSONArray);
    }

    @Override
    public final String getUrl() {
        return com.kwad.sdk.h.xk();
    }
}
