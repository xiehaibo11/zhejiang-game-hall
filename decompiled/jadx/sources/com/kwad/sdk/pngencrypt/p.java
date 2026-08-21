package com.kwad.sdk.pngencrypt;

/* JADX INFO: loaded from: classes2.dex */
final class p {
    public final e aDG;
    public final k aEC;
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

    public p(k kVar, e eVar) {
        this.aEC = kVar;
        this.aDG = eVar;
        this.aFe = eVar != null;
    }

    final void h(byte[] bArr, int i) {
        this.buf = bArr;
        this.aFl = i;
    }

    final void update(int i) {
        int i2;
        this.aFf = i;
        if (this.aFe) {
            this.aEm = this.aDG.GH();
            this.aEq = this.aDG.aEq;
            this.aEp = this.aDG.aEp;
            this.aEs = this.aDG.aEs;
            this.aEr = this.aDG.aEr;
            this.aFg = this.aDG.GG();
            this.aFh = this.aDG.GF();
            this.aFi = this.aDG.GI();
            this.aFj = this.aDG.GJ();
            i2 = ((this.aEC.aEM * this.aFj) + 7) / 8;
        } else {
            this.aEm = 1;
            this.aEp = 1;
            this.aEq = 1;
            this.aEr = 0;
            this.aEs = 0;
            this.aFh = i;
            this.aFg = i;
            this.aFi = this.aEC.aEn;
            this.aFj = this.aEC.aEo;
            i2 = this.aEC.aEO;
        }
        this.aFk = i2;
    }
}
