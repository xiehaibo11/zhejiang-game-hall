package com.kwad.sdk.pngencrypt;

public final class e {
    final com.kwad.sdk.pngencrypt.k aEl;
    private int aEm;
    private int aEn;
    private int aEo;
    int aEp;
    int aEq;
    int aEr;
    int aEs;
    int aEt;
    int aEu;
    private int aEv;
    private int aEw;
    private int aEx;
    int aEy;
    private boolean aEz;

    public e(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.aEz = r0
            r1.aEl = r2
            r1.aEm = r0
            r2 = -1
            r1.aEv = r2
            r1.aEw = r2
            r1.aEx = r0
            r1.aEz = r0
            r1.aEy = r0
            r2 = 1
            r1.cJ(r2)
            r1.cI(r0)
            return
    }

    private int GK() {
            r1 = this;
            int r0 = r1.GJ()
            return r0
    }

    private void cI(int r2) {
            r1 = this;
            r1.aEv = r2
            int r0 = r1.aEp
            int r2 = r2 * r0
            int r0 = r1.aEr
            int r2 = r2 + r0
            r1.aEw = r2
            if (r2 < 0) goto L13
            com.kwad.sdk.pngencrypt.k r0 = r1.aEl
            int r0 = r0.aEn
            if (r2 >= r0) goto L13
            return
        L13:
            com.kwad.sdk.pngencrypt.PngjException r2 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r0 = "bad row - this should not happen"
            r2.<init>(r0)
            throw r2
    }

    private void cJ(int r5) {
            r4 = this;
            int r0 = r4.aEm
            if (r0 != r5) goto L5
            return
        L5:
            r4.aEm = r5
            byte[] r5 = cK(r5)
            r0 = 0
            r1 = r5[r0]
            r4.aEq = r1
            r1 = 1
            r2 = r5[r1]
            r4.aEp = r2
            r2 = 2
            r2 = r5[r2]
            r4.aEs = r2
            r2 = 3
            r5 = r5[r2]
            r4.aEr = r5
            com.kwad.sdk.pngencrypt.k r5 = r4.aEl
            int r5 = r5.aEn
            int r2 = r4.aEr
            if (r5 <= r2) goto L34
            com.kwad.sdk.pngencrypt.k r5 = r4.aEl
            int r5 = r5.aEn
            int r2 = r4.aEp
            int r5 = r5 + r2
            int r5 = r5 - r1
            int r3 = r4.aEr
            int r5 = r5 - r3
            int r5 = r5 / r2
            goto L35
        L34:
            r5 = r0
        L35:
            r4.aEn = r5
            com.kwad.sdk.pngencrypt.k r5 = r4.aEl
            int r5 = r5.aEo
            int r2 = r4.aEs
            if (r5 <= r2) goto L4c
            com.kwad.sdk.pngencrypt.k r5 = r4.aEl
            int r5 = r5.aEo
            int r2 = r4.aEq
            int r5 = r5 + r2
            int r5 = r5 - r1
            int r1 = r4.aEs
            int r5 = r5 - r1
            int r5 = r5 / r2
            goto L4d
        L4c:
            r5 = r0
        L4d:
            r4.aEo = r5
            if (r5 != 0) goto L53
            r4.aEn = r0
        L53:
            int r5 = r4.aEq
            com.kwad.sdk.pngencrypt.k r0 = r4.aEl
            int r0 = r0.aEH
            int r5 = r5 * r0
            r4.aEu = r5
            int r5 = r4.aEs
            com.kwad.sdk.pngencrypt.k r0 = r4.aEl
            int r0 = r0.aEH
            int r5 = r5 * r0
            r4.aEt = r5
            return
    }

    private static byte[] cK(int r3) {
            r0 = 4
            switch(r3) {
                case 1: goto L3c;
                case 2: goto L36;
                case 3: goto L30;
                case 4: goto L2a;
                case 5: goto L24;
                case 6: goto L1e;
                case 7: goto L18;
                default: goto L4;
            }
        L4:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "bad interlace pass"
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L18:
            byte[] r3 = new byte[r0]
            r3 = {x0054: FILL_ARRAY_DATA , data: [1, 2, 0, 1} // fill-array
            return r3
        L1e:
            byte[] r3 = new byte[r0]
            r3 = {x005a: FILL_ARRAY_DATA , data: [2, 2, 1, 0} // fill-array
            return r3
        L24:
            byte[] r3 = new byte[r0]
            r3 = {x0060: FILL_ARRAY_DATA , data: [2, 4, 0, 2} // fill-array
            return r3
        L2a:
            byte[] r3 = new byte[r0]
            r3 = {x0066: FILL_ARRAY_DATA , data: [4, 4, 2, 0} // fill-array
            return r3
        L30:
            byte[] r3 = new byte[r0]
            r3 = {x006c: FILL_ARRAY_DATA , data: [4, 8, 0, 4} // fill-array
            return r3
        L36:
            byte[] r3 = new byte[r0]
            r3 = {x0072: FILL_ARRAY_DATA , data: [8, 8, 4, 0} // fill-array
            return r3
        L3c:
            byte[] r3 = new byte[r0]
            r3 = {x0078: FILL_ARRAY_DATA , data: [8, 8, 0, 0} // fill-array
            return r3
    }

    final boolean GE() {
            r4 = this;
        L0:
            int r0 = r4.aEx
            r1 = 1
            int r0 = r0 + r1
            r4.aEx = r0
            int r0 = r4.aEn
            if (r0 == 0) goto L16
            int r2 = r4.aEv
            int r0 = r0 + (-1)
            if (r2 < r0) goto L11
            goto L16
        L11:
            int r2 = r2 + r1
            r4.cI(r2)
            goto L31
        L16:
            int r0 = r4.aEm
            r2 = 7
            r3 = 0
            if (r0 != r2) goto L1f
            r4.aEz = r1
            return r3
        L1f:
            int r0 = r0 + 1
            r4.cJ(r0)
            int r0 = r4.aEn
            if (r0 != 0) goto L2e
            int r0 = r4.aEx
            int r0 = r0 - r1
            r4.aEx = r0
            goto L0
        L2e:
            r4.cI(r3)
        L31:
            return r1
    }

    final int GF() {
            r1 = this;
            int r0 = r1.aEv
            return r0
    }

    final int GG() {
            r1 = this;
            int r0 = r1.aEw
            return r0
    }

    final int GH() {
            r1 = this;
            int r0 = r1.aEm
            return r0
    }

    final int GI() {
            r1 = this;
            int r0 = r1.aEn
            return r0
    }

    final int GJ() {
            r1 = this;
            int r0 = r1.aEo
            return r0
    }

    public final int GL() {
            r2 = this;
            com.kwad.sdk.pngencrypt.k r0 = r2.aEl
            int r0 = r0.aEM
            int r1 = r2.GK()
            int r0 = r0 * r1
            int r0 = r0 + 7
            int r0 = r0 / 8
            return r0
    }
}
