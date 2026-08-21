package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;

class ck extends XMPushService.j {
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ck(XMPushService xMPushService, int i) {
        super(i);
        this.a = xMPushService;
    }

    @Override
    public String a() {
        return "disconnect for service destroy.";
    }

    @Override
    public void a() {
        if (this.a.a != null) {
            this.a.a.b(15, (Exception) null);
            this.a.a = null;
        }
    }
}
