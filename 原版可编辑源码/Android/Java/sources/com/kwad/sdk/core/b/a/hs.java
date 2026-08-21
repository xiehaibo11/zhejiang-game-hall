package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

public final class hs implements com.kwad.sdk.core.d<AdInfo.SmallAppJumpInfo> {
    private static void a(AdInfo.SmallAppJumpInfo smallAppJumpInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        smallAppJumpInfo.smallAppJumpUrl = jSONObject.optString("smallAppJumpUrl");
        if (smallAppJumpInfo.smallAppJumpUrl == JSONObject.NULL) {
            smallAppJumpInfo.smallAppJumpUrl = "";
        }
        smallAppJumpInfo.originId = jSONObject.optString("originId");
        if (smallAppJumpInfo.originId == JSONObject.NULL) {
            smallAppJumpInfo.originId = "";
        }
        smallAppJumpInfo.mediaSmallAppId = jSONObject.optString("mediaSmallAppId");
        if (smallAppJumpInfo.mediaSmallAppId == JSONObject.NULL) {
            smallAppJumpInfo.mediaSmallAppId = "";
        }
    }

    private static JSONObject b(AdInfo.SmallAppJumpInfo smallAppJumpInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (smallAppJumpInfo.smallAppJumpUrl != null && !smallAppJumpInfo.smallAppJumpUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "smallAppJumpUrl", smallAppJumpInfo.smallAppJumpUrl);
        }
        if (smallAppJumpInfo.originId != null && !smallAppJumpInfo.originId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "originId", smallAppJumpInfo.originId);
        }
        if (smallAppJumpInfo.mediaSmallAppId != null && !smallAppJumpInfo.mediaSmallAppId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mediaSmallAppId", smallAppJumpInfo.mediaSmallAppId);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.SmallAppJumpInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.SmallAppJumpInfo) bVar, jSONObject);
    }
}
