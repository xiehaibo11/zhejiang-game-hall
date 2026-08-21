package com.xiaomi.push.service;

class cj extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.XMPushService a;
    final java.lang.String a;
    final byte[] a;

    cj(com.xiaomi.push.service.XMPushService r1, int r2, java.lang.String r3, byte[] r4) {
            r0 = this;
            r0.a = r1
            r0.a = r3
            r0.a = r4
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "send mi push message"
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            com.xiaomi.push.service.XMPushService r0 = r3.a     // Catch: com.xiaomi.push.gh -> La
            java.lang.String r1 = r3.a     // Catch: com.xiaomi.push.gh -> La
            byte[] r2 = r3.a     // Catch: com.xiaomi.push.gh -> La
            com.xiaomi.push.service.ah.a(r0, r1, r2)     // Catch: com.xiaomi.push.gh -> La
            goto L15
        La:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r3.a
            r2 = 10
            r1.a(r2, r0)
        L15:
            return
    }
}
