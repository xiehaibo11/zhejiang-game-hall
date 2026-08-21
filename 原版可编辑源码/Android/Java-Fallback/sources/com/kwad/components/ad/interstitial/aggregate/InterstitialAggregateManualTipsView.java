package com.kwad.components.ad.interstitial.aggregate;

public class InterstitialAggregateManualTipsView extends android.widget.LinearLayout implements android.view.View.OnClickListener {
    private com.kwad.components.ad.interstitial.aggregate.TransViewPager hL;
    private android.widget.ImageView ij;
    private android.widget.ImageView ik;
    private android.widget.ImageView il;
    private int im;
    private int io;
    private final android.support.v4.view.ViewPager.OnPageChangeListener iq;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private final android.content.Context mContext;


    public InterstitialAggregateManualTipsView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public InterstitialAggregateManualTipsView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public InterstitialAggregateManualTipsView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView$1 r2 = new com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView$1
            r2.<init>(r0)
            r0.iq = r2
            r0.mContext = r1
            r0.initView()
            return
    }

    static int a(com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0) {
            int r0 = r0.im
            return r0
    }

    static int a(com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0, int r1) {
            r0.im = r1
            return r1
    }

    static int b(com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0) {
            int r0 = r0.io
            return r0
    }

    static android.widget.ImageView c(com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0) {
            android.widget.ImageView r0 = r0.ij
            return r0
    }

    private void cv() {
            r3 = this;
            int r0 = r3.im
            int r1 = r3.io
            r2 = 1
            int r1 = r1 - r2
            if (r0 >= r1) goto Le
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r1 = r3.hL
            int r0 = r0 + r2
            r1.setCurrentItem(r0, r2)
        Le:
            return
    }

    static android.widget.ImageView d(com.kwad.components.ad.interstitial.aggregate.InterstitialAggregateManualTipsView r0) {
            android.widget.ImageView r0 = r0.ik
            return r0
    }

    private void initView() {
            r4 = this;
            android.content.Context r0 = r4.mContext
            int r1 = com.kwad.sdk.R.layout.ksad_interstitial_aggregate_manual_tips
            com.kwad.sdk.m.l.inflate(r0, r1, r4)
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_aggregate_cut
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.ij = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_aggregate_refresh
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.ik = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_aggregate_convert
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.il = r0
            r1 = 3
            android.view.View[] r1 = new android.view.View[r1]
            android.widget.ImageView r2 = r4.ij
            r3 = 0
            r1[r3] = r2
            android.widget.ImageView r2 = r4.ik
            r3 = 1
            r1[r3] = r2
            r2 = 2
            r1[r2] = r0
            com.kwad.sdk.d.a.a.a(r4, r1)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.components.ad.interstitial.aggregate.TransViewPager r5) {
            r3 = this;
            r3.mAdTemplate = r4
            r3.hL = r5
            int r0 = r5.getCurrentItem()
            r3.im = r0
            android.support.v4.view.PagerAdapter r5 = r5.getAdapter()
            com.kwad.components.ad.interstitial.aggregate.a r5 = (com.kwad.components.ad.interstitial.aggregate.a) r5
            if (r5 != 0) goto L13
            return
        L13:
            int r5 = r5.getCount()
            r3.io = r5
            com.kwad.components.ad.interstitial.aggregate.d r5 = new com.kwad.components.ad.interstitial.aggregate.d
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r0 = r3.hL
            android.content.Context r0 = r0.getContext()
            r5.<init>(r0)
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r0 = r3.hL
            r5.a(r0)
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r5 = r3.hL
            android.support.v4.view.ViewPager$OnPageChangeListener r0 = r3.iq
            r5.addOnPageChangeListener(r0)
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r4)
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.cY(r5)
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.cZ(r5)
            java.lang.String r5 = com.kwad.sdk.core.response.b.b.da(r5)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L69
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L69
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto L53
            goto L69
        L53:
            android.widget.ImageView r2 = r3.ij
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r0)
            android.widget.ImageView r0 = r3.ik
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1)
            android.widget.ImageView r0 = r3.il
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r5)
            r5 = 162(0xa2, float:2.27E-43)
            r0 = 0
            com.kwad.sdk.core.report.a.b(r4, r5, r0)
            return
        L69:
            r4 = 8
            r3.setVisibility(r4)
            return
    }

    @Override
    public void onClick(android.view.View r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.ij
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L13
            r1.cv()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            r0 = 162(0xa2, float:2.27E-43)
        Lf:
            com.kwad.sdk.core.report.a.q(r2, r0)
            return
        L13:
            android.widget.ImageView r0 = r1.ik
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L23
            r1.cv()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            r0 = 36
            goto Lf
        L23:
            android.widget.ImageView r0 = r1.il
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L38
            com.kwad.components.ad.interstitial.aggregate.TransViewPager r2 = r1.hL
            int r0 = r1.im
            com.kwad.components.ad.interstitial.f.c r2 = r2.x(r0)
            if (r2 == 0) goto L38
            r2.eu()
        L38:
            return
    }
}
