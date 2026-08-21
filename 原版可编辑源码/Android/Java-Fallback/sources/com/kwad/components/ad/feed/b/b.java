package com.kwad.components.ad.feed.b;

public abstract class b extends com.kwad.components.ad.feed.b.a implements android.view.View.OnClickListener, com.kwad.sdk.widget.c {
    private android.widget.TextView dC;
    protected android.widget.ImageView du;
    protected android.widget.TextView dv;
    protected android.widget.TextView ek;
    protected android.widget.ImageView el;
    protected android.widget.ImageView em;
    protected com.kwad.sdk.widget.RatioFrameLayout en;
    protected android.widget.TextView eo;
    private android.widget.TextView ep;
    private android.view.View eq;
    protected com.kwad.components.ad.widget.DownloadProgressView er;
    protected com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected com.kwad.components.core.widget.KsLogoView mLogoView;



    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.feed.b.b r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    private void a(android.view.View r5, int r6) {
            r4 = this;
            android.widget.ImageView r0 = r4.em
            if (r5 != r0) goto L8
            r4.sm()
            return
        L8:
            r4.aY()
            com.kwad.components.ad.widget.DownloadProgressView r0 = r4.er
            r1 = 1
            if (r5 != r0) goto L12
            r0 = r1
            goto L13
        L12:
            r0 = 2
        L13:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r4.getContext()
            r2.<init>(r3)
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r3)
            r3 = 5
            com.kwad.components.core.e.d.a$a r2 = r2.am(r3)
            com.kwad.components.core.e.d.a$a r2 = r2.an(r6)
            com.kwad.components.core.e.d.c r3 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            com.kwad.components.core.e.d.a$a r0 = r2.ao(r0)
            com.kwad.components.ad.widget.DownloadProgressView r2 = r4.er
            if (r5 != r2) goto L3a
            goto L3b
        L3a:
            r1 = 0
        L3b:
            com.kwad.components.core.e.d.a$a r5 = r0.am(r1)
            com.kwad.components.ad.feed.b.b$2 r0 = new com.kwad.components.ad.feed.b.b$2
            r0.<init>(r4, r6)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
            return
    }

    static void a(com.kwad.components.ad.feed.b.b r0, int r1) {
            r0.aK(r1)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate b(com.kwad.components.ad.feed.b.b r0) {
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private void bb() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_h5_container
            android.view.View r0 = r3.findViewById(r0)
            r1 = 0
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_download_container
            android.view.View r0 = r3.findViewById(r0)
            r1 = 8
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_h5_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ep = r0
            int r0 = com.kwad.sdk.R.id.ksad_h5_open_btn
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.dC = r0
            int r0 = com.kwad.sdk.R.id.ksad_h5_open_cover
            android.view.View r0 = r3.findViewById(r0)
            r3.eq = r0
            android.widget.TextView r0 = r3.ep
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r3.dC
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aw(r1)
            r0.setText(r1)
            android.view.View r0 = r3.eq
            r0.setOnClickListener(r3)
            android.widget.TextView r0 = r3.ep
            r0.setOnClickListener(r3)
            android.widget.TextView r0 = r3.dC
            r0.setOnClickListener(r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.view.View r2 = r3.eq
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.widget.TextView r2 = r3.ep
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.widget.TextView r2 = r3.dC
            r0.<init>(r1, r2, r3)
            return
    }

    private void bc() {
            r5 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_download_container
            android.view.View r0 = r5.findViewById(r0)
            r1 = 0
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_h5_container
            android.view.View r0 = r5.findViewById(r0)
            r2 = 8
            r0.setVisibility(r2)
            int r0 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r0 = r5.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r5.du = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_title
            android.view.View r0 = r5.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r5.dv = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_desc
            android.view.View r0 = r5.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r5.eo = r0
            r3 = 3
            android.view.View[] r3 = new android.view.View[r3]
            android.widget.ImageView r4 = r5.du
            r3[r1] = r4
            android.widget.TextView r1 = r5.dv
            r4 = 1
            r3[r4] = r1
            r1 = 2
            r3[r1] = r0
            com.kwad.sdk.d.a.a.a(r5, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            android.widget.ImageView r3 = r5.du
            r0.<init>(r1, r3, r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            android.widget.TextView r3 = r5.dv
            r0.<init>(r1, r3, r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            android.widget.TextView r3 = r5.eo
            r0.<init>(r1, r3, r5)
            android.widget.TextView r0 = r5.dv
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ao(r1)
            r0.setText(r1)
            android.widget.ImageView r0 = r5.du
            int r1 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            r0.setImageResource(r1)
            android.widget.ImageView r0 = r5.du
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r1)
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r3, r2)
            android.widget.TextView r0 = r5.eo
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            r5.aZ()
            com.kwad.components.ad.widget.DownloadProgressView r0 = r5.er
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            r0.H(r1)
            com.kwad.components.ad.widget.DownloadProgressView r0 = r5.er
            r0.setOnClickListener(r5)
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.components.ad.widget.DownloadProgressView r2 = r5.er
            com.kwad.sdk.api.KsAppDownloadListener r2 = r2.getAppDownloadListener()
            r3 = 0
            r0.<init>(r1, r3, r2)
            r5.mApkDownloadHelper = r0
            com.kwad.components.ad.widget.DownloadProgressView r1 = r5.er
            com.kwad.sdk.api.KsAppDownloadListener r1 = r1.getAppDownloadListener()
            r0.d(r1)
            com.kwad.components.core.e.d.c r0 = r5.mApkDownloadHelper
            r0.setOnShowListener(r5)
            com.kwad.components.core.e.d.c r0 = r5.mApkDownloadHelper
            r0.setOnDismissListener(r5)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r5.getContext()
            com.kwad.components.ad.widget.DownloadProgressView r2 = r5.er
            r0.<init>(r1, r2, r5)
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
            r1.a(r2, r0)
        Ld:
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            super.b(r3)
            android.widget.TextView r0 = r2.ek
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            com.kwad.components.core.widget.KsLogoView r0 = r2.mLogoView
            r0.aa(r3)
            android.widget.ImageView r0 = r2.el
            com.kwad.components.ad.feed.b.b$1 r1 = new com.kwad.components.ad.feed.b.b$1
            r1.<init>(r2, r3)
            r0.post(r1)
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            boolean r3 = com.kwad.sdk.core.response.b.a.ax(r3)
            if (r3 == 0) goto L29
            r2.bc()
            goto L2c
        L29:
            r2.bb()
        L2c:
            r3 = 3
            android.view.View[] r3 = new android.view.View[r3]
            r0 = 0
            android.widget.TextView r1 = r2.ek
            r3[r0] = r1
            r0 = 1
            android.widget.ImageView r1 = r2.el
            r3[r0] = r1
            r0 = 2
            android.widget.ImageView r1 = r2.em
            r3[r0] = r1
            com.kwad.sdk.d.a.a.a(r2, r3)
            com.kwad.sdk.widget.f r3 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r2.getContext()
            android.widget.TextView r1 = r2.ek
            r3.<init>(r0, r1, r2)
            com.kwad.sdk.widget.f r3 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r2.getContext()
            android.widget.ImageView r1 = r2.el
            r3.<init>(r0, r1, r2)
            com.kwad.sdk.widget.f r3 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r2.getContext()
            android.widget.ImageView r1 = r2.em
            r3.<init>(r0, r1, r2)
            r2.setOnClickListener(r2)
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
            r3.en = r0
            r1 = 4603219251149406208(0x3fe1eb8520000000, double:0.5600000023841858)
            r0.setRatio(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_image
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.el = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_dislike
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.em = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_dislike_logo
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r3.mLogoView = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_btn
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.ad.widget.DownloadProgressView r0 = (com.kwad.components.ad.widget.DownloadProgressView) r0
            r3.er = r0
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
    public void onClick(android.view.View r2) {
            r1 = this;
            android.widget.TextView r0 = r1.ek
            if (r2 != r0) goto L7
            r0 = 25
            goto L39
        L7:
            android.widget.ImageView r0 = r1.el
            if (r2 != r0) goto Le
            r0 = 100
            goto L39
        Le:
            com.kwad.components.ad.widget.DownloadProgressView r0 = r1.er
            if (r2 == r0) goto L38
            android.widget.TextView r0 = r1.dC
            if (r2 == r0) goto L38
            android.view.View r0 = r1.eq
            if (r2 != r0) goto L1b
            goto L38
        L1b:
            android.widget.ImageView r0 = r1.du
            if (r2 != r0) goto L22
            r0 = 13
            goto L39
        L22:
            android.widget.TextView r0 = r1.dv
            if (r2 != r0) goto L29
            r0 = 14
            goto L39
        L29:
            android.widget.TextView r0 = r1.eo
            if (r2 == r0) goto L35
            android.widget.TextView r0 = r1.ep
            if (r2 != r0) goto L32
            goto L35
        L32:
            r0 = 35
            goto L39
        L35:
            r0 = 101(0x65, float:1.42E-43)
            goto L39
        L38:
            r0 = 1
        L39:
            r1.a(r2, r0)
            return
    }
}
