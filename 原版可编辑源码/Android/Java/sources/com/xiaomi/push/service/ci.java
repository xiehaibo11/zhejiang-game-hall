package com.xiaomi.push.service;

import com.xiaomi.push.fl;
import com.xiaomi.push.gb;
import com.xiaomi.push.gn;
import com.xiaomi.push.service.XMPushService.d;
import com.xiaomi.push.service.XMPushService.m;

class ci implements gb {
    final XMPushService a;

    ci(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    @Override
    public void a(fl flVar) {
        this.a.a(this.a.new d(flVar));
    }

    @Override
    public void a(gn gnVar) {
        this.a.a(this.a.new m(gnVar));
    }
}
