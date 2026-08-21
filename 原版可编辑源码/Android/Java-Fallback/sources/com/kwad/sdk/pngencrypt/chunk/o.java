package com.kwad.sdk.pngencrypt.chunk;

public final class o extends com.kwad.sdk.pngencrypt.chunk.p {
    private byte aFY;

    public o(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "sTER"
            r1.<init>(r0, r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r4) {
            r3 = this;
            int r0 = r4.len
            r1 = 1
            if (r0 != r1) goto Ld
            byte[] r4 = r4.data
            r0 = 0
            r4 = r4[r0]
            r3.aFY = r4
            return
        Ld:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "bad chunk length "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
