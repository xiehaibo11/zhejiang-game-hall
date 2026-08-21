package com.xiaomi.push.service;

class cq implements com.xiaomi.push.service.bg.a {
    final com.xiaomi.push.service.XMPushService a;

    cq(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void a() {
            r5 = this;
            com.xiaomi.push.service.XMPushService r0 = r5.a
            com.xiaomi.push.service.XMPushService.a(r0)
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            int r0 = r0.a()
            if (r0 > 0) goto L1e
            com.xiaomi.push.service.XMPushService r0 = r5.a
            com.xiaomi.push.service.XMPushService$g r1 = new com.xiaomi.push.service.XMPushService$g
            com.xiaomi.push.service.XMPushService r2 = r5.a
            r3 = 12
            r4 = 0
            r1.<init>(r2, r3, r4)
            r0.a(r1)
        L1e:
            return
    }
}
