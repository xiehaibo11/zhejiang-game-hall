package com.kwad.components.ad.splashscreen.d;

public final class b extends com.kwad.components.core.n.e {
    private com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener BR;
    private com.kwad.sdk.core.h.b bJ;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.kwad.sdk.core.h.b r1) {
            r0 = this;
            r0.bJ = r1
            return
    }

    public static com.kwad.components.ad.splashscreen.d.b b(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.h.b r3, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r4) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            org.json.JSONObject r2 = r2.toJson()
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = "ad_splash_template_str"
            r0.putString(r1, r2)
            com.kwad.components.ad.splashscreen.d.b r2 = new com.kwad.components.ad.splashscreen.d.b
            r2.<init>()
            r2.setArguments(r0)
            r2.a(r3)
            r2.setSplashScreenAdListener(r4)
            return r2
    }

    private void initData() {
            r3 = this;
            android.os.Bundle r0 = r3.getArguments()
            java.lang.String r1 = "ad_splash_template_str"
            java.lang.String r0 = r0.getString(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L19
            r1.<init>()     // Catch: java.lang.Throwable -> L19
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L19
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L19
            r1.parseJson(r2)     // Catch: java.lang.Throwable -> L19
            r3.mAdTemplate = r1     // Catch: java.lang.Throwable -> L19
        L19:
            return
    }

    private void setSplashScreenAdListener(com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r1) {
            r0 = this;
            r0.BR = r1
            return
    }

    @Override
    public final android.view.ViewGroup lA() {
            r5 = this;
            r5.initData()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            r1 = 0
            if (r0 != 0) goto L1b
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            r0 = 0
            java.lang.String r2 = "adTemplate null"
            com.kwad.components.ad.splashscreen.monitor.a.a(r0, r2, r1)
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r2 = r5.BR
            if (r2 == 0) goto L1a
            java.lang.String r3 = "data parse error"
            r2.onAdShowError(r1, r3)
        L1a:
            return r0
        L1b:
            android.content.Context r0 = r5.mContext
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            com.kwad.sdk.core.h.b r3 = r5.bJ
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r4 = r5.BR
            com.kwad.components.ad.splashscreen.c r0 = com.kwad.components.ad.splashscreen.c.a(r0, r2, r1, r3, r4)
            return r0
    }
}
