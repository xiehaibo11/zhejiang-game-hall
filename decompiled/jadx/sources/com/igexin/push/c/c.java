package com.igexin.push.c;

/* JADX INFO: loaded from: classes2.dex */
/* synthetic */ class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f2470a;

    static {
        int[] iArr = new int[d.values().length];
        f2470a = iArr;
        try {
            iArr[d.NORMAL.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f2470a[d.BACKUP.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f2470a[d.TRY_NORMAL.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
