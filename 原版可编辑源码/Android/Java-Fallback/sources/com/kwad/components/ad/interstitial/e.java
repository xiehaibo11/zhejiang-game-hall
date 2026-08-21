package com.kwad.components.ad.interstitial;

public final class e {



    public static void loadInterstitialAd(com.kwad.sdk.api.KsScene r5, com.kwad.sdk.api.KsLoadManager.InterstitialAdListener r6) {
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.hasInitFinish()
            if (r0 != 0) goto L1a
            java.lang.String r5 = "KsAdInterstitialLoadManager"
            java.lang.String r0 = "loadInterstitialAd please init sdk first"
            com.kwad.sdk.core.e.c.e(r5, r0)
            com.kwad.components.ad.interstitial.e$1 r5 = new com.kwad.components.ad.interstitial.e$1
            r5.<init>(r6)
            com.kwad.sdk.utils.bj.runOnUiThread(r5)
            return
        L1a:
            com.kwad.sdk.internal.api.SceneImpl r5 = com.kwad.sdk.internal.api.SceneImpl.covert(r5)
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.qo()
            java.lang.String r1 = "loadInterstitialAd"
            boolean r0 = r0.a(r5, r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            r3 = 13
            r5.setAdStyle(r3)
            com.kwad.components.ad.interstitial.monitor.b.cL()
            long r3 = r5.getPosId()
            com.kwad.components.ad.interstitial.monitor.b.g(r3)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r3 = new com.kwad.components.core.p.a.a$a
            r3.<init>()
            com.kwad.components.core.p.a.b r4 = new com.kwad.components.core.p.a.b
            r4.<init>(r5)
            com.kwad.components.core.p.a.a$a r3 = r3.e(r4)
            com.kwad.components.core.p.a.a$a r0 = r3.aF(r0)
            com.kwad.components.ad.interstitial.e$2 r3 = new com.kwad.components.ad.interstitial.e$2
            r3.<init>(r5, r6, r1)
            com.kwad.components.core.p.a.a$a r5 = r0.a(r3)
            com.kwad.components.core.p.a.a r5 = r5.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r5)
            return
    }
}
