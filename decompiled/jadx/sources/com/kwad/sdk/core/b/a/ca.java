package com.kwad.sdk.core.b.a;

import com.kwad.sdk.contentalliance.coupon.model.ActivityInfo;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.core.response.model.TemplateConfig;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ca implements com.kwad.sdk.core.d<SdkConfigData.CouponActiveConfig> {
    private static void a(SdkConfigData.CouponActiveConfig couponActiveConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        couponActiveConfig.popUpShowTimeSeconds = jSONObject.optInt("popUpShowTimeSeconds");
        couponActiveConfig.title = jSONObject.optString("title");
        if (couponActiveConfig.title == JSONObject.NULL) {
            couponActiveConfig.title = "";
        }
        couponActiveConfig.secondTitle = jSONObject.optString("secondTitle");
        if (couponActiveConfig.secondTitle == JSONObject.NULL) {
            couponActiveConfig.secondTitle = "";
        }
        couponActiveConfig.bottomTitle = jSONObject.optString("bottomTitle");
        if (couponActiveConfig.bottomTitle == JSONObject.NULL) {
            couponActiveConfig.bottomTitle = "";
        }
        couponActiveConfig.videoThreshold = jSONObject.optInt("videoThreshold");
        couponActiveConfig.videoSeconds = jSONObject.optInt("videoSeconds");
        couponActiveConfig.couponOpenConfig = new TemplateConfig();
        couponActiveConfig.couponOpenConfig.parseJson(jSONObject.optJSONObject("couponOpenConfig"));
        couponActiveConfig.couponInfoConfig = new TemplateConfig();
        couponActiveConfig.couponInfoConfig.parseJson(jSONObject.optJSONObject("couponInfoConfig"));
        couponActiveConfig.activityInfo = new ActivityInfo();
        couponActiveConfig.activityInfo.parseJson(jSONObject.optJSONObject("activityInfo"));
    }

    private static JSONObject b(SdkConfigData.CouponActiveConfig couponActiveConfig, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (couponActiveConfig.popUpShowTimeSeconds != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "popUpShowTimeSeconds", couponActiveConfig.popUpShowTimeSeconds);
        }
        if (couponActiveConfig.title != null && !couponActiveConfig.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", couponActiveConfig.title);
        }
        if (couponActiveConfig.secondTitle != null && !couponActiveConfig.secondTitle.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "secondTitle", couponActiveConfig.secondTitle);
        }
        if (couponActiveConfig.bottomTitle != null && !couponActiveConfig.bottomTitle.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "bottomTitle", couponActiveConfig.bottomTitle);
        }
        if (couponActiveConfig.videoThreshold != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "videoThreshold", couponActiveConfig.videoThreshold);
        }
        if (couponActiveConfig.videoSeconds != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "videoSeconds", couponActiveConfig.videoSeconds);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "couponOpenConfig", couponActiveConfig.couponOpenConfig);
        com.kwad.sdk.utils.t.a(jSONObject, "couponInfoConfig", couponActiveConfig.couponInfoConfig);
        com.kwad.sdk.utils.t.a(jSONObject, "activityInfo", couponActiveConfig.activityInfo);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((SdkConfigData.CouponActiveConfig) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((SdkConfigData.CouponActiveConfig) bVar, jSONObject);
    }
}
