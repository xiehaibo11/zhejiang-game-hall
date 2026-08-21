package com.xiaomi.mipush.sdk;

/* JADX INFO: loaded from: classes4.dex */
/* synthetic */ class at {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f8002a;

    static {
        int[] iArr = new int[au.values().length];
        f8002a = iArr;
        try {
            iArr[au.DISABLE_PUSH.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f8002a[au.ENABLE_PUSH.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f8002a[au.UPLOAD_HUAWEI_TOKEN.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f8002a[au.UPLOAD_FCM_TOKEN.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            f8002a[au.UPLOAD_COS_TOKEN.ordinal()] = 5;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f8002a[au.UPLOAD_FTOS_TOKEN.ordinal()] = 6;
        } catch (NoSuchFieldError unused6) {
        }
    }
}
