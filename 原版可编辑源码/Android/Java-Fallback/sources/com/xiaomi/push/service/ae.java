package com.xiaomi.push.service;

final class ae extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.if a;
    final com.xiaomi.push.service.XMPushService a;
    final java.lang.String a;
    final java.lang.String b;

    ae(int r1, com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.a = r2
            r0.a = r3
            r0.a = r4
            r0.b = r5
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "send wrong message ack for message."
            return r0
    }

    @Override
    public void a() {
            r4 = this;
            com.xiaomi.push.service.XMPushService r0 = r4.a     // Catch: com.xiaomi.push.gh -> L20
            com.xiaomi.push.if r1 = r4.a     // Catch: com.xiaomi.push.gh -> L20
            com.xiaomi.push.if r0 = com.xiaomi.push.service.y.a(r0, r1)     // Catch: com.xiaomi.push.gh -> L20
            com.xiaomi.push.hw r1 = r0.a     // Catch: com.xiaomi.push.gh -> L20
            java.lang.String r2 = "error"
            java.lang.String r3 = r4.a     // Catch: com.xiaomi.push.gh -> L20
            r1.a(r2, r3)     // Catch: com.xiaomi.push.gh -> L20
            com.xiaomi.push.hw r1 = r0.a     // Catch: com.xiaomi.push.gh -> L20
            java.lang.String r2 = "reason"
            java.lang.String r3 = r4.b     // Catch: com.xiaomi.push.gh -> L20
            r1.a(r2, r3)     // Catch: com.xiaomi.push.gh -> L20
            com.xiaomi.push.service.XMPushService r1 = r4.a     // Catch: com.xiaomi.push.gh -> L20
            com.xiaomi.push.service.ah.a(r1, r0)     // Catch: com.xiaomi.push.gh -> L20
            goto L2b
        L20:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r4.a
            r2 = 10
            r1.a(r2, r0)
        L2b:
            return
    }
}
