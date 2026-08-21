package com.kwad.sdk.pngencrypt.chunk;

public final class j extends com.kwad.sdk.pngencrypt.chunk.t {
    private boolean aFN;
    private java.lang.String aFO;
    private java.lang.String aFP;

    public j(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "iTXt"
            r1.<init>(r0, r2)
            r2 = 0
            r1.aFN = r2
            java.lang.String r2 = ""
            r1.aFO = r2
            r1.aFP = r2
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r9) {
            r8 = this;
            r0 = 3
            int[] r1 = new int[r0]
            r2 = 0
            r3 = r2
            r4 = r3
        L6:
            byte[] r5 = r9.data
            int r5 = r5.length
            r6 = 1
            if (r3 >= r5) goto L1e
            byte[] r5 = r9.data
            r5 = r5[r3]
            if (r5 != 0) goto L1c
            r1[r4] = r3
            int r4 = r4 + 1
            if (r4 != r6) goto L1a
            int r3 = r3 + 2
        L1a:
            if (r4 == r0) goto L1e
        L1c:
            int r3 = r3 + r6
            goto L6
        L1e:
            if (r4 == r0) goto L2a
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r3 = "Bad formed PngChunkITXT chunk"
            r0.<init>(r3)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L2a:
            byte[] r0 = r9.data
            r3 = r1[r2]
            java.lang.String r0 = com.kwad.sdk.pngencrypt.chunk.b.d(r0, r2, r3)
            r8.key = r0
            r0 = r1[r2]
            int r0 = r0 + r6
            byte[] r3 = r9.data
            r3 = r3[r0]
            if (r3 != 0) goto L3f
            r3 = r2
            goto L40
        L3f:
            r3 = r6
        L40:
            r8.aFN = r3
            int r0 = r0 + r6
            if (r3 == 0) goto L55
            byte[] r3 = r9.data
            r3 = r3[r0]
            if (r3 == 0) goto L55
            com.kwad.sdk.pngencrypt.PngjException r3 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r4 = "Bad formed PngChunkITXT chunk - bad compression method "
            r3.<init>(r4)
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L55:
            byte[] r3 = r9.data
            r4 = r1[r6]
            int r4 = r4 - r0
            java.lang.String r0 = com.kwad.sdk.pngencrypt.chunk.b.d(r3, r0, r4)
            r8.aFO = r0
            byte[] r0 = r9.data
            r3 = r1[r6]
            int r3 = r3 + r6
            r4 = 2
            r5 = r1[r4]
            r7 = r1[r6]
            int r5 = r5 - r7
            int r5 = r5 - r6
            java.lang.String r0 = com.kwad.sdk.pngencrypt.chunk.b.e(r0, r3, r5)
            r8.aFP = r0
            r0 = r1[r4]
            int r0 = r0 + r6
            boolean r1 = r8.aFN
            byte[] r9 = r9.data
            if (r1 == 0) goto L88
            int r1 = r9.length
            int r1 = r1 - r0
            byte[] r9 = com.kwad.sdk.pngencrypt.chunk.b.b(r9, r0, r1, r2)
            java.lang.String r9 = com.kwad.sdk.pngencrypt.chunk.b.j(r9)
        L85:
            r8.aGh = r9
            return
        L88:
            int r1 = r9.length
            int r1 = r1 - r0
            java.lang.String r9 = com.kwad.sdk.pngencrypt.chunk.b.e(r9, r0, r1)
            goto L85
    }
}
