package com.kwad.components.ad.reward.model;

public enum EcOrderCardStyle extends java.lang.Enum<com.kwad.components.ad.reward.model.EcOrderCardStyle> {
    private static final com.kwad.components.ad.reward.model.EcOrderCardStyle[] $VALUES = null;
    public static final com.kwad.components.ad.reward.model.EcOrderCardStyle COUPON = null;
    public static final com.kwad.components.ad.reward.model.EcOrderCardStyle DEFAULT = null;
    public static final com.kwad.components.ad.reward.model.EcOrderCardStyle NO_SPIKE_AND_NO_COUPON = null;
    public static final com.kwad.components.ad.reward.model.EcOrderCardStyle SPIKE = null;
    public static final com.kwad.components.ad.reward.model.EcOrderCardStyle SPIKE_AND_COUPON = null;
    private int value;

    static {
            com.kwad.components.ad.reward.model.EcOrderCardStyle r0 = new com.kwad.components.ad.reward.model.EcOrderCardStyle
            r1 = 0
            r2 = 1
            java.lang.String r3 = "SPIKE_AND_COUPON"
            r0.<init>(r3, r1, r2)
            com.kwad.components.ad.reward.model.EcOrderCardStyle.SPIKE_AND_COUPON = r0
            com.kwad.components.ad.reward.model.EcOrderCardStyle r0 = new com.kwad.components.ad.reward.model.EcOrderCardStyle
            r3 = 2
            java.lang.String r4 = "SPIKE"
            r0.<init>(r4, r2, r3)
            com.kwad.components.ad.reward.model.EcOrderCardStyle.SPIKE = r0
            com.kwad.components.ad.reward.model.EcOrderCardStyle r0 = new com.kwad.components.ad.reward.model.EcOrderCardStyle
            r4 = 3
            java.lang.String r5 = "COUPON"
            r0.<init>(r5, r3, r4)
            com.kwad.components.ad.reward.model.EcOrderCardStyle.COUPON = r0
            com.kwad.components.ad.reward.model.EcOrderCardStyle r0 = new com.kwad.components.ad.reward.model.EcOrderCardStyle
            r5 = 4
            java.lang.String r6 = "NO_SPIKE_AND_NO_COUPON"
            r0.<init>(r6, r4, r5)
            com.kwad.components.ad.reward.model.EcOrderCardStyle.NO_SPIKE_AND_NO_COUPON = r0
            com.kwad.components.ad.reward.model.EcOrderCardStyle r0 = new com.kwad.components.ad.reward.model.EcOrderCardStyle
            r6 = 5
            java.lang.String r7 = "DEFAULT"
            r0.<init>(r7, r5, r6)
            com.kwad.components.ad.reward.model.EcOrderCardStyle.DEFAULT = r0
            com.kwad.components.ad.reward.model.EcOrderCardStyle[] r6 = new com.kwad.components.ad.reward.model.EcOrderCardStyle[r6]
            com.kwad.components.ad.reward.model.EcOrderCardStyle r7 = com.kwad.components.ad.reward.model.EcOrderCardStyle.SPIKE_AND_COUPON
            r6[r1] = r7
            com.kwad.components.ad.reward.model.EcOrderCardStyle r1 = com.kwad.components.ad.reward.model.EcOrderCardStyle.SPIKE
            r6[r2] = r1
            com.kwad.components.ad.reward.model.EcOrderCardStyle r1 = com.kwad.components.ad.reward.model.EcOrderCardStyle.COUPON
            r6[r3] = r1
            com.kwad.components.ad.reward.model.EcOrderCardStyle r1 = com.kwad.components.ad.reward.model.EcOrderCardStyle.NO_SPIKE_AND_NO_COUPON
            r6[r4] = r1
            r6[r5] = r0
            com.kwad.components.ad.reward.model.EcOrderCardStyle.$VALUES = r6
            return
    }

    EcOrderCardStyle(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.value = r3
            return
    }

    public static com.kwad.components.ad.reward.model.EcOrderCardStyle createFromAdInfo(com.kwad.sdk.core.response.model.AdInfo r2) {
            boolean r0 = com.kwad.components.ad.reward.a.b.k(r2)
            if (r0 != 0) goto Lf
            boolean r0 = com.kwad.components.ad.reward.a.b.j(r2)
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            if (r0 != 0) goto L14
            r2 = 0
            return r2
        L14:
            com.kwad.sdk.core.response.model.AdProductInfo r2 = com.kwad.sdk.core.response.b.a.cy(r2)
            boolean r0 = r2.hasSpike()
            boolean r1 = r2.hasCoupon()
            boolean r2 = r2.hasOriginalPrice()
            if (r0 == 0) goto L2b
            if (r1 == 0) goto L2b
            com.kwad.components.ad.reward.model.EcOrderCardStyle r2 = com.kwad.components.ad.reward.model.EcOrderCardStyle.SPIKE_AND_COUPON
            goto L3c
        L2b:
            if (r0 == 0) goto L30
            com.kwad.components.ad.reward.model.EcOrderCardStyle r2 = com.kwad.components.ad.reward.model.EcOrderCardStyle.SPIKE
            goto L3c
        L30:
            if (r1 == 0) goto L35
            com.kwad.components.ad.reward.model.EcOrderCardStyle r2 = com.kwad.components.ad.reward.model.EcOrderCardStyle.COUPON
            goto L3c
        L35:
            if (r2 == 0) goto L3a
            com.kwad.components.ad.reward.model.EcOrderCardStyle r2 = com.kwad.components.ad.reward.model.EcOrderCardStyle.NO_SPIKE_AND_NO_COUPON
            goto L3c
        L3a:
            com.kwad.components.ad.reward.model.EcOrderCardStyle r2 = com.kwad.components.ad.reward.model.EcOrderCardStyle.DEFAULT
        L3c:
            return r2
    }

    public static com.kwad.components.ad.reward.model.EcOrderCardStyle valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.components.ad.reward.model.EcOrderCardStyle> r0 = com.kwad.components.ad.reward.model.EcOrderCardStyle.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.components.ad.reward.model.EcOrderCardStyle r1 = (com.kwad.components.ad.reward.model.EcOrderCardStyle) r1
            return r1
    }

    public static com.kwad.components.ad.reward.model.EcOrderCardStyle[] values() {
            com.kwad.components.ad.reward.model.EcOrderCardStyle[] r0 = com.kwad.components.ad.reward.model.EcOrderCardStyle.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.components.ad.reward.model.EcOrderCardStyle[] r0 = (com.kwad.components.ad.reward.model.EcOrderCardStyle[]) r0
            return r0
    }

    public final int getValue() {
            r1 = this;
            int r0 = r1.value
            return r0
    }
}
