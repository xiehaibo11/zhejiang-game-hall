package com.tkay.core.common.l;

/* JADX INFO: loaded from: classes3.dex */
final class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final char[] f6246a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    private static final char[] b = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    private k() {
    }

    private static char[] b(byte[] bArr) {
        return a(bArr, false);
    }

    private static char[] a(byte[] bArr, boolean z) {
        return a(bArr, z ? b : f6246a);
    }

    private static char[] a(byte[] bArr, char[] cArr) {
        int length = bArr.length;
        char[] cArr2 = new char[length << 1];
        int i = 0;
        for (int i2 = 0; i2 < length; i2++) {
            int i3 = i + 1;
            cArr2[i] = cArr[(bArr[i2] & 240) >>> 4];
            i = i3 + 1;
            cArr2[i3] = cArr[bArr[i2] & 15];
        }
        return cArr2;
    }

    public static String a(byte[] bArr) {
        return new String(a(bArr, true));
    }
}
