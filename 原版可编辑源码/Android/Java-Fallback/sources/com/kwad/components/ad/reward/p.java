package com.kwad.components.ad.reward;

public final class p {
    public static void a(int r2, int r3, com.kwad.components.ad.reward.j r4, com.kwad.components.ad.reward.model.c r5) {
            r0 = 1
            if (r2 == 0) goto L54
            if (r2 == r0) goto L2e
            r1 = 2
            if (r2 == r1) goto L9
            goto L3f
        L9:
            com.kwad.components.ad.reward.k.b.a r2 = r4.pA
            boolean r2 = r2.jH()
            if (r3 != 0) goto L1b
            if (r2 == 0) goto L3f
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            com.kwad.sdk.core.report.a.m(r2, r0)
            return
        L1b:
            if (r2 == 0) goto L26
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            r3 = 3
            com.kwad.sdk.core.report.a.m(r2, r3)
            return
        L26:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            com.kwad.sdk.core.report.a.m(r2, r1)
            goto L3f
        L2e:
            com.kwad.components.ad.reward.k.a.a r2 = r4.pB
            boolean r2 = r2.jH()
            if (r3 != 0) goto L40
            if (r2 == 0) goto L3f
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            com.kwad.sdk.core.report.a.m(r2, r0)
        L3f:
            return
        L40:
            if (r2 == 0) goto L4b
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            r3 = 5
            com.kwad.sdk.core.report.a.m(r2, r3)
            return
        L4b:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            r3 = 4
            com.kwad.sdk.core.report.a.m(r2, r3)
            return
        L54:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.getAdTemplate()
            com.kwad.sdk.core.report.a.m(r2, r0)
            return
    }
}
