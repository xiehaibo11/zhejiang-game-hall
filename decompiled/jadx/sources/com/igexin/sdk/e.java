package com.igexin.sdk;

import android.app.Application;
import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
class e implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f2670a;
    final /* synthetic */ PushManager b;

    e(PushManager pushManager, Context context) {
        this.b = pushManager;
        this.f2670a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            Application applicationD = this.b.d(this.f2670a);
            if (applicationD == null) {
                return;
            }
            applicationD.unregisterActivityLifecycleCallbacks(this.b.i);
            this.b.i = null;
        } catch (Throwable unused) {
        }
    }
}
