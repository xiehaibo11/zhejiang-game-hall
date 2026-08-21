package org.bouncycastle.crypto.engines;

import com.sigmob.sdk.archives.tar.e;
import java.lang.reflect.Array;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import okio.Utf8;
import org.bouncycastle.crypto.BlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DataLengthException;
import org.bouncycastle.crypto.params.KeyParameter;
import org.bouncycastle.crypto.signers.PSSSigner;
import org.bouncycastle.math.ec.Tnaf;

public class AESLightEngine implements BlockCipher {
    private static final int BLOCK_SIZE = 16;
    private static final int m1 = -2139062144;
    private static final int m2 = 2139062143;
    private static final int m3 = 27;
    private int C0;
    private int C1;
    private int C2;
    private int C3;
    private int ROUNDS;
    private int[][] WorkingKey = (int[][]) null;
    private boolean forEncryption;
    private static final byte[] S = {99, 124, 119, 123, -14, 107, 111, -59, e.H, 1, e.T, 43, -2, -41, -85, 118, -54, -126, -55, 125, -6, 89, 71, -16, -83, -44, -94, -81, -100, -92, 114, -64, -73, -3, -109, 38, e.N, Utf8.REPLACEMENT_BYTE, -9, -52, e.L, -91, -27, -15, 113, -40, e.I, 21, 4, -57, 35, -61, 24, -106, 5, -102, 7, 18, ByteCompanionObject.MIN_VALUE, -30, -21, 39, -78, 117, 9, -125, 44, 26, 27, 110, 90, -96, 82, 59, -42, -77, 41, -29, 47, -124, e.Q, -47, 0, -19, 32, -4, -79, 91, 106, -53, -66, 57, 74, e.P, e.S, -49, -48, -17, -86, -5, 67, 77, e.K, -123, 69, -7, 2, ByteCompanionObject.MAX_VALUE, 80, 60, -97, -88, 81, -93, 64, -113, -110, -99, 56, -11, PSSSigner.TRAILER_IMPLICIT, -74, -38, 33, Tnaf.POW_2_WIDTH, -1, -13, -46, -51, 12, 19, -20, 95, -105, 68, 23, -60, -89, 126, 61, 100, 93, 25, 115, 96, -127, 79, -36, 34, 42, -112, -120, 70, -18, -72, 20, -34, 94, 11, -37, -32, e.J, 58, 10, 73, 6, 36, 92, -62, -45, -84, 98, -111, -107, -28, 121, -25, -56, e.O, 109, -115, -43, 78, -87, 108, 86, -12, -22, 101, 122, -82, 8, -70, e.R, 37, 46, 28, -90, -76, -58, -24, -35, 116, 31, 75, -67, -117, -118, 112, 62, -75, 102, 72, 3, -10, 14, 97, e.M, 87, -71, -122, -63, 29, -98, -31, -8, -104, 17, 105, -39, -114, -108, -101, 30, -121, -23, -50, 85, 40, -33, -116, -95, -119, 13, -65, -26, 66, 104, 65, -103, 45, 15, -80, 84, -69, 22};
    private static final byte[] Si = {82, 9, 106, -43, e.H, e.N, -91, 56, -65, 64, -93, -98, -127, -13, -41, -5, 124, -29, 57, -126, -101, 47, -1, -121, e.L, -114, 67, 68, -60, -34, -23, -53, 84, 123, -108, e.J, -90, -62, 35, 61, -18, e.P, -107, 11, 66, -6, -61, 78, 8, 46, -95, 102, 40, -39, 36, -78, 118, 91, -94, 73, 109, -117, -47, 37, 114, -8, -10, 100, -122, 104, -104, 22, -44, -92, 92, -52, 93, 101, -74, -110, 108, 112, 72, 80, -3, -19, -71, -38, 94, 21, 70, 87, -89, -115, -99, -124, -112, -40, -85, 0, -116, PSSSigner.TRAILER_IMPLICIT, -45, 10, -9, -28, e.S, 5, -72, -77, 69, 6, -48, 44, 30, -113, -54, Utf8.REPLACEMENT_BYTE, 15, 2, -63, -81, -67, 3, 1, 19, -118, 107, 58, -111, 17, 65, 79, e.T, -36, -22, -105, -14, -49, -50, -16, -76, -26, 115, -106, -84, 116, 34, -25, -83, e.M, -123, -30, -7, e.O, -24, 28, 117, -33, 110, 71, -15, 26, 113, 29, 41, -59, -119, 111, -73, 98, 14, -86, 24, -66, 27, -4, 86, 62, 75, -58, -46, 121, 32, -102, -37, -64, -2, e.R, -51, 90, -12, 31, -35, -88, e.K, -120, 7, -57, e.I, -79, 18, Tnaf.POW_2_WIDTH, 89, 39, ByteCompanionObject.MIN_VALUE, -20, 95, 96, 81, ByteCompanionObject.MAX_VALUE, -87, 25, -75, 74, 13, 45, -27, 122, -97, -109, -55, -100, -17, -96, -32, 59, 77, -82, 42, -11, -80, -56, -21, -69, 60, -125, e.Q, -103, 97, 23, 43, 4, 126, -70, 119, -42, 38, -31, 105, 20, 99, 85, 33, 12, 125};
    private static final int[] rcon = {1, 2, 4, 8, 16, 32, 64, 128, 27, 54, 108, 216, 171, 77, 154, 47, 94, 188, 99, 198, 151, 53, 106, 212, 179, 125, 250, 239, 197, 145};

    private int FFmulX(int i) {
        return (((i & m1) >>> 7) * 27) ^ ((m2 & i) << 1);
    }

    private final void decryptBlock(int[][] iArr) {
        int i = this.C0;
        int i2 = this.ROUNDS;
        this.C0 = i ^ iArr[i2][0];
        this.C1 ^= iArr[i2][1];
        this.C2 ^= iArr[i2][2];
        this.C3 ^= iArr[i2][3];
        int i3 = i2 - 1;
        while (true) {
            byte[] bArr = Si;
            int i4 = this.C0 & 255;
            if (i3 <= 1) {
                int iInv_mcol = inv_mcol((bArr[(this.C1 >> 24) & 255] << 24) ^ (((bArr[i4] & UByte.MAX_VALUE) ^ ((bArr[(this.C3 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr[(this.C2 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i3][0];
                byte[] bArr2 = Si;
                int iInv_mcol2 = inv_mcol((bArr2[(this.C2 >> 24) & 255] << 24) ^ (((bArr2[this.C1 & 255] & UByte.MAX_VALUE) ^ ((bArr2[(this.C0 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr2[(this.C3 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i3][1];
                byte[] bArr3 = Si;
                int iInv_mcol3 = inv_mcol((bArr3[(this.C3 >> 24) & 255] << 24) ^ (((bArr3[this.C2 & 255] & UByte.MAX_VALUE) ^ ((bArr3[(this.C1 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr3[(this.C0 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i3][2];
                byte[] bArr4 = Si;
                int iInv_mcol4 = iArr[i3][3] ^ inv_mcol((bArr4[(this.C0 >> 24) & 255] << 24) ^ (((bArr4[this.C3 & 255] & UByte.MAX_VALUE) ^ ((bArr4[(this.C2 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr4[(this.C1 >> 16) & 255] & UByte.MAX_VALUE) << 16)));
                byte[] bArr5 = Si;
                this.C0 = ((((bArr5[iInv_mcol & 255] & UByte.MAX_VALUE) ^ ((bArr5[(iInv_mcol4 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr5[(iInv_mcol3 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr5[(iInv_mcol2 >> 24) & 255] << 24)) ^ iArr[0][0];
                this.C1 = iArr[0][1] ^ ((((bArr5[iInv_mcol2 & 255] & UByte.MAX_VALUE) ^ ((bArr5[(iInv_mcol >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr5[(iInv_mcol4 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr5[(iInv_mcol3 >> 24) & 255] << 24));
                this.C2 = ((((bArr5[iInv_mcol3 & 255] & UByte.MAX_VALUE) ^ ((bArr5[(iInv_mcol2 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr5[(iInv_mcol >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr5[(iInv_mcol4 >> 24) & 255] << 24)) ^ iArr[0][2];
                this.C3 = iArr[0][3] ^ ((bArr5[(iInv_mcol >> 24) & 255] << 24) ^ (((bArr5[iInv_mcol4 & 255] & UByte.MAX_VALUE) ^ ((bArr5[(iInv_mcol3 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr5[(iInv_mcol2 >> 16) & 255] & UByte.MAX_VALUE) << 16)));
                return;
            }
            int iInv_mcol5 = inv_mcol((bArr[(this.C1 >> 24) & 255] << 24) ^ (((bArr[i4] & UByte.MAX_VALUE) ^ ((bArr[(this.C3 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr[(this.C2 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i3][0];
            byte[] bArr6 = Si;
            int iInv_mcol6 = inv_mcol((bArr6[(this.C2 >> 24) & 255] << 24) ^ (((bArr6[this.C1 & 255] & UByte.MAX_VALUE) ^ ((bArr6[(this.C0 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr6[(this.C3 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i3][1];
            byte[] bArr7 = Si;
            int iInv_mcol7 = inv_mcol((bArr7[(this.C3 >> 24) & 255] << 24) ^ (((bArr7[this.C2 & 255] & UByte.MAX_VALUE) ^ ((bArr7[(this.C1 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr7[(this.C0 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i3][2];
            byte[] bArr8 = Si;
            int i5 = i3 - 1;
            int iInv_mcol8 = iArr[i3][3] ^ inv_mcol((bArr8[(this.C0 >> 24) & 255] << 24) ^ (((bArr8[this.C3 & 255] & UByte.MAX_VALUE) ^ ((bArr8[(this.C2 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr8[(this.C1 >> 16) & 255] & UByte.MAX_VALUE) << 16)));
            byte[] bArr9 = Si;
            this.C0 = inv_mcol((bArr9[(iInv_mcol6 >> 24) & 255] << 24) ^ (((bArr9[iInv_mcol5 & 255] & UByte.MAX_VALUE) ^ ((bArr9[(iInv_mcol8 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr9[(iInv_mcol7 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i5][0];
            byte[] bArr10 = Si;
            this.C1 = inv_mcol((bArr10[(iInv_mcol7 >> 24) & 255] << 24) ^ (((bArr10[iInv_mcol6 & 255] & UByte.MAX_VALUE) ^ ((bArr10[(iInv_mcol5 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr10[(iInv_mcol8 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i5][1];
            byte[] bArr11 = Si;
            this.C2 = inv_mcol((bArr11[(iInv_mcol8 >> 24) & 255] << 24) ^ (((bArr11[iInv_mcol7 & 255] & UByte.MAX_VALUE) ^ ((bArr11[(iInv_mcol6 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr11[(iInv_mcol5 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i5][2];
            byte[] bArr12 = Si;
            int iInv_mcol9 = inv_mcol((bArr12[(iInv_mcol5 >> 24) & 255] << 24) ^ (((bArr12[iInv_mcol8 & 255] & UByte.MAX_VALUE) ^ ((bArr12[(iInv_mcol7 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr12[(iInv_mcol6 >> 16) & 255] & UByte.MAX_VALUE) << 16)));
            i3 = i5 - 1;
            this.C3 = iInv_mcol9 ^ iArr[i5][3];
        }
    }

    private void encryptBlock(int[][] iArr) {
        this.C0 ^= iArr[0][0];
        this.C1 ^= iArr[0][1];
        this.C2 ^= iArr[0][2];
        this.C3 ^= iArr[0][3];
        int i = 1;
        while (i < this.ROUNDS - 1) {
            byte[] bArr = S;
            int iMcol = mcol((bArr[(this.C3 >> 24) & 255] << 24) ^ (((bArr[this.C0 & 255] & UByte.MAX_VALUE) ^ ((bArr[(this.C1 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr[(this.C2 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i][0];
            byte[] bArr2 = S;
            int iMcol2 = mcol((bArr2[(this.C0 >> 24) & 255] << 24) ^ (((bArr2[this.C1 & 255] & UByte.MAX_VALUE) ^ ((bArr2[(this.C2 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr2[(this.C3 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i][1];
            byte[] bArr3 = S;
            int iMcol3 = mcol((bArr3[(this.C1 >> 24) & 255] << 24) ^ (((bArr3[this.C2 & 255] & UByte.MAX_VALUE) ^ ((bArr3[(this.C3 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr3[(this.C0 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i][2];
            byte[] bArr4 = S;
            int i2 = i + 1;
            int iMcol4 = iArr[i][3] ^ mcol((bArr4[(this.C2 >> 24) & 255] << 24) ^ (((bArr4[this.C3 & 255] & UByte.MAX_VALUE) ^ ((bArr4[(this.C0 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr4[(this.C1 >> 16) & 255] & UByte.MAX_VALUE) << 16)));
            byte[] bArr5 = S;
            this.C0 = mcol((bArr5[(iMcol4 >> 24) & 255] << 24) ^ (((bArr5[iMcol & 255] & UByte.MAX_VALUE) ^ ((bArr5[(iMcol2 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr5[(iMcol3 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i2][0];
            byte[] bArr6 = S;
            this.C1 = mcol((bArr6[(iMcol >> 24) & 255] << 24) ^ (((bArr6[iMcol2 & 255] & UByte.MAX_VALUE) ^ ((bArr6[(iMcol3 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr6[(iMcol4 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i2][1];
            byte[] bArr7 = S;
            this.C2 = mcol((bArr7[(iMcol2 >> 24) & 255] << 24) ^ (((bArr7[iMcol3 & 255] & UByte.MAX_VALUE) ^ ((bArr7[(iMcol4 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr7[(iMcol >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i2][2];
            byte[] bArr8 = S;
            this.C3 = mcol((((bArr8[iMcol4 & 255] & UByte.MAX_VALUE) ^ ((bArr8[(iMcol >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr8[(iMcol2 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr8[(iMcol3 >> 24) & 255] << 24)) ^ iArr[i2][3];
            i = i2 + 1;
        }
        byte[] bArr9 = S;
        int iMcol5 = mcol((bArr9[(this.C3 >> 24) & 255] << 24) ^ (((bArr9[this.C0 & 255] & UByte.MAX_VALUE) ^ ((bArr9[(this.C1 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr9[(this.C2 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i][0];
        byte[] bArr10 = S;
        int iMcol6 = mcol((bArr10[(this.C0 >> 24) & 255] << 24) ^ (((bArr10[this.C1 & 255] & UByte.MAX_VALUE) ^ ((bArr10[(this.C2 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr10[(this.C3 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i][1];
        byte[] bArr11 = S;
        int iMcol7 = mcol((bArr11[(this.C1 >> 24) & 255] << 24) ^ (((bArr11[this.C2 & 255] & UByte.MAX_VALUE) ^ ((bArr11[(this.C3 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr11[(this.C0 >> 16) & 255] & UByte.MAX_VALUE) << 16))) ^ iArr[i][2];
        byte[] bArr12 = S;
        int i3 = i + 1;
        int iMcol8 = iArr[i][3] ^ mcol((bArr12[(this.C2 >> 24) & 255] << 24) ^ (((bArr12[this.C3 & 255] & UByte.MAX_VALUE) ^ ((bArr12[(this.C0 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr12[(this.C1 >> 16) & 255] & UByte.MAX_VALUE) << 16)));
        byte[] bArr13 = S;
        this.C0 = iArr[i3][0] ^ ((((bArr13[iMcol5 & 255] & UByte.MAX_VALUE) ^ ((bArr13[(iMcol6 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr13[(iMcol7 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr13[(iMcol8 >> 24) & 255] << 24));
        this.C1 = ((((bArr13[iMcol6 & 255] & UByte.MAX_VALUE) ^ ((bArr13[(iMcol7 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr13[(iMcol8 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr13[(iMcol5 >> 24) & 255] << 24)) ^ iArr[i3][1];
        this.C2 = ((((bArr13[iMcol7 & 255] & UByte.MAX_VALUE) ^ ((bArr13[(iMcol8 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr13[(iMcol5 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr13[(iMcol6 >> 24) & 255] << 24)) ^ iArr[i3][2];
        this.C3 = iArr[i3][3] ^ ((((bArr13[iMcol8 & 255] & UByte.MAX_VALUE) ^ ((bArr13[(iMcol5 >> 8) & 255] & UByte.MAX_VALUE) << 8)) ^ ((bArr13[(iMcol6 >> 16) & 255] & UByte.MAX_VALUE) << 16)) ^ (bArr13[(iMcol7 >> 24) & 255] << 24));
    }

    private int[][] generateWorkingKey(byte[] bArr, boolean z) {
        int length = bArr.length / 4;
        if ((length != 4 && length != 6 && length != 8) || length * 4 != bArr.length) {
            throw new IllegalArgumentException("Key length not 128/192/256 bits.");
        }
        int i = length + 6;
        this.ROUNDS = i;
        int[][] iArr = (int[][]) Array.newInstance((Class<?>) int.class, i + 1, 4);
        int i2 = 0;
        int i3 = 0;
        while (i2 < bArr.length) {
            iArr[i3 >> 2][i3 & 3] = (bArr[i2] & UByte.MAX_VALUE) | ((bArr[i2 + 1] & UByte.MAX_VALUE) << 8) | ((bArr[i2 + 2] & UByte.MAX_VALUE) << 16) | (bArr[i2 + 3] << 24);
            i2 += 4;
            i3++;
        }
        int i4 = (this.ROUNDS + 1) << 2;
        for (int i5 = length; i5 < i4; i5++) {
            int i6 = i5 - 1;
            int iSubWord = iArr[i6 >> 2][i6 & 3];
            int i7 = i5 % length;
            if (i7 == 0) {
                iSubWord = subWord(shift(iSubWord, 8)) ^ rcon[(i5 / length) - 1];
            } else if (length > 6 && i7 == 4) {
                iSubWord = subWord(iSubWord);
            }
            int i8 = i5 - length;
            iArr[i5 >> 2][i5 & 3] = iSubWord ^ iArr[i8 >> 2][i8 & 3];
        }
        if (!z) {
            for (int i9 = 1; i9 < this.ROUNDS; i9++) {
                for (int i10 = 0; i10 < 4; i10++) {
                    iArr[i9][i10] = inv_mcol(iArr[i9][i10]);
                }
            }
        }
        return iArr;
    }

    private int inv_mcol(int i) {
        int iFFmulX = FFmulX(i);
        int iFFmulX2 = FFmulX(iFFmulX);
        int iFFmulX3 = FFmulX(iFFmulX2);
        int i2 = i ^ iFFmulX3;
        return shift(i2, 24) ^ ((shift(iFFmulX ^ i2, 8) ^ (iFFmulX3 ^ (iFFmulX ^ iFFmulX2))) ^ shift(iFFmulX2 ^ i2, 16));
    }

    private int mcol(int i) {
        int iFFmulX = FFmulX(i);
        return shift(i, 24) ^ ((iFFmulX ^ shift(i ^ iFFmulX, 8)) ^ shift(i, 16));
    }

    private final void packBlock(byte[] bArr, int i) {
        int i2 = i + 1;
        int i3 = this.C0;
        bArr[i] = (byte) i3;
        int i4 = i2 + 1;
        bArr[i2] = (byte) (i3 >> 8);
        int i5 = i4 + 1;
        bArr[i4] = (byte) (i3 >> 16);
        int i6 = i5 + 1;
        bArr[i5] = (byte) (i3 >> 24);
        int i7 = i6 + 1;
        int i8 = this.C1;
        bArr[i6] = (byte) i8;
        int i9 = i7 + 1;
        bArr[i7] = (byte) (i8 >> 8);
        int i10 = i9 + 1;
        bArr[i9] = (byte) (i8 >> 16);
        int i11 = i10 + 1;
        bArr[i10] = (byte) (i8 >> 24);
        int i12 = i11 + 1;
        int i13 = this.C2;
        bArr[i11] = (byte) i13;
        int i14 = i12 + 1;
        bArr[i12] = (byte) (i13 >> 8);
        int i15 = i14 + 1;
        bArr[i14] = (byte) (i13 >> 16);
        int i16 = i15 + 1;
        bArr[i15] = (byte) (i13 >> 24);
        int i17 = i16 + 1;
        int i18 = this.C3;
        bArr[i16] = (byte) i18;
        int i19 = i17 + 1;
        bArr[i17] = (byte) (i18 >> 8);
        bArr[i19] = (byte) (i18 >> 16);
        bArr[i19 + 1] = (byte) (i18 >> 24);
    }

    private int shift(int i, int i2) {
        return (i << (-i2)) | (i >>> i2);
    }

    private int subWord(int i) {
        byte[] bArr = S;
        return (bArr[(i >> 24) & 255] << 24) | (bArr[i & 255] & UByte.MAX_VALUE) | ((bArr[(i >> 8) & 255] & UByte.MAX_VALUE) << 8) | ((bArr[(i >> 16) & 255] & UByte.MAX_VALUE) << 16);
    }

    private final void unpackBlock(byte[] bArr, int i) {
        int i2 = i + 1;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        this.C0 = i3;
        int i4 = i2 + 1;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        this.C0 = i5;
        int i6 = i4 + 1;
        int i7 = i5 | ((bArr[i4] & UByte.MAX_VALUE) << 16);
        this.C0 = i7;
        int i8 = i6 + 1;
        this.C0 = i7 | (bArr[i6] << 24);
        int i9 = i8 + 1;
        int i10 = bArr[i8] & UByte.MAX_VALUE;
        this.C1 = i10;
        int i11 = i9 + 1;
        int i12 = ((bArr[i9] & UByte.MAX_VALUE) << 8) | i10;
        this.C1 = i12;
        int i13 = i11 + 1;
        int i14 = i12 | ((bArr[i11] & UByte.MAX_VALUE) << 16);
        this.C1 = i14;
        int i15 = i13 + 1;
        this.C1 = i14 | (bArr[i13] << 24);
        int i16 = i15 + 1;
        int i17 = bArr[i15] & UByte.MAX_VALUE;
        this.C2 = i17;
        int i18 = i16 + 1;
        int i19 = ((bArr[i16] & UByte.MAX_VALUE) << 8) | i17;
        this.C2 = i19;
        int i20 = i18 + 1;
        int i21 = i19 | ((bArr[i18] & UByte.MAX_VALUE) << 16);
        this.C2 = i21;
        int i22 = i20 + 1;
        this.C2 = i21 | (bArr[i20] << 24);
        int i23 = i22 + 1;
        int i24 = bArr[i22] & UByte.MAX_VALUE;
        this.C3 = i24;
        int i25 = i23 + 1;
        int i26 = ((bArr[i23] & UByte.MAX_VALUE) << 8) | i24;
        this.C3 = i26;
        int i27 = i26 | ((bArr[i25] & UByte.MAX_VALUE) << 16);
        this.C3 = i27;
        this.C3 = (bArr[i25 + 1] << 24) | i27;
    }

    @Override
    public String getAlgorithmName() {
        return "AES";
    }

    @Override
    public int getBlockSize() {
        return 16;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        if (cipherParameters instanceof KeyParameter) {
            this.WorkingKey = generateWorkingKey(((KeyParameter) cipherParameters).getKey(), z);
            this.forEncryption = z;
        } else {
            throw new IllegalArgumentException("invalid parameter passed to AES init - " + cipherParameters.getClass().getName());
        }
    }

    @Override
    public int processBlock(byte[] bArr, int i, byte[] bArr2, int i2) {
        if (this.WorkingKey == null) {
            throw new IllegalStateException("AES engine not initialised");
        }
        if (i + 16 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i2 + 16 > bArr2.length) {
            throw new DataLengthException("output buffer too short");
        }
        boolean z = this.forEncryption;
        unpackBlock(bArr, i);
        int[][] iArr = this.WorkingKey;
        if (z) {
            encryptBlock(iArr);
        } else {
            decryptBlock(iArr);
        }
        packBlock(bArr2, i2);
        return 16;
    }

    @Override
    public void reset() {
    }
}
