package com.xiaomi.push.service;

class cp extends com.xiaomi.push.fx {
    final com.xiaomi.push.service.XMPushService a;

    cp(com.xiaomi.push.service.XMPushService r1, java.util.Map r2, int r3, java.lang.String r4, com.xiaomi.push.ga r5) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2, r3, r4, r5)
            return
    }

    @Override
    public byte[] a() {
            r3 = this;
            com.xiaomi.push.dx$b r0 = new com.xiaomi.push.dx$b     // Catch: java.lang.Exception -> L15
            r0.<init>()     // Catch: java.lang.Exception -> L15
            com.xiaomi.push.service.bv r1 = com.xiaomi.push.service.bv.a()     // Catch: java.lang.Exception -> L15
            int r1 = r1.a()     // Catch: java.lang.Exception -> L15
            r0.a(r1)     // Catch: java.lang.Exception -> L15
            byte[] r0 = r0.a()     // Catch: java.lang.Exception -> L15
            return r0
        L15:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getOBBString err: "
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r0 = 0
            return r0
    }
}
