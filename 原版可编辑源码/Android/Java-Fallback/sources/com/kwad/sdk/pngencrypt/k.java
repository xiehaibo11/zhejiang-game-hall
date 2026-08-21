package com.kwad.sdk.pngencrypt;

public final class k {
    public final int aEG;
    public final int aEH;
    public final boolean aEI;
    public final boolean aEJ;
    public final boolean aEK;
    public final boolean aEL;
    public final int aEM;
    public final int aEN;
    public final int aEO;
    public final int aEP;
    public final int aEQ;
    private long aER;
    private long aES;
    public final int aEn;
    public final int aEo;

    public k(int r5, int r6, int r7, boolean r8, boolean r9, boolean r10) {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.aER = r0
            r4.aES = r0
            r4.aEo = r5
            r4.aEn = r6
            r4.aEI = r8
            r4.aEK = r10
            r4.aEJ = r9
            if (r9 == 0) goto L20
            if (r10 != 0) goto L18
            goto L20
        L18:
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r6 = "palette and greyscale are mutually exclusive"
            r5.<init>(r6)
            throw r5
        L20:
            r0 = 4
            r1 = 2
            r2 = 1
            if (r9 != 0) goto L2e
            if (r10 == 0) goto L28
            goto L2e
        L28:
            if (r8 == 0) goto L2c
            r8 = r0
            goto L33
        L2c:
            r8 = 3
            goto L33
        L2e:
            if (r8 == 0) goto L32
            r8 = r1
            goto L33
        L32:
            r8 = r2
        L33:
            r4.aEH = r8
            r4.aEG = r7
            r8 = 8
            if (r7 >= r8) goto L3d
            r7 = r2
            goto L3e
        L3d:
            r7 = 0
        L3e:
            r4.aEL = r7
            int r9 = r4.aEH
            int r10 = r4.aEG
            int r10 = r10 * r9
            r4.aEM = r10
            int r3 = r10 + 7
            int r3 = r3 / r8
            r4.aEN = r3
            int r10 = r10 * r5
            int r10 = r10 + 7
            int r10 = r10 / r8
            r4.aEO = r10
            int r3 = r4.aEo
            int r9 = r9 * r3
            r4.aEP = r9
            if (r7 == 0) goto L5a
            goto L5b
        L5a:
            r10 = r9
        L5b:
            r4.aEQ = r10
            int r7 = r4.aEG
            if (r7 == r2) goto L9c
            if (r7 == r1) goto L9c
            if (r7 == r0) goto L9c
            if (r7 == r8) goto Lbb
            r8 = 16
            if (r7 != r8) goto L86
            boolean r7 = r4.aEK
            if (r7 != 0) goto L70
            goto Lbb
        L70:
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "indexed can't have bitdepth="
            r6.<init>(r7)
            int r7 = r4.aEG
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        L86:
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "invalid bitdepth="
            r6.<init>(r7)
            int r7 = r4.aEG
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        L9c:
            boolean r7 = r4.aEK
            if (r7 != 0) goto Lbb
            boolean r7 = r4.aEJ
            if (r7 == 0) goto La5
            goto Lbb
        La5:
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "only indexed or grayscale can have bitdepth="
            r6.<init>(r7)
            int r7 = r4.aEG
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        Lbb:
            java.lang.String r7 = " ???"
            if (r5 <= 0) goto Leb
            r8 = 16777216(0x1000000, float:2.3509887E-38)
            if (r5 > r8) goto Leb
            if (r6 <= 0) goto Ld4
            if (r6 > r8) goto Ld4
            int r5 = r4.aEP
            if (r5 <= 0) goto Lcc
            return
        Lcc:
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r6 = "invalid image parameters (overflow?)"
            r5.<init>(r6)
            throw r5
        Ld4:
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "invalid rows="
            r8.<init>(r9)
            r8.append(r6)
            r8.append(r7)
            java.lang.String r6 = r8.toString()
            r5.<init>(r6)
            throw r5
        Leb:
            com.kwad.sdk.pngencrypt.PngjException r6 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "invalid cols="
            r8.<init>(r9)
            r8.append(r5)
            r8.append(r7)
            java.lang.String r5 = r8.toString()
            r6.<init>(r5)
            throw r6
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.kwad.sdk.pngencrypt.k r5 = (com.kwad.sdk.pngencrypt.k) r5
            boolean r2 = r4.aEI
            boolean r3 = r5.aEI
            if (r2 == r3) goto L1c
            return r1
        L1c:
            int r2 = r4.aEG
            int r3 = r5.aEG
            if (r2 == r3) goto L23
            return r1
        L23:
            int r2 = r4.aEo
            int r3 = r5.aEo
            if (r2 == r3) goto L2a
            return r1
        L2a:
            boolean r2 = r4.aEJ
            boolean r3 = r5.aEJ
            if (r2 == r3) goto L31
            return r1
        L31:
            boolean r2 = r4.aEK
            boolean r3 = r5.aEK
            if (r2 == r3) goto L38
            return r1
        L38:
            int r2 = r4.aEn
            int r5 = r5.aEn
            if (r2 == r5) goto L3f
            return r1
        L3f:
            return r0
    }

    public final int hashCode() {
            r4 = this;
            boolean r0 = r4.aEI
            r1 = 1231(0x4cf, float:1.725E-42)
            r2 = 1237(0x4d5, float:1.733E-42)
            if (r0 == 0) goto La
            r0 = r1
            goto Lb
        La:
            r0 = r2
        Lb:
            int r0 = r0 + 31
            int r0 = r0 * 31
            int r3 = r4.aEG
            int r0 = r0 + r3
            int r0 = r0 * 31
            int r3 = r4.aEo
            int r0 = r0 + r3
            int r0 = r0 * 31
            boolean r3 = r4.aEJ
            if (r3 == 0) goto L1f
            r3 = r1
            goto L20
        L1f:
            r3 = r2
        L20:
            int r0 = r0 + r3
            int r0 = r0 * 31
            boolean r3 = r4.aEK
            if (r3 == 0) goto L28
            goto L29
        L28:
            r1 = r2
        L29:
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r4.aEn
            int r0 = r0 + r1
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ImageInfo [cols="
            r0.<init>(r1)
            int r1 = r2.aEo
            r0.append(r1)
            java.lang.String r1 = ", rows="
            r0.append(r1)
            int r1 = r2.aEn
            r0.append(r1)
            java.lang.String r1 = ", bitDepth="
            r0.append(r1)
            int r1 = r2.aEG
            r0.append(r1)
            java.lang.String r1 = ", channels="
            r0.append(r1)
            int r1 = r2.aEH
            r0.append(r1)
            java.lang.String r1 = ", alpha="
            r0.append(r1)
            boolean r1 = r2.aEI
            r0.append(r1)
            java.lang.String r1 = ", greyscale="
            r0.append(r1)
            boolean r1 = r2.aEJ
            r0.append(r1)
            java.lang.String r1 = ", indexed="
            r0.append(r1)
            boolean r1 = r2.aEK
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
