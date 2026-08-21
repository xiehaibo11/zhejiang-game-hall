package com.kwad.components.ad.reward;

public final class e {


    private static java.util.List<com.kwad.sdk.core.response.model.AdTemplate> a(com.kwad.sdk.internal.api.SceneImpl r5, java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r6) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = r6.isEmpty()
            if (r1 == 0) goto Lc
            return r0
        Lc:
            java.util.Iterator r6 = r6.iterator()
        L10:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L52
            java.lang.Object r1 = r6.next()
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            if (r1 == 0) goto L10
            com.kwad.sdk.internal.api.SceneImpl r2 = r1.mAdScene
            if (r2 != 0) goto L24
            r1.mAdScene = r5
        L24:
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r1)
            int r3 = com.kwad.sdk.core.response.b.a.aW(r2)
            boolean r4 = com.kwad.sdk.core.response.b.a.bK(r2)
            if (r4 == 0) goto L36
        L32:
            r0.add(r1)
            goto L10
        L36:
            boolean r4 = com.kwad.sdk.core.response.b.a.cw(r2)
            if (r4 == 0) goto L3d
            goto L32
        L3d:
            r4 = 1
            if (r4 != r3) goto L4b
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.F(r2)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L4b
            goto L32
        L4b:
            boolean r2 = com.kwad.sdk.core.response.b.a.aV(r2)
            if (r2 == 0) goto L10
            goto L32
        L52:
            return r0
    }

    static java.util.List b(com.kwad.sdk.internal.api.SceneImpl r0, java.util.List r1) {
            java.util.List r0 = a(r0, r1)
            return r0
    }

    public static void loadRewardVideoAd(com.kwad.sdk.api.KsScene r5, com.kwad.sdk.api.KsLoadManager.RewardVideoAdListener r6) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.internal.api.SceneImpl r5 = com.kwad.sdk.internal.api.SceneImpl.covert(r5)
            long r2 = r5.getPosId()
            r4 = 1
            com.kwad.components.ad.reward.monitor.a.a(r4, r2)
            com.kwad.components.core.t.k r2 = com.kwad.components.core.t.k.qo()
            java.lang.String r3 = "loadRewardVideoAd"
            boolean r2 = r2.a(r5, r3)
            r3 = 2
            r5.setAdStyle(r3)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r3 = new com.kwad.components.core.p.a.a$a
            r3.<init>()
            com.kwad.components.core.p.a.b r4 = new com.kwad.components.core.p.a.b
            r4.<init>(r5)
            com.kwad.components.core.p.a.a$a r3 = r3.e(r4)
            com.kwad.components.core.p.a.a$a r2 = r3.aF(r2)
            com.kwad.components.ad.reward.e$1 r3 = new com.kwad.components.ad.reward.e$1
            r3.<init>(r5, r6, r0)
            com.kwad.components.core.p.a.a$a r5 = r2.a(r3)
            com.kwad.components.core.p.a.a r5 = r5.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r5)
            return
    }
}
