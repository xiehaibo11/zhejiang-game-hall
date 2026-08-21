package com.kwad.components.ad.interstitial.e;

public final class a {


    public static boolean c(com.kwad.components.ad.interstitial.d.c r6) {
            com.kwad.components.ad.interstitial.d r0 = r6.hG
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.kwad.components.ad.interstitial.d r0 = r6.hG
            android.app.Activity r0 = r0.getOwnerActivity()
            if (r0 == 0) goto L6e
            boolean r2 = r0.isFinishing()
            if (r2 == 0) goto L15
            goto L6e
        L15:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            int r3 = com.kwad.components.ad.interstitial.b.b.cI()
            int r4 = com.kwad.components.ad.interstitial.b.b.cJ()
            int r5 = com.kwad.sdk.core.response.b.a.bW(r2)
            if (r3 <= r5) goto L6e
            int r3 = com.kwad.sdk.core.response.b.a.bX(r2)
            if (r4 >= r3) goto L6e
            int r3 = com.kwad.sdk.core.response.b.a.bY(r2)
            r4 = 2
            r5 = 1
            if (r3 != r4) goto L3b
            com.kwad.components.ad.interstitial.f.b.d(r6)
            return r5
        L3b:
            int r3 = com.kwad.sdk.core.response.b.a.bY(r2)
            if (r3 != r5) goto L6e
            com.kwad.components.core.page.widget.a r1 = new com.kwad.components.core.page.widget.a
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.cb(r2)
            com.kwad.components.ad.interstitial.e.a$1 r3 = new com.kwad.components.ad.interstitial.e.a$1
            r3.<init>(r6)
            r1.<init>(r0, r2, r3)
            r1.show()
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.mAdTemplate
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            r2 = 149(0x95, float:2.09E-43)
            com.kwad.sdk.core.report.j r1 = r1.ci(r2)
            r2 = 8
            com.kwad.sdk.core.report.j r1 = r1.ck(r2)
            com.kwad.sdk.core.report.a.d(r6, r0, r1)
            return r5
        L6e:
            return r1
    }
}
