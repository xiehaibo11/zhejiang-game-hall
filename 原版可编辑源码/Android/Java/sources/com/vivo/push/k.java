package com.vivo.push;

import com.vivo.push.e;

final class k implements Runnable {
    final String a;
    final e b;

    k(e eVar, String str) {
        this.b = eVar;
        this.a = str;
    }

    @Override
    public final void run() {
        e.a aVarD = this.b.d(this.a);
        if (aVarD != null) {
            aVarD.a(1003, new Object[0]);
        }
    }
}
