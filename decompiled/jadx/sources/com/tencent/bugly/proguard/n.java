package com.tencent.bugly.proguard;

import java.nio.ByteBuffer;

/* JADX INFO: compiled from: BUGLY */
/* JADX INFO: loaded from: classes3.dex */
public final class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f5387a;
    private static final byte[] b;

    public static boolean a(int i, int i2) {
        return i == i2;
    }

    public static boolean a(long j, long j2) {
        return j == j2;
    }

    public static boolean a(boolean z, boolean z2) {
        return z == z2;
    }

    public static boolean a(Object obj, Object obj2) {
        return obj.equals(obj2);
    }

    public static byte[] a(ByteBuffer byteBuffer) {
        byte[] bArr = new byte[byteBuffer.position()];
        System.arraycopy(byteBuffer.array(), 0, bArr, 0, bArr.length);
        return bArr;
    }

    static {
        byte[] bArr = {com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 65, 66, 67, 68, 69, 70};
        byte[] bArr2 = new byte[256];
        byte[] bArr3 = new byte[256];
        for (int i = 0; i < 256; i++) {
            bArr2[i] = bArr[i >>> 4];
            bArr3[i] = bArr[i & 15];
        }
        f5387a = bArr2;
        b = bArr3;
    }
}
