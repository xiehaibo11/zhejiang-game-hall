package com.xiaomi.push.service;

final class aj extends com.xiaomi.push.service.bx.a {
    final com.xiaomi.push.service.XMPushService a;
    final com.xiaomi.push.service.t a;

    aj(java.lang.String r1, long r2, com.xiaomi.push.service.XMPushService r4, com.xiaomi.push.service.t r5) {
            r0 = this;
            r0.a = r4
            r0.a = r5
            r0.<init>(r1, r2)
            return
    }

    @Override
    void a(com.xiaomi.push.service.bx r7) {
            r6 = this;
            com.xiaomi.push.service.XMPushService r0 = r6.a
            com.xiaomi.push.ba r0 = com.xiaomi.push.ba.a(r0)
            java.lang.String r1 = "msaid"
            java.lang.String r2 = "MSAID"
            java.lang.String r3 = r7.a(r2, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r0.b()
            r4.append(r5)
            java.lang.String r5 = r0.a()
            r4.append(r5)
            java.lang.String r5 = r0.c()
            r4.append(r5)
            java.lang.String r5 = r0.d()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L89
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 != 0) goto L89
            r7.a(r2, r1, r4)
            com.xiaomi.push.ii r7 = new com.xiaomi.push.ii
            r7.<init>()
            com.xiaomi.push.service.t r1 = r6.a
            java.lang.String r1 = r1.d
            r7.b(r1)
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.g
            java.lang.String r1 = r1.a
            r7.c(r1)
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r7.a(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r7.a(r1)
            java.util.Map r1 = r7.a()
            r0.a(r1)
            com.xiaomi.push.service.XMPushService r0 = r6.a
            java.lang.String r0 = r0.getPackageName()
            com.xiaomi.push.service.t r1 = r6.a
            java.lang.String r1 = r1.d
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r7 = com.xiaomi.push.service.ah.a(r0, r1, r7, r2)
            byte[] r7 = com.xiaomi.push.it.a(r7)
            com.xiaomi.push.service.XMPushService r0 = r6.a
            java.lang.String r1 = r0.getPackageName()
            r2 = 1
            r0.a(r1, r7, r2)
        L89:
            return
    }
}
