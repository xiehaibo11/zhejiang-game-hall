package com.xiaomi.push.service;

final class af extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.if a;
    final com.xiaomi.push.ii a;
    final com.xiaomi.push.service.XMPushService a;

    af(int r1, com.xiaomi.push.ii r2, com.xiaomi.push.if r3, com.xiaomi.push.service.XMPushService r4) {
            r0 = this;
            r0.a = r2
            r0.a = r3
            r0.a = r4
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "send ack message for clear push message."
            return r0
    }

    @Override
    public void a() {
            r4 = this;
            com.xiaomi.push.ia r0 = new com.xiaomi.push.ia     // Catch: com.xiaomi.push.gh -> L52
            r0.<init>()     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.D     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r1 = r1.a     // Catch: com.xiaomi.push.gh -> L52
            r0.c(r1)     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.ii r1 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r1 = r1.a()     // Catch: com.xiaomi.push.gh -> L52
            r0.a(r1)     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.ii r1 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.hy r1 = r1.a()     // Catch: com.xiaomi.push.gh -> L52
            r0.a(r1)     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.ii r1 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r1 = r1.b()     // Catch: com.xiaomi.push.gh -> L52
            r0.b(r1)     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.ii r1 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r1 = r1.c()     // Catch: com.xiaomi.push.gh -> L52
            r0.e(r1)     // Catch: com.xiaomi.push.gh -> L52
            r1 = 0
            r0.a(r1)     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r1 = "success clear push message."
            r0.d(r1)     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.if r1 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r1 = r1.b()     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.if r2 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            java.lang.String r2 = r2.a()     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.i     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.if r0 = com.xiaomi.push.service.ah.b(r1, r2, r0, r3)     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.service.XMPushService r1 = r4.a     // Catch: com.xiaomi.push.gh -> L52
            com.xiaomi.push.service.ah.a(r1, r0)     // Catch: com.xiaomi.push.gh -> L52
            goto L6e
        L52:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "clear push message. "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r1)
            com.xiaomi.push.service.XMPushService r1 = r4.a
            r2 = 10
            r1.a(r2, r0)
        L6e:
            return
    }
}
