package com.czhj.wire.okio;

import com.sigmob.sdk.archives.tar.e;
import java.io.UnsupportedEncodingException;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
final class Base64 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f1880a = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, e.P, 77, 78, 79, 80, 81, 82, e.Q, 84, 85, 86, 87, e.S, 89, 90, 97, 98, 99, 100, 101, 102, e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, e.R, 121, 122, e.H, e.I, e.J, e.K, e.L, e.M, e.N, e.O, 56, 57, 43, 47};
    private static final byte[] b = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, e.P, 77, 78, 79, 80, 81, 82, e.Q, 84, 85, 86, 87, e.S, 89, 90, 97, 98, 99, 100, 101, 102, e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, e.R, 121, 122, e.H, e.I, e.J, e.K, e.L, e.M, e.N, e.O, 56, 57, 45, 95};

    private Base64() {
    }

    private static String a(byte[] bArr, byte[] bArr2) {
        byte[] bArr3 = new byte[((bArr.length + 2) * 4) / 3];
        int length = bArr.length - (bArr.length % 3);
        int i = 0;
        for (int i2 = 0; i2 < length; i2 += 3) {
            int i3 = i + 1;
            bArr3[i] = bArr2[(bArr[i2] & UByte.MAX_VALUE) >> 2];
            int i4 = i3 + 1;
            int i5 = i2 + 1;
            bArr3[i3] = bArr2[((bArr[i2] & 3) << 4) | ((bArr[i5] & UByte.MAX_VALUE) >> 4)];
            int i6 = i4 + 1;
            int i7 = (bArr[i5] & 15) << 2;
            int i8 = i2 + 2;
            bArr3[i4] = bArr2[i7 | ((bArr[i8] & UByte.MAX_VALUE) >> 6)];
            i = i6 + 1;
            bArr3[i6] = bArr2[bArr[i8] & okio.Utf8.REPLACEMENT_BYTE];
        }
        int length2 = bArr.length % 3;
        if (length2 == 1) {
            int i9 = i + 1;
            bArr3[i] = bArr2[(bArr[length] & UByte.MAX_VALUE) >> 2];
            int i10 = i9 + 1;
            bArr3[i9] = bArr2[(bArr[length] & 3) << 4];
            int i11 = i10 + 1;
            bArr3[i10] = 61;
            i = i11 + 1;
            bArr3[i11] = 61;
        } else if (length2 == 2) {
            int i12 = i + 1;
            bArr3[i] = bArr2[(bArr[length] & UByte.MAX_VALUE) >> 2];
            int i13 = i12 + 1;
            int i14 = (bArr[length] & 3) << 4;
            int i15 = length + 1;
            bArr3[i12] = bArr2[((bArr[i15] & UByte.MAX_VALUE) >> 4) | i14];
            int i16 = i13 + 1;
            bArr3[i13] = bArr2[(bArr[i15] & 15) << 2];
            i = i16 + 1;
            bArr3[i16] = 61;
        }
        try {
            return new String(bArr3, 0, i, "US-ASCII");
        } catch (UnsupportedEncodingException e) {
            throw new AssertionError(e);
        }
    }

    public static byte[] decode(String str) {
        int i;
        char cCharAt;
        int length = str.length();
        while (length > 0 && ((cCharAt = str.charAt(length - 1)) == '=' || cCharAt == '\n' || cCharAt == '\r' || cCharAt == ' ' || cCharAt == '\t')) {
            length--;
        }
        int i2 = (int) ((((long) length) * 6) / 8);
        byte[] bArr = new byte[i2];
        int i3 = 0;
        int i4 = 0;
        int i5 = 0;
        for (int i6 = 0; i6 < length; i6++) {
            char cCharAt2 = str.charAt(i6);
            if (cCharAt2 >= 'A' && cCharAt2 <= 'Z') {
                i = cCharAt2 - 'A';
            } else if (cCharAt2 >= 'a' && cCharAt2 <= 'z') {
                i = cCharAt2 - 'G';
            } else if (cCharAt2 >= '0' && cCharAt2 <= '9') {
                i = cCharAt2 + 4;
            } else if (cCharAt2 == '+' || cCharAt2 == '-') {
                i = 62;
            } else if (cCharAt2 == '/' || cCharAt2 == '_') {
                i = 63;
            } else {
                if (cCharAt2 != '\n' && cCharAt2 != '\r' && cCharAt2 != ' ' && cCharAt2 != '\t') {
                    return null;
                }
            }
            i4 = (i4 << 6) | ((byte) i);
            i3++;
            if (i3 % 4 == 0) {
                int i7 = i5 + 1;
                bArr[i5] = (byte) (i4 >> 16);
                int i8 = i7 + 1;
                bArr[i7] = (byte) (i4 >> 8);
                bArr[i8] = (byte) i4;
                i5 = i8 + 1;
            }
        }
        int i9 = i3 % 4;
        if (i9 == 1) {
            return null;
        }
        if (i9 == 2) {
            bArr[i5] = (byte) ((i4 << 12) >> 16);
            i5++;
        } else if (i9 == 3) {
            int i10 = i4 << 6;
            int i11 = i5 + 1;
            bArr[i5] = (byte) (i10 >> 16);
            i5 = i11 + 1;
            bArr[i11] = (byte) (i10 >> 8);
        }
        if (i5 == i2) {
            return bArr;
        }
        byte[] bArr2 = new byte[i5];
        System.arraycopy(bArr, 0, bArr2, 0, i5);
        return bArr2;
    }

    public static String encode(byte[] bArr) {
        return a(bArr, f1880a);
    }

    public static String encodeUrl(byte[] bArr) {
        return a(bArr, b);
    }
}
