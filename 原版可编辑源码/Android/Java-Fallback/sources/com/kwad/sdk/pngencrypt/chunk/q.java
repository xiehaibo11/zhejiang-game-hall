package com.kwad.sdk.pngencrypt.chunk;

public final class q extends com.kwad.sdk.pngencrypt.chunk.t {
    public q(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "tEXt"
            r1.<init>(r0, r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r4) {
            r3 = this;
            r0 = 0
            r1 = r0
        L2:
            byte[] r2 = r4.data
            int r2 = r2.length
            if (r1 >= r2) goto L10
            byte[] r2 = r4.data
            r2 = r2[r1]
            if (r2 == 0) goto L10
            int r1 = r1 + 1
            goto L2
        L10:
            byte[] r2 = r4.data
            java.lang.String r0 = com.kwad.sdk.pngencrypt.chunk.b.d(r2, r0, r1)
            r3.key = r0
            int r1 = r1 + 1
            byte[] r0 = r4.data
            int r0 = r0.length
            if (r1 >= r0) goto L28
            byte[] r4 = r4.data
            int r0 = r4.length
            int r0 = r0 - r1
            java.lang.String r4 = com.kwad.sdk.pngencrypt.chunk.b.d(r4, r1, r0)
            goto L2a
        L28:
            java.lang.String r4 = ""
        L2a:
            r3.aGh = r4
            return
    }
}
