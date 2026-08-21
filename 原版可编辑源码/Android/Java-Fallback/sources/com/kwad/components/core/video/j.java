package com.kwad.components.core.video;

public final class j {
    public static boolean a(java.lang.String r6, java.lang.String r7, com.kwad.sdk.core.network.a.a.a r8) {
            java.lang.String r0 = com.kwad.sdk.utils.ad.bp(r7)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "start cache video key:"
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r4 = "--url:"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "VideoCacheHelper"
            com.kwad.sdk.core.e.c.i(r4, r3)
            com.kwad.sdk.core.diskcache.b.a r3 = com.kwad.sdk.core.diskcache.b.a.Au()
            boolean r6 = r3.b(r6, r7, r8)
            long r7 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r5 = "finish cache video key:"
            r3.<init>(r5)
            r3.append(r0)
            java.lang.String r0 = "--cache time:"
            r3.append(r0)
            long r7 = r7 - r1
            r3.append(r7)
            java.lang.String r7 = "--success:"
            r3.append(r7)
            r3.append(r6)
            java.lang.String r7 = r3.toString()
            com.kwad.sdk.core.e.c.i(r4, r7)
            return r6
    }

    public static boolean k(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r1)
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r1 = r0.bR(r1)
            if (r1 == 0) goto L1a
            boolean r1 = r1.exists()
            if (r1 == 0) goto L1a
            r1 = 1
            return r1
        L1a:
            r1 = 0
            return r1
    }
}
