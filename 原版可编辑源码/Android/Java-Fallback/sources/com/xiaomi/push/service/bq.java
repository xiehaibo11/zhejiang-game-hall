package com.xiaomi.push.service;

class bq {
    private static int d = 300000;
    private int a;
    private long a;
    private com.xiaomi.push.service.XMPushService a;
    private int b;
    private int c;

    static {
            return
    }

    public bq(com.xiaomi.push.service.XMPushService r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r2.c = r0
            r2.a = r3
            r3 = 500(0x1f4, float:7.0E-43)
            r2.a = r3
            r0 = 0
            r2.a = r0
            return
    }

    private int a() {
            r9 = this;
            int r0 = r9.b
            r1 = 8
            if (r0 <= r1) goto La
            r0 = 300000(0x493e0, float:4.2039E-40)
            return r0
        La:
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r2 = java.lang.Math.random()
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r2 = r2 * r4
            double r2 = r2 + r0
            int r0 = r9.b
            r1 = 4
            if (r0 <= r1) goto L21
            r0 = 4678479150791524352(0x40ed4c0000000000, double:60000.0)
        L1e:
            double r2 = r2 * r0
            int r0 = (int) r2
            return r0
        L21:
            r4 = 1
            if (r0 <= r4) goto L2a
            r0 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            goto L1e
        L2a:
            long r2 = r9.a
            r5 = 0
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            r2 = 0
            if (r0 != 0) goto L34
            return r2
        L34:
            long r5 = java.lang.System.currentTimeMillis()
            long r7 = r9.a
            long r5 = r5 - r7
            r7 = 310000(0x4baf0, double:1.531604E-318)
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 >= 0) goto L5a
            int r0 = r9.a
            int r2 = com.xiaomi.push.service.bq.d
            if (r0 < r2) goto L49
            return r0
        L49:
            int r3 = r9.c
            int r3 = r3 + r4
            r9.c = r3
            if (r3 < r1) goto L52
            r0 = r2
            goto L59
        L52:
            double r1 = (double) r0
            r3 = 4609434218613702656(0x3ff8000000000000, double:1.5)
            double r1 = r1 * r3
            int r1 = (int) r1
            r9.a = r1
        L59:
            return r0
        L5a:
            r0 = 1000(0x3e8, float:1.401E-42)
            r9.a = r0
            r9.c = r2
            return r2
    }

    public void a() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.a = r0
            com.xiaomi.push.service.XMPushService r0 = r2.a
            r1 = 1
            r0.a(r1)
            r0 = 0
            r2.b = r0
            return
    }

    public void a(boolean r5) {
            r4 = this;
            com.xiaomi.push.service.XMPushService r0 = r4.a
            boolean r0 = r0.a()
            if (r0 == 0) goto L83
            r0 = 1
            if (r5 == 0) goto L2d
            com.xiaomi.push.service.XMPushService r5 = r4.a
            boolean r5 = r5.a(r0)
            if (r5 != 0) goto L18
            int r5 = r4.b
            int r5 = r5 + r0
            r4.b = r5
        L18:
            com.xiaomi.push.service.XMPushService r5 = r4.a
            r5.a(r0)
            com.xiaomi.push.service.XMPushService r5 = r4.a
            com.xiaomi.push.service.XMPushService$e r0 = new com.xiaomi.push.service.XMPushService$e
            com.xiaomi.push.service.XMPushService r1 = r4.a
            r1.getClass()
            r0.<init>(r1)
            r5.a(r0)
            goto L88
        L2d:
            com.xiaomi.push.service.XMPushService r5 = r4.a
            boolean r5 = r5.a(r0)
            if (r5 == 0) goto L36
            return
        L36:
            int r5 = r4.a()
            int r1 = r4.b
            int r1 = r1 + r0
            r4.b = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "schedule reconnect in "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = "ms"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r0 = r4.a
            com.xiaomi.push.service.XMPushService$e r1 = new com.xiaomi.push.service.XMPushService$e
            com.xiaomi.push.service.XMPushService r2 = r4.a
            r2.getClass()
            r1.<init>(r2)
            long r2 = (long) r5
            r0.a(r1, r2)
            int r5 = r4.b
            r0 = 2
            if (r5 != r0) goto L7a
            com.xiaomi.push.fh r5 = com.xiaomi.push.fh.a()
            boolean r5 = r5.a()
            if (r5 == 0) goto L7a
            com.xiaomi.push.service.ap.b()
        L7a:
            int r5 = r4.b
            r0 = 3
            if (r5 != r0) goto L88
            com.xiaomi.push.service.ap.a()
            goto L88
        L83:
            java.lang.String r5 = "should not reconnect as no client or network."
            com.xiaomi.channel.commonutils.logger.b.c(r5)
        L88:
            return
    }
}
