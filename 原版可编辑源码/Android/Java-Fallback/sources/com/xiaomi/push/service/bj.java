package com.xiaomi.push.service;

class bj extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.bg.b.c a;

    bj(com.xiaomi.push.service.bg.b.c r1, int r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "check peer job"
            return r0
    }

    @Override
    public void a() {
            r7 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b$c r1 = r7.a
            com.xiaomi.push.service.bg$b r1 = r1.a
            java.lang.String r1 = r1.g
            com.xiaomi.push.service.bg$b$c r2 = r7.a
            com.xiaomi.push.service.bg$b r2 = r2.a
            java.lang.String r2 = r2.b
            com.xiaomi.push.service.bg$b r0 = r0.a(r1, r2)
            android.os.Messenger r0 = r0.a
            if (r0 != 0) goto L32
            com.xiaomi.push.service.bg$b$c r0 = r7.a
            com.xiaomi.push.service.bg$b r0 = r0.b
            com.xiaomi.push.service.XMPushService r1 = com.xiaomi.push.service.bg.b.a(r0)
            com.xiaomi.push.service.bg$b$c r0 = r7.a
            com.xiaomi.push.service.bg$b r0 = r0.a
            java.lang.String r2 = r0.g
            com.xiaomi.push.service.bg$b$c r0 = r7.a
            com.xiaomi.push.service.bg$b r0 = r0.a
            java.lang.String r3 = r0.b
            r4 = 2
            r5 = 0
            r6 = 0
            r1.a(r2, r3, r4, r5, r6)
        L32:
            return
    }
}
