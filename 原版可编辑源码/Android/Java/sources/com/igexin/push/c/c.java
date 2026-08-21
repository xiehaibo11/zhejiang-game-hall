package com.igexin.push.c;

class c {
    static final int[] a;

    static {
        int[] iArr = new int[d.values().length];
        a = iArr;
        try {
            iArr[d.a.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            a[d.b.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            a[d.c.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
