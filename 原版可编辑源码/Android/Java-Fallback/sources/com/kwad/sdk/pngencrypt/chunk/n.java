package com.kwad.sdk.pngencrypt.chunk;

public final class n extends com.kwad.sdk.pngencrypt.chunk.k {
    private java.lang.String aFV;
    private int aFW;
    private int[] aFX;

    public n(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "sPLT"
            r1.<init>(r0, r2)
            return
    }

    public final java.lang.String Hj() {
            r1 = this;
            java.lang.String r0 = r1.aFV
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r13) {
            r12 = this;
            r0 = 0
            r1 = r0
        L2:
            byte[] r2 = r13.data
            int r2 = r2.length
            if (r1 >= r2) goto L11
            byte[] r2 = r13.data
            r2 = r2[r1]
            if (r2 != 0) goto Le
            goto L12
        Le:
            int r1 = r1 + 1
            goto L2
        L11:
            r1 = -1
        L12:
            if (r1 <= 0) goto Lb5
            byte[] r2 = r13.data
            int r2 = r2.length
            int r2 = r2 + (-2)
            if (r1 > r2) goto Lb5
            byte[] r2 = r13.data
            java.lang.String r2 = com.kwad.sdk.pngencrypt.chunk.b.d(r2, r0, r1)
            r12.aFV = r2
            byte[] r2 = r13.data
            int r3 = r1 + 1
            int r2 = com.kwad.sdk.pngencrypt.n.e(r2, r3)
            r12.aFW = r2
            int r1 = r1 + 2
            byte[] r2 = r13.data
            int r2 = r2.length
            int r2 = r2 - r1
            int r3 = r12.aFW
            r4 = 8
            if (r3 != r4) goto L3b
            r3 = 6
            goto L3d
        L3b:
            r3 = 10
        L3d:
            int r2 = r2 / r3
            int r3 = r2 * 5
            int[] r3 = new int[r3]
            r12.aFX = r3
            r3 = r1
            r1 = r0
        L46:
            if (r0 >= r2) goto Lb4
            int r5 = r12.aFW
            if (r5 != r4) goto L6d
            byte[] r5 = r13.data
            int r6 = r3 + 1
            int r3 = com.kwad.sdk.pngencrypt.n.e(r5, r3)
            byte[] r5 = r13.data
            int r7 = r6 + 1
            int r5 = com.kwad.sdk.pngencrypt.n.e(r5, r6)
            byte[] r6 = r13.data
            int r8 = r7 + 1
            int r6 = com.kwad.sdk.pngencrypt.n.e(r6, r7)
            byte[] r7 = r13.data
            int r9 = r8 + 1
            int r7 = com.kwad.sdk.pngencrypt.n.e(r7, r8)
            goto L91
        L6d:
            byte[] r5 = r13.data
            int r5 = com.kwad.sdk.pngencrypt.n.f(r5, r3)
            int r3 = r3 + 2
            byte[] r6 = r13.data
            int r6 = com.kwad.sdk.pngencrypt.n.f(r6, r3)
            int r3 = r3 + 2
            byte[] r7 = r13.data
            int r7 = com.kwad.sdk.pngencrypt.n.f(r7, r3)
            int r3 = r3 + 2
            byte[] r8 = r13.data
            int r8 = com.kwad.sdk.pngencrypt.n.f(r8, r3)
            int r9 = r3 + 2
            r3 = r5
            r5 = r6
            r6 = r7
            r7 = r8
        L91:
            byte[] r8 = r13.data
            int r8 = com.kwad.sdk.pngencrypt.n.f(r8, r9)
            int r9 = r9 + 2
            int[] r10 = r12.aFX
            int r11 = r1 + 1
            r10[r1] = r3
            int r1 = r11 + 1
            r10[r11] = r5
            int r3 = r1 + 1
            r10[r1] = r6
            int r1 = r3 + 1
            r10[r3] = r7
            int r3 = r1 + 1
            r10[r1] = r8
            int r0 = r0 + 1
            r1 = r3
            r3 = r9
            goto L46
        Lb4:
            return
        Lb5:
            com.kwad.sdk.pngencrypt.PngjException r13 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r0 = "bad sPLT chunk: no separator found"
            r13.<init>(r0)
            throw r13
    }
}
