package com.xiaomi.push.service;

public class w extends com.xiaomi.push.service.XMPushService.j {
    private com.xiaomi.push.service.XMPushService a;
    private java.lang.String a;
    private byte[] a;
    private java.lang.String b;
    private java.lang.String c;

    public w(com.xiaomi.push.service.XMPushService r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, byte[] r6) {
            r1 = this;
            r0 = 9
            r1.<init>(r0)
            r1.a = r2
            r1.a = r3
            r1.a = r6
            r1.b = r4
            r1.c = r5
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "register app"
            return r0
    }

    @Override
    public void a() {
            r5 = this;
            com.xiaomi.push.service.XMPushService r0 = r5.a
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a(r0)
            if (r0 != 0) goto L2a
            com.xiaomi.push.service.XMPushService r1 = r5.a     // Catch: java.lang.Exception -> L15
            java.lang.String r2 = r5.a     // Catch: java.lang.Exception -> L15
            java.lang.String r3 = r5.b     // Catch: java.lang.Exception -> L15
            java.lang.String r4 = r5.c     // Catch: java.lang.Exception -> L15
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L15
            goto L2a
        L15:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "fail to register push account. "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r1)
        L2a:
            if (r0 != 0) goto L3d
            java.lang.String r0 = "no account for registration."
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            com.xiaomi.push.service.XMPushService r0 = r5.a
            r1 = 70000002(0x42c1d82, float:2.0232052E-36)
            java.lang.String r2 = "no account."
            com.xiaomi.push.service.x.a(r0, r1, r2)
            goto Lce
        L3d:
            java.lang.String r1 = "do registration now."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            java.lang.String r2 = "5"
            java.util.Collection r1 = r1.a(r2)
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto L65
            com.xiaomi.push.service.XMPushService r1 = r5.a
            com.xiaomi.push.service.bg$b r0 = r0.a(r1)
            com.xiaomi.push.service.XMPushService r1 = r5.a
            com.xiaomi.push.service.ah.a(r1, r0)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            r1.a(r0)
            goto L6f
        L65:
            java.util.Iterator r0 = r1.iterator()
            java.lang.Object r0 = r0.next()
            com.xiaomi.push.service.bg$b r0 = (com.xiaomi.push.service.bg.b) r0
        L6f:
            com.xiaomi.push.service.XMPushService r1 = r5.a
            boolean r1 = r1.c()
            if (r1 == 0) goto Lc1
            com.xiaomi.push.service.bg$c r1 = r0.a     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.bg$c r2 = com.xiaomi.push.service.bg.c.c     // Catch: com.xiaomi.push.gh -> La4
            if (r1 != r2) goto L87
            com.xiaomi.push.service.XMPushService r0 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            java.lang.String r1 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            byte[] r2 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.ah.a(r0, r1, r2)     // Catch: com.xiaomi.push.gh -> La4
            goto Lce
        L87:
            com.xiaomi.push.service.bg$c r1 = r0.a     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.bg$c r2 = com.xiaomi.push.service.bg.c.a     // Catch: com.xiaomi.push.gh -> La4
            if (r1 != r2) goto Lce
            java.lang.String r1 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            byte[] r2 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.x.a(r1, r2)     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.XMPushService r1 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.XMPushService$b r2 = new com.xiaomi.push.service.XMPushService$b     // Catch: com.xiaomi.push.gh -> La4
            com.xiaomi.push.service.XMPushService r3 = r5.a     // Catch: com.xiaomi.push.gh -> La4
            r3.getClass()     // Catch: com.xiaomi.push.gh -> La4
            r2.<init>(r3, r0)     // Catch: com.xiaomi.push.gh -> La4
            r1.a(r2)     // Catch: com.xiaomi.push.gh -> La4
            goto Lce
        La4:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "meet error, disconnect connection. "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r1)
            com.xiaomi.push.service.XMPushService r1 = r5.a
            r2 = 10
            r1.a(r2, r0)
            goto Lce
        Lc1:
            java.lang.String r0 = r5.a
            byte[] r1 = r5.a
            com.xiaomi.push.service.x.a(r0, r1)
            com.xiaomi.push.service.XMPushService r0 = r5.a
            r1 = 1
            r0.a(r1)
        Lce:
            return
    }
}
