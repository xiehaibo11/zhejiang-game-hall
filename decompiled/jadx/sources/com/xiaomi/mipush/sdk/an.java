package com.xiaomi.mipush.sdk;

import com.xiaomi.push.hj;

/* JADX INFO: loaded from: classes4.dex */
/* synthetic */ class an {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f7995a;

    static {
        int[] iArr = new int[hj.values().length];
        f7995a = iArr;
        try {
            iArr[hj.SendMessage.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f7995a[hj.Registration.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f7995a[hj.UnRegistration.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f7995a[hj.Subscription.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
        try {
            f7995a[hj.UnSubscription.ordinal()] = 5;
        } catch (NoSuchFieldError unused5) {
        }
        try {
            f7995a[hj.Command.ordinal()] = 6;
        } catch (NoSuchFieldError unused6) {
        }
        try {
            f7995a[hj.Notification.ordinal()] = 7;
        } catch (NoSuchFieldError unused7) {
        }
    }
}
