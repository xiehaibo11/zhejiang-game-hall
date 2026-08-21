package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.adbit.AdBid;
import org.json.JSONObject;

public final class j implements com.kwad.sdk.core.d<AdBid> {
    private static void a(AdBid adBid, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adBid.creativeId = jSONObject.optLong("creativeId");
        adBid.ecpm = jSONObject.optLong(com.tkay.core.common.l.D);
        adBid.bidEcpm = jSONObject.optInt("bidEcpm");
        adBid.winNoticeUrl = jSONObject.optString("winNoticeUrl");
        if (adBid.winNoticeUrl == JSONObject.NULL) {
            adBid.winNoticeUrl = "";
        }
        adBid.materialId = jSONObject.optString("materialId");
        if (adBid.materialId == JSONObject.NULL) {
            adBid.materialId = "";
        }
    }

    private static JSONObject b(AdBid adBid, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adBid.creativeId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", adBid.creativeId);
        }
        if (adBid.ecpm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.core.common.l.D, adBid.ecpm);
        }
        if (adBid.bidEcpm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "bidEcpm", adBid.bidEcpm);
        }
        if (adBid.winNoticeUrl != null && !adBid.winNoticeUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "winNoticeUrl", adBid.winNoticeUrl);
        }
        if (adBid.materialId != null && !adBid.materialId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "materialId", adBid.materialId);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdBid) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdBid) bVar, jSONObject);
    }
}
