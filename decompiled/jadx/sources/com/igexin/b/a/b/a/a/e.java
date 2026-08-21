package com.igexin.b.a.b.a.a;

/* JADX INFO: loaded from: classes2.dex */
/* synthetic */ class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f2431a;

    static {
        int[] iArr = new int[q.values().length];
        f2431a = iArr;
        try {
            iArr[q.TCP_START_CONNECT.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f2431a[q.TCP_CREATE_SUCCESS.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f2431a[q.TCP_CONNECT_SUCCESS.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f2431a[q.INTERRUPT_SUCCESS.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            f2431a[q.TCP_DISCONNECT.ordinal()] = 5;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f2431a[q.TCP_IO_EXCEPTION.ordinal()] = 6;
        } catch (NoSuchFieldError unused6) {
        }
    }
}
