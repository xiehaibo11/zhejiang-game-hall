package com.xiaomi.push.service;

final class ak implements com.xiaomi.push.service.bg.b.a {
    final com.xiaomi.push.service.XMPushService a;

    ak(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a(com.xiaomi.push.service.bg.c r1, com.xiaomi.push.service.bg.c r2, int r3) {
            r0 = this;
            com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.c
            if (r2 != r1) goto L10
            com.xiaomi.push.service.XMPushService r1 = r0.a
            r2 = 1
            com.xiaomi.push.service.x.a(r1, r2)
            com.xiaomi.push.service.XMPushService r1 = r0.a
            com.xiaomi.push.service.x.a(r1)
            goto L23
        L10:
            com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.a
            if (r2 != r1) goto L23
            java.lang.String r1 = "onChange unbind"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            com.xiaomi.push.service.XMPushService r1 = r0.a
            r2 = 70000001(0x42c1d81, float:2.023205E-36)
            java.lang.String r3 = " the push is not connected."
            com.xiaomi.push.service.x.a(r1, r2, r3)
        L23:
            return
    }
}
