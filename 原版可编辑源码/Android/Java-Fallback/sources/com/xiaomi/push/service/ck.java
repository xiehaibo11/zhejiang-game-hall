package com.xiaomi.push.service;

class ck extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.XMPushService a;

    ck(com.xiaomi.push.service.XMPushService r1, int r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "disconnect for service destroy."
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            com.xiaomi.push.service.XMPushService r0 = r3.a
            com.xiaomi.push.fw r0 = com.xiaomi.push.service.XMPushService.a(r0)
            if (r0 == 0) goto L19
            com.xiaomi.push.service.XMPushService r0 = r3.a
            com.xiaomi.push.fw r0 = com.xiaomi.push.service.XMPushService.a(r0)
            r1 = 15
            r2 = 0
            r0.b(r1, r2)
            com.xiaomi.push.service.XMPushService r0 = r3.a
            com.xiaomi.push.service.XMPushService.a(r0, r2)
        L19:
            return
    }
}
