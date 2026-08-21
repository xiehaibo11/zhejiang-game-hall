package com.xiaomi.push;

class ge extends com.xiaomi.push.service.XMPushService.j {
    final long a;
    final com.xiaomi.push.gd a;
    final long b;

    ge(com.xiaomi.push.gd r1, int r2, long r3, long r5) {
            r0 = this;
            r0.a = r1
            r0.a = r3
            r0.b = r5
            r0.<init>(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "check the ping-pong."
            r0.append(r1)
            long r1 = r3.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void a() {
            r3 = this;
            java.lang.Thread.yield()
            com.xiaomi.push.gd r0 = r3.a
            boolean r0 = r0.c()
            if (r0 == 0) goto L2a
            com.xiaomi.push.gd r0 = r3.a
            long r1 = r3.a
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto L2a
            com.xiaomi.push.gd r0 = r3.a
            com.xiaomi.push.service.XMPushService r0 = r0.b
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a(r0)
            r0.b()
            com.xiaomi.push.gd r0 = r3.a
            com.xiaomi.push.service.XMPushService r0 = r0.b
            r1 = 22
            r2 = 0
            r0.a(r1, r2)
        L2a:
            return
    }
}
