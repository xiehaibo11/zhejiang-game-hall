package com.xiaomi.push;

import com.xiaomi.push.service.XMPushService;

class gf extends XMPushService.j {
    final gd a;
    final Exception a;
    final int b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    gf(gd gdVar, int i, int i2, Exception exc) {
        super(i);
        this.a = gdVar;
        this.b = i2;
        this.a = exc;
    }

    @Override
    public String a() {
        return "shutdown the connection. " + this.b + ", " + this.a;
    }

    @Override
    public void a() {
        this.a.b.a(this.b, this.a);
    }
}
