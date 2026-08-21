package com.xiaomi.push.service;

final class z extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.if a;
    final com.xiaomi.push.service.XMPushService a;

    z(int r1, com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3) {
            r0 = this;
            r0.a = r2
            r0.a = r3
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "send app absent message."
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            com.xiaomi.push.service.XMPushService r0 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.if r1 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            java.lang.String r1 = r1.b()     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.if r2 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            java.lang.String r2 = r2.a()     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.if r1 = com.xiaomi.push.service.ah.a(r1, r2)     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.service.ah.a(r0, r1)     // Catch: com.xiaomi.push.gh -> L16
            goto L21
        L16:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r3.a
            r2 = 10
            r1.a(r2, r0)
        L21:
            return
    }
}
