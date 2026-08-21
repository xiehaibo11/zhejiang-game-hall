package com.kwad.components.ad.feed;

public final class f {
    public static java.lang.String c(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r0)
            boolean r1 = com.kwad.components.core.c.b.mi()
            if (r1 == 0) goto L27
            boolean r2 = r2.fromCache
            if (r2 == 0) goto L15
            java.lang.String r2 = "【cache】"
            goto L17
        L15:
            java.lang.String r2 = ""
        L17:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = r1.toString()
            return r2
        L27:
            return r0
    }
}
