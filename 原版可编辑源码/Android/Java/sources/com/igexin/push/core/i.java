package com.igexin.push.core;

class i {
    static final int[] a;
    static final int[] b;

    static {
        int[] iArr = new int[j.values().length];
        b = iArr;
        try {
            iArr[j.a.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            b[j.b.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            b[j.c.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            b[j.d.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        int[] iArr2 = new int[k.values().length];
        a = iArr2;
        try {
            iArr2[k.a.ordinal()] = 1;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            a[k.b.ordinal()] = 2;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            a[k.c.ordinal()] = 3;
        } catch (NoSuchFieldError unused7) {
        }
    }
}
