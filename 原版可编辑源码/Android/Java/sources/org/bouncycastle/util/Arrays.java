package org.bouncycastle.util;

import kotlin.UByte;

public final class Arrays {
    private Arrays() {
    }

    public static boolean areEqual(byte[] bArr, byte[] bArr2) {
        if (bArr == bArr2) {
            return true;
        }
        if (bArr == null || bArr2 == null || bArr.length != bArr2.length) {
            return false;
        }
        for (int i = 0; i != bArr.length; i++) {
            if (bArr[i] != bArr2[i]) {
                return false;
            }
        }
        return true;
    }

    public static boolean areEqual(int[] iArr, int[] iArr2) {
        if (iArr == iArr2) {
            return true;
        }
        if (iArr == null || iArr2 == null || iArr.length != iArr2.length) {
            return false;
        }
        for (int i = 0; i != iArr.length; i++) {
            if (iArr[i] != iArr2[i]) {
                return false;
            }
        }
        return true;
    }

    public static byte[] clone(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        byte[] bArr2 = new byte[bArr.length];
        System.arraycopy(bArr, 0, bArr2, 0, bArr.length);
        return bArr2;
    }

    public static int[] clone(int[] iArr) {
        if (iArr == null) {
            return null;
        }
        int[] iArr2 = new int[iArr.length];
        System.arraycopy(iArr, 0, iArr2, 0, iArr.length);
        return iArr2;
    }

    public static void fill(byte[] bArr, byte b) {
        for (int i = 0; i < bArr.length; i++) {
            bArr[i] = b;
        }
    }

    public static void fill(long[] jArr, long j) {
        for (int i = 0; i < jArr.length; i++) {
            jArr[i] = j;
        }
    }

    public static void fill(short[] sArr, short s) {
        for (int i = 0; i < sArr.length; i++) {
            sArr[i] = s;
        }
    }

    public static int hashCode(byte[] bArr) {
        if (bArr == null) {
            return 0;
        }
        int i = 0;
        for (int i2 = 0; i2 != bArr.length; i2++) {
            i ^= (bArr[i2] & UByte.MAX_VALUE) << (i2 % 4);
        }
        return i;
    }
}
