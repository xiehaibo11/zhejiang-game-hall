package com.kwad.sdk.core.videocache;

final class c {
    public final java.io.File awh;
    public final com.kwad.sdk.core.videocache.a.c awi;
    public final com.kwad.sdk.core.videocache.a.a awj;
    public final com.kwad.sdk.core.videocache.d.b awk;
    public final com.kwad.sdk.core.videocache.b.b awl;

    c(java.io.File r1, com.kwad.sdk.core.videocache.a.c r2, com.kwad.sdk.core.videocache.a.a r3, com.kwad.sdk.core.videocache.d.b r4, com.kwad.sdk.core.videocache.b.b r5) {
            r0 = this;
            r0.<init>()
            r0.awh = r1
            r0.awi = r2
            r0.awj = r3
            r0.awk = r4
            r0.awl = r5
            return
    }

    final java.io.File dK(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.videocache.a.c r0 = r2.awi
            java.lang.String r3 = r0.generate(r3)
            java.io.File r0 = new java.io.File
            java.io.File r1 = r2.awh
            r0.<init>(r1, r3)
            return r0
    }
}
