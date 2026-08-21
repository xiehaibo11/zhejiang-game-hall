package com.xiaomi.push.service;

public class bm implements com.xiaomi.push.eh {
    public bm() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(android.content.Context r4, java.util.HashMap<java.lang.String, java.lang.String> r5) {
            r3 = this;
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            com.xiaomi.push.ed r1 = com.xiaomi.push.ed.a(r4)
            java.lang.String r1 = r1.a()
            r0.b(r1)
            com.xiaomi.push.ed r1 = com.xiaomi.push.ed.a(r4)
            java.lang.String r1 = r1.b()
            r0.d(r1)
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.I
            java.lang.String r1 = r1.a
            r0.c(r1)
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            r0.a = r5
            java.lang.String r5 = r0.c()
            java.lang.String r1 = r0.b()
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r5 = com.xiaomi.push.service.ah.a(r5, r1, r0, r2)
            byte[] r5 = com.xiaomi.push.it.a(r5)
            boolean r1 = r4 instanceof com.xiaomi.push.service.XMPushService
            if (r1 == 0) goto L65
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MoleInfo : send data directly in pushLayer "
            r1.append(r2)
            java.lang.String r0 = r0.a()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r0 = r4
            com.xiaomi.push.service.XMPushService r0 = (com.xiaomi.push.service.XMPushService) r0
            java.lang.String r4 = r4.getPackageName()
            r1 = 1
            r0.a(r4, r5, r1)
            goto L7d
        L65:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "MoleInfo : context is not correct in pushLayer "
            r4.append(r5)
            java.lang.String r5 = r0.a()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L7d:
            return
    }

    @Override
    public void b(android.content.Context r7, java.util.HashMap<java.lang.String, java.lang.String> r8) {
            r6 = this;
            com.xiaomi.push.hg r0 = com.xiaomi.push.hg.a(r7)
            if (r0 == 0) goto L13
            r3 = 1
            java.lang.String r5 = com.xiaomi.push.dy.a(r8)
            java.lang.String r1 = "category_awake_app"
            java.lang.String r2 = "wake_up_app"
            r0.a(r1, r2, r3, r5)
        L13:
            return
    }

    @Override
    public void c(android.content.Context r2, java.util.HashMap<java.lang.String, java.lang.String> r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "MoleInfo：\u3000"
            r2.append(r0)
            java.lang.String r3 = com.xiaomi.push.dy.b(r3)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return
    }
}
