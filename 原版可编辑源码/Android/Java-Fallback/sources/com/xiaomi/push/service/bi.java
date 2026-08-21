package com.xiaomi.push.service;

class bi extends com.xiaomi.push.service.XMPushService.j {
    final com.xiaomi.push.service.bg.b.c a;

    bi(com.xiaomi.push.service.bg.b.c r1, int r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "clear peer job"
            return r0
    }

    @Override
    public void a() {
            r2 = this;
            com.xiaomi.push.service.bg$b$c r0 = r2.a
            android.os.Messenger r0 = r0.a
            com.xiaomi.push.service.bg$b$c r1 = r2.a
            com.xiaomi.push.service.bg$b r1 = r1.a
            android.os.Messenger r1 = r1.a
            if (r0 != r1) goto L2d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clean peer, chid = "
            r0.append(r1)
            com.xiaomi.push.service.bg$b$c r1 = r2.a
            com.xiaomi.push.service.bg$b r1 = r1.a
            java.lang.String r1 = r1.g
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r0)
            com.xiaomi.push.service.bg$b$c r0 = r2.a
            com.xiaomi.push.service.bg$b r0 = r0.a
            r1 = 0
            r0.a = r1
        L2d:
            return
    }
}
