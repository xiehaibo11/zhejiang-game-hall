package com.kwad.components.ad.interstitial.a;

public final class b {
    public static int b(com.kwad.sdk.core.response.model.AdInfo r3) {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iP
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r3)
            r2 = 60
            if (r1 == 0) goto L1f
            int r3 = com.kwad.sdk.core.response.b.a.G(r3)
            if (r0 != 0) goto L1a
            r0 = r3
            goto L24
        L1a:
            int r0 = java.lang.Math.min(r0, r3)
            goto L24
        L1f:
            if (r0 > r2) goto L23
            if (r0 > 0) goto L24
        L23:
            r0 = r2
        L24:
            return r0
    }

    public static boolean cA() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.interstitial.a.a.iR
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean cB() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iL
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int cC() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iM
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean cD() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iN
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean cE() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iO
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static int cF() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iT
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean cG() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iQ
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static boolean cH() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.interstitial.a.a.iS
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }
}
