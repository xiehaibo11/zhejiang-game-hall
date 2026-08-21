package com.xiaomi.push.service;

import com.xiaomi.push.gh;
import com.xiaomi.push.service.XMPushService;

class cj extends XMPushService.j {
    final XMPushService a;
    final String a;
    final byte[] a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cj(XMPushService xMPushService, int i, String str, byte[] bArr) {
        super(i);
        this.a = xMPushService;
        this.a = str;
        this.a = bArr;
    }

    @Override
    public String a() {
        return "send mi push message";
    }

    @Override
    public void a() {
        try {
            ah.a(this.a, this.a, this.a);
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            this.a.a(10, e);
        }
    }
}
