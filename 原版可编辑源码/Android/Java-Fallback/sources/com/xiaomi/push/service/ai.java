package com.xiaomi.push.service;

final class ai extends com.xiaomi.push.service.bx.a {
    final com.xiaomi.push.service.XMPushService a;
    final com.xiaomi.push.service.t a;

    ai(java.lang.String r1, long r2, com.xiaomi.push.service.XMPushService r4, com.xiaomi.push.service.t r5) {
            r0 = this;
            r0.a = r4
            r0.a = r5
            r0.<init>(r1, r2)
            return
    }

    @Override
    void a(com.xiaomi.push.service.bx r6) {
            r5 = this;
            java.lang.String r0 = "GAID"
            java.lang.String r1 = "gaid"
            java.lang.String r2 = r6.a(r0, r1)
            com.xiaomi.push.service.XMPushService r3 = r5.a
            java.lang.String r3 = com.xiaomi.push.j.a(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L64
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 != 0) goto L64
            r6.a(r0, r1, r3)
            com.xiaomi.push.ii r6 = new com.xiaomi.push.ii
            r6.<init>()
            com.xiaomi.push.service.t r0 = r5.a
            java.lang.String r0 = r0.d
            r6.b(r0)
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.g
            java.lang.String r0 = r0.a
            r6.c(r0)
            java.lang.String r0 = com.xiaomi.push.service.bd.a()
            r6.a(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r6.a(r0)
            java.util.Map r0 = r6.a()
            r0.put(r1, r3)
            com.xiaomi.push.service.XMPushService r0 = r5.a
            java.lang.String r0 = r0.getPackageName()
            com.xiaomi.push.service.t r1 = r5.a
            java.lang.String r1 = r1.d
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r6 = com.xiaomi.push.service.ah.a(r0, r1, r6, r2)
            byte[] r6 = com.xiaomi.push.it.a(r6)
            com.xiaomi.push.service.XMPushService r0 = r5.a
            java.lang.String r1 = r0.getPackageName()
            r2 = 1
            r0.a(r1, r6, r2)
        L64:
            return
    }
}
