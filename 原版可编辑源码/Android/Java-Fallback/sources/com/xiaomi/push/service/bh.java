package com.xiaomi.push.service;

class bh implements com.xiaomi.push.service.bg.b.a {
    final com.xiaomi.push.service.bg.b a;

    bh(com.xiaomi.push.service.bg.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a(com.xiaomi.push.service.bg.c r3, com.xiaomi.push.service.bg.c r4, int r5) {
            r2 = this;
            com.xiaomi.push.service.bg$c r3 = com.xiaomi.push.service.bg.c.b
            if (r4 != r3) goto L17
            com.xiaomi.push.service.bg$b r3 = r2.a
            com.xiaomi.push.service.XMPushService r3 = com.xiaomi.push.service.bg.b.a(r3)
            com.xiaomi.push.service.bg$b r4 = r2.a
            com.xiaomi.push.service.XMPushService$c r4 = com.xiaomi.push.service.bg.b.a(r4)
            r0 = 60000(0xea60, double:2.9644E-319)
            r3.a(r4, r0)
            goto L26
        L17:
            com.xiaomi.push.service.bg$b r3 = r2.a
            com.xiaomi.push.service.XMPushService r3 = com.xiaomi.push.service.bg.b.a(r3)
            com.xiaomi.push.service.bg$b r4 = r2.a
            com.xiaomi.push.service.XMPushService$c r4 = com.xiaomi.push.service.bg.b.a(r4)
            r3.b(r4)
        L26:
            return
    }
}
