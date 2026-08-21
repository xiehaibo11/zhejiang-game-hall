package com.igexin.push.extension.distribution.basic.a;

import com.igexin.push.core.bean.BaseAction;

/* JADX INFO: loaded from: classes2.dex */
class b implements com.igexin.push.extension.distribution.basic.f.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ BaseAction f2614a;
    final /* synthetic */ String b;
    final /* synthetic */ String c;
    final /* synthetic */ String d;
    final /* synthetic */ int e;
    final /* synthetic */ a f;

    b(a aVar, BaseAction baseAction, String str, String str2, String str3, int i) {
        this.f = aVar;
        this.f2614a = baseAction;
        this.b = str;
        this.c = str2;
        this.d = str3;
        this.e = i;
    }

    @Override // com.igexin.push.extension.distribution.basic.f.e
    public void a(BaseAction baseAction) {
        int i = this.e;
        if (i == 2) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).d(true);
        } else if (i == 8) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).c(true);
        }
        com.igexin.push.extension.distribution.basic.b.a aVar = (com.igexin.push.extension.distribution.basic.b.a) baseAction;
        if (aVar.s() && aVar.k() && com.igexin.push.core.d.a(this.b, true) == 0) {
            com.igexin.push.core.a.e.a().a(this.b, this.c, "1");
        }
    }

    @Override // com.igexin.push.extension.distribution.basic.f.e
    public void a(Exception exc) {
        if (((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).t() >= 3) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).d(true);
        }
        if (((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).l() >= 3) {
            ((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).c(true);
        }
        if (!((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).s() || !((com.igexin.push.extension.distribution.basic.b.a) this.f2614a).k()) {
            this.f.a(this.d, this.b, this.c, this.f2614a, this.e);
        } else if (com.igexin.push.core.d.a(this.b, true) == 0) {
            com.igexin.push.core.a.e.a().a(this.b, this.c, "1");
        }
    }
}
