package com.igexin.sdk;

import android.app.Application;
import android.content.Context;
import com.igexin.push.core.g;

class d implements Runnable {
    final Context a;
    final PushManager b;

    d(PushManager pushManager, Context context) {
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
            synchronized (this) {
                if (this.b.i == null) {
                    this.b.i = new g(this.a);
                    applicationD.registerActivityLifecycleCallbacks(this.b.i);
                }
            }
        } catch (Throwable unused) {
        }
    }
}
