package com.igexin.push.util;

import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ boolean f2654a = !d.class.desiredAssertionStatus();

    private d() {
    }

    public static byte[] a(String str, int i) {
        return a(str.getBytes(), i);
    }

    public static byte[] a(byte[] bArr, int i) {
        return a(bArr, 0, bArr.length, i);
    }

    public static byte[] a(byte[] bArr, int i, int i2, int i3) {
        f fVar = new f(i3, new byte[(i2 * 3) / 4]);
        if (!fVar.a(bArr, i, i2, true)) {
            throw new IllegalArgumentException("bad base-64");
        }
        if (fVar.b == fVar.f2655a.length) {
            return fVar.f2655a;
        }
        byte[] bArr2 = new byte[fVar.b];
        System.arraycopy(fVar.f2655a, 0, bArr2, 0, fVar.b);
        return bArr2;
    }

    public static String b(byte[] bArr, int i) {
        try {
            return new String(c(bArr, i), "US-ASCII");
        } catch (UnsupportedEncodingException e) {
            throw new AssertionError(e);
        }
    }

    public static byte[] b(byte[] bArr, int i, int i2, int i3) {
        g gVar = new g(i3, null);
        int i4 = (i2 / 3) * 4;
        if (!gVar.d) {
            int i5 = i2 % 3;
            if (i5 == 1) {
                i4 += 2;
            } else if (i5 == 2) {
                i4 += 3;
            }
        } else if (i2 % 3 > 0) {
            i4 += 4;
        }
        if (gVar.e && i2 > 0) {
            i4 += (((i2 - 1) / 57) + 1) * (gVar.f ? 2 : 1);
        }
        gVar.f2655a = new byte[i4];
        gVar.a(bArr, i, i2, true);
        if (f2654a || gVar.b == i4) {
            return gVar.f2655a;
        }
        throw new AssertionError();
    }

    public static byte[] c(byte[] bArr, int i) {
        return b(bArr, 0, bArr.length, i);
    }
}
