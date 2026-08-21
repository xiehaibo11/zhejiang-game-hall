package com.kwad.components.ad.feed.monitor;

public final class a {
    public static android.util.Pair<java.lang.Integer, java.lang.String> d(com.kwad.sdk.core.response.model.AdTemplate r8) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r8)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 2
            if (r1 == 0) goto L1b
            android.util.Pair r8 = new android.util.Pair
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            java.lang.String r1 = "empty videoUrl"
            r8.<init>(r0, r1)
            return r8
        L1b:
            int r1 = com.kwad.sdk.core.config.d.zz()
            java.lang.String r3 = ""
            r4 = 0
            r6 = 1
            if (r1 >= 0) goto L50
            com.kwad.sdk.core.diskcache.b.a r1 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r1 = r1.bR(r0)
            boolean r7 = com.kwad.sdk.utils.q.L(r1)
            if (r7 == 0) goto L35
            goto L49
        L35:
            com.kwad.sdk.core.network.a.a$a r3 = new com.kwad.sdk.core.network.a.a$a
            r3.<init>()
            com.kwad.sdk.core.diskcache.b.a r7 = com.kwad.sdk.core.diskcache.b.a.Au()
            boolean r0 = r7.a(r0, r3)
            if (r0 == 0) goto L45
            r2 = r6
        L45:
            java.lang.String r0 = r3.msg
            r3 = r0
            r6 = r2
        L49:
            if (r1 == 0) goto L7c
            long r4 = r1.length()
            goto L7c
        L50:
            if (r1 <= 0) goto L7c
            com.kwad.sdk.core.network.a.a$a r3 = new com.kwad.sdk.core.network.a.a$a
            r3.<init>()
            com.kwad.sdk.KsAdSDKImpl r4 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r4 = r4.getContext()
            com.kwad.sdk.core.videocache.f r4 = com.kwad.sdk.core.videocache.c.a.bj(r4)
            boolean r5 = r4.dP(r0)
            if (r5 != 0) goto L73
            int r5 = r1 * 1024
            boolean r0 = r4.a(r0, r5, r3)
            if (r0 == 0) goto L72
            r2 = r6
        L72:
            r6 = r2
        L73:
            java.lang.String r3 = r3.msg
            int r1 = r1 * 1024
            long r0 = (long) r1
            r8.setDownloadSize(r0)
            goto L7f
        L7c:
            r8.setDownloadSize(r4)
        L7f:
            android.util.Pair r8 = new android.util.Pair
            java.lang.Integer r0 = java.lang.Integer.valueOf(r6)
            r8.<init>(r0, r3)
            return r8
    }
}
