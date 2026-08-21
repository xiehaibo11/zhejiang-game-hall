package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;

class bj extends XMPushService.j {
    final bg.b.c a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    bj(bg.b.c cVar, int i) {
        super(i);
        this.a = cVar;
    }

    @Override
    public String a() {
        return "check peer job";
    }

    @Override
    public void a() {
        if (bg.a().a(this.a.a.g, this.a.a.b).a == null) {
            bg.b.this.a.a(this.a.a.g, this.a.a.b, 2, null, null);
        }
    }
}
