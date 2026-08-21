package com.kwad.components.ad.feed.b;

public final class j extends com.kwad.components.ad.feed.b.a implements android.view.View.OnClickListener, com.kwad.sdk.widget.c {
    private android.widget.TextView ek;
    private android.widget.ImageView el;
    private android.widget.ImageView em;
    private com.kwad.components.core.widget.KsLogoView mLogoView;

    public j(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void c(android.view.View r2, int r3) {
            r1 = this;
            android.widget.ImageView r0 = r1.em
            if (r2 != r0) goto L8
            r1.sm()
            return
        L8:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r0 = r1.getContext()
            r2.<init>(r0)
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r0)
            r0 = 1
            int r2 = com.kwad.components.core.e.d.d.b(r2, r0)
            if (r2 != r0) goto L22
            r1.aK(r3)
            return
        L22:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            boolean r2 = com.kwad.sdk.core.response.b.a.ax(r2)
            r1.aK(r3)
            if (r2 == 0) goto L37
            android.content.Context r2 = r1.mContext
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r1.mAdTemplate
            com.kwad.components.core.widget.b$a r0 = r1.XT
            com.kwad.components.ad.feed.FeedDownloadActivityProxy.launch(r2, r3, r0)
            return
        L37:
            android.content.Context r2 = r1.getContext()
            T extends com.kwad.sdk.core.response.model.AdTemplate r3 = r1.mAdTemplate
            com.kwad.components.core.page.AdWebViewActivityProxy.launch(r2, r3)
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
            android.widget.TextView r0 = r3.ek
            T extends com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            java.lang.String r1 = com.kwad.components.ad.feed.f.c(r1)
            r0.setText(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            java.util.List r0 = com.kwad.sdk.core.response.b.a.aT(r0)
            com.kwad.components.core.widget.KsLogoView r1 = r3.mLogoView
            r1.aa(r4)
            int r4 = r0.size()
            r1 = 0
            if (r4 <= 0) goto L2e
            android.widget.ImageView r4 = r3.el
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadFeeImage(r4, r0, r2)
            goto L35
        L2e:
            java.lang.String r4 = "FeedTextImmerseImageView"
            java.lang.String r0 = "getImageUrlList size less than one"
            com.kwad.sdk.core.e.c.e(r4, r0)
        L35:
            r4 = 3
            android.view.View[] r4 = new android.view.View[r4]
            android.widget.TextView r0 = r3.ek
            r4[r1] = r0
            r0 = 1
            android.widget.ImageView r1 = r3.el
            r4[r0] = r1
            r0 = 2
            android.widget.ImageView r1 = r3.em
            r4[r0] = r1
            com.kwad.sdk.d.a.a.a(r3, r4)
            com.kwad.sdk.widget.f r4 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r3.getContext()
            android.widget.TextView r1 = r3.ek
            r4.<init>(r0, r1, r3)
            com.kwad.sdk.widget.f r4 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r3.getContext()
            android.widget.ImageView r1 = r3.el
            r4.<init>(r0, r1, r3)
            com.kwad.sdk.widget.f r4 = new com.kwad.sdk.widget.f
            android.content.Context r0 = r3.getContext()
            android.widget.ImageView r1 = r3.em
            r4.<init>(r0, r1, r3)
            r3.setOnClickListener(r3)
            com.kwad.sdk.core.response.model.AdInfo r4 = r3.mAdInfo
            boolean r4 = com.kwad.sdk.core.response.b.a.ax(r4)
            if (r4 == 0) goto L78
            r3.aZ()
        L78:
            return
    }

    @Override
    public final void ba() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.widget.RatioFrameLayout r0 = (com.kwad.sdk.widget.RatioFrameLayout) r0
            r1 = 4603219251149406208(0x3fe1eb8520000000, double:0.5600000023841858)
            r0.setRatio(r1)
            int r0 = com.kwad.sdk.R.id.ksad_ad_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ek = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_image
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.el = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_dislike
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.em = r0
            int r0 = com.kwad.sdk.R.id.ksad_feed_logo
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r3.mLogoView = r0
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_feed_text_immerse_image
            return r0
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.widget.TextView r0 = r1.ek
            if (r2 != r0) goto L7
            r0 = 25
            goto L10
        L7:
            android.widget.ImageView r0 = r1.el
            if (r2 != r0) goto Le
            r0 = 100
            goto L10
        Le:
            r0 = 35
        L10:
            r1.c(r2, r0)
            return
    }
}
