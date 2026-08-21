package com.xiaomi.push;

import com.xiaomi.push.al;

class an extends al.b {
    final al a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    an(al alVar, al.a aVar) {
        super(aVar);
        this.a = alVar;
    }

    @Override
    void b() {
        synchronized (this.a.a) {
            this.a.a.remove(this.a.a());
        }
    }
}
