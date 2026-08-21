package com.igexin.sdk;

import android.app.Application;
import android.content.Context;

class e implements Runnable {
    final Context a;
    final PushManager b;

    e(PushManager pushManager, Context context) {
        this.b = pushManager;
        this.a = context;
    }

    @Override
    public void run() {
        try {
            Application applicationD = this.b.d(this.a);
            if (applicationD == null) {
                return;
            }
            applicationD.unregisterActivityLifecycleCallbacks(this.b.i);
            this.b.i = null;
        } catch (Throwable unused) {
        }
    }
}
