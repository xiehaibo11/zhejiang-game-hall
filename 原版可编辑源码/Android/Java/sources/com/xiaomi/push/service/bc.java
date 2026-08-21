package com.xiaomi.push.service;

import com.xiaomi.push.hp;
import com.xiaomi.push.hq;

class bc {
    static final int[] a;
    static final int[] b;

    static {
        int[] iArr = new int[hq.values().length];
        b = iArr;
        try {
            iArr[hq.a.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            b[hq.b.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            b[hq.c.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            b[hq.d.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        int[] iArr2 = new int[hp.values().length];
        a = iArr2;
        try {
            iArr2[hp.a.ordinal()] = 1;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            a[hp.b.ordinal()] = 2;
        } catch (NoSuchFieldError unused6) {
        }
    }
}
