package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.fx;
import com.xiaomi.push.service.XMPushService;

class cu extends XMPushService.j {
    final XMPushService a;
    final String a;
    final byte[] a;
    final int b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cu(XMPushService xMPushService, int i, int i2, String str, byte[] bArr) {
        super(i);
        this.a = xMPushService;
        this.b = i2;
        this.a = str;
        this.a = bArr;
    }

    @Override
    public String a() {
        return "clear account cache.";
    }

    @Override
    public void a() {
        u.a((Context) this.a);
        bg.a().a("5");
        com.xiaomi.push.ae.a(this.b);
        this.a.a.c(fx.a());
        com.xiaomi.channel.commonutils.logger.b.a("clear account and start registration. " + this.a);
        this.a.a(this.a, this.a);
    }
}
