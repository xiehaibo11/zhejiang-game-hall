package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;

class cs extends XMPushService.j {
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cs(XMPushService xMPushService, int i) {
        super(i);
        this.a = xMPushService;
    }

    @Override
    public String a() {
        return "prepare the mi push account.";
    }

    @Override
    public void a() {
        ah.a(this.a);
        if (com.xiaomi.push.bj.b(this.a)) {
            this.a.a(true);
        }
    }
}
