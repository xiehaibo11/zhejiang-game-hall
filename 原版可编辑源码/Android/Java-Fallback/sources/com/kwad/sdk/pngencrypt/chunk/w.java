package com.kwad.sdk.pngencrypt.chunk;

public final class w {
    private final com.kwad.sdk.pngencrypt.chunk.e aGi;
    private final boolean aGj;

    public w(com.kwad.sdk.pngencrypt.chunk.e r1) {
            r0 = this;
            r0.<init>()
            r0.aGi = r1
            boolean r1 = r1 instanceof com.kwad.sdk.pngencrypt.chunk.f
            if (r1 == 0) goto Ld
            r1 = 0
        La:
            r0.aGj = r1
            return
        Ld:
            r1 = 1
            goto La
    }

    private java.util.List<? extends com.kwad.sdk.pngencrypt.chunk.t> fk(java.lang.String r4) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.pngencrypt.chunk.e r1 = r3.aGi
            java.lang.String r2 = "tEXt"
            java.util.List r1 = r1.aj(r2, r4)
            r0.addAll(r1)
            com.kwad.sdk.pngencrypt.chunk.e r1 = r3.aGi
            java.lang.String r2 = "zTXt"
            java.util.List r1 = r1.aj(r2, r4)
            r0.addAll(r1)
            com.kwad.sdk.pngencrypt.chunk.e r1 = r3.aGi
            java.lang.String r2 = "iTXt"
            java.util.List r4 = r1.aj(r2, r4)
            r0.addAll(r4)
            return r0
    }

    public final java.lang.String fl(java.lang.String r3) {
            r2 = this;
            java.util.List r3 = r2.fk(r3)
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Ld
            java.lang.String r3 = ""
            return r3
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r3.next()
            com.kwad.sdk.pngencrypt.chunk.t r1 = (com.kwad.sdk.pngencrypt.chunk.t) r1
            java.lang.String r1 = r1.Hk()
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            goto L16
        L2f:
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = r3.trim()
            return r3
    }
}
