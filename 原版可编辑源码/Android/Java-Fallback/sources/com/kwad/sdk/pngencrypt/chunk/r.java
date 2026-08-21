package com.kwad.sdk.pngencrypt.chunk;

public final class r extends com.kwad.sdk.pngencrypt.chunk.p {
    private int aFZ;
    private int aGa;
    private int aGb;
    private int hour;
    private int min;
    private int year;

    public r(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "tIME"
            r1.<init>(r0, r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r4) {
            r3 = this;
            int r0 = r4.len
            r1 = 7
            if (r0 != r1) goto L3c
            byte[] r0 = r4.data
            r1 = 0
            int r0 = com.kwad.sdk.pngencrypt.n.f(r0, r1)
            r3.year = r0
            byte[] r0 = r4.data
            r1 = 2
            int r0 = com.kwad.sdk.pngencrypt.n.e(r0, r1)
            r3.aFZ = r0
            byte[] r0 = r4.data
            r1 = 3
            int r0 = com.kwad.sdk.pngencrypt.n.e(r0, r1)
            r3.aGa = r0
            byte[] r0 = r4.data
            r1 = 4
            int r0 = com.kwad.sdk.pngencrypt.n.e(r0, r1)
            r3.hour = r0
            byte[] r0 = r4.data
            r1 = 5
            int r0 = com.kwad.sdk.pngencrypt.n.e(r0, r1)
            r3.min = r0
            byte[] r4 = r4.data
            r0 = 6
            int r4 = com.kwad.sdk.pngencrypt.n.e(r4, r0)
            r3.aGb = r4
            return
        L3c:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "bad chunk "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
