package com.xiaomi.push.service;

class cu extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.XMPushService a;
    final java.lang.String a;
    final byte[] a;
    final int b;

    cu(com.xiaomi.push.service.XMPushService r1, int r2, int r3, java.lang.String r4, byte[] r5) {
            r0 = this;
            r0.a = r1
            r0.b = r3
            r0.a = r4
            r0.a = r5
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "clear account cache."
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            com.xiaomi.push.service.XMPushService r0 = r3.a
            com.xiaomi.push.service.u.a(r0)
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.lang.String r1 = "5"
            r0.a(r1)
            int r0 = r3.b
            com.xiaomi.push.ae.a(r0)
            com.xiaomi.push.service.XMPushService r0 = r3.a
            com.xiaomi.push.fx r0 = com.xiaomi.push.service.XMPushService.a(r0)
            java.lang.String r1 = com.xiaomi.push.fx.a()
            r0.c(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clear account and start registration. "
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r0 = r3.a
            byte[] r1 = r3.a
            java.lang.String r2 = r3.a
            r0.a(r1, r2)
            return
    }
}
