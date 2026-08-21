package com.kwad.sdk.core.b.a;

public final class is implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.SdkConfigData.TemplateConfigMap> {
    public is() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.SdkConfigData.TemplateConfigMap r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.TemplateConfig r0 = new com.kwad.sdk.core.response.model.TemplateConfig
            r0.<init>()
            r2.couponOpenConfig = r0
            com.kwad.sdk.core.response.model.TemplateConfig r0 = r2.couponOpenConfig
            java.lang.String r1 = "couponOpenConfig"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            com.kwad.sdk.core.response.model.TemplateConfig r0 = new com.kwad.sdk.core.response.model.TemplateConfig
            r0.<init>()
            r2.couponInfoConfig = r0
            com.kwad.sdk.core.response.model.TemplateConfig r2 = r2.couponInfoConfig
            java.lang.String r0 = "couponInfoConfig"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r2.parseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.SdkConfigData.TemplateConfigMap r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            com.kwad.sdk.core.response.model.TemplateConfig r0 = r2.couponOpenConfig
            java.lang.String r1 = "couponOpenConfig"
            com.kwad.sdk.utils.t.a(r3, r1, r0)
            com.kwad.sdk.core.response.model.TemplateConfig r2 = r2.couponInfoConfig
            java.lang.String r0 = "couponInfoConfig"
            com.kwad.sdk.utils.t.a(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.SdkConfigData$TemplateConfigMap r1 = (com.kwad.sdk.core.response.model.SdkConfigData.TemplateConfigMap) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.SdkConfigData$TemplateConfigMap r1 = (com.kwad.sdk.core.response.model.SdkConfigData.TemplateConfigMap) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
