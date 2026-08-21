package com.xiaomi.push;

import com.xiaomi.push.service.XMPushService;

class fd extends XMPushService.j {
    final fc a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    fd(fc fcVar, int i) {
        super(i);
        this.a = fcVar;
    }

    @Override
    public String a() {
        return "Handling bind stats";
    }

    @Override
    public void a() {
        this.a.c();
    }
}
