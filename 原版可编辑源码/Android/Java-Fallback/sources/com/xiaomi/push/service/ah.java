package com.xiaomi.push.service;

final class ah {
    static com.xiaomi.push.fl a(com.xiaomi.push.service.XMPushService r1, byte[] r2) {
            com.xiaomi.push.if r0 = new com.xiaomi.push.if
            r0.<init>()
            com.xiaomi.push.it.a(r0, r2)     // Catch: com.xiaomi.push.iz -> L11
            com.xiaomi.push.service.t r2 = com.xiaomi.push.service.u.a(r1)     // Catch: com.xiaomi.push.iz -> L11
            com.xiaomi.push.fl r1 = a(r2, r1, r0)     // Catch: com.xiaomi.push.iz -> L11
            return r1
        L11:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
            return r1
    }

    static com.xiaomi.push.fl a(com.xiaomi.push.service.t r4, android.content.Context r5, com.xiaomi.push.if r6) {
            com.xiaomi.push.fl r5 = new com.xiaomi.push.fl     // Catch: java.lang.NullPointerException -> L6a
            r5.<init>()     // Catch: java.lang.NullPointerException -> L6a
            r0 = 5
            r5.a(r0)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = r4.a     // Catch: java.lang.NullPointerException -> L6a
            r5.c(r0)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = a(r6)     // Catch: java.lang.NullPointerException -> L6a
            r5.b(r0)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = "SECMSG"
            java.lang.String r1 = "message"
            r5.a(r0, r1)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = r4.a     // Catch: java.lang.NullPointerException -> L6a
            com.xiaomi.push.hy r1 = r6.a     // Catch: java.lang.NullPointerException -> L6a
            r2 = 0
            java.lang.String r3 = "@"
            int r3 = r0.indexOf(r3)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r2 = r0.substring(r2, r3)     // Catch: java.lang.NullPointerException -> L6a
            r1.a = r2     // Catch: java.lang.NullPointerException -> L6a
            com.xiaomi.push.hy r1 = r6.a     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r2 = "/"
            int r2 = r0.indexOf(r2)     // Catch: java.lang.NullPointerException -> L6a
            r3 = 1
            int r2 = r2 + r3
            java.lang.String r0 = r0.substring(r2)     // Catch: java.lang.NullPointerException -> L6a
            r1.c = r0     // Catch: java.lang.NullPointerException -> L6a
            byte[] r0 = com.xiaomi.push.it.a(r6)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r4 = r4.c     // Catch: java.lang.NullPointerException -> L6a
            r5.a(r0, r4)     // Catch: java.lang.NullPointerException -> L6a
            r5.a(r3)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.NullPointerException -> L6a
            r4.<init>()     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = "try send mi push message. packagename:"
            r4.append(r0)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = r6.b     // Catch: java.lang.NullPointerException -> L6a
            r4.append(r0)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r0 = " action:"
            r4.append(r0)     // Catch: java.lang.NullPointerException -> L6a
            com.xiaomi.push.hj r6 = r6.a     // Catch: java.lang.NullPointerException -> L6a
            r4.append(r6)     // Catch: java.lang.NullPointerException -> L6a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.NullPointerException -> L6a
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.NullPointerException -> L6a
            return r5
        L6a:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            r4 = 0
            return r4
    }

    static com.xiaomi.push.if a(java.lang.String r2, java.lang.String r3) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            r0.b(r3)
            java.lang.String r1 = "package uninstalled"
            r0.c(r1)
            java.lang.String r1 = com.xiaomi.push.gn.i()
            r0.a(r1)
            r1 = 0
            r0.a(r1)
            com.xiaomi.push.hj r1 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r2 = a(r2, r3, r0, r1)
            return r2
    }

    static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if a(java.lang.String r1, java.lang.String r2, T r3, com.xiaomi.push.hj r4) {
            r0 = 1
            com.xiaomi.push.if r1 = a(r1, r2, r3, r4, r0)
            return r1
    }

    private static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if a(java.lang.String r4, java.lang.String r5, T r6, com.xiaomi.push.hj r7, boolean r8) {
            byte[] r6 = com.xiaomi.push.it.a(r6)
            com.xiaomi.push.if r0 = new com.xiaomi.push.if
            r0.<init>()
            com.xiaomi.push.hy r1 = new com.xiaomi.push.hy
            r1.<init>()
            r2 = 5
            r1.a = r2
            java.lang.String r2 = "fakeid"
            r1.a = r2
            r0.a(r1)
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.wrap(r6)
            r0.a(r6)
            r0.a(r7)
            r0.b(r8)
            r0.b(r4)
            r4 = 0
            r0.a(r4)
            r0.a(r5)
            return r0
    }

    private static java.lang.String a(com.xiaomi.push.if r2) {
            com.xiaomi.push.hw r0 = r2.a
            if (r0 == 0) goto L1d
            com.xiaomi.push.hw r0 = r2.a
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.b
            if (r0 == 0) goto L1d
            com.xiaomi.push.hw r0 = r2.a
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.b
            java.lang.String r1 = "ext_traffic_source_pkg"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1d
            return r0
        L1d:
            java.lang.String r2 = r2.b
            return r2
    }

    static java.lang.String a(java.lang.String r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ".permission.MIPUSH_RECEIVE"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    static void a(com.xiaomi.push.service.XMPushService r9) {
            android.content.Context r0 = r9.getApplicationContext()
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a(r0)
            if (r0 == 0) goto L50
            android.content.Context r1 = r9.getApplicationContext()
            com.xiaomi.push.service.t r1 = com.xiaomi.push.service.u.a(r1)
            com.xiaomi.push.service.bg$b r1 = r1.a(r9)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "prepare account. "
            r2.append(r3)
            java.lang.String r3 = r1.a
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            a(r9, r1)
            com.xiaomi.push.service.bg r2 = com.xiaomi.push.service.bg.a()
            r2.a(r1)
            com.xiaomi.push.service.bx r7 = com.xiaomi.push.service.bx.a(r9)
            com.xiaomi.push.service.ai r8 = new com.xiaomi.push.service.ai
            r3 = 172800(0x2a300, double:8.53745E-319)
            java.lang.String r2 = "GAID"
            r1 = r8
            r5 = r9
            r6 = r0
            r1.<init>(r2, r3, r5, r6)
            r7.a(r8)
            r1 = 172800(0x2a300, float:2.42144E-40)
            a(r9, r0, r1)
        L50:
            return
    }

    static void a(com.xiaomi.push.service.XMPushService r3, com.xiaomi.push.if r4) {
            java.lang.String r0 = r4.b()
            android.content.Context r1 = r3.getApplicationContext()
            r2 = -1
            com.xiaomi.push.db.a(r0, r1, r4, r2)
            com.xiaomi.push.fw r0 = r3.a()
            if (r0 == 0) goto L2e
            boolean r1 = r0.a()
            if (r1 == 0) goto L26
            com.xiaomi.push.service.t r1 = com.xiaomi.push.service.u.a(r3)
            com.xiaomi.push.fl r3 = a(r1, r3, r4)
            if (r3 == 0) goto L25
            r0.b(r3)
        L25:
            return
        L26:
            com.xiaomi.push.gh r3 = new com.xiaomi.push.gh
            java.lang.String r4 = "Don't support XMPP connection."
            r3.<init>(r4)
            throw r3
        L2e:
            com.xiaomi.push.gh r3 = new com.xiaomi.push.gh
            java.lang.String r4 = "try send msg while connection is null."
            r3.<init>(r4)
            throw r3
    }

    static void a(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.service.bg.b r2) {
            r0 = 0
            r2.a(r0)
            com.xiaomi.push.service.ak r0 = new com.xiaomi.push.service.ak
            r0.<init>(r1)
            r2.a(r0)
            return
    }

    private static void a(com.xiaomi.push.service.XMPushService r8, com.xiaomi.push.service.t r9, int r10) {
            com.xiaomi.push.service.bx r0 = com.xiaomi.push.service.bx.a(r8)
            com.xiaomi.push.service.aj r7 = new com.xiaomi.push.service.aj
            long r3 = (long) r10
            java.lang.String r2 = "MSAID"
            r1 = r7
            r5 = r8
            r6 = r9
            r1.<init>(r2, r3, r5, r6)
            r0.a(r7)
            return
    }

    static void a(com.xiaomi.push.service.XMPushService r2, java.lang.String r3, byte[] r4) {
            android.content.Context r0 = r2.getApplicationContext()
            com.xiaomi.push.db.a(r3, r0, r4)
            com.xiaomi.push.fw r0 = r2.a()
            if (r0 == 0) goto L2e
            boolean r1 = r0.a()
            if (r1 == 0) goto L26
            com.xiaomi.push.fl r1 = a(r2, r4)
            if (r1 == 0) goto L1d
            r0.b(r1)
            return
        L1d:
            r0 = 70000003(0x42c1d83, float:2.0232054E-36)
            java.lang.String r1 = "not a valid message"
            com.xiaomi.push.service.x.a(r2, r3, r4, r0, r1)
            return
        L26:
            com.xiaomi.push.gh r2 = new com.xiaomi.push.gh
            java.lang.String r3 = "Don't support XMPP connection."
            r2.<init>(r3)
            throw r2
        L2e:
            com.xiaomi.push.gh r2 = new com.xiaomi.push.gh
            java.lang.String r3 = "try send msg while connection is null."
            r2.<init>(r3)
            throw r2
    }

    static com.xiaomi.push.if b(java.lang.String r2, java.lang.String r3) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            r0.b(r3)
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.ac
            java.lang.String r1 = r1.a
            r0.c(r1)
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r0.a(r1)
            r1 = 0
            r0.a(r1)
            com.xiaomi.push.hj r1 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r2 = a(r2, r3, r0, r1)
            return r2
    }

    static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if b(java.lang.String r1, java.lang.String r2, T r3, com.xiaomi.push.hj r4) {
            r0 = 0
            com.xiaomi.push.if r1 = a(r1, r2, r3, r4, r0)
            return r1
    }
}
