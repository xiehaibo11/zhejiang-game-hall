package com.kwad.components.ad.feed.b;

public final class k extends com.kwad.components.ad.feed.b.a implements android.view.View.OnClickListener, com.kwad.sdk.widget.c {
    private android.widget.TextView ek;
    private android.widget.ImageView em;
    private com.kwad.components.ad.widget.DownloadProgressView er;
    private com.kwad.sdk.core.page.widget.RoundAngleImageView ff;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.widget.KsLogoView mLogoView;


    public k(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static void a(com.kwad.components.ad.feed.b.k r0, int r1) {
            r0.aK(r1)
            return
    }

    private void bc() {
            r4 = this;
            com.kwad.components.core.widget.KsLogoView r0 = r4.mLogoView
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.aa(r1)
            com.kwad.components.ad.widget.DownloadProgressView r0 = r4.er
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.H(r1)
            r0 = 3
            android.view.View[] r0 = new android.view.View[r0]
            android.widget.TextView r1 = r4.ek
            r2 = 0
            r0[r2] = r1
            com.kwad.sdk.core.page.widget.RoundAngleImageView r1 = r4.ff
            r2 = 1
            r0[r2] = r1
            com.kwad.components.ad.widget.DownloadProgressView r1 = r4.er
            r2 = 2
            r0[r2] = r1
            com.kwad.sdk.d.a.a.a(r4, r0)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r4.getContext()
            android.widget.TextView r2 = r4.ek
            r0.<init>(r1, r2, r4)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r4.getContext()
            com.kwad.sdk.core.page.widget.RoundAngleImageView r2 = r4.ff
            r0.<init>(r1, r2, r4)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r4.getContext()
            com.kwad.components.ad.widget.DownloadProgressView r2 = r4.er
            r0.<init>(r1, r2, r4)
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L72
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r2 = 0
            com.kwad.components.ad.widget.DownloadProgressView r3 = r4.er
            com.kwad.sdk.api.KsAppDownloadListener r3 = r3.getAppDownloadListener()
            r0.<init>(r1, r2, r3)
            r4.mApkDownloadHelper = r0
            com.kwad.components.ad.widget.DownloadProgressView r1 = r4.er
            com.kwad.sdk.api.KsAppDownloadListener r1 = r1.getAppDownloadListener()
            r0.d(r1)
            com.kwad.components.core.e.d.c r0 = r4.mApkDownloadHelper
            r0.setOnShowListener(r4)
            com.kwad.components.core.e.d.c r0 = r4.mApkDownloadHelper
            r0.setOnDismissListener(r4)
            r4.aZ()
        L72:
            return
    }

    private void c(android.view.View r5, int r6) {
            r4 = this;
            android.widget.ImageView r0 = r4.em
            if (r5 != r0) goto L8
            r4.sm()
            return
        L8:
            com.kwad.components.ad.widget.DownloadProgressView r0 = r4.er
            r1 = 1
            if (r5 != r0) goto Lf
            r0 = r1
            goto L10
        Lf:
            r0 = 2
        L10:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r4.getContext()
            r2.<init>(r3)
            r3 = 5
            com.kwad.components.core.e.d.a$a r2 = r2.am(r3)
            com.kwad.components.core.e.d.a$a r2 = r2.an(r6)
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r3)
            com.kwad.components.core.e.d.c r3 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            com.kwad.components.core.e.d.a$a r0 = r2.ao(r0)
            com.kwad.components.ad.widget.DownloadProgressView r2 = r4.er
            if (r5 != r2) goto L37
            goto L38
        L37:
            r1 = 0
        L38:
            com.kwad.components.core.e.d.a$a r5 = r0.am(r1)
            com.kwad.components.ad.feed.b.k$1 r0 = new com.kwad.components.ad.feed.b.k$1
            r0.<init>(r4, r6)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
            return
    }

    @Override
    public final void a(android.view.View r1) {
            r0 = this;
            r0.onClick(r1)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Ld
            r0 = 153(0x99, float:2.14E-43)
            r1.c(r2, r0)
        Ld:
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            super.b(r4)
            android.widget.TextView r4 = r3.ek
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            java.lang.String r0 = com.kwad.components.ad.feed.f.c(r0)
            r4.setText(r0)
            com.kwad.sdk.core.response.model.AdInfo r4 = r3.mAdInfo
            java.util.List r4 = com.kwad.sdk.core.response.b.a.aT(r4)
            int r0 = r4.size()
            if (r0 <= 0) goto L31
            long r0 = android.os.SystemClock.elapsedRealtime()
            r3.eh = r0
            com.kwad.sdk.core.page.widget.RoundAngleImageView r0 = r3.ff
            r1 = 0
            java.lang.Object r4 = r4.get(r1)
            java.lang.String r4 = (java.lang.String) r4
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener r2 = r3.ei
            com.kwad.sdk.core.imageloader.KSImageLoader.loadFeeImage(r0, r4, r1, r2)
            goto L38
        L31:
            java.lang.String r4 = "FeedTextLeftImageView"
            java.lang.String r0 = "getImageUrlList size less than one"
            com.kwad.sdk.core.e.c.e(r4, r0)
        L38:
            r3.bc()
            android.widget.ImageView r4 = r3.em
            r4.setOnClickListener(r3)
            r3.setOnClickListener(r3)
            return
    }

    @Override
    public final void ba() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ek = r0
            int r0 = com.kwad.sdk.R.id.ksad_image_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.widget.RatioFrameLayout r0 = (com.kwad.sdk.widget.RatioFrameLayout) r0
            r1 = 4604119971289628672(0x3fe51eb860000000, double:0.6600000262260437)
            r0.setRatio(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_image
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.core.page.widget.RoundAngleImageView r0 = (com.kwad.sdk.core.page.widget.RoundAngleImageView) r0
            r3.ff = r0
            android.content.Context r1 = r3.getContext()
            r2 = 1077936128(0x40400000, float:3.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setRadius(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_dislike
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.em = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_btn
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.ad.widget.DownloadProgressView r0 = (com.kwad.components.ad.widget.DownloadProgressView) r0
            r3.er = r0
            int r0 = com.kwad.sdk.R.id.ksad_feed_logo
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r3.mLogoView = r0
            return
    }

    @Override
    public final void bd() {
            r2 = this;
            super.bd()
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L10
            com.kwad.components.ad.widget.DownloadProgressView r1 = r2.er
            com.kwad.sdk.api.KsAppDownloadListener r1 = r1.getAppDownloadListener()
            r0.c(r1)
        L10:
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_feed_text_left_image
            return r0
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.widget.TextView r0 = r1.ek
            if (r2 != r0) goto L7
            r0 = 25
            goto L16
        L7:
            com.kwad.sdk.core.page.widget.RoundAngleImageView r0 = r1.ff
            if (r2 != r0) goto Le
            r0 = 100
            goto L16
        Le:
            com.kwad.components.ad.widget.DownloadProgressView r0 = r1.er
            if (r2 != r0) goto L14
            r0 = 1
            goto L16
        L14:
            r0 = 35
        L16:
            r1.c(r2, r0)
            return
    }
}
