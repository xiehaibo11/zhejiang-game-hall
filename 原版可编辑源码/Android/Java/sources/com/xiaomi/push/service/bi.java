package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;

class bi extends XMPushService.j {
    final bg.b.c a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    bi(bg.b.c cVar, int i) {
        super(i);
        this.a = cVar;
    }

    @Override
    public String a() {
        return "clear peer job";
    }

    @Override
    public void a() {
        if (this.a.a == this.a.a.a) {
            com.xiaomi.channel.commonutils.logger.b.b("clean peer, chid = " + this.a.a.g);
            this.a.a.a = null;
        }
    }
}
