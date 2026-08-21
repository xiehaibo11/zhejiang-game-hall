package com.kwad.sdk.pngencrypt;

final class p {
    public final com.kwad.sdk.pngencrypt.e aDG;
    public final com.kwad.sdk.pngencrypt.k aEC;
    int aEm;
    int aEp;
    int aEq;
    int aEr;
    int aEs;
    public final boolean aFe;
    int aFf;
    int aFg;
    int aFh;
    int aFi;
    int aFj;
    int aFk;
    int aFl;
    byte[] buf;

    public p(com.kwad.sdk.pngencrypt.k r1, com.kwad.sdk.pngencrypt.e r2) {
            r0 = this;
            r0.<init>()
            r0.aEC = r1
            r0.aDG = r2
            if (r2 == 0) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = 0
        Lc:
            r0.aFe = r1
            return
    }

    final void h(byte[] r1, int r2) {
            r0 = this;
            r0.buf = r1
            r0.aFl = r2
            return
    }

    final void update(int r2) {
            r1 = this;
            r1.aFf = r2
            boolean r0 = r1.aFe
            if (r0 == 0) goto L54
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.GH()
            r1.aEm = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.aEq
            r1.aEq = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.aEp
            r1.aEp = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.aEs
            r1.aEs = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.aEr
            r1.aEr = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.GG()
            r1.aFg = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.GF()
            r1.aFh = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.GI()
            r1.aFi = r2
            com.kwad.sdk.pngencrypt.e r2 = r1.aDG
            int r2 = r2.GJ()
            r1.aFj = r2
            com.kwad.sdk.pngencrypt.k r2 = r1.aEC
            int r2 = r2.aEM
            int r0 = r1.aFj
            int r2 = r2 * r0
            int r2 = r2 + 7
            int r2 = r2 / 8
        L51:
            r1.aFk = r2
            return
        L54:
            r0 = 1
            r1.aEm = r0
            r1.aEp = r0
            r1.aEq = r0
            r0 = 0
            r1.aEr = r0
            r1.aEs = r0
            r1.aFh = r2
            r1.aFg = r2
            com.kwad.sdk.pngencrypt.k r2 = r1.aEC
            int r2 = r2.aEn
            r1.aFi = r2
            com.kwad.sdk.pngencrypt.k r2 = r1.aEC
            int r2 = r2.aEo
            r1.aFj = r2
            com.kwad.sdk.pngencrypt.k r2 = r1.aEC
            int r2 = r2.aEO
            goto L51
    }
}
