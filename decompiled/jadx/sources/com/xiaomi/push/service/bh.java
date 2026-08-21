package com.xiaomi.push.service;

import com.xiaomi.push.service.bg;

/* JADX INFO: loaded from: classes4.dex */
class bh implements bg.b.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bg.b f8335a;

    bh(bg.b bVar) {
        this.f8335a = bVar;
    }

    @Override // com.xiaomi.push.service.bg.b.a
    public void a(bg.c cVar, bg.c cVar2, int i) {
        if (cVar2 == bg.c.binding) {
            this.f8335a.f943a.a(this.f8335a.f942a, 60000L);
        } else {
            this.f8335a.f943a.b(this.f8335a.f942a);
        }
    }
}
