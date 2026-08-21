package org.bouncycastle.crypto.digests;

import kotlin.UByte;

public class SHA224Digest extends GeneralDigest {
    private static final int DIGEST_LENGTH = 28;
    static final int[] K = {1116352408, 1899447441, -1245643825, -373957723, 961987163, 1508970993, -1841331548, -1424204075, -670586216, 310598401, 607225278, 1426881987, 1925078388, -2132889090, -1680079193, -1046744716, -459576895, -272742522, 264347078, 604807628, 770255983, 1249150122, 1555081692, 1996064986, -1740746414, -1473132947, -1341970488, -1084653625, -958395405, -710438585, 113926993, 338241895, 666307205, 773529912, 1294757372, 1396182291, 1695183700, 1986661051, -2117940946, -1838011259, -1564481375, -1474664885, -1035236496, -949202525, -778901479, -694614492, -200395387, 275423344, 430227734, 506948616, 659060556, 883997877, 958139571, 1322822218, 1537002063, 1747873779, 1955562222, 2024104815, -2067236844, -1933114872, -1866530822, -1538233109, -1090935817, -965641998};
    private int H1;
    private int H2;
    private int H3;
    private int H4;
    private int H5;
    private int H6;
    private int H7;
    private int H8;
    private int[] X;
    private int xOff;

    public SHA224Digest() {
        this.X = new int[64];
        reset();
    }

    public SHA224Digest(SHA224Digest sHA224Digest) {
        super(sHA224Digest);
        int[] iArr = new int[64];
        this.X = iArr;
        this.H1 = sHA224Digest.H1;
        this.H2 = sHA224Digest.H2;
        this.H3 = sHA224Digest.H3;
        this.H4 = sHA224Digest.H4;
        this.H5 = sHA224Digest.H5;
        this.H6 = sHA224Digest.H6;
        this.H7 = sHA224Digest.H7;
        this.H8 = sHA224Digest.H8;
        int[] iArr2 = sHA224Digest.X;
        System.arraycopy(iArr2, 0, iArr, 0, iArr2.length);
        this.xOff = sHA224Digest.xOff;
    }

    private int Ch(int i, int i2, int i3) {
        return ((~i) & i3) ^ (i2 & i);
    }

    private int Maj(int i, int i2, int i3) {
        return ((i & i3) ^ (i & i2)) ^ (i2 & i3);
    }

    private int Sum0(int i) {
        return ((i << 10) | (i >>> 22)) ^ (((i >>> 2) | (i << 30)) ^ ((i >>> 13) | (i << 19)));
    }

    private int Sum1(int i) {
        return ((i << 7) | (i >>> 25)) ^ (((i >>> 6) | (i << 26)) ^ ((i >>> 11) | (i << 21)));
    }

    private int Theta0(int i) {
        return (i >>> 3) ^ (((i >>> 7) | (i << 25)) ^ ((i >>> 18) | (i << 14)));
    }

    private int Theta1(int i) {
        return (i >>> 10) ^ (((i >>> 17) | (i << 15)) ^ ((i >>> 19) | (i << 13)));
    }

    private void unpackWord(int i, byte[] bArr, int i2) {
        bArr[i2] = (byte) (i >>> 24);
        bArr[i2 + 1] = (byte) (i >>> 16);
        bArr[i2 + 2] = (byte) (i >>> 8);
        bArr[i2 + 3] = (byte) i;
    }

    @Override
    public int doFinal(byte[] bArr, int i) {
        finish();
        unpackWord(this.H1, bArr, i);
        unpackWord(this.H2, bArr, i + 4);
        unpackWord(this.H3, bArr, i + 8);
        unpackWord(this.H4, bArr, i + 12);
        unpackWord(this.H5, bArr, i + 16);
        unpackWord(this.H6, bArr, i + 20);
        unpackWord(this.H7, bArr, i + 24);
        reset();
        return 28;
    }

    @Override
    public String getAlgorithmName() {
        return "SHA-224";
    }

    @Override
    public int getDigestSize() {
        return 28;
    }

    @Override
    protected void processBlock() {
        for (int i = 16; i <= 63; i++) {
            int[] iArr = this.X;
            int iTheta1 = Theta1(iArr[i - 2]);
            int[] iArr2 = this.X;
            iArr[i] = iTheta1 + iArr2[i - 7] + Theta0(iArr2[i - 15]) + this.X[i - 16];
        }
        int iSum0 = this.H1;
        int iSum02 = this.H2;
        int iSum03 = this.H3;
        int iSum04 = this.H4;
        int i2 = this.H5;
        int i3 = this.H6;
        int i4 = this.H7;
        int i5 = this.H8;
        int i6 = 0;
        int i7 = 0;
        while (i6 < 8) {
            int i8 = i7 + 1;
            int iSum1 = i5 + Sum1(i2) + Ch(i2, i3, i4) + K[i7] + this.X[i7];
            int i9 = iSum04 + iSum1;
            int iSum05 = iSum1 + Sum0(iSum0) + Maj(iSum0, iSum02, iSum03);
            int i10 = i8 + 1;
            int iSum12 = i4 + Sum1(i9) + Ch(i9, i2, i3) + K[i8] + this.X[i8];
            int i11 = iSum03 + iSum12;
            int iSum06 = iSum12 + Sum0(iSum05) + Maj(iSum05, iSum0, iSum02);
            int i12 = i10 + 1;
            int iSum13 = i3 + Sum1(i11) + Ch(i11, i9, i2) + K[i10] + this.X[i10];
            int i13 = iSum02 + iSum13;
            int iSum07 = iSum13 + Sum0(iSum06) + Maj(iSum06, iSum05, iSum0);
            int i14 = i12 + 1;
            int iSum14 = i2 + Sum1(i13) + Ch(i13, i11, i9) + K[i12] + this.X[i12];
            int i15 = iSum0 + iSum14;
            int iSum08 = iSum14 + Sum0(iSum07) + Maj(iSum07, iSum06, iSum05);
            int i16 = i14 + 1;
            int iSum15 = i9 + Sum1(i15) + Ch(i15, i13, i11) + K[i14] + this.X[i14];
            i5 = iSum05 + iSum15;
            iSum04 = iSum15 + Sum0(iSum08) + Maj(iSum08, iSum07, iSum06);
            int i17 = i16 + 1;
            int iSum16 = i11 + Sum1(i5) + Ch(i5, i15, i13) + K[i16] + this.X[i16];
            i4 = iSum06 + iSum16;
            iSum03 = iSum16 + Sum0(iSum04) + Maj(iSum04, iSum08, iSum07);
            int i18 = i17 + 1;
            int iSum17 = i13 + Sum1(i4) + Ch(i4, i5, i15) + K[i17] + this.X[i17];
            i3 = iSum07 + iSum17;
            iSum02 = iSum17 + Sum0(iSum03) + Maj(iSum03, iSum04, iSum08);
            int iSum18 = i15 + Sum1(i3) + Ch(i3, i4, i5) + K[i18] + this.X[i18];
            i2 = iSum08 + iSum18;
            iSum0 = iSum18 + Sum0(iSum02) + Maj(iSum02, iSum03, iSum04);
            i6++;
            i7 = i18 + 1;
        }
        this.H1 += iSum0;
        this.H2 += iSum02;
        this.H3 += iSum03;
        this.H4 += iSum04;
        this.H5 += i2;
        this.H6 += i3;
        this.H7 += i4;
        this.H8 += i5;
        this.xOff = 0;
        for (int i19 = 0; i19 < 16; i19++) {
            this.X[i19] = 0;
        }
    }

    @Override
    protected void processLength(long j) {
        if (this.xOff > 14) {
            processBlock();
        }
        int[] iArr = this.X;
        iArr[14] = (int) (j >>> 32);
        iArr[15] = (int) (j & (-1));
    }

    @Override
    protected void processWord(byte[] bArr, int i) {
        int[] iArr = this.X;
        int i2 = this.xOff;
        int i3 = i2 + 1;
        this.xOff = i3;
        iArr[i2] = (bArr[i + 3] & UByte.MAX_VALUE) | ((bArr[i] & UByte.MAX_VALUE) << 24) | ((bArr[i + 1] & UByte.MAX_VALUE) << 16) | ((bArr[i + 2] & UByte.MAX_VALUE) << 8);
        if (i3 == 16) {
            processBlock();
        }
    }

    @Override
    public void reset() {
        super.reset();
        this.H1 = -1056596264;
        this.H2 = 914150663;
        this.H3 = 812702999;
        this.H4 = -150054599;
        this.H5 = -4191439;
        this.H6 = 1750603025;
        this.H7 = 1694076839;
        this.H8 = -1090891868;
        this.xOff = 0;
        int i = 0;
        while (true) {
            int[] iArr = this.X;
            if (i == iArr.length) {
                return;
            }
            iArr[i] = 0;
            i++;
        }
    }
}
