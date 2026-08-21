package com.kwad.components.ad.reward.i;

public final class b {


    public static void a(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3, java.lang.String r4, int r5, org.json.JSONObject r6) {
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 18
            com.kwad.sdk.core.report.j r0 = r0.ci(r1)
            com.kwad.components.ad.reward.i.b$1 r1 = new com.kwad.components.ad.reward.i.b$1
            r1.<init>(r2, r5)
            r2 = 0
            r0.a(r3, r4, r2, r1)
            com.kwad.sdk.core.report.a.d(r3, r6, r0)
            return
    }

    public static void a(com.kwad.sdk.core.response.model.AdTemplate r1, java.lang.String r2, java.lang.String r3, com.kwad.sdk.core.report.j r4, org.json.JSONObject r5) {
            if (r4 != 0) goto L7
            com.kwad.sdk.core.report.j r4 = new com.kwad.sdk.core.report.j
            r4.<init>()
        L7:
            r0 = 0
            r4.a(r1, r2, r3, r0)
            com.kwad.sdk.core.report.a.a(r1, r4, r5)
            return
    }
}
