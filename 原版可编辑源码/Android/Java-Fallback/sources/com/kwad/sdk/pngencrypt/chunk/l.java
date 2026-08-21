package com.kwad.sdk.pngencrypt.chunk;

public final class l extends com.kwad.sdk.pngencrypt.chunk.p {
    private long aFQ;
    private long aFR;
    private int aFS;

    public l(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "oFFs"
            r1.<init>(r0, r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r8) {
            r7 = this;
            int r0 = r8.len
            r1 = 9
            if (r0 != r1) goto L3a
            byte[] r0 = r8.data
            r1 = 0
            int r0 = com.kwad.sdk.pngencrypt.n.g(r0, r1)
            long r0 = (long) r0
            r7.aFQ = r0
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = 4294967296(0x100000000, double:2.121995791E-314)
            if (r4 >= 0) goto L1e
            long r0 = r0 + r5
            r7.aFQ = r0
        L1e:
            byte[] r0 = r8.data
            r1 = 4
            int r0 = com.kwad.sdk.pngencrypt.n.g(r0, r1)
            long r0 = (long) r0
            r7.aFR = r0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L2f
            long r0 = r0 + r5
            r7.aFR = r0
        L2f:
            byte[] r8 = r8.data
            r0 = 8
            int r8 = com.kwad.sdk.pngencrypt.n.e(r8, r0)
            r7.aFS = r8
            return
        L3a:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "bad chunk length "
            r1.<init>(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }
}
