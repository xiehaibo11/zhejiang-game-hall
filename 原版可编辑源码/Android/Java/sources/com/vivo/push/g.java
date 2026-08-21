package com.vivo.push;

import com.vivo.push.e;

final class g implements IPushActionListener {
    final e.a a;
    final e b;

    g(e eVar, e.a aVar) {
        this.b = eVar;
        this.a = aVar;
    }

    @Override
    public final void onStateChanged(int i) {
        if (i != 0) {
            this.b.k = null;
            this.b.j.b("APP_TOKEN");
            return;
        }
        Object[] objArrB = this.a.b();
        if (objArrB == null || objArrB.length == 0) {
            com.vivo.push.util.p.a("PushClientManager", "bind app result is null");
        } else {
            this.b.a((String) this.a.b()[0]);
        }
    }
}
