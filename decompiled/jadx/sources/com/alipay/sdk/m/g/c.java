package com.alipay.sdk.m.g;

import android.util.Base64;
import java.security.SecureRandom;
import java.util.Arrays;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static volatile SecureRandom f1184a;
    public static final char[] b = "0123456789ABCDEF".toCharArray();

    public static byte[] a(byte b2) {
        return new byte[]{b2};
    }

    public static byte[] a(char c) {
        return new byte[]{(byte) (c & 255)};
    }

    public static byte[] a(char c, char c2) {
        return new byte[]{(byte) (c & 255), (byte) (c2 & 255)};
    }

    public static byte[] a(int i) {
        return new byte[]{(byte) i, (byte) (i >> 8), (byte) (i >> 16), (byte) (i >> 24)};
    }

    public static byte[] a(long j) {
        return new byte[]{(byte) j, (byte) (j >> 8), (byte) (j >> 16), (byte) (j >> 24), (byte) (j >> 32), (byte) (j >> 40), (byte) (j >> 48), (byte) (j >> 56)};
    }

    public static byte[] a(short s) {
        return new byte[]{(byte) s, (byte) (s >> 8)};
    }

    public static byte[] b() {
        byte[] bArr = new byte[2];
        a().nextBytes(bArr);
        return bArr;
    }

    public static byte[] c() {
        byte[] bArr = new byte[4];
        a().nextBytes(bArr);
        return bArr;
    }

    public static String b(byte[] bArr) {
        char[] cArr = new char[bArr.length * 2];
        for (int i = 0; i < bArr.length; i++) {
            int i2 = bArr[i] & UByte.MAX_VALUE;
            int i3 = i * 2;
            char[] cArr2 = b;
            cArr[i3] = cArr2[i2 >>> 4];
            cArr[i3 + 1] = cArr2[i2 & 15];
        }
        return new String(cArr);
    }

    public static SecureRandom a() {
        if (f1184a != null) {
            return f1184a;
        }
        synchronized (c.class) {
            if (f1184a == null) {
                f1184a = new SecureRandom();
            }
        }
        return f1184a;
    }

    public static byte[] a(byte[]... bArr) {
        int length = 0;
        for (byte[] bArr2 : bArr) {
            length += bArr2.length;
        }
        byte[] bArrCopyOf = null;
        int length2 = 0;
        for (byte[] bArr3 : bArr) {
            if (bArrCopyOf == null) {
                bArrCopyOf = Arrays.copyOf(bArr3, length);
                length2 = bArr3.length;
            } else {
                System.arraycopy(bArr3, 0, bArrCopyOf, length2, bArr3.length);
                length2 += bArr3.length;
            }
        }
        return bArrCopyOf;
    }

    public static String a(byte[] bArr) {
        return Base64.encodeToString(bArr, 3);
    }
}
