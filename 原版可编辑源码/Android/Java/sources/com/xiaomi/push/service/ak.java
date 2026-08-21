package com.xiaomi.push.service;

import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.service.bg;

final class ak implements bg.b.a {
    final XMPushService a;

    ak(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    @Override
    public void a(bg.c cVar, bg.c cVar2, int i) {
        if (cVar2 == bg.c.c) {
            x.a(this.a, true);
            x.a(this.a);
        } else if (cVar2 == bg.c.a) {
            com.xiaomi.channel.commonutils.logger.b.a("onChange unbind");
            x.a(this.a, ErrorCode.ERROR_SERVICE_UNAVAILABLE, " the push is not connected.");
        }
    }
}
