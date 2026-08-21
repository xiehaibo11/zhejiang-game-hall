package com.igexin.push.core;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.text.TextUtils;

class y implements Runnable {
    final Context a;
    final Intent b;
    final x c;

    y(x xVar, Context context, Intent intent) {
        this.c = xVar;
        this.a = context;
        this.b = intent;
    }

    private void a() {
        com.igexin.b.a.c.b.a("ServiceManager|startPService by bind", new Object[0]);
        this.b.setType("PB-" + System.nanoTime());
        Intent intent = this.b;
        Context context = this.a;
        intent.setClass(context, this.c.c(context));
        this.a.getApplicationContext().bindService(this.b, this.c.i, 1);
    }

    @Override
    public void run() {
        if (TextUtils.isEmpty(this.c.h)) {
            this.c.h = d.f;
            if (TextUtils.isEmpty(this.c.h)) {
                this.c.h = com.igexin.push.util.c.b(this.a);
            }
        }
        this.b.putExtra(com.tkay.expressad.d.a.b.bH, this.c.h);
        try {
            if (Build.VERSION.SDK_INT < 26 || !com.igexin.push.util.a.h()) {
                this.a.getApplicationContext().startService(this.b);
            } else {
                a();
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("ServiceManager|startPushService err：" + th.toString(), new Object[0]);
            if (th instanceof IllegalStateException) {
                a();
            }
        }
    }
}
