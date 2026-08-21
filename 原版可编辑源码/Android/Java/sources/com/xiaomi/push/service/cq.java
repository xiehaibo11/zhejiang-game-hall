package com.xiaomi.push.service;

import com.xiaomi.push.service.XMPushService.g;
import com.xiaomi.push.service.bg;

class cq implements bg.a {
    final XMPushService a;

    cq(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    @Override
    public void a() {
        this.a.e();
        if (bg.a().a() <= 0) {
            this.a.a(this.a.new g(12, null));
        }
    }
}
