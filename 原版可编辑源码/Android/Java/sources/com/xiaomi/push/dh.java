package com.xiaomi.push;

import com.xiaomi.push.ao;
import com.xiaomi.push.df;

class dh extends ao.b {
    ao.b a;
    final df a;

    dh(df dfVar) {
        this.a = dfVar;
    }

    @Override
    public void b() {
        df.b bVar = (df.b) this.a.a.peek();
        if (bVar == null || !bVar.a()) {
            return;
        }
        if (this.a.a.remove(bVar)) {
            this.a = bVar;
        }
        ao.b bVar2 = this.a;
        if (bVar2 != null) {
            bVar2.b();
        }
    }

    @Override
    public void c() {
        ao.b bVar = this.a;
        if (bVar != null) {
            bVar.c();
        }
    }
}
