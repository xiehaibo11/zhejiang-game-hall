package com.kwad.sdk.pngencrypt.chunk;

public final class v extends com.kwad.sdk.pngencrypt.chunk.t {
    public v(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "zTXt"
            r1.<init>(r0, r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r5) {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            byte[] r2 = r5.data
            int r2 = r2.length
            if (r1 >= r2) goto L11
            byte[] r2 = r5.data
            r2 = r2[r1]
            if (r2 != 0) goto Le
            goto L12
        Le:
            int r1 = r1 + 1
            goto L2
        L11:
            r1 = -1
        L12:
            if (r1 < 0) goto L1b
            byte[] r2 = r5.data
            int r2 = r2.length
            int r2 = r2 + (-2)
            if (r1 <= r2) goto L25
        L1b:
            com.kwad.sdk.pngencrypt.PngjException r2 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r3 = "bad zTXt chunk: no separator found"
            r2.<init>(r3)
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L25:
            byte[] r2 = r5.data
            java.lang.String r2 = com.kwad.sdk.pngencrypt.chunk.b.d(r2, r0, r1)
            r4.key = r2
            byte[] r2 = r5.data
            int r3 = r1 + 1
            r2 = r2[r3]
            if (r2 == 0) goto L3f
            com.kwad.sdk.pngencrypt.PngjException r2 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r3 = "bad zTXt chunk: unknown compression method"
            r2.<init>(r3)
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L3f:
            byte[] r2 = r5.data
            int r3 = r1 + 2
            byte[] r5 = r5.data
            int r5 = r5.length
            int r5 = r5 - r1
            int r5 = r5 + (-2)
            byte[] r5 = com.kwad.sdk.pngencrypt.chunk.b.b(r2, r3, r5, r0)
            java.lang.String r5 = com.kwad.sdk.pngencrypt.chunk.b.i(r5)
            r4.aGh = r5
            return
    }
}
