package com.vivo.push;

import android.text.TextUtils;
import com.vivo.push.util.z;

final class f implements Runnable {
    final String a;
    final e b;

    f(e eVar, String str) {
        this.b = eVar;
        this.a = str;
    }

    @Override
    public final void run() {
        if (this.b.h == null || TextUtils.isEmpty(this.a) || !z.b(this.b.h, this.b.h.getPackageName(), this.a)) {
            return;
        }
        this.b.i();
    }
}
