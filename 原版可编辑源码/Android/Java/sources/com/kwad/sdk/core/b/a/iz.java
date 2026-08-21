package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class iz implements com.kwad.sdk.core.d<AdInfo.UnDownloadConf> {
    private static void a(AdInfo.UnDownloadConf unDownloadConf, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        unDownloadConf.unDownloadRegionConf = new AdInfo.UnDownloadRegionConf();
        unDownloadConf.unDownloadRegionConf.parseJson(jSONObject.optJSONObject("unDownloadRegionConf"));
    }

    private static JSONObject b(AdInfo.UnDownloadConf unDownloadConf, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "unDownloadRegionConf", unDownloadConf.unDownloadRegionConf);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.UnDownloadConf) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.UnDownloadConf) bVar, jSONObject);
    }
}
