package com.bytedance.pangle.f.a;

/* JADX INFO: loaded from: classes.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int[] f1530a;
    int[] b;

    public final String a(int i) {
        int[] iArr;
        if (i < 0 || (iArr = this.f1530a) == null || i >= iArr.length) {
            return null;
        }
        int i2 = iArr[i];
        int iA = a(this.b, i2);
        StringBuilder sb = new StringBuilder(iA);
        while (iA != 0) {
            i2 += 2;
            sb.append((char) a(this.b, i2));
            iA--;
        }
        return sb.toString();
    }

    f() {
    }

    private static final int a(int[] iArr, int i) {
        int i2 = iArr[i / 4];
        return (i % 4) / 2 == 0 ? i2 & 65535 : i2 >>> 16;
    }
}
