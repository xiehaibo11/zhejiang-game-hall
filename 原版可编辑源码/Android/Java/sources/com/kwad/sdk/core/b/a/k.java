package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class k implements com.kwad.sdk.core.d<AdStyleInfo.AdBrowseInfo> {
    private static void a(AdStyleInfo.AdBrowseInfo adBrowseInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adBrowseInfo.enableAdBrowse = jSONObject.optInt("enableAdBrowse");
        adBrowseInfo.adBrowseDuration = jSONObject.optInt("adBrowseDuration");
    }

    private static JSONObject b(AdStyleInfo.AdBrowseInfo adBrowseInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adBrowseInfo.enableAdBrowse != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enableAdBrowse", adBrowseInfo.enableAdBrowse);
        }
        if (adBrowseInfo.adBrowseDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adBrowseDuration", adBrowseInfo.adBrowseDuration);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.AdBrowseInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.AdBrowseInfo) bVar, jSONObject);
    }
}
