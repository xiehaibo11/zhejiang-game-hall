package com.xiaomi.push;

import com.xiaomi.push.service.bg;

class fe {
    static final int[] a;

    static {
        int[] iArr = new int[bg.c.values().length];
        a = iArr;
        try {
            iArr[bg.c.a.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[bg.c.b.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            a[bg.c.c.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
