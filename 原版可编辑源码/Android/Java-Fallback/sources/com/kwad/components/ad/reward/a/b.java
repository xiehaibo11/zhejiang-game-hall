package com.kwad.components.ad.reward.a;

public final class b {
    public static int gC() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qC
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static java.lang.String gD() {
            com.kwad.sdk.core.config.item.p r0 = com.kwad.components.ad.reward.a.a.qG
            java.lang.String r0 = r0.getValue()
            return r0
    }

    public static int gE() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qD
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean gF() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.reward.a.a.qF
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static int gG() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qE
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    private static boolean gH() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qI
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 != r1) goto Le
            return r1
        Le:
            r0 = 0
            return r0
    }

    public static float gI() {
            com.kwad.sdk.core.config.item.g r0 = com.kwad.components.ad.reward.a.a.qN
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            return r0
    }

    public static boolean gJ() {
            com.kwad.sdk.core.config.item.g r0 = com.kwad.components.ad.reward.a.a.qN
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L21
            com.kwad.sdk.core.config.item.g r0 = com.kwad.components.ad.reward.a.a.qN
            java.lang.Float r0 = r0.Ad()
            float r0 = r0.floatValue()
            r1 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L21
            r0 = 1
            return r0
        L21:
            r0 = 0
            return r0
    }

    public static boolean gK() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.reward.a.a.qO
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static long gL() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qL
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            long r0 = (long) r0
            return r0
    }

    public static int gM() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qM
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static int gN() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qP
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            return r0
    }

    public static boolean gO() {
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.reward.a.a.qQ
            java.lang.Boolean r0 = r0.Aa()
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean gP() {
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qR
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r1 = 1
            if (r0 == r1) goto L1d
            com.kwad.sdk.core.config.item.k r0 = com.kwad.components.ad.reward.a.a.qR
            java.lang.Integer r0 = r0.Af()
            int r0 = r0.intValue()
            r2 = 3
            if (r0 != r2) goto L1b
            goto L1d
        L1b:
            r0 = 0
            return r0
        L1d:
            return r1
    }

    public static boolean i(com.kwad.sdk.core.response.model.AdInfo r2) {
            boolean r0 = j(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r2 = com.kwad.sdk.core.response.b.a.cu(r2)
            if (r2 == 0) goto L16
            boolean r2 = gH()
            if (r2 == 0) goto L16
            r2 = 1
            return r2
        L16:
            return r1
    }

    public static boolean j(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r1 = com.kwad.sdk.core.response.b.a.cu(r1)
            if (r1 == 0) goto L14
            com.kwad.sdk.core.config.item.k r1 = com.kwad.components.ad.reward.a.a.qK
            java.lang.Integer r1 = r1.Af()
            int r1 = r1.intValue()
            r0 = 1
            if (r1 != r0) goto L14
            return r0
        L14:
            r1 = 0
            return r1
    }

    public static boolean k(com.kwad.sdk.core.response.model.AdInfo r0) {
            boolean r0 = i(r0)
            return r0
    }
}
