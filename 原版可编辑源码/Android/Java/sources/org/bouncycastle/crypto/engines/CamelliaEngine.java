package org.bouncycastle.crypto.engines;

import com.sigmob.sdk.archives.tar.e;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import okio.Utf8;
import org.bouncycastle.crypto.BlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DataLengthException;
import org.bouncycastle.crypto.params.KeyParameter;
import org.bouncycastle.crypto.signers.PSSSigner;
import org.bouncycastle.math.ec.Tnaf;

public class CamelliaEngine implements BlockCipher {
    private static final int BLOCK_SIZE = 16;
    private static final long MASK32 = 4294967295L;
    private static final long MASK8 = 255;
    private static final long SIGMA1 = -6872943284670656373L;
    private static final long SIGMA2 = -5297666545706961998L;
    private static final long SIGMA3 = -4112007255848680770L;
    private static final long SIGMA4 = 6124705990439038748L;
    private static final long SIGMA5 = 1217423232700263709L;
    private static final long SIGMA6 = -5740250305213840899L;
    private final byte[] SBOX1 = {112, -126, 44, -20, -77, 39, -64, -27, -28, -123, 87, e.M, -22, 12, -82, 65, 35, -17, 107, -109, 69, 25, -91, 33, -19, 14, 79, 78, 29, 101, -110, -67, -122, -72, -81, -113, 124, -21, 31, -50, 62, e.H, -36, 95, 94, -59, 11, 26, -90, -31, 57, -54, -43, 71, 93, 61, -39, 1, 90, -42, 81, 86, 108, 77, -117, 13, -102, 102, -5, -52, -80, 45, 116, 18, 43, 32, -16, -79, -124, -103, -33, e.P, -53, -62, e.L, 126, 118, 5, 109, -73, -87, e.I, -47, 23, 4, -41, 20, e.S, 58, 97, -34, 27, 17, 28, e.J, 15, -100, 22, e.Q, 24, -14, 34, -2, 68, -49, -78, -61, -75, 122, -111, 36, 8, -24, -88, 96, -4, 105, 80, -86, -48, -96, 125, -95, -119, 98, -105, 84, 91, 30, -107, -32, -1, 100, -46, Tnaf.POW_2_WIDTH, -60, 0, 72, -93, -9, 117, -37, -118, 3, -26, -38, 9, Utf8.REPLACEMENT_BYTE, -35, -108, -121, 92, -125, 2, -51, 74, -112, e.K, 115, e.T, -10, -13, -99, ByteCompanionObject.MAX_VALUE, -65, -30, 82, -101, -40, 38, -56, e.O, -58, 59, -127, -106, 111, 75, 19, -66, 99, 46, -23, 121, -89, -116, -97, 110, PSSSigner.TRAILER_IMPLICIT, -114, 41, -11, -7, -74, 47, -3, -76, 89, e.R, -104, 6, 106, -25, 70, 113, -70, -44, 37, -85, 66, -120, -94, -115, -6, 114, 7, -71, 85, -8, -18, -84, 10, e.N, 73, 42, 104, 60, 56, -15, -92, 64, 40, -45, 123, -69, -55, 67, -63, 21, -29, -83, -12, 119, -57, ByteCompanionObject.MIN_VALUE, -98};
    private final byte[] SBOX2 = new byte[256];
    private final byte[] SBOX3 = new byte[256];
    private final byte[] SBOX4 = new byte[256];
    private long _k1;
    private long _k10;
    private long _k11;
    private long _k12;
    private long _k13;
    private long _k14;
    private long _k15;
    private long _k16;
    private long _k17;
    private long _k18;
    private long _k19;
    private long _k2;
    private long _k20;
    private long _k21;
    private long _k22;
    private long _k23;
    private long _k24;
    private long _k3;
    private long _k4;
    private long _k5;
    private long _k6;
    private long _k7;
    private long _k8;
    private long _k9;
    private long _ke1;
    private long _ke2;
    private long _ke3;
    private long _ke4;
    private long _ke5;
    private long _ke6;
    private boolean _keyIs128;
    private long _kw1;
    private long _kw2;
    private long _kw3;
    private long _kw4;
    private boolean initialised;

    public CamelliaEngine() {
        for (int i = 0; i != 256; i++) {
            this.SBOX2[i] = lRot8(this.SBOX1[i], 1);
            this.SBOX3[i] = lRot8(this.SBOX1[i], 7);
            this.SBOX4[i] = this.SBOX1[lRot8((byte) i, 1) & UByte.MAX_VALUE];
        }
    }

    private long bytesToWord(byte[] bArr, int i) {
        long j = 0;
        for (int i2 = 0; i2 < 8; i2++) {
            j = (j << 8) + ((long) (bArr[i2 + i] & UByte.MAX_VALUE));
        }
        return j;
    }

    private long f(long j, long j2) {
        long j3 = j ^ j2;
        int i = (int) (j3 >> 32);
        int i2 = (int) j3;
        byte[] bArr = this.SBOX1;
        byte b = bArr[(i >> 24) & 255];
        byte[] bArr2 = this.SBOX2;
        byte b2 = bArr2[(i >> 16) & 255];
        byte[] bArr3 = this.SBOX3;
        byte b3 = bArr3[(i >> 8) & 255];
        byte[] bArr4 = this.SBOX4;
        byte b4 = bArr4[i & 255];
        byte b5 = bArr2[(i2 >> 24) & 255];
        byte b6 = bArr3[(i2 >> 16) & 255];
        byte b7 = bArr4[(i2 >> 8) & 255];
        byte b8 = bArr[i2 & 255];
        int i3 = ((((b ^ b3) ^ b4) ^ b6) ^ b7) ^ b8;
        int i4 = b ^ b2;
        int i5 = (((i4 ^ b4) ^ b5) ^ b7) ^ b8;
        int i6 = (((i4 ^ b3) ^ b5) ^ b6) ^ b8;
        int i7 = b2 ^ b3;
        int i8 = (((i7 ^ b4) ^ b5) ^ b6) ^ b7;
        int i9 = ((i4 ^ b6) ^ b7) ^ b8;
        int i10 = ((i7 ^ b5) ^ b7) ^ b8;
        int i11 = b8 ^ (((b3 ^ b4) ^ b5) ^ b6);
        int i12 = (((b ^ b4) ^ b5) ^ b6) ^ b7;
        return ((((long) i8) & MASK8) << 32) | (((long) i3) << 56) | ((((long) i5) & MASK8) << 48) | ((((long) i6) & MASK8) << 40) | ((((long) i9) & MASK8) << 24) | ((((long) i10) & MASK8) << 16) | ((((long) i11) & MASK8) << 8) | (((long) i12) & MASK8);
    }

    private long fl(long j, long j2) {
        int i = (int) (j >> 32);
        int iLRot32 = lRot32(((int) (j2 >> 32)) & i, 1) ^ ((int) j);
        return (((long) ((iLRot32 | ((int) j2)) ^ i)) << 32) | (((long) iLRot32) & MASK32);
    }

    private long flInv(long j, long j2) {
        int i = (int) (j >> 32);
        int i2 = (int) j;
        int i3 = (int) (j2 >> 32);
        int i4 = (i2 | ((int) j2)) ^ i;
        return (((long) i4) << 32) | (((long) (lRot32(i3 & i4, 1) ^ i2)) & MASK32);
    }

    private long lRot128high(long j, long j2, int i) {
        if (i < 64) {
            return (j2 >>> (-i)) | (j << i);
        }
        if (i == 64) {
            return j2;
        }
        int i2 = i - 64;
        return (j2 << i2) | (j >>> (-i2));
    }

    private long lRot128low(long j, long j2, int i) {
        if (i < 64) {
            return (j >>> (-i)) | (j2 << i);
        }
        if (i == 64) {
            return j;
        }
        int i2 = i - 64;
        return (j << i2) | (j2 >>> (-i2));
    }

    private int lRot32(int i, int i2) {
        return (i >>> (-i2)) | (i << i2);
    }

    private byte lRot8(byte b, int i) {
        return (byte) (((b & 255) >>> (8 - i)) | (b << i));
    }

    private int processBlock128(byte[] bArr, int i, byte[] bArr2, int i2) throws IllegalStateException, DataLengthException {
        long jBytesToWord = bytesToWord(bArr, i);
        long jBytesToWord2 = bytesToWord(bArr, i + 8);
        long j = jBytesToWord ^ this._kw1;
        long jF = (jBytesToWord2 ^ this._kw2) ^ f(j, this._k1);
        long jF2 = j ^ f(jF, this._k2);
        long jF3 = jF ^ f(jF2, this._k3);
        long jF4 = jF2 ^ f(jF3, this._k4);
        long jF5 = jF3 ^ f(jF4, this._k5);
        long jFl = fl(jF4 ^ f(jF5, this._k6), this._ke1);
        long jFlInv = flInv(jF5, this._ke2) ^ f(jFl, this._k7);
        long jF6 = jFl ^ f(jFlInv, this._k8);
        long jF7 = jFlInv ^ f(jF6, this._k9);
        long jF8 = jF6 ^ f(jF7, this._k10);
        long jF9 = jF7 ^ f(jF8, this._k11);
        long jFl2 = fl(jF8 ^ f(jF9, this._k12), this._ke3);
        long jFlInv2 = flInv(jF9, this._ke4) ^ f(jFl2, this._k13);
        long jF10 = jFl2 ^ f(jFlInv2, this._k14);
        long jF11 = jFlInv2 ^ f(jF10, this._k15);
        long jF12 = jF10 ^ f(jF11, this._k16);
        long jF13 = jF11 ^ f(jF12, this._k17);
        long jF14 = jF12 ^ f(jF13, this._k18);
        long j2 = jF13 ^ this._kw3;
        long j3 = jF14 ^ this._kw4;
        wordToBytes(j2, bArr2, i2);
        wordToBytes(j3, bArr2, i2 + 8);
        return 16;
    }

    private int processBlock192or256(byte[] bArr, int i, byte[] bArr2, int i2) throws IllegalStateException, DataLengthException {
        long jBytesToWord = bytesToWord(bArr, i);
        long jBytesToWord2 = bytesToWord(bArr, i + 8);
        long j = jBytesToWord ^ this._kw1;
        long jF = (jBytesToWord2 ^ this._kw2) ^ f(j, this._k1);
        long jF2 = j ^ f(jF, this._k2);
        long jF3 = jF ^ f(jF2, this._k3);
        long jF4 = jF2 ^ f(jF3, this._k4);
        long jF5 = jF3 ^ f(jF4, this._k5);
        long jFl = fl(jF4 ^ f(jF5, this._k6), this._ke1);
        long jFlInv = flInv(jF5, this._ke2) ^ f(jFl, this._k7);
        long jF6 = jFl ^ f(jFlInv, this._k8);
        long jF7 = jFlInv ^ f(jF6, this._k9);
        long jF8 = jF6 ^ f(jF7, this._k10);
        long jF9 = jF7 ^ f(jF8, this._k11);
        long jFl2 = fl(jF8 ^ f(jF9, this._k12), this._ke3);
        long jFlInv2 = flInv(jF9, this._ke4) ^ f(jFl2, this._k13);
        long jF10 = jFl2 ^ f(jFlInv2, this._k14);
        long jF11 = jFlInv2 ^ f(jF10, this._k15);
        long jF12 = jF10 ^ f(jF11, this._k16);
        long jF13 = jF11 ^ f(jF12, this._k17);
        long jFl3 = fl(jF12 ^ f(jF13, this._k18), this._ke5);
        long jFlInv3 = flInv(jF13, this._ke6) ^ f(jFl3, this._k19);
        long jF14 = jFl3 ^ f(jFlInv3, this._k20);
        long jF15 = jFlInv3 ^ f(jF14, this._k21);
        long jF16 = jF14 ^ f(jF15, this._k22);
        long jF17 = jF15 ^ f(jF16, this._k23);
        long jF18 = jF16 ^ f(jF17, this._k24);
        long j2 = jF17 ^ this._kw3;
        long j3 = jF18 ^ this._kw4;
        wordToBytes(j2, bArr2, i2);
        wordToBytes(j3, bArr2, i2 + 8);
        return 16;
    }

    private void setKey(boolean z, byte[] bArr) {
        long jBytesToWord;
        long jBytesToWord2;
        long jBytesToWord3;
        long j;
        int i;
        long j2;
        CamelliaEngine camelliaEngine;
        long j3;
        int length = bArr.length;
        if (length == 16) {
            this._keyIs128 = true;
            jBytesToWord = bytesToWord(bArr, 0);
            jBytesToWord2 = bytesToWord(bArr, 8);
            jBytesToWord3 = 0;
            j = 0;
        } else if (length == 24) {
            long jBytesToWord4 = bytesToWord(bArr, 0);
            long jBytesToWord5 = bytesToWord(bArr, 8);
            long jBytesToWord6 = bytesToWord(bArr, 16);
            long j4 = ~bytesToWord(bArr, 16);
            this._keyIs128 = false;
            jBytesToWord2 = jBytesToWord5;
            j = j4;
            jBytesToWord3 = jBytesToWord6;
            jBytesToWord = jBytesToWord4;
        } else {
            if (length != 32) {
                throw new IllegalArgumentException("only a key sizes of 128/192/256 are acceptable.");
            }
            long jBytesToWord7 = bytesToWord(bArr, 0);
            long jBytesToWord8 = bytesToWord(bArr, 8);
            jBytesToWord3 = bytesToWord(bArr, 16);
            long jBytesToWord9 = bytesToWord(bArr, 24);
            this._keyIs128 = false;
            j = jBytesToWord9;
            jBytesToWord2 = jBytesToWord8;
            jBytesToWord = jBytesToWord7;
        }
        long j5 = jBytesToWord ^ jBytesToWord3;
        long jF = (jBytesToWord2 ^ j) ^ f(j5, SIGMA1);
        long jF2 = (j5 ^ f(jF, SIGMA2)) ^ jBytesToWord;
        long jF3 = (jF ^ jBytesToWord2) ^ f(jF2, SIGMA3);
        long j6 = j;
        long jF4 = f(jF3, SIGMA4) ^ jF2;
        if (!this._keyIs128) {
            long j7 = jF4 ^ jBytesToWord3;
            long jF5 = (jF3 ^ j6) ^ f(j7, SIGMA5);
            long jF6 = f(jF5, SIGMA6) ^ j7;
            if (z) {
                this._kw1 = jBytesToWord;
                this._kw2 = jBytesToWord2;
                this._k1 = jF6;
                this._k2 = jF5;
                this._k3 = lRot128high(jBytesToWord3, j6, 15);
                this._k4 = lRot128low(jBytesToWord3, j6, 15);
                this._k5 = lRot128high(jF4, jF3, 15);
                this._k6 = lRot128low(jF4, jF3, 15);
                this._ke1 = lRot128high(jBytesToWord3, j6, 30);
                this._ke2 = lRot128low(jBytesToWord3, j6, 30);
                this._k7 = lRot128high(jF6, jF5, 30);
                this._k8 = lRot128low(jF6, jF5, 30);
                long j8 = jBytesToWord2;
                this._k9 = lRot128high(jBytesToWord, j8, 45);
                this._k10 = lRot128low(jBytesToWord, j8, 45);
                this._k11 = lRot128high(jF4, jF3, 45);
                this._k12 = lRot128low(jF4, jF3, 45);
                long j9 = jBytesToWord2;
                this._ke3 = lRot128high(jBytesToWord, j9, 60);
                this._ke4 = lRot128low(jBytesToWord, j9, 60);
                this._k13 = lRot128high(jBytesToWord3, j6, 60);
                this._k14 = lRot128low(jBytesToWord3, j6, 60);
                this._k15 = lRot128high(jF6, jF5, 60);
                this._k16 = lRot128low(jF6, jF5, 60);
                long j10 = jBytesToWord2;
                this._k17 = lRot128high(jBytesToWord, j10, 77);
                this._k18 = lRot128low(jBytesToWord, j10, 77);
                this._ke5 = lRot128high(jF4, jF3, 77);
                this._ke6 = lRot128low(jF4, jF3, 77);
                this._k19 = lRot128high(jBytesToWord3, j6, 94);
                this._k20 = lRot128low(jBytesToWord3, j6, 94);
                this._k21 = lRot128high(jF4, jF3, 94);
                this._k22 = lRot128low(jF4, jF3, 94);
                long j11 = jBytesToWord2;
                this._k23 = lRot128high(jBytesToWord, j11, 111);
                this._k24 = lRot128low(jBytesToWord, j11, 111);
                this._kw3 = lRot128high(jF6, jF5, 111);
                this._kw4 = lRot128low(jF6, jF5, 111);
                return;
            }
            this._kw3 = jBytesToWord;
            this._kw4 = jBytesToWord2;
            this._kw1 = lRot128high(jF6, jF5, 111);
            this._kw2 = lRot128low(jF6, jF5, 111);
            this._k24 = jF6;
            this._k23 = jF5;
            this._k22 = lRot128high(jBytesToWord3, j6, 15);
            this._k21 = lRot128low(jBytesToWord3, j6, 15);
            this._k20 = lRot128high(jF4, jF3, 15);
            this._k19 = lRot128low(jF4, jF3, 15);
            this._k18 = lRot128high(jF6, jF5, 30);
            this._k17 = lRot128low(jF6, jF5, 30);
            long j12 = jBytesToWord2;
            this._k16 = lRot128high(jBytesToWord, j12, 45);
            this._k15 = lRot128low(jBytesToWord, j12, 45);
            this._k14 = lRot128high(jF4, jF3, 45);
            this._k13 = lRot128low(jF4, jF3, 45);
            this._k12 = lRot128high(jBytesToWord3, j6, 60);
            this._k11 = lRot128low(jBytesToWord3, j6, 60);
            this._k10 = lRot128high(jF6, jF5, 60);
            this._k9 = lRot128low(jF6, jF5, 60);
            long j13 = jBytesToWord2;
            this._k8 = lRot128high(jBytesToWord, j13, 77);
            this._k7 = lRot128low(jBytesToWord, j13, 77);
            this._k6 = lRot128high(jBytesToWord3, j6, 94);
            this._k5 = lRot128low(jBytesToWord3, j6, 94);
            this._k4 = lRot128high(jF4, jF3, 94);
            this._k3 = lRot128low(jF4, jF3, 94);
            long j14 = jBytesToWord2;
            this._k2 = lRot128high(jBytesToWord, j14, 111);
            this._k1 = lRot128low(jBytesToWord, j14, 111);
            this._ke6 = lRot128high(jBytesToWord3, j6, 30);
            this._ke5 = lRot128low(jBytesToWord3, j6, 30);
            long j15 = jBytesToWord2;
            this._ke4 = lRot128high(jBytesToWord, j15, 60);
            this._ke3 = lRot128low(jBytesToWord, j15, 60);
            i = 77;
            j2 = jF3;
            this._ke2 = lRot128high(jF4, j2, 77);
            camelliaEngine = this;
            j3 = jF4;
        } else {
            if (z) {
                this._kw1 = jBytesToWord;
                this._kw2 = jBytesToWord2;
                this._kw3 = lRot128high(jF4, jF3, 111);
                this._kw4 = lRot128low(jF4, jF3, 111);
                this._k1 = jF4;
                this._k2 = jF3;
                long j16 = jBytesToWord2;
                this._k3 = lRot128high(jBytesToWord, j16, 15);
                this._k4 = lRot128low(jBytesToWord, j16, 15);
                this._k5 = lRot128high(jF4, jF3, 15);
                this._k6 = lRot128low(jF4, jF3, 15);
                long j17 = jBytesToWord2;
                this._k7 = lRot128high(jBytesToWord, j17, 45);
                this._k8 = lRot128low(jBytesToWord, j17, 45);
                this._k9 = lRot128high(jF4, jF3, 45);
                this._k10 = lRot128low(jBytesToWord, jBytesToWord2, 60);
                this._k11 = lRot128high(jF4, jF3, 60);
                this._k12 = lRot128low(jF4, jF3, 60);
                long j18 = jBytesToWord2;
                this._k13 = lRot128high(jBytesToWord, j18, 94);
                this._k14 = lRot128low(jBytesToWord, j18, 94);
                this._k15 = lRot128high(jF4, jF3, 94);
                this._k16 = lRot128low(jF4, jF3, 94);
                long j19 = jBytesToWord2;
                this._k17 = lRot128high(jBytesToWord, j19, 111);
                this._k18 = lRot128low(jBytesToWord, j19, 111);
                this._ke1 = lRot128high(jF4, jF3, 30);
                this._ke2 = lRot128low(jF4, jF3, 30);
                long j20 = jBytesToWord2;
                this._ke3 = lRot128high(jBytesToWord, j20, 77);
                this._ke4 = lRot128low(jBytesToWord, j20, 77);
                return;
            }
            this._kw3 = jBytesToWord;
            this._kw4 = jBytesToWord2;
            this._kw1 = lRot128high(jF4, jF3, 111);
            this._kw2 = lRot128low(jF4, jF3, 111);
            this._k18 = jF4;
            this._k17 = jF3;
            long j21 = jBytesToWord2;
            this._k16 = lRot128high(jBytesToWord, j21, 15);
            this._k15 = lRot128low(jBytesToWord, j21, 15);
            this._k14 = lRot128high(jF4, jF3, 15);
            this._k13 = lRot128low(jF4, jF3, 15);
            long j22 = jBytesToWord2;
            this._k12 = lRot128high(jBytesToWord, j22, 45);
            this._k11 = lRot128low(jBytesToWord, j22, 45);
            this._k10 = lRot128high(jF4, jF3, 45);
            this._k9 = lRot128low(jBytesToWord, jBytesToWord2, 60);
            this._k8 = lRot128high(jF4, jF3, 60);
            this._k7 = lRot128low(jF4, jF3, 60);
            long j23 = jBytesToWord2;
            this._k6 = lRot128high(jBytesToWord, j23, 94);
            this._k5 = lRot128low(jBytesToWord, j23, 94);
            this._k4 = lRot128high(jF4, jF3, 94);
            this._k3 = lRot128low(jF4, jF3, 94);
            long j24 = jBytesToWord2;
            this._k2 = lRot128high(jBytesToWord, j24, 111);
            this._k1 = lRot128low(jBytesToWord, j24, 111);
            this._ke4 = lRot128high(jF4, jF3, 30);
            this._ke3 = lRot128low(jF4, jF3, 30);
            i = 77;
            j2 = jBytesToWord2;
            this._ke2 = lRot128high(jBytesToWord, j2, 77);
            camelliaEngine = this;
            j3 = jBytesToWord;
        }
        this._ke1 = camelliaEngine.lRot128low(j3, j2, i);
    }

    private void wordToBytes(long j, byte[] bArr, int i) {
        for (int i2 = 0; i2 < 8; i2++) {
            bArr[(7 - i2) + i] = (byte) j;
            j >>>= 8;
        }
    }

    @Override
    public String getAlgorithmName() {
        return "Camellia";
    }

    @Override
    public int getBlockSize() {
        return 16;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) throws IllegalArgumentException {
        if (!(cipherParameters instanceof KeyParameter)) {
            throw new IllegalArgumentException("only simple KeyParameter expected.");
        }
        setKey(z, ((KeyParameter) cipherParameters).getKey());
        this.initialised = true;
    }

    @Override
    public int processBlock(byte[] bArr, int i, byte[] bArr2, int i2) throws IllegalStateException, DataLengthException {
        if (!this.initialised) {
            throw new IllegalStateException("Camellia engine not initialised");
        }
        if (i + 16 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i2 + 16 <= bArr2.length) {
            return this._keyIs128 ? processBlock128(bArr, i, bArr2, i2) : processBlock192or256(bArr, i, bArr2, i2);
        }
        throw new DataLengthException("output buffer too short");
    }

    @Override
    public void reset() {
    }
}
