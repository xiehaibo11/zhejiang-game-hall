package com.xiaomi.push.service;

final class aa extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.if a;
    final com.xiaomi.push.service.XMPushService a;

    aa(int r1, com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3) {
            r0 = this;
            r0.a = r2
            r0.a = r3
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "send ack message for message."
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            r0 = 0
            com.xiaomi.push.service.XMPushService r1 = r3.a     // Catch: com.xiaomi.push.gh -> L1f
            boolean r1 = com.xiaomi.push.m.a(r1)     // Catch: com.xiaomi.push.gh -> L1f
            if (r1 == 0) goto L11
            com.xiaomi.push.service.XMPushService r1 = r3.a     // Catch: java.lang.Throwable -> L11
            com.xiaomi.push.if r2 = r3.a     // Catch: java.lang.Throwable -> L11
            java.util.Map r0 = com.xiaomi.push.service.ag.a(r1, r2)     // Catch: java.lang.Throwable -> L11
        L11:
            com.xiaomi.push.service.XMPushService r1 = r3.a     // Catch: com.xiaomi.push.gh -> L1f
            com.xiaomi.push.if r2 = r3.a     // Catch: com.xiaomi.push.gh -> L1f
            com.xiaomi.push.if r0 = com.xiaomi.push.service.y.a(r1, r2, r0)     // Catch: com.xiaomi.push.gh -> L1f
            com.xiaomi.push.service.XMPushService r1 = r3.a     // Catch: com.xiaomi.push.gh -> L1f
            com.xiaomi.push.service.ah.a(r1, r0)     // Catch: com.xiaomi.push.gh -> L1f
            goto L2a
        L1f:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r3.a
            r2 = 10
            r1.a(r2, r0)
        L2a:
            return
    }
}
