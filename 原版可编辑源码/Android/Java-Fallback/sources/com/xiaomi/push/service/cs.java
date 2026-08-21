package com.xiaomi.push.service;

class cs extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.XMPushService a;

    cs(com.xiaomi.push.service.XMPushService r1, int r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "prepare the mi push account."
            return r0
    }

    @Override
    public void a() {
            r2 = this;
            com.xiaomi.push.service.XMPushService r0 = r2.a
            com.xiaomi.push.service.ah.a(r0)
            com.xiaomi.push.service.XMPushService r0 = r2.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            if (r0 == 0) goto L13
            com.xiaomi.push.service.XMPushService r0 = r2.a
            r1 = 1
            r0.a(r1)
        L13:
            return
    }
}
