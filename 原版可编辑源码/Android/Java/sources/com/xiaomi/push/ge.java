package com.xiaomi.push;

import com.xiaomi.push.service.XMPushService;

class ge extends XMPushService.j {
    final long a;
    final gd a;
    final long b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ge(gd gdVar, int i, long j, long j2) {
        super(i);
        this.a = gdVar;
        this.a = j;
        this.b = j2;
    }

    @Override
    public String a() {
        return "check the ping-pong." + this.b;
    }

    @Override
    public void a() {
        Thread.yield();
        if (!this.a.c() || this.a.a(this.a)) {
            return;
        }
        com.xiaomi.push.service.o.a(this.a.b).b();
        this.a.b.a(22, (Exception) null);
    }
}
