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
    private long aER = -1;
    private long aES = -1;
    public final int aEn;
    public final int aEo;

    public k(int i, int i2, int i3, boolean z, boolean z2, boolean z3) {
        this.aEo = i;
        this.aEn = i2;
        this.aEI = z;
        this.aEK = z3;
        this.aEJ = z2;
        if (z2 && z3) {
            throw new PngjException("palette and greyscale are mutually exclusive");
        }
        this.aEH = (z2 || z3) ? z ? 2 : 1 : z ? 4 : 3;
        this.aEG = i3;
        boolean z4 = i3 < 8;
        this.aEL = z4;
        int i4 = this.aEH;
        int i5 = this.aEG * i4;
        this.aEM = i5;
        this.aEN = (i5 + 7) / 8;
        int i6 = ((i5 * i) + 7) / 8;
        this.aEO = i6;
        int i7 = i4 * this.aEo;
        this.aEP = i7;
        this.aEQ = z4 ? i6 : i7;
        int i8 = this.aEG;
        if (i8 == 1 || i8 == 2 || i8 == 4) {
            if (!this.aEK && !this.aEJ) {
                throw new PngjException("only indexed or grayscale can have bitdepth=" + this.aEG);
            }
        } else if (i8 != 8) {
            if (i8 != 16) {
                throw new PngjException("invalid bitdepth=" + this.aEG);
            }
            if (this.aEK) {
                throw new PngjException("indexed can't have bitdepth=" + this.aEG);
            }
        }
        if (i <= 0 || i > 16777216) {
            throw new PngjException("invalid cols=" + i + " ???");
        }
        if (i2 > 0 && i2 <= 16777216) {
            if (this.aEP <= 0) {
                throw new PngjException("invalid image parameters (overflow?)");
            }
        } else {
            throw new PngjException("invalid rows=" + i2 + " ???");
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        k kVar = (k) obj;
        return this.aEI == kVar.aEI && this.aEG == kVar.aEG && this.aEo == kVar.aEo && this.aEJ == kVar.aEJ && this.aEK == kVar.aEK && this.aEn == kVar.aEn;
    }

    public final int hashCode() {
        return (((((((((((this.aEI ? 1231 : 1237) + 31) * 31) + this.aEG) * 31) + this.aEo) * 31) + (this.aEJ ? 1231 : 1237)) * 31) + (this.aEK ? 1231 : 1237)) * 31) + this.aEn;
    }

    public final String toString() {
        return "ImageInfo [cols=" + this.aEo + ", rows=" + this.aEn + ", bitDepth=" + this.aEG + ", channels=" + this.aEH + ", alpha=" + this.aEI + ", greyscale=" + this.aEJ + ", indexed=" + this.aEK + "]";
    }
}
