package com.tkay.expressad.exoplayer.k;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes3.dex */
public final class w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6777a = 0;
    public static final int b = 1;
    public static final int c = 2;

    @Retention(RetentionPolicy.SOURCE)
    public @interface a {
    }

    private static boolean b(int i, int i2) {
        if (i != 0) {
            return i != 1 ? i == 2 && (i2 & 2) != 0 : (i2 & 1) != 0;
        }
        return true;
    }

    private w() {
    }

    private static int a(int i, int i2) {
        for (int i3 = 1; i3 <= 2; i3++) {
            int i4 = (i + i3) % 3;
            boolean z = false;
            if (i4 == 0 || (i4 == 1 ? (i2 & 1) != 0 : !(i4 != 2 || (i2 & 2) == 0))) {
                z = true;
            }
            if (z) {
                return i4;
            }
        }
        return i;
    }
}
