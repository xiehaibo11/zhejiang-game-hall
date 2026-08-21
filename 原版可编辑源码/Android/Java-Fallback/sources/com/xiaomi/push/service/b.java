package com.xiaomi.push.service;

public class b extends com.xiaomi.push.al.a {
    private com.xiaomi.push.ii a;
    private java.lang.ref.WeakReference<com.xiaomi.push.service.XMPushService> a;
    private boolean a;

    public b(com.xiaomi.push.ii r2, java.lang.ref.WeakReference<com.xiaomi.push.service.XMPushService> r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r2
            r1.a = r3
            r1.a = r4
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "22"
            return r0
    }

    @Override
    public void run() {
            r5 = this;
            java.lang.ref.WeakReference<com.xiaomi.push.service.XMPushService> r0 = r5.a
            if (r0 == 0) goto L72
            com.xiaomi.push.ii r1 = r5.a
            if (r1 != 0) goto L9
            goto L72
        L9:
            java.lang.Object r0 = r0.get()
            com.xiaomi.push.service.XMPushService r0 = (com.xiaomi.push.service.XMPushService) r0
            if (r0 != 0) goto L12
            return
        L12:
            com.xiaomi.push.ii r1 = r5.a
            java.lang.String r2 = com.xiaomi.push.service.bd.a()
            r1.a(r2)
            com.xiaomi.push.ii r1 = r5.a
            r2 = 0
            r1.a(r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MoleInfo aw_ping : send aw_Ping msg "
            r1.append(r2)
            com.xiaomi.push.ii r2 = r5.a
            java.lang.String r2 = r2.a()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r1)
            com.xiaomi.push.ii r1 = r5.a     // Catch: java.lang.Exception -> L59
            java.lang.String r1 = r1.c()     // Catch: java.lang.Exception -> L59
            com.xiaomi.push.ii r2 = r5.a     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L59
            com.xiaomi.push.ii r3 = r5.a     // Catch: java.lang.Exception -> L59
            com.xiaomi.push.hj r4 = com.xiaomi.push.hj.i     // Catch: java.lang.Exception -> L59
            com.xiaomi.push.if r2 = com.xiaomi.push.service.ah.a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L59
            byte[] r2 = com.xiaomi.push.it.a(r2)     // Catch: java.lang.Exception -> L59
            boolean r3 = r5.a     // Catch: java.lang.Exception -> L59
            r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L59
            goto L72
        L59:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MoleInfo aw_ping : send help app ping error"
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L72:
            return
    }
}
