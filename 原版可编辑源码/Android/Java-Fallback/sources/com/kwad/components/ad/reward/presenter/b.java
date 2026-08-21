package com.kwad.components.ad.reward.presenter;

public class b extends com.kwad.components.ad.reward.presenter.a {
    private android.widget.ImageView rY;
    private com.kwad.sdk.core.response.model.AdInfo rZ;


    public b(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = this;
            r0.<init>()
            r0.rZ = r1
            return
    }

    private static void a(android.widget.ImageView r2, java.lang.String r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            r1 = 50
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setBlurRadius(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = r0.build()
            com.kwad.components.ad.reward.presenter.b$1 r1 = new com.kwad.components.ad.reward.presenter.b$1
            r1.<init>()
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r3, r4, r0, r1)
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r1 = r4.hx()
            if (r1 != 0) goto L35
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r1 = r0.adInfoList
            int r1 = r1.size()
            if (r1 <= 0) goto L35
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r1 = r0.adInfoList
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.kwad.sdk.core.response.model.AdInfo r1 = (com.kwad.sdk.core.response.model.AdInfo) r1
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.P(r1)
            android.widget.ImageView r2 = r4.rY
            int r3 = r4.hz()
            r2.setVisibility(r3)
            android.widget.ImageView r2 = r4.rY     // Catch: java.lang.Throwable -> L31
            a(r2, r1, r0)     // Catch: java.lang.Throwable -> L31
            return
        L31:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L35:
            return
    }

    protected int hy() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_blur_video_cover
            return r0
    }

    protected int hz() {
            r2 = this;
            r2.getContext()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.s(r0)
            r1 = 0
            if (r0 == 0) goto L15
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L15
            return r1
        L15:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.r(r0)
            if (r0 == 0) goto L26
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L26
            return r1
        L26:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.d.ct(r0)
            if (r0 == 0) goto L37
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L37
            return r1
        L37:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.rZ
            boolean r0 = com.kwad.components.ad.reward.j.g(r0)
            if (r0 == 0) goto L40
            return r1
        L40:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.rZ
            boolean r0 = com.kwad.sdk.core.response.b.a.co(r0)
            if (r0 == 0) goto L55
            boolean r0 = com.kwad.components.ad.reward.a.b.gP()
            if (r0 == 0) goto L55
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L55
            return r1
        L55:
            r0 = 8
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = r1.hy()
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.rY = r0
            return
    }
}
