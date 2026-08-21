package com.xiaomi.push.service;

class c extends com.xiaomi.push.service.XMPushService.j {
    private com.xiaomi.push.service.XMPushService a;
    private com.xiaomi.push.fl[] a;

    public c(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.fl[] r3) {
            r1 = this;
            r0 = 4
            r1.<init>(r0)
            r0 = 0
            r1.a = r0
            r1.a = r2
            r1.a = r3
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "batch send message."
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            com.xiaomi.push.fl[] r0 = r3.a     // Catch: com.xiaomi.push.gh -> Lc
            if (r0 == 0) goto L17
            com.xiaomi.push.service.XMPushService r0 = r3.a     // Catch: com.xiaomi.push.gh -> Lc
            com.xiaomi.push.fl[] r1 = r3.a     // Catch: com.xiaomi.push.gh -> Lc
            r0.a(r1)     // Catch: com.xiaomi.push.gh -> Lc
            goto L17
        Lc:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r3.a
            r2 = 10
            r1.a(r2, r0)
        L17:
            return
    }
}
