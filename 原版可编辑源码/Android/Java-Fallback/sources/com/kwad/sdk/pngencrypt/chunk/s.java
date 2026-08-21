package com.kwad.sdk.pngencrypt.chunk;

public final class s extends com.kwad.sdk.pngencrypt.chunk.p {
    private int aGc;
    private int aGd;
    private int aGe;
    private int aGf;
    private int[] aGg;

    public s(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "tRNS"
            r1.<init>(r0, r2)
            r2 = 0
            int[] r2 = new int[r2]
            r1.aGg = r2
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r5) {
            r4 = this;
            com.kwad.sdk.pngencrypt.k r0 = r4.aEC
            boolean r0 = r0.aEJ
            r1 = 0
            if (r0 == 0) goto L10
            byte[] r5 = r5.data
            int r5 = com.kwad.sdk.pngencrypt.n.f(r5, r1)
            r4.aGc = r5
            return
        L10:
            com.kwad.sdk.pngencrypt.k r0 = r4.aEC
            boolean r0 = r0.aEK
            if (r0 == 0) goto L2d
            byte[] r0 = r5.data
            int r0 = r0.length
            int[] r2 = new int[r0]
            r4.aGg = r2
        L1d:
            if (r1 >= r0) goto L2c
            int[] r2 = r4.aGg
            byte[] r3 = r5.data
            r3 = r3[r1]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2[r1] = r3
            int r1 = r1 + 1
            goto L1d
        L2c:
            return
        L2d:
            byte[] r0 = r5.data
            int r0 = com.kwad.sdk.pngencrypt.n.f(r0, r1)
            r4.aGd = r0
            byte[] r0 = r5.data
            r1 = 2
            int r0 = com.kwad.sdk.pngencrypt.n.f(r0, r1)
            r4.aGe = r0
            byte[] r5 = r5.data
            r0 = 4
            int r5 = com.kwad.sdk.pngencrypt.n.f(r5, r0)
            r4.aGf = r5
            return
    }
}
