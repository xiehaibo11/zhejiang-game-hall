package com.xiaomi.push;

import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
/* synthetic */ class fe {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f8151a;

    static {
        int[] iArr = new int[bg.c.values().length];
        f8151a = iArr;
        try {
            iArr[bg.c.unbind.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f8151a[bg.c.binding.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f8151a[bg.c.binded.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
