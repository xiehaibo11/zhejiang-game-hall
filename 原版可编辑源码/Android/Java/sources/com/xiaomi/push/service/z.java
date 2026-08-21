package com.xiaomi.push.service;

import com.xiaomi.push.gh;
import com.xiaomi.push.if;
import com.xiaomi.push.service.XMPushService;

final class z extends XMPushService.j {
    final if a;
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    z(int i, XMPushService xMPushService, if ifVar) {
        super(i);
        this.a = xMPushService;
        this.a = ifVar;
    }

    @Override
    public String a() {
        return "send app absent message.";
    }

    @Override
    public void a() {
        try {
            ah.a(this.a, ah.a(this.a.b(), this.a.a()));
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
