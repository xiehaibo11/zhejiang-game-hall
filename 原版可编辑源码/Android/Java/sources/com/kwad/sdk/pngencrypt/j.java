package com.kwad.sdk.pngencrypt;

import java.util.Arrays;
import java.util.zip.Inflater;
import kotlin.UByte;

public final class j extends DeflatedChunksSet {
    protected final e aDG;
    protected byte[] aEA;
    protected byte[] aEB;
    protected final k aEC;
    final p aED;
    protected int[] aEE;

    static class 1 {
        static final int[] aEF;

        static {
            int[] iArr = new int[FilterType.values().length];
            aEF = iArr;
            try {
                iArr[FilterType.FILTER_NONE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                aEF[FilterType.FILTER_SUB.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                aEF[FilterType.FILTER_UP.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                aEF[FilterType.FILTER_AVERAGE.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                aEF[FilterType.FILTER_PAETH.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    public j(String str, boolean z, k kVar, e eVar) {
        this(str, z, kVar, eVar, null, null);
    }

    private j(String str, boolean z, k kVar, e eVar, Inflater inflater, byte[] bArr) {
        super(str, z, (eVar != null ? eVar.GL() : kVar.aEO) + 1, kVar.aEO + 1, null, null);
        this.aEE = new int[5];
        this.aEC = kVar;
        this.aDG = eVar;
        this.aED = new p(kVar, eVar);
        com.kwad.sdk.core.e.c.d("PNG_ENCRYPT", "Creating IDAT set ");
    }

    private void GM() {
        cL(this.aED.aFk);
    }

    private int GN() {
        int iGL;
        e eVar = this.aDG;
        int i = 0;
        if (eVar == null) {
            if (GD() < this.aEC.aEn - 1) {
                iGL = this.aEC.aEO;
                i = iGL + 1;
            }
        } else if (eVar.GE()) {
            iGL = this.aDG.GL();
            i = iGL + 1;
        }
        if (!this.aDJ) {
            cH(i);
        }
        return i;
    }

    private void cL(int i) {
        byte[] bArr = this.aEA;
        if (bArr == null || bArr.length < this.aDZ.length) {
            this.aEA = new byte[this.aDZ.length];
            this.aEB = new byte[this.aDZ.length];
        }
        if (this.aED.aFh == 0) {
            Arrays.fill(this.aEA, (byte) 0);
        }
        byte[] bArr2 = this.aEA;
        this.aEA = this.aEB;
        this.aEB = bArr2;
        byte b = this.aDZ[0];
        if (!FilterType.isValidStandard(b)) {
            throw new PngjException("Filter type " + ((int) b) + " invalid");
        }
        FilterType byVal = FilterType.getByVal(b);
        int[] iArr = this.aEE;
        iArr[b] = iArr[b] + 1;
        this.aEA[0] = this.aDZ[0];
        int i2 = 1.aEF[byVal.ordinal()];
        if (i2 == 1) {
            cN(i);
            return;
        }
        if (i2 == 2) {
            cP(i);
            return;
        }
        if (i2 == 3) {
            cQ(i);
            return;
        }
        if (i2 == 4) {
            cM(i);
        } else {
            if (i2 == 5) {
                cO(i);
                return;
            }
            throw new PngjException("Filter type " + ((int) b) + " not implemented");
        }
    }

    private void cM(int i) {
        int i2 = 1;
        int i3 = 1 - this.aEC.aEN;
        while (i2 <= i) {
            this.aEA[i2] = (byte) (this.aDZ[i2] + (((i3 > 0 ? this.aEA[i3] & UByte.MAX_VALUE : 0) + (this.aEB[i2] & UByte.MAX_VALUE)) / 2));
            i2++;
            i3++;
        }
    }

    private void cN(int i) {
        for (int i2 = 1; i2 <= i; i2++) {
            this.aEA[i2] = this.aDZ[i2];
        }
    }

    private void cO(int i) {
        int i2 = 1;
        int i3 = 1 - this.aEC.aEN;
        while (i2 <= i) {
            int i4 = 0;
            int i5 = i3 > 0 ? this.aEA[i3] & UByte.MAX_VALUE : 0;
            if (i3 > 0) {
                i4 = this.aEB[i3] & UByte.MAX_VALUE;
            }
            this.aEA[i2] = (byte) (this.aDZ[i2] + n.b(i5, this.aEB[i2] & UByte.MAX_VALUE, i4));
            i2++;
            i3++;
        }
    }

    private void cP(int i) {
        for (int i2 = 1; i2 <= this.aEC.aEN; i2++) {
            this.aEA[i2] = this.aDZ[i2];
        }
        int i3 = this.aEC.aEN + 1;
        int i4 = 1;
        while (i3 <= i) {
            this.aEA[i3] = (byte) (this.aDZ[i3] + this.aEA[i4]);
            i3++;
            i4++;
        }
    }

    private void cQ(int i) {
        for (int i2 = 1; i2 <= i; i2++) {
            this.aEA[i2] = (byte) (this.aDZ[i2] + this.aEB[i2]);
        }
    }

    @Override
    protected final void GA() {
        super.GA();
        this.aED.update(GD());
        GM();
        p pVar = this.aED;
        pVar.h(this.aEA, pVar.aFk + 1);
    }

    @Override
    protected final int GB() {
        return GN();
    }

    @Override
    public final void close() {
        super.close();
        this.aEA = null;
        this.aEB = null;
    }
}
