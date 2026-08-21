package com.kwad.sdk.core.b.a;

public final class ca implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.SdkConfigData.CouponActiveConfig> {
    public ca() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.SdkConfigData.CouponActiveConfig r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "popUpShowTimeSeconds"
            int r0 = r4.optInt(r0)
            r3.popUpShowTimeSeconds = r0
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.title = r2
        L1d:
            java.lang.String r0 = "secondTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.secondTitle = r0
            java.lang.String r0 = r3.secondTitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.secondTitle = r2
        L2d:
            java.lang.String r0 = "bottomTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.bottomTitle = r0
            java.lang.String r0 = r3.bottomTitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.bottomTitle = r2
        L3d:
            java.lang.String r0 = "videoThreshold"
            int r0 = r4.optInt(r0)
            r3.videoThreshold = r0
            java.lang.String r0 = "videoSeconds"
            int r0 = r4.optInt(r0)
            r3.videoSeconds = r0
            com.kwad.sdk.core.response.model.TemplateConfig r0 = new com.kwad.sdk.core.response.model.TemplateConfig
            r0.<init>()
            r3.couponOpenConfig = r0
            com.kwad.sdk.core.response.model.TemplateConfig r0 = r3.couponOpenConfig
            java.lang.String r1 = "couponOpenConfig"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.TemplateConfig r0 = new com.kwad.sdk.core.response.model.TemplateConfig
            r0.<init>()
            r3.couponInfoConfig = r0
            com.kwad.sdk.core.response.model.TemplateConfig r0 = r3.couponInfoConfig
            java.lang.String r1 = "couponInfoConfig"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.contentalliance.coupon.model.ActivityInfo r0 = new com.kwad.sdk.contentalliance.coupon.model.ActivityInfo
            r0.<init>()
            r3.activityInfo = r0
            com.kwad.sdk.contentalliance.coupon.model.ActivityInfo r3 = r3.activityInfo
            java.lang.String r0 = "activityInfo"
            org.json.JSONObject r4 = r4.optJSONObject(r0)
            r3.parseJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.SdkConfigData.CouponActiveConfig r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.popUpShowTimeSeconds
            if (r0 == 0) goto L12
            int r0 = r3.popUpShowTimeSeconds
            java.lang.String r1 = "popUpShowTimeSeconds"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.title
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.secondTitle
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.secondTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.secondTitle
            java.lang.String r2 = "secondTitle"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.bottomTitle
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.bottomTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.bottomTitle
            java.lang.String r1 = "bottomTitle"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L4d:
            int r0 = r3.videoThreshold
            if (r0 == 0) goto L58
            int r0 = r3.videoThreshold
            java.lang.String r1 = "videoThreshold"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L58:
            int r0 = r3.videoSeconds
            if (r0 == 0) goto L63
            int r0 = r3.videoSeconds
            java.lang.String r1 = "videoSeconds"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L63:
            com.kwad.sdk.core.response.model.TemplateConfig r0 = r3.couponOpenConfig
            java.lang.String r1 = "couponOpenConfig"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.core.response.model.TemplateConfig r0 = r3.couponInfoConfig
            java.lang.String r1 = "couponInfoConfig"
            com.kwad.sdk.utils.t.a(r4, r1, r0)
            com.kwad.sdk.contentalliance.coupon.model.ActivityInfo r3 = r3.activityInfo
            java.lang.String r0 = "activityInfo"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.SdkConfigData$CouponActiveConfig r1 = (com.kwad.sdk.core.response.model.SdkConfigData.CouponActiveConfig) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.SdkConfigData$CouponActiveConfig r1 = (com.kwad.sdk.core.response.model.SdkConfigData.CouponActiveConfig) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
