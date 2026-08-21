package com.igexin.push.core;

/* JADX INFO: loaded from: classes2.dex */
/* synthetic */ class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f2574a;
    static final /* synthetic */ int[] b;

    static {
        int[] iArr = new int[j.values().length];
        b = iArr;
        try {
            iArr[j.HEARTBEAT_OK.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            b[j.HEARTBEAT_TIMEOUT.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            b[j.NETWORK_ERROR.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            b[j.NETWORK_SWITCH.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        int[] iArr2 = new int[k.values().length];
        f2574a = iArr2;
        try {
            iArr2[k.DETECT.ordinal()] = 1;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f2574a[k.STABLE.ordinal()] = 2;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            f2574a[k.PENDING.ordinal()] = 3;
        } catch (NoSuchFieldError unused7) {
        }
    }
}
