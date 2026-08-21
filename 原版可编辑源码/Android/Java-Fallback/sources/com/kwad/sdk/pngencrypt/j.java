package com.kwad.sdk.pngencrypt;

public final class j extends com.kwad.sdk.pngencrypt.DeflatedChunksSet {
    protected final com.kwad.sdk.pngencrypt.e aDG;
    protected byte[] aEA;
    protected byte[] aEB;
    protected final com.kwad.sdk.pngencrypt.k aEC;
    final com.kwad.sdk.pngencrypt.p aED;
    protected int[] aEE;

    static class 1 {
        static final int[] aEF = null;

        static {
                com.kwad.sdk.pngencrypt.FilterType[] r0 = com.kwad.sdk.pngencrypt.FilterType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.pngencrypt.j.1.aEF = r0
                com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_NONE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.pngencrypt.j.1.aEF     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.sdk.pngencrypt.j.1.aEF     // Catch: java.lang.NoSuchFieldError -> L28
                com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_UP     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.kwad.sdk.pngencrypt.j.1.aEF     // Catch: java.lang.NoSuchFieldError -> L33
                com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_AVERAGE     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.kwad.sdk.pngencrypt.j.1.aEF     // Catch: java.lang.NoSuchFieldError -> L3e
                com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_PAETH     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    public j(java.lang.String r8, boolean r9, com.kwad.sdk.pngencrypt.k r10, com.kwad.sdk.pngencrypt.e r11) {
            r7 = this;
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private j(java.lang.String r8, boolean r9, com.kwad.sdk.pngencrypt.k r10, com.kwad.sdk.pngencrypt.e r11, java.util.zip.Inflater r12, byte[] r13) {
            r7 = this;
            if (r11 == 0) goto L7
            int r12 = r11.GL()
            goto L9
        L7:
            int r12 = r10.aEO
        L9:
            int r12 = r12 + 1
            r3 = r12
            int r12 = r10.aEO
            int r4 = r12 + 1
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r8 = 5
            int[] r8 = new int[r8]
            r7.aEE = r8
            r7.aEC = r10
            r7.aDG = r11
            com.kwad.sdk.pngencrypt.p r8 = new com.kwad.sdk.pngencrypt.p
            r8.<init>(r10, r11)
            r7.aED = r8
            java.lang.String r8 = "PNG_ENCRYPT"
            java.lang.String r9 = "Creating IDAT set "
            com.kwad.sdk.core.e.c.d(r8, r9)
            return
    }

    private void GM() {
            r1 = this;
            com.kwad.sdk.pngencrypt.p r0 = r1.aED
            int r0 = r0.aFk
            r1.cL(r0)
            return
    }

    private int GN() {
            r3 = this;
            com.kwad.sdk.pngencrypt.e r0 = r3.aDG
            r1 = 0
            if (r0 != 0) goto L19
            int r0 = r3.GD()
            com.kwad.sdk.pngencrypt.k r2 = r3.aEC
            int r2 = r2.aEn
            int r2 = r2 + (-1)
            if (r0 < r2) goto L12
            goto L26
        L12:
            com.kwad.sdk.pngencrypt.k r0 = r3.aEC
            int r0 = r0.aEO
        L16:
            int r1 = r0 + 1
            goto L26
        L19:
            boolean r0 = r0.GE()
            if (r0 == 0) goto L26
            com.kwad.sdk.pngencrypt.e r0 = r3.aDG
            int r0 = r0.GL()
            goto L16
        L26:
            boolean r0 = r3.aDJ
            if (r0 != 0) goto L2d
            r3.cH(r1)
        L2d:
            return r1
    }

    private void cL(int r8) {
            r7 = this;
            byte[] r0 = r7.aEA
            if (r0 == 0) goto La
            int r0 = r0.length
            byte[] r1 = r7.aDZ
            int r1 = r1.length
            if (r0 >= r1) goto L18
        La:
            byte[] r0 = r7.aDZ
            int r0 = r0.length
            byte[] r0 = new byte[r0]
            r7.aEA = r0
            byte[] r0 = r7.aDZ
            int r0 = r0.length
            byte[] r0 = new byte[r0]
            r7.aEB = r0
        L18:
            com.kwad.sdk.pngencrypt.p r0 = r7.aED
            int r0 = r0.aFh
            r1 = 0
            if (r0 != 0) goto L24
            byte[] r0 = r7.aEA
            java.util.Arrays.fill(r0, r1)
        L24:
            byte[] r0 = r7.aEA
            byte[] r2 = r7.aEB
            r7.aEA = r2
            r7.aEB = r0
            byte[] r0 = r7.aDZ
            r0 = r0[r1]
            boolean r2 = com.kwad.sdk.pngencrypt.FilterType.isValidStandard(r0)
            java.lang.String r3 = "Filter type "
            if (r2 == 0) goto L8d
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.getByVal(r0)
            int[] r4 = r7.aEE
            r5 = r4[r0]
            r6 = 1
            int r5 = r5 + r6
            r4[r0] = r5
            byte[] r4 = r7.aEA
            byte[] r5 = r7.aDZ
            r5 = r5[r1]
            r4[r1] = r5
            int[] r1 = com.kwad.sdk.pngencrypt.j.1.aEF
            int r2 = r2.ordinal()
            r1 = r1[r2]
            if (r1 == r6) goto L89
            r2 = 2
            if (r1 == r2) goto L85
            r2 = 3
            if (r1 == r2) goto L81
            r2 = 4
            if (r1 == r2) goto L7d
            r2 = 5
            if (r1 != r2) goto L66
            r7.cO(r8)
            return
        L66:
            com.kwad.sdk.pngencrypt.PngjException r8 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r3)
            r1.append(r0)
            java.lang.String r0 = " not implemented"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r8.<init>(r0)
            throw r8
        L7d:
            r7.cM(r8)
            return
        L81:
            r7.cQ(r8)
            return
        L85:
            r7.cP(r8)
            return
        L89:
            r7.cN(r8)
            return
        L8d:
            com.kwad.sdk.pngencrypt.PngjException r8 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r3)
            r1.append(r0)
            java.lang.String r0 = " invalid"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r8.<init>(r0)
            throw r8
    }

    private void cM(int r7) {
            r6 = this;
            com.kwad.sdk.pngencrypt.k r0 = r6.aEC
            int r0 = r0.aEN
            r1 = 1
            int r0 = 1 - r0
        L7:
            if (r1 > r7) goto L2b
            if (r0 <= 0) goto L12
            byte[] r2 = r6.aEA
            r2 = r2[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            goto L13
        L12:
            r2 = 0
        L13:
            byte[] r3 = r6.aEA
            byte[] r4 = r6.aDZ
            r4 = r4[r1]
            byte[] r5 = r6.aEB
            r5 = r5[r1]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r5
            int r2 = r2 / 2
            int r4 = r4 + r2
            byte r2 = (byte) r4
            r3[r1] = r2
            int r1 = r1 + 1
            int r0 = r0 + 1
            goto L7
        L2b:
            return
    }

    private void cN(int r4) {
            r3 = this;
            r0 = 1
        L1:
            if (r0 > r4) goto Le
            byte[] r1 = r3.aEA
            byte[] r2 = r3.aDZ
            r2 = r2[r0]
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1
        Le:
            return
    }

    private void cO(int r8) {
            r7 = this;
            com.kwad.sdk.pngencrypt.k r0 = r7.aEC
            int r0 = r0.aEN
            r1 = 1
            int r0 = 1 - r0
        L7:
            if (r1 > r8) goto L35
            r2 = 0
            if (r0 <= 0) goto L13
            byte[] r3 = r7.aEA
            r3 = r3[r0]
            r3 = r3 & 255(0xff, float:3.57E-43)
            goto L14
        L13:
            r3 = r2
        L14:
            if (r0 <= 0) goto L1c
            byte[] r2 = r7.aEB
            r2 = r2[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
        L1c:
            byte[] r4 = r7.aEA
            byte[] r5 = r7.aDZ
            r5 = r5[r1]
            byte[] r6 = r7.aEB
            r6 = r6[r1]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r2 = com.kwad.sdk.pngencrypt.n.b(r3, r6, r2)
            int r5 = r5 + r2
            byte r2 = (byte) r5
            r4[r1] = r2
            int r1 = r1 + 1
            int r0 = r0 + 1
            goto L7
        L35:
            return
    }

    private void cP(int r7) {
            r6 = this;
            r0 = 1
            r1 = r0
        L2:
            com.kwad.sdk.pngencrypt.k r2 = r6.aEC
            int r2 = r2.aEN
            if (r1 > r2) goto L13
            byte[] r2 = r6.aEA
            byte[] r3 = r6.aDZ
            r3 = r3[r1]
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2
        L13:
            com.kwad.sdk.pngencrypt.k r1 = r6.aEC
            int r1 = r1.aEN
            int r1 = r1 + r0
            r2 = r0
        L19:
            if (r1 > r7) goto L2d
            byte[] r3 = r6.aEA
            byte[] r4 = r6.aDZ
            r4 = r4[r1]
            byte[] r5 = r6.aEA
            r5 = r5[r2]
            int r4 = r4 + r5
            byte r4 = (byte) r4
            r3[r1] = r4
            int r1 = r1 + 1
            int r2 = r2 + r0
            goto L19
        L2d:
            return
    }

    private void cQ(int r5) {
            r4 = this;
            r0 = 1
        L1:
            if (r0 > r5) goto L14
            byte[] r1 = r4.aEA
            byte[] r2 = r4.aDZ
            r2 = r2[r0]
            byte[] r3 = r4.aEB
            r3 = r3[r0]
            int r2 = r2 + r3
            byte r2 = (byte) r2
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1
        L14:
            return
    }

    @Override
    protected final void GA() {
            r3 = this;
            super.GA()
            com.kwad.sdk.pngencrypt.p r0 = r3.aED
            int r1 = r3.GD()
            r0.update(r1)
            r3.GM()
            com.kwad.sdk.pngencrypt.p r0 = r3.aED
            byte[] r1 = r3.aEA
            int r2 = r0.aFk
            int r2 = r2 + 1
            r0.h(r1, r2)
            return
    }

    @Override
    protected final int GB() {
            r1 = this;
            int r0 = r1.GN()
            return r0
    }

    @Override
    public final void close() {
            r1 = this;
            super.close()
            r0 = 0
            r1.aEA = r0
            r1.aEB = r0
            return
    }
}
