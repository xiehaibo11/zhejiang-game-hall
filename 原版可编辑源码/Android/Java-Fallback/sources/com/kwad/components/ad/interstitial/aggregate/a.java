package com.kwad.components.ad.interstitial.aggregate;

public final class a extends android.support.v4.view.PagerAdapter {
    private final com.kwad.sdk.api.KsAdVideoPlayConfig dJ;
    private final com.kwad.components.ad.interstitial.d hG;
    private final boolean hH;
    private com.kwad.components.ad.interstitial.aggregate.a.b hI;
    private com.kwad.components.ad.interstitial.aggregate.a.a hJ;
    private final com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener hz;
    private final java.util.List<com.kwad.sdk.core.response.model.AdTemplate> mAdTemplateList;


    public interface a {
        void cl();
    }

    public interface b {
        void a(com.kwad.components.ad.interstitial.f.c r1, int r2);
    }

    public a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.ad.interstitial.d r3, com.kwad.sdk.api.KsAdVideoPlayConfig r4, com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r5) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mAdTemplateList = r0
            r1.hG = r3
            r1.dJ = r4
            r1.hz = r5
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            int r2 = com.kwad.sdk.core.response.b.a.cd(r2)
            r3 = 1
            if (r2 != r3) goto L1c
            goto L1d
        L1c:
            r3 = 0
        L1d:
            r1.hH = r3
            return
    }

    static com.kwad.components.ad.interstitial.aggregate.a.a a(com.kwad.components.ad.interstitial.aggregate.a r0) {
            com.kwad.components.ad.interstitial.aggregate.a$a r0 = r0.hJ
            return r0
    }

    public final void a(com.kwad.components.ad.interstitial.aggregate.a.a r1) {
            r0 = this;
            r0.hJ = r1
            return
    }

    public final void a(com.kwad.components.ad.interstitial.aggregate.a.b r1) {
            r0 = this;
            r0.hI = r1
            return
    }

    @Override
    public final void destroyItem(android.view.ViewGroup r1, int r2, java.lang.Object r3) {
            r0 = this;
            boolean r2 = r3 instanceof android.view.View
            if (r2 == 0) goto L9
            android.view.View r3 = (android.view.View) r3
            r1.removeView(r3)
        L9:
            return
    }

    @Override
    public final int getCount() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.mAdTemplateList
            int r0 = r0.size()
            return r0
    }

    @Override
    public final java.lang.Object instantiateItem(android.view.ViewGroup r5, int r6) {
            r4 = this;
            com.kwad.components.ad.interstitial.f.c r0 = new com.kwad.components.ad.interstitial.f.c
            android.content.Context r1 = r5.getContext()
            r0.<init>(r1)
            r5.addView(r0)
            r5 = 1
            if (r6 <= 0) goto L11
            r1 = r5
            goto L12
        L11:
            r1 = 0
        L12:
            r0.setAggregateAdView(r1)
            if (r6 != 0) goto L1f
            com.kwad.components.ad.interstitial.aggregate.a$1 r1 = new com.kwad.components.ad.interstitial.aggregate.a$1
            r1.<init>(r4)
            r0.setAdConvertListener(r1)
        L1f:
            if (r6 <= 0) goto L2d
            r1 = 7
            if (r6 != r5) goto L2a
            boolean r5 = r4.hH
            if (r5 == 0) goto L2a
            r1 = 8
        L2a:
            r0.setAggregateShowTriggerType(r1)
        L2d:
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r5 = r4.mAdTemplateList
            java.lang.Object r5 = r5.get(r6)
            com.kwad.sdk.core.response.model.AdTemplate r5 = (com.kwad.sdk.core.response.model.AdTemplate) r5
            com.kwad.components.ad.interstitial.d r1 = r4.hG
            com.kwad.sdk.api.KsAdVideoPlayConfig r2 = r4.dJ
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r3 = r4.hz
            r0.a(r5, r1, r2, r3)
            com.kwad.components.ad.interstitial.aggregate.a$b r5 = r4.hI
            if (r5 == 0) goto L45
            r5.a(r0, r6)
        L45:
            return r0
    }

    @Override
    public final boolean isViewFromObject(android.view.View r1, java.lang.Object r2) {
            r0 = this;
            if (r1 != r2) goto L4
            r1 = 1
            return r1
        L4:
            r1 = 0
            return r1
    }

    public final void setAdTemplateList(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r2) {
            r1 = this;
            if (r2 == 0) goto L12
            int r0 = r2.size()
            if (r0 <= 0) goto L12
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.mAdTemplateList
            r0.clear()
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.mAdTemplateList
            r0.addAll(r2)
        L12:
            return
    }
}
