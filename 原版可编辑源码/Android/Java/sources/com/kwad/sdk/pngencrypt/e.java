package com.kwad.sdk.pngencrypt;

public final class e {
    final k aEl;
    private int aEn;
    private int aEo;
    int aEp;
    int aEq;
    int aEr;
    int aEs;
    int aEt;
    int aEu;
    private boolean aEz;
    private int aEm = 0;
    private int aEv = -1;
    private int aEw = -1;
    private int aEx = 0;
    int aEy = 0;

    public e(k kVar) {
        this.aEz = false;
        this.aEl = kVar;
        this.aEz = false;
        cJ(1);
        cI(0);
    }

    private int GK() {
        return GJ();
    }

    private void cI(int i) {
        this.aEv = i;
        int i2 = (i * this.aEp) + this.aEr;
        this.aEw = i2;
        if (i2 < 0 || i2 >= this.aEl.aEn) {
            throw new PngjException("bad row - this should not happen");
        }
    }

    private void cJ(int i) {
        int i2;
        int i3;
        if (this.aEm == i) {
            return;
        }
        this.aEm = i;
        byte[] bArrCK = cK(i);
        this.aEq = bArrCK[0];
        this.aEp = bArrCK[1];
        this.aEs = bArrCK[2];
        this.aEr = bArrCK[3];
        if (this.aEl.aEn > this.aEr) {
            int i4 = this.aEl.aEn;
            int i5 = this.aEp;
            i2 = (((i4 + i5) - 1) - this.aEr) / i5;
        } else {
            i2 = 0;
        }
        this.aEn = i2;
        if (this.aEl.aEo > this.aEs) {
            int i6 = this.aEl.aEo;
            int i7 = this.aEq;
            i3 = (((i6 + i7) - 1) - this.aEs) / i7;
        } else {
            i3 = 0;
        }
        this.aEo = i3;
        if (i3 == 0) {
            this.aEn = 0;
        }
        this.aEu = this.aEq * this.aEl.aEH;
        this.aEt = this.aEs * this.aEl.aEH;
    }

    private static byte[] cK(int i) {
        switch (i) {
            case 1:
                return new byte[]{8, 8, 0, 0};
            case 2:
                return new byte[]{8, 8, 4, 0};
            case 3:
                return new byte[]{4, 8, 0, 4};
            case 4:
                return new byte[]{4, 4, 2, 0};
            case 5:
                return new byte[]{2, 4, 0, 2};
            case 6:
                return new byte[]{2, 2, 1, 0};
            case 7:
                return new byte[]{1, 2, 0, 1};
            default:
                throw new PngjException("bad interlace pass" + i);
        }
    }

    final boolean GE() {
        int i;
        while (true) {
            this.aEx++;
            int i2 = this.aEn;
            if (i2 != 0 && (i = this.aEv) < i2 - 1) {
                cI(i + 1);
                break;
            }
            int i3 = this.aEm;
            if (i3 != 7) {
                cJ(i3 + 1);
                if (this.aEn != 0) {
                    cI(0);
                    break;
                }
                this.aEx--;
            } else {
                this.aEz = true;
                return false;
            }
        }
        return true;
    }

    final int GF() {
        return this.aEv;
    }

    final int GG() {
        return this.aEw;
    }

    final int GH() {
        return this.aEm;
    }

    final int GI() {
        return this.aEn;
    }

    final int GJ() {
        return this.aEo;
    }

    public final int GL() {
        return ((this.aEl.aEM * GK()) + 7) / 8;
    }
}
