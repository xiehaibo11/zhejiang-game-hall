package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ck implements com.kwad.sdk.core.d<AdStyleInfo.PlayDetailInfo.DetailWebCardInfo> {
    private static void a(AdStyleInfo.PlayDetailInfo.DetailWebCardInfo detailWebCardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        detailWebCardInfo.style = jSONObject.optInt("style");
        detailWebCardInfo.maxTimeOut = jSONObject.optLong("maxTimeOut");
        detailWebCardInfo.typeLandscape = jSONObject.optLong("typeLandscape");
        detailWebCardInfo.typePortrait = jSONObject.optLong("typePortrait");
        detailWebCardInfo.cardUrl = jSONObject.optString("cardUrl");
        if (detailWebCardInfo.cardUrl == JSONObject.NULL) {
            detailWebCardInfo.cardUrl = "";
        }
        detailWebCardInfo.cardData = jSONObject.optString("cardData");
        if (detailWebCardInfo.cardData == JSONObject.NULL) {
            detailWebCardInfo.cardData = "";
        }
        detailWebCardInfo.cardShowTime = jSONObject.optLong("cardShowTime");
        detailWebCardInfo.cardType = jSONObject.optInt("cardType");
    }

    private static JSONObject b(AdStyleInfo.PlayDetailInfo.DetailWebCardInfo detailWebCardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (detailWebCardInfo.style != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "style", detailWebCardInfo.style);
        }
        if (detailWebCardInfo.maxTimeOut != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "maxTimeOut", detailWebCardInfo.maxTimeOut);
        }
        if (detailWebCardInfo.typeLandscape != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "typeLandscape", detailWebCardInfo.typeLandscape);
        }
        if (detailWebCardInfo.typePortrait != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "typePortrait", detailWebCardInfo.typePortrait);
        }
        if (detailWebCardInfo.cardUrl != null && !detailWebCardInfo.cardUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardUrl", detailWebCardInfo.cardUrl);
        }
        if (detailWebCardInfo.cardData != null && !detailWebCardInfo.cardData.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardData", detailWebCardInfo.cardData);
        }
        if (detailWebCardInfo.cardShowTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardShowTime", detailWebCardInfo.cardShowTime);
        }
        if (detailWebCardInfo.cardType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cardType", detailWebCardInfo.cardType);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.PlayDetailInfo.DetailWebCardInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.PlayDetailInfo.DetailWebCardInfo) bVar, jSONObject);
    }
}
