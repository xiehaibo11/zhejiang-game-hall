package com.vivo.push.d;

import android.text.TextUtils;

final class e implements Runnable {
    final String a;
    final com.vivo.push.b.i b;
    final d c;

    e(d dVar, String str, com.vivo.push.b.i iVar) {
        this.c = dVar;
        this.a = str;
        this.b = iVar;
    }

    @Override
    public final void run() {
        if (!TextUtils.isEmpty(this.a)) {
            this.c.b.onReceiveRegId(this.c.a, this.a);
        }
        this.c.b.onBind(this.c.a, this.b.h(), this.b.d());
    }
}
