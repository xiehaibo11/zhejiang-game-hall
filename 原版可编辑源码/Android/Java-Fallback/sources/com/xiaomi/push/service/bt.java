package com.xiaomi.push.service;

class bt extends com.xiaomi.push.service.XMPushService.j {
    private com.xiaomi.push.fl a;
    private com.xiaomi.push.service.XMPushService a;

    public bt(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.fl r3) {
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
            java.lang.String r0 = "send a message."
            return r0
    }

    @Override
    public void a() {
            r4 = this;
            com.xiaomi.push.fl r0 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            if (r0 == 0) goto L3d
            com.xiaomi.push.service.XMPushService r0 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            com.xiaomi.push.fl r1 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            r0.a(r1)     // Catch: com.xiaomi.push.gh -> L32
            com.xiaomi.push.fl r0 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            com.xiaomi.push.service.ao r0 = r0.a     // Catch: com.xiaomi.push.gh -> L32
            if (r0 == 0) goto L3d
            com.xiaomi.push.service.XMPushService r0 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            r1 = 1
            boolean r0 = com.xiaomi.push.hi.a(r0, r1)     // Catch: com.xiaomi.push.gh -> L32
            if (r0 == 0) goto L3d
            com.xiaomi.push.fl r0 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            com.xiaomi.push.service.ao r0 = r0.a     // Catch: com.xiaomi.push.gh -> L32
            long r1 = java.lang.System.currentTimeMillis()     // Catch: com.xiaomi.push.gh -> L32
            r0.d = r1     // Catch: com.xiaomi.push.gh -> L32
            java.lang.String r0 = "category_coord_up"
            java.lang.String r1 = "coord_up"
            java.lang.String r2 = "com.xiaomi.xmsf"
            com.xiaomi.push.fl r3 = r4.a     // Catch: com.xiaomi.push.gh -> L32
            com.xiaomi.push.service.ao r3 = r3.a     // Catch: com.xiaomi.push.gh -> L32
            com.xiaomi.push.service.bz.a(r0, r1, r2, r3)     // Catch: com.xiaomi.push.gh -> L32
            goto L3d
        L32:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r4.a
            r2 = 10
            r1.a(r2, r0)
        L3d:
            return
    }
}
