package com.alipay.sdk.util;

import android.app.Activity;

/* JADX INFO: loaded from: classes.dex */
final class p implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f1328a;

    p(Activity activity) {
        this.f1328a = activity;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f1328a.finish();
    }
}
