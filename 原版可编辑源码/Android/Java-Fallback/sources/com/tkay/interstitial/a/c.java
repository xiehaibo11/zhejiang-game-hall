package com.tkay.interstitial.a;

public final class c implements com.tkay.interstitial.api.TYInterstitialExListener {
    com.tkay.interstitial.api.TYInterstitialAutoEventListener a;









    protected c(com.tkay.interstitial.api.TYInterstitialAutoEventListener r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void onDeeplinkCallback(com.tkay.core.api.TYAdInfo r3, boolean r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$1 r1 = new com.tkay.interstitial.a.c$1
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    @Override
    public final void onDownloadConfirm(android.content.Context r3, com.tkay.core.api.TYAdInfo r4, com.tkay.core.api.TYNetworkConfirmInfo r5) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$2 r1 = new com.tkay.interstitial.a.c$2
            r1.<init>(r2, r3, r4, r5)
            r0.a(r1)
            return
    }

    @Override
    public final void onInterstitialAdClicked(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$7 r1 = new com.tkay.interstitial.a.c$7
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onInterstitialAdClose(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$6 r1 = new com.tkay.interstitial.a.c$6
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onInterstitialAdLoadFail(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    public final void onInterstitialAdLoaded() {
            r0 = this;
            return
    }

    @Override
    public final void onInterstitialAdShow(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$8 r1 = new com.tkay.interstitial.a.c$8
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onInterstitialAdVideoEnd(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$4 r1 = new com.tkay.interstitial.a.c$4
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onInterstitialAdVideoError(com.tkay.core.api.AdError r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$5 r1 = new com.tkay.interstitial.a.c$5
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    @Override
    public final void onInterstitialAdVideoStart(com.tkay.core.api.TYAdInfo r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.interstitial.a.c$3 r1 = new com.tkay.interstitial.a.c$3
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}
