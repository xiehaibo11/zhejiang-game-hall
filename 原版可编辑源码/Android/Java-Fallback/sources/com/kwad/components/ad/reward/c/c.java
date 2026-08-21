package com.kwad.components.ad.reward.c;

public final class c {
    public static void a(com.kwad.components.ad.reward.c.b r0, com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r1) {
            if (r1 == 0) goto Lb
            if (r0 == 0) goto Lb
            int r0 = r0.getType()     // Catch: java.lang.Throwable -> Lb
            r1.onExtraRewardVerify(r0)     // Catch: java.lang.Throwable -> Lb
        Lb:
            return
    }

    public static boolean a(com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.Class r5 = r5.getClass()     // Catch: java.lang.Throwable -> L23
            java.lang.reflect.Method[] r5 = r5.getMethods()     // Catch: java.lang.Throwable -> L23
            int r1 = r5.length     // Catch: java.lang.Throwable -> L23
            r2 = r0
        Le:
            if (r2 >= r1) goto L23
            r3 = r5[r2]     // Catch: java.lang.Throwable -> L23
            java.lang.String r4 = "onExtraRewardVerify"
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L23
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Throwable -> L23
            if (r3 == 0) goto L20
            r5 = 1
            return r5
        L20:
            int r2 = r2 + 1
            goto Le
        L23:
            return r0
    }

    public static com.kwad.components.ad.reward.c.b ha() {
            com.kwad.components.ad.reward.c.b r0 = new com.kwad.components.ad.reward.c.b
            r1 = 1
            r0.<init>(r1)
            return r0
    }
}
