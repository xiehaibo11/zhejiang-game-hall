package com.igexin.push.extension.distribution.basic.a;

import com.igexin.push.core.bean.BaseAction;

class b implements com.igexin.push.extension.distribution.basic.f.e {
    final BaseAction a;
    final String b;
    final String c;
    final String d;
    final int e;
    final a f;

    b(a aVar, BaseAction baseAction, String str, String str2, String str3, int i) {
        this.f = aVar;
        this.a = baseAction;
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = i;
    }

    @Override
    public void a(BaseAction baseAction) {
        int i = this.e;
        if (i == 2) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.a).d(true);
        } else if (i == 8) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.a).c(true);
        }
        com.igexin.push.extension.distribution.basic.b.a aVar = (com.igexin.push.extension.distribution.basic.b.a) baseAction;
        if (aVar.s() && aVar.k() && com.igexin.push.core.d.a(this.b, true) == 0) {
            com.igexin.push.core.a.e.a().a(this.b, this.c, "1");
        }
    }

    @Override
    public void a(Exception exc) {
        if (((com.igexin.push.extension.distribution.basic.b.a) this.a).t() >= 3) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.a).d(true);
        }
        if (((com.igexin.push.extension.distribution.basic.b.a) this.a).l() >= 3) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.a).c(true);
        }
        if (!((com.igexin.push.extension.distribution.basic.b.a) this.a).s() || !((com.igexin.push.extension.distribution.basic.b.a) this.a).k()) {
            this.f.a(this.d, this.b, this.c, this.a, this.e);
        } else if (com.igexin.push.core.d.a(this.b, true) == 0) {
            com.igexin.push.core.a.e.a().a(this.b, this.c, "1");
        }
    }
}
