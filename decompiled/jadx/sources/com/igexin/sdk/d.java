package com.igexin.sdk;

import android.app.Application;
import android.content.Context;
import com.igexin.push.core.g;

/* JADX INFO: loaded from: classes2.dex */
class d implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f2669a;
    final /* synthetic */ PushManager b;

    d(PushManager pushManager, Context context) {
        this.b = pushManager;
        this.f2669a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            Application applicationD = this.b.d(this.f2669a);
            if (applicationD == null) {
                return;
            }
            synchronized (this) {
                if (this.b.i == null) {
                    this.b.i = new g(this.f2669a);
                    applicationD.registerActivityLifecycleCallbacks(this.b.i);
                }
            }
        } catch (Throwable unused) {
        }
    }
}
