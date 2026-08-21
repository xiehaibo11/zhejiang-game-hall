package com.kwad.sdk.pngencrypt.chunk;

public final class m extends com.kwad.sdk.pngencrypt.chunk.p {
    private int aFT;
    private int[] aFU;

    public m(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "PLTE"
            r1.<init>(r0, r2)
            r2 = 0
            r1.aFT = r2
            return
    }

    private void a(int r2, int r3, int r4, int r5) {
            r1 = this;
            int[] r0 = r1.aFU
            int r3 = r3 << 16
            int r4 = r4 << 8
            r3 = r3 | r4
            r3 = r3 | r5
            r0[r2] = r3
            return
    }

    private void cZ(int r3) {
            r2 = this;
            r2.aFT = r3
            if (r3 <= 0) goto L16
            r0 = 256(0x100, float:3.59E-43)
            if (r3 > r0) goto L16
            int[] r0 = r2.aFU
            if (r0 == 0) goto Lf
            int r0 = r0.length
            if (r0 == r3) goto L15
        Lf:
            int r3 = r2.aFT
            int[] r3 = new int[r3]
            r2.aFU = r3
        L15:
            return
        L16:
            com.kwad.sdk.pngencrypt.PngjException r3 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "invalid pallette - nentries="
            r0.<init>(r1)
            int r1 = r2.aFT
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r7) {
            r6 = this;
            int r0 = r7.len
            int r0 = r0 / 3
            r6.cZ(r0)
            r0 = 0
            r1 = r0
        L9:
            int r2 = r6.aFT
            if (r0 >= r2) goto L2c
            byte[] r2 = r7.data
            int r3 = r1 + 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r2 = r7.data
            int r4 = r3 + 1
            r2 = r2[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte[] r3 = r7.data
            int r5 = r4 + 1
            r3 = r3[r4]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r6.a(r0, r1, r2, r3)
            int r0 = r0 + 1
            r1 = r5
            goto L9
        L2c:
            return
    }
}
