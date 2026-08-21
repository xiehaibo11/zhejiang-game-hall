package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.CouponInfo;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class ab implements com.kwad.sdk.core.d<AdProductInfo> {
    private static void a(AdProductInfo adProductInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adProductInfo.icon = jSONObject.optString("icon");
        if (adProductInfo.icon == JSONObject.NULL) {
            adProductInfo.icon = "";
        }
        adProductInfo.name = jSONObject.optString("name");
        if (adProductInfo.name == JSONObject.NULL) {
            adProductInfo.name = "";
        }
        adProductInfo.price = jSONObject.optString("price");
        if (adProductInfo.price == JSONObject.NULL) {
            adProductInfo.price = "";
        }
        adProductInfo.originPrice = jSONObject.optString("originPrice");
        if (adProductInfo.originPrice == JSONObject.NULL) {
            adProductInfo.originPrice = "";
        }
        adProductInfo.couponList = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("couponList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                CouponInfo couponInfo = new CouponInfo();
                couponInfo.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                adProductInfo.couponList.add(couponInfo);
            }
        }
        adProductInfo.volume = jSONObject.optString("volume");
        if (adProductInfo.volume == JSONObject.NULL) {
            adProductInfo.volume = "";
        }
        adProductInfo.rating = jSONObject.optString("rating");
        if (adProductInfo.rating == JSONObject.NULL) {
            adProductInfo.rating = "";
        }
        adProductInfo.seckillInfo = new AdProductInfo.SpikeInfo();
        adProductInfo.seckillInfo.parseJson(jSONObject.optJSONObject("seckillInfo"));
    }

    private static JSONObject b(AdProductInfo adProductInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adProductInfo.icon != null && !adProductInfo.icon.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "icon", adProductInfo.icon);
        }
        if (adProductInfo.name != null && !adProductInfo.name.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "name", adProductInfo.name);
        }
        if (adProductInfo.price != null && !adProductInfo.price.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "price", adProductInfo.price);
        }
        if (adProductInfo.originPrice != null && !adProductInfo.originPrice.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "originPrice", adProductInfo.originPrice);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "couponList", adProductInfo.couponList);
        if (adProductInfo.volume != null && !adProductInfo.volume.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "volume", adProductInfo.volume);
        }
        if (adProductInfo.rating != null && !adProductInfo.rating.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rating", adProductInfo.rating);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "seckillInfo", adProductInfo.seckillInfo);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdProductInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdProductInfo) bVar, jSONObject);
    }
}
