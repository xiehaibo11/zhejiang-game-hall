package com.kwad.components.ad.interstitial.d;

public final class k extends com.kwad.components.ad.interstitial.d.b {
    private static int lg = 4;
    private com.kwad.components.ad.interstitial.d.c jf;
    private com.kwad.components.ad.interstitial.d.k.a le;
    private com.kwad.components.ad.interstitial.d.k.b lf;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    static class a {
        private android.widget.ImageView lh;
        private android.widget.TextView li;
        private android.widget.TextView lj;
        private com.kwad.components.ad.widget.KsPriceView lk;

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        static android.widget.ImageView a(com.kwad.components.ad.interstitial.d.k.a r0) {
                android.widget.ImageView r0 = r0.lh
                return r0
        }

        static android.widget.ImageView a(com.kwad.components.ad.interstitial.d.k.a r0, android.widget.ImageView r1) {
                r0.lh = r1
                return r1
        }

        static android.widget.TextView a(com.kwad.components.ad.interstitial.d.k.a r0, android.widget.TextView r1) {
                r0.li = r1
                return r1
        }

        static com.kwad.components.ad.widget.KsPriceView a(com.kwad.components.ad.interstitial.d.k.a r0, com.kwad.components.ad.widget.KsPriceView r1) {
                r0.lk = r1
                return r1
        }

        static android.widget.TextView b(com.kwad.components.ad.interstitial.d.k.a r0) {
                android.widget.TextView r0 = r0.li
                return r0
        }

        static android.widget.TextView b(com.kwad.components.ad.interstitial.d.k.a r0, android.widget.TextView r1) {
                r0.lj = r1
                return r1
        }

        static com.kwad.components.ad.widget.KsPriceView c(com.kwad.components.ad.interstitial.d.k.a r0) {
                com.kwad.components.ad.widget.KsPriceView r0 = r0.lk
                return r0
        }

        static android.widget.TextView d(com.kwad.components.ad.interstitial.d.k.a r0) {
                android.widget.TextView r0 = r0.lj
                return r0
        }
    }

    static class b {
        private java.lang.String appIconUrl;
        private java.lang.String ll;
        private java.lang.CharSequence lm;
        private java.lang.String ln;
        private java.lang.String lo;
        private java.lang.String price;

        b() {
                r0 = this;
                r0.<init>()
                return
        }

        public final void a(java.lang.CharSequence r1) {
                r0 = this;
                r0.lm = r1
                return
        }

        public final java.lang.String ed() {
                r1 = this;
                java.lang.String r0 = r1.ll
                return r0
        }

        public final java.lang.CharSequence ee() {
                r1 = this;
                java.lang.CharSequence r0 = r1.lm
                return r0
        }

        public final java.lang.String ef() {
                r1 = this;
                java.lang.String r0 = r1.ln
                return r0
        }

        public final java.lang.String eg() {
                r1 = this;
                java.lang.String r0 = r1.lo
                return r0
        }

        public final java.lang.String getAppIconUrl() {
                r1 = this;
                java.lang.String r0 = r1.appIconUrl
                return r0
        }

        public final java.lang.String getPrice() {
                r1 = this;
                java.lang.String r0 = r1.price
                return r0
        }

        public final void t(java.lang.String r1) {
                r0 = this;
                r0.appIconUrl = r1
                return
        }

        public final void u(java.lang.String r1) {
                r0 = this;
                r0.ll = r1
                return
        }

        public final void v(java.lang.String r1) {
                r0 = this;
                r0.ln = r1
                return
        }

        public final void w(java.lang.String r1) {
                r0 = this;
                r0.price = r1
                return
        }

        public final void x(java.lang.String r1) {
                r0 = this;
                r0.lo = r1
                return
        }
    }

    static {
            return
    }

    public k() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.interstitial.d.k$a r0 = new com.kwad.components.ad.interstitial.d.k$a
            r0.<init>()
            r1.le = r0
            com.kwad.components.ad.interstitial.d.k$b r0 = new com.kwad.components.ad.interstitial.d.k$b
            r0.<init>()
            r1.lf = r0
            return
    }

    private void a(com.kwad.components.ad.interstitial.d.k.a r6, com.kwad.components.ad.interstitial.d.k.b r7, com.kwad.sdk.core.response.model.AdInfo r8, com.kwad.sdk.core.response.model.AdTemplate r9) {
            r5 = this;
            android.widget.ImageView r0 = com.kwad.components.ad.interstitial.d.k.a.a(r6)
            java.lang.String r1 = r7.getAppIconUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 8
            r3 = 0
            if (r1 != 0) goto L40
            r0.setVisibility(r3)
            int r1 = com.kwad.sdk.core.response.b.a.bL(r8)
            r4 = 2
            if (r1 != r4) goto L31
            java.lang.String r9 = r7.getAppIconUrl()
            android.content.Context r1 = r5.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r4 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r4)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadCircleIcon(r0, r9, r1)
            goto L43
        L31:
            int r1 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            r0.setImageResource(r1)
            java.lang.String r1 = r7.getAppIconUrl()
            int r4 = com.kwad.components.ad.interstitial.d.k.lg
            com.kwad.sdk.core.imageloader.KSImageLoader.loadWithRadius(r0, r1, r9, r4)
            goto L43
        L40:
            r0.setVisibility(r2)
        L43:
            android.widget.TextView r9 = com.kwad.components.ad.interstitial.d.k.a.b(r6)
            java.lang.String r0 = r7.ed()
            r9.setText(r0)
            boolean r9 = com.kwad.components.ad.interstitial.a.b.cH()
            if (r9 == 0) goto L7d
            int r8 = com.kwad.sdk.core.response.b.a.bL(r8)
            r9 = 3
            if (r8 != r9) goto L7d
            com.kwad.components.ad.widget.KsPriceView r8 = com.kwad.components.ad.interstitial.d.k.a.c(r6)
            java.lang.String r9 = r7.getPrice()
            java.lang.String r0 = r7.ef()
            r1 = 1
            r8.d(r9, r0, r1)
            com.kwad.components.ad.widget.KsPriceView r8 = com.kwad.components.ad.interstitial.d.k.a.c(r6)
            r8.setVisibility(r3)
            android.widget.TextView r6 = com.kwad.components.ad.interstitial.d.k.a.d(r6)
            r6.setVisibility(r2)
            r5.ec()
            goto L88
        L7d:
            android.widget.TextView r6 = com.kwad.components.ad.interstitial.d.k.a.d(r6)
            java.lang.CharSequence r8 = r7.ee()
            r6.setText(r8)
        L88:
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.components.ad.interstitial.f.f r6 = r6.jg
            java.lang.String r7 = r7.eg()
            r6.g(r7, r3)
            return
    }

    private void d(com.kwad.sdk.core.response.model.AdInfo r4) {
            r3 = this;
            int r0 = com.kwad.sdk.core.response.b.a.bL(r4)
            r1 = 2
            if (r0 != r1) goto L49
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ct(r4)
            r0.t(r1)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bP(r4)
            r0.u(r1)
            int r0 = com.kwad.components.core.widget.e.Za
            android.text.SpannableString r0 = com.kwad.sdk.core.response.b.a.e(r4, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L29
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.cs(r4)
        L29:
            com.kwad.components.ad.interstitial.d.k$b r1 = r3.lf
            r1.a(r0)
            boolean r4 = com.kwad.sdk.core.response.b.a.cp(r4)
            if (r4 == 0) goto L3f
            com.kwad.components.ad.interstitial.d.k$b r4 = r3.lf
            java.lang.String r0 = com.kwad.components.ad.d.b.V()
            r4.x(r0)
            goto L121
        L3f:
            com.kwad.components.ad.interstitial.d.k$b r4 = r3.lf
            java.lang.String r0 = com.kwad.components.ad.d.b.Y()
            r4.x(r0)
            return
        L49:
            boolean r0 = com.kwad.components.ad.interstitial.a.b.cH()
            if (r0 == 0) goto L80
            int r0 = com.kwad.sdk.core.response.b.a.bL(r4)
            r1 = 3
            if (r0 != r1) goto L80
            com.kwad.sdk.core.response.model.AdProductInfo r4 = com.kwad.sdk.core.response.b.a.cy(r4)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = r4.icon
            r0.t(r1)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = r4.name
            r0.u(r1)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = r4.originPrice
            r0.v(r1)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r4 = r4.price
            r0.w(r4)
            com.kwad.components.ad.interstitial.d.k$b r4 = r3.lf
            java.lang.String r0 = com.kwad.components.ad.d.b.W()
            r4.x(r0)
            return
        L80:
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r4)
            if (r0 == 0) goto Ld4
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r4)
            r0.t(r1)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ao(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La3
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ao(r4)
        L9f:
            r0.u(r1)
            goto Lc1
        La3:
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r4.advertiserInfo
            java.lang.String r0 = r0.adAuthorText
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb4
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r1 = r4.advertiserInfo
            java.lang.String r1 = r1.adAuthorText
            goto L9f
        Lb4:
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            android.content.Context r1 = r3.getContext()
            int r2 = com.kwad.sdk.R.string.ksad_ad_default_username_normal
            java.lang.String r1 = r1.getString(r2)
            goto L9f
        Lc1:
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.an(r4)
            r0.a(r1)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.aw(r4)
            r0.x(r4)
            return
        Ld4:
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r4)
            r0.t(r1)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ap(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf1
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ap(r4)
        Led:
            r0.u(r1)
            goto L10f
        Lf1:
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r4.advertiserInfo
            java.lang.String r0 = r0.adAuthorText
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L102
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r1 = r4.advertiserInfo
            java.lang.String r1 = r1.adAuthorText
            goto Led
        L102:
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            android.content.Context r1 = r3.getContext()
            int r2 = com.kwad.sdk.R.string.ksad_ad_default_username_normal
            java.lang.String r1 = r1.getString(r2)
            goto Led
        L10f:
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.an(r4)
            r0.a(r1)
            com.kwad.components.ad.interstitial.d.k$b r0 = r3.lf
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.aw(r4)
            r0.x(r4)
        L121:
            return
    }

    private void ec() {
            r4 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r4.jf
            com.kwad.components.ad.interstitial.f.f r0 = r0.jg
            int r1 = com.kwad.sdk.R.id.ksad_ad_desc_layout
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.interstitial.d.c r1 = r4.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            int r2 = com.kwad.sdk.R.id.ksad_space
            android.view.View r1 = r1.findViewById(r2)
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r2 = (android.widget.LinearLayout.LayoutParams) r2
            r3 = 1076593951(0x402b851f, float:2.68)
            r2.weight = r3
            r0.setLayoutParams(r2)
            r0 = 8
            r1.setVisibility(r0)
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            java.lang.Object r0 = r4.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r4.jf = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.mAdTemplate = r0
            com.kwad.components.ad.interstitial.d.c r0 = r4.jf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            com.kwad.components.ad.interstitial.d.k$a r0 = r4.le
            com.kwad.components.ad.interstitial.d.c r1 = r4.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            int r2 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r1 = r1.findViewById(r2)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            com.kwad.components.ad.interstitial.d.k.a.a(r0, r1)
            com.kwad.components.ad.interstitial.d.k$a r0 = r4.le
            com.kwad.components.ad.interstitial.d.c r1 = r4.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            int r2 = com.kwad.sdk.R.id.ksad_app_title
            android.view.View r1 = r1.findViewById(r2)
            android.widget.TextView r1 = (android.widget.TextView) r1
            com.kwad.components.ad.interstitial.d.k.a.a(r0, r1)
            com.kwad.components.ad.interstitial.d.k$a r0 = r4.le
            com.kwad.components.ad.interstitial.d.c r1 = r4.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            int r2 = com.kwad.sdk.R.id.ksad_app_desc
            android.view.View r1 = r1.findViewById(r2)
            android.widget.TextView r1 = (android.widget.TextView) r1
            com.kwad.components.ad.interstitial.d.k.a.b(r0, r1)
            com.kwad.components.ad.interstitial.d.k$a r0 = r4.le
            com.kwad.components.ad.interstitial.d.c r1 = r4.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            int r2 = com.kwad.sdk.R.id.ksad_product_price
            android.view.View r1 = r1.findViewById(r2)
            com.kwad.components.ad.widget.KsPriceView r1 = (com.kwad.components.ad.widget.KsPriceView) r1
            com.kwad.components.ad.interstitial.d.k.a.a(r0, r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r4.d(r0)
            com.kwad.components.ad.interstitial.d.k$a r0 = r4.le
            com.kwad.components.ad.interstitial.d.k$b r1 = r4.lf
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            r4.a(r0, r1, r2, r3)
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            return
    }
}
