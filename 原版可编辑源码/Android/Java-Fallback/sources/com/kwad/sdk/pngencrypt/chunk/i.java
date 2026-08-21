package com.kwad.sdk.pngencrypt.chunk;

public final class i extends com.kwad.sdk.pngencrypt.chunk.p {
    private int aEn;
    private int aEo;
    private int aFI;
    private int aFJ;
    private int aFK;
    private int aFL;
    private int aFM;

    public i(com.kwad.sdk.pngencrypt.k r2) {
            r1 = this;
            java.lang.String r0 = "IHDR"
            r1.<init>(r0, r2)
            if (r2 == 0) goto La
            r1.Hg()
        La:
            return
    }

    private int GI() {
            r1 = this;
            int r0 = r1.aEn
            return r0
    }

    private int GJ() {
            r1 = this;
            int r0 = r1.aEo
            return r0
    }

    private int Hc() {
            r1 = this;
            int r0 = r1.aFI
            return r0
    }

    private int Hd() {
            r1 = this;
            int r0 = r1.aFJ
            return r0
    }

    private int He() {
            r1 = this;
            int r0 = r1.aFM
            return r0
    }

    private void Hg() {
            r3 = this;
            com.kwad.sdk.pngencrypt.k r0 = r3.aEC
            int r0 = r0.aEo
            r3.cS(r0)
            com.kwad.sdk.pngencrypt.k r0 = r3.aEC
            int r0 = r0.aEn
            r3.cT(r0)
            com.kwad.sdk.pngencrypt.k r0 = r3.aEC
            int r0 = r0.aEG
            r3.cU(r0)
            com.kwad.sdk.pngencrypt.k r0 = r3.aEC
            boolean r0 = r0.aEI
            r1 = 0
            if (r0 == 0) goto L1e
            r0 = 4
            goto L1f
        L1e:
            r0 = r1
        L1f:
            com.kwad.sdk.pngencrypt.k r2 = r3.aEC
            boolean r2 = r2.aEK
            if (r2 == 0) goto L27
            int r0 = r0 + 1
        L27:
            com.kwad.sdk.pngencrypt.k r2 = r3.aEC
            boolean r2 = r2.aEJ
            if (r2 != 0) goto L2f
            int r0 = r0 + 2
        L2f:
            r3.cV(r0)
            r3.cW(r1)
            r3.cX(r1)
            r3.cY(r1)
            return
    }

    private void Hi() {
            r7 = this;
            int r0 = r7.aEo
            if (r0 <= 0) goto L6a
            int r0 = r7.aEn
            if (r0 <= 0) goto L6a
            int r0 = r7.aFK
            if (r0 != 0) goto L6a
            int r0 = r7.aFL
            if (r0 != 0) goto L6a
            int r0 = r7.aFI
            r1 = 8
            r2 = 4
            r3 = 2
            r4 = 1
            java.lang.String r5 = "bad IHDR: bitdepth invalid"
            r6 = 16
            if (r0 == r4) goto L2c
            if (r0 == r3) goto L2c
            if (r0 == r2) goto L2c
            if (r0 == r1) goto L2c
            if (r0 != r6) goto L26
            goto L2c
        L26:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            r0.<init>(r5)
            throw r0
        L2c:
            int r0 = r7.aFM
            if (r0 < 0) goto L62
            if (r0 > r4) goto L62
            int r0 = r7.aFJ
            if (r0 == 0) goto L61
            r4 = 6
            if (r0 == r4) goto L54
            if (r0 == r3) goto L54
            r3 = 3
            if (r0 == r3) goto L49
            if (r0 != r2) goto L41
            goto L54
        L41:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "bad IHDR: invalid colormodel"
            r0.<init>(r1)
            throw r0
        L49:
            int r0 = r7.aFI
            if (r0 == r6) goto L4e
            goto L61
        L4e:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            r0.<init>(r5)
            throw r0
        L54:
            int r0 = r7.aFI
            if (r0 == r1) goto L61
            if (r0 != r6) goto L5b
            goto L61
        L5b:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            r0.<init>(r5)
            throw r0
        L61:
            return
        L62:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "bad IHDR: interlace invalid"
            r0.<init>(r1)
            throw r0
        L6a:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "bad IHDR: col/row/compmethod/filmethod invalid"
            r0.<init>(r1)
            throw r0
    }

    private void cS(int r1) {
            r0 = this;
            r0.aEo = r1
            return
    }

    private void cT(int r1) {
            r0 = this;
            r0.aEn = r1
            return
    }

    private void cU(int r1) {
            r0 = this;
            r0.aFI = r1
            return
    }

    private void cV(int r1) {
            r0 = this;
            r0.aFJ = r1
            return
    }

    private void cW(int r1) {
            r0 = this;
            r1 = 0
            r0.aFK = r1
            return
    }

    private void cX(int r1) {
            r0 = this;
            r1 = 0
            r0.aFL = r1
            return
    }

    private void cY(int r1) {
            r0 = this;
            r1 = 0
            r0.aFM = r1
            return
    }

    public final boolean Hf() {
            r2 = this;
            int r0 = r2.He()
            r1 = 1
            if (r0 != r1) goto L8
            return r1
        L8:
            r0 = 0
            return r0
    }

    public final com.kwad.sdk.pngencrypt.k Hh() {
            r11 = this;
            r11.Hi()
            int r0 = r11.Hd()
            r1 = 4
            r0 = r0 & r1
            r2 = 0
            r3 = 1
            if (r0 == 0) goto Lf
            r8 = r3
            goto L10
        Lf:
            r8 = r2
        L10:
            int r0 = r11.Hd()
            r0 = r0 & r3
            if (r0 == 0) goto L19
            r10 = r3
            goto L1a
        L19:
            r10 = r2
        L1a:
            int r0 = r11.Hd()
            if (r0 == 0) goto L29
            int r0 = r11.Hd()
            if (r0 != r1) goto L27
            goto L29
        L27:
            r9 = r2
            goto L2a
        L29:
            r9 = r3
        L2a:
            com.kwad.sdk.pngencrypt.k r0 = new com.kwad.sdk.pngencrypt.k
            int r5 = r11.GJ()
            int r6 = r11.GI()
            int r7 = r11.Hc()
            r4 = r0
            r4.<init>(r5, r6, r7, r8, r9, r10)
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.pngencrypt.chunk.d r4) {
            r3 = this;
            int r0 = r4.len
            r1 = 13
            if (r0 != r1) goto L35
            java.io.ByteArrayInputStream r4 = r4.GY()
            int r0 = com.kwad.sdk.pngencrypt.n.f(r4)
            r3.aEo = r0
            int r0 = com.kwad.sdk.pngencrypt.n.f(r4)
            r3.aEn = r0
            int r0 = com.kwad.sdk.pngencrypt.n.e(r4)
            r3.aFI = r0
            int r0 = com.kwad.sdk.pngencrypt.n.e(r4)
            r3.aFJ = r0
            int r0 = com.kwad.sdk.pngencrypt.n.e(r4)
            r3.aFK = r0
            int r0 = com.kwad.sdk.pngencrypt.n.e(r4)
            r3.aFL = r0
            int r4 = com.kwad.sdk.pngencrypt.n.e(r4)
            r3.aFM = r4
            return
        L35:
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Bad IDHR len "
            r1.<init>(r2)
            int r4 = r4.len
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
