package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener;
import org.json.JSONObject;

public final class v implements com.kwad.sdk.core.d<WebCardRegisterLiveShopListener.AdLiveItemShopInfo> {
    private static void a(WebCardRegisterLiveShopListener.AdLiveItemShopInfo adLiveItemShopInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adLiveItemShopInfo.status = jSONObject.optInt("status");
        adLiveItemShopInfo.title = jSONObject.optString("title");
        if (adLiveItemShopInfo.title == JSONObject.NULL) {
            adLiveItemShopInfo.title = "";
        }
        adLiveItemShopInfo.url = jSONObject.optString("url");
        if (adLiveItemShopInfo.url == JSONObject.NULL) {
            adLiveItemShopInfo.url = "";
        }
        adLiveItemShopInfo.price = jSONObject.optString("price");
        if (adLiveItemShopInfo.price == JSONObject.NULL) {
            adLiveItemShopInfo.price = "";
        }
    }

    private static JSONObject b(WebCardRegisterLiveShopListener.AdLiveItemShopInfo adLiveItemShopInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adLiveItemShopInfo.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", adLiveItemShopInfo.status);
        }
        if (adLiveItemShopInfo.title != null && !adLiveItemShopInfo.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", adLiveItemShopInfo.title);
        }
        if (adLiveItemShopInfo.url != null && !adLiveItemShopInfo.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", adLiveItemShopInfo.url);
        }
        if (adLiveItemShopInfo.price != null && !adLiveItemShopInfo.price.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "price", adLiveItemShopInfo.price);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((WebCardRegisterLiveShopListener.AdLiveItemShopInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((WebCardRegisterLiveShopListener.AdLiveItemShopInfo) bVar, jSONObject);
    }
}
