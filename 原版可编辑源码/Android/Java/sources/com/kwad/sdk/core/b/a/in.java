package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo;
import org.json.JSONObject;

public final class in implements com.kwad.sdk.core.d<TKAdLiveShopItemInfo> {
    private static void a(TKAdLiveShopItemInfo tKAdLiveShopItemInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        tKAdLiveShopItemInfo.itemId = jSONObject.optString("itemId");
        if (tKAdLiveShopItemInfo.itemId == JSONObject.NULL) {
            tKAdLiveShopItemInfo.itemId = "";
        }
        tKAdLiveShopItemInfo.imageUrl = jSONObject.optString("imageUrl");
        if (tKAdLiveShopItemInfo.imageUrl == JSONObject.NULL) {
            tKAdLiveShopItemInfo.imageUrl = "";
        }
        tKAdLiveShopItemInfo.title = jSONObject.optString("title");
        if (tKAdLiveShopItemInfo.title == JSONObject.NULL) {
            tKAdLiveShopItemInfo.title = "";
        }
        tKAdLiveShopItemInfo.price = jSONObject.optString("price");
        if (tKAdLiveShopItemInfo.price == JSONObject.NULL) {
            tKAdLiveShopItemInfo.price = "";
        }
    }

    private static JSONObject b(TKAdLiveShopItemInfo tKAdLiveShopItemInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (tKAdLiveShopItemInfo.itemId != null && !tKAdLiveShopItemInfo.itemId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "itemId", tKAdLiveShopItemInfo.itemId);
        }
        if (tKAdLiveShopItemInfo.imageUrl != null && !tKAdLiveShopItemInfo.imageUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imageUrl", tKAdLiveShopItemInfo.imageUrl);
        }
        if (tKAdLiveShopItemInfo.title != null && !tKAdLiveShopItemInfo.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", tKAdLiveShopItemInfo.title);
        }
        if (tKAdLiveShopItemInfo.price != null && !tKAdLiveShopItemInfo.price.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "price", tKAdLiveShopItemInfo.price);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((TKAdLiveShopItemInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((TKAdLiveShopItemInfo) bVar, jSONObject);
    }
}
