package com.xiaomi.push;

import com.xiaomi.push.al;

class am extends al.b {
    final al a;
    final String a;
    final boolean a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    am(al alVar, al.a aVar, boolean z, String str) {
        super(aVar);
        this.a = alVar;
        this.a = z;
        this.a = str;
    }

    @Override
    void a() {
        super.a();
    }

    @Override
    void b() {
        if (this.a) {
            return;
        }
        this.a.a.edit().putLong(this.a, System.currentTimeMillis()).commit();
    }
}
