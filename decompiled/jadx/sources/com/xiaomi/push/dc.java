package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
/* synthetic */ class dc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f8097a;

    static {
        int[] iArr = new int[hj.values().length];
        f8097a = iArr;
        try {
            iArr[hj.Registration.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f8097a[hj.UnRegistration.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f8097a[hj.Subscription.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f8097a[hj.UnSubscription.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            f8097a[hj.SendMessage.ordinal()] = 5;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f8097a[hj.AckMessage.ordinal()] = 6;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            f8097a[hj.SetConfig.ordinal()] = 7;
        } catch (NoSuchFieldError unused7) {
        }
        try {
            f8097a[hj.ReportFeedback.ordinal()] = 8;
        } catch (NoSuchFieldError unused8) {
        }
        try {
            f8097a[hj.MultiConnectionBroadcast.ordinal()] = 9;
        } catch (NoSuchFieldError unused9) {
        }
        try {
            f8097a[hj.MultiConnectionResult.ordinal()] = 10;
        } catch (NoSuchFieldError unused10) {
        }
        try {
            f8097a[hj.Notification.ordinal()] = 11;
        } catch (NoSuchFieldError unused11) {
        }
        try {
            f8097a[hj.Command.ordinal()] = 12;
        } catch (NoSuchFieldError unused12) {
        }
    }
}
