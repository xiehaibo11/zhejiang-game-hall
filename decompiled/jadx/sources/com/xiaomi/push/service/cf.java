package com.xiaomi.push.service;

import com.xiaomi.push.hj;

/* JADX INFO: loaded from: classes4.dex */
/* synthetic */ class cf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f8357a;

    static {
        int[] iArr = new int[hj.values().length];
        f8357a = iArr;
        try {
            iArr[hj.Registration.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f8357a[hj.UnRegistration.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f8357a[hj.Subscription.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f8357a[hj.UnSubscription.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            f8357a[hj.SendMessage.ordinal()] = 5;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f8357a[hj.AckMessage.ordinal()] = 6;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            f8357a[hj.SetConfig.ordinal()] = 7;
        } catch (NoSuchFieldError unused7) {
        }
        try {
            f8357a[hj.ReportFeedback.ordinal()] = 8;
        } catch (NoSuchFieldError unused8) {
        }
        try {
            f8357a[hj.Notification.ordinal()] = 9;
        } catch (NoSuchFieldError unused9) {
        }
        try {
            f8357a[hj.Command.ordinal()] = 10;
        } catch (NoSuchFieldError unused10) {
        }
    }
}
