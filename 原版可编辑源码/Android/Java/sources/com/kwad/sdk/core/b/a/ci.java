package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class ci implements com.kwad.sdk.core.d<AdStyleInfo.PlayDetailInfo.DetailCommonInfo> {
    private static void a(AdStyleInfo.PlayDetailInfo.DetailCommonInfo detailCommonInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        detailCommonInfo.middleEndcardShowTime = jSONObject.optInt("middleEndcardShowTime");
        detailCommonInfo.rewardFullClickSwitch = jSONObject.optInt("rewardFullClickSwitch");
        detailCommonInfo.rewardInteractionType = jSONObject.optInt("rewardInteractionType");
    }

    private static JSONObject b(AdStyleInfo.PlayDetailInfo.DetailCommonInfo detailCommonInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (detailCommonInfo.middleEndcardShowTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "middleEndcardShowTime", detailCommonInfo.middleEndcardShowTime);
        }
        if (detailCommonInfo.rewardFullClickSwitch != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardFullClickSwitch", detailCommonInfo.rewardFullClickSwitch);
        }
        if (detailCommonInfo.rewardInteractionType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rewardInteractionType", detailCommonInfo.rewardInteractionType);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.PlayDetailInfo.DetailCommonInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.PlayDetailInfo.DetailCommonInfo) bVar, jSONObject);
    }
}
