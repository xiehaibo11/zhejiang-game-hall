package com.xiaomi.push.service;

public class y {
    public y() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Intent a(byte[] r3, long r4) {
            com.xiaomi.push.if r0 = a(r3)
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r1.<init>(r2)
            java.lang.String r2 = "mipush_payload"
            r1.putExtra(r2, r3)
            java.lang.String r3 = java.lang.Long.toString(r4)
            java.lang.String r4 = "mrt"
            r1.putExtra(r4, r3)
            java.lang.String r3 = r0.b
            r1.setPackage(r3)
            return r1
    }

    public static com.xiaomi.push.if a(android.content.Context r1, com.xiaomi.push.if r2) {
            r0 = 0
            com.xiaomi.push.if r1 = a(r1, r2, r0)
            return r1
    }

    public static com.xiaomi.push.if a(android.content.Context r4, com.xiaomi.push.if r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            com.xiaomi.push.hz r0 = new com.xiaomi.push.hz
            r0.<init>()
            java.lang.String r1 = r5.a()
            r0.b(r1)
            com.xiaomi.push.hw r1 = r5.a()
            if (r1 == 0) goto L31
            java.lang.String r2 = r1.a()
            r0.a(r2)
            long r2 = r1.a()
            r0.a(r2)
            java.lang.String r2 = r1.b()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L31
            java.lang.String r1 = r1.b()
            r0.c(r1)
        L31:
            short r4 = com.xiaomi.push.it.a(r4, r5)
            r0.a(r4)
            java.lang.String r4 = r5.b()
            java.lang.String r1 = r5.a()
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.f
            com.xiaomi.push.if r4 = com.xiaomi.push.service.ah.a(r4, r1, r0, r2)
            com.xiaomi.push.hw r5 = r5.a()
            if (r5 == 0) goto L54
            com.xiaomi.push.hw r5 = r5.a()
            com.xiaomi.push.hw r5 = com.xiaomi.push.service.br.a(r5)
        L54:
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toString(r0)
            java.lang.String r1 = "mat"
            r5.a(r1, r0)
            if (r6 == 0) goto L87
            int r0 = r6.size()     // Catch: java.lang.Throwable -> L87
            if (r0 <= 0) goto L87
            java.util.Set r0 = r6.keySet()     // Catch: java.lang.Throwable -> L87
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L87
        L71:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L87
            if (r1 == 0) goto L87
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L87
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L87
            java.lang.Object r2 = r6.get(r1)     // Catch: java.lang.Throwable -> L87
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L87
            r5.a(r1, r2)     // Catch: java.lang.Throwable -> L87
            goto L71
        L87:
            r4.a(r5)
            return r4
    }

    public static com.xiaomi.push.if a(byte[] r1) {
            com.xiaomi.push.if r0 = new com.xiaomi.push.if
            r0.<init>()
            com.xiaomi.push.it.a(r0, r1)     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
            return r1
    }

    public static void a(android.content.Context r10, com.xiaomi.push.if r11, byte[] r12) {
            com.xiaomi.push.service.al.a(r11)     // Catch: java.lang.Exception -> L43
            r11.a()     // Catch: java.lang.Exception -> L43
            com.xiaomi.push.service.al$c r0 = com.xiaomi.push.service.al.a(r10, r11, r12)     // Catch: java.lang.Exception -> L43
            long r1 = r0.a     // Catch: java.lang.Exception -> L43
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L28
            java.lang.String r1 = r0.a     // Catch: java.lang.Exception -> L43
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L43
            if (r1 != 0) goto L28
            java.lang.String r3 = r0.a     // Catch: java.lang.Exception -> L43
            long r4 = r0.a     // Catch: java.lang.Exception -> L43
            r6 = 1
            r7 = 0
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L43
            r2 = r10
            com.xiaomi.push.hb.a(r2, r3, r4, r6, r7, r8)     // Catch: java.lang.Exception -> L43
        L28:
            boolean r1 = com.xiaomi.push.m.a(r10)     // Catch: java.lang.Exception -> L43
            if (r1 == 0) goto L3f
            boolean r0 = r0.a     // Catch: java.lang.Exception -> L43
            boolean r0 = com.xiaomi.push.service.ag.a(r10, r11, r0)     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto L3f
            com.xiaomi.push.service.ag.a(r10, r11)     // Catch: java.lang.Exception -> L43
            java.lang.String r10 = "consume this broadcast by tts"
            com.xiaomi.channel.commonutils.logger.b.a(r10)     // Catch: java.lang.Exception -> L43
            goto L5b
        L3f:
            b(r10, r11, r12)     // Catch: java.lang.Exception -> L43
            goto L5b
        L43:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "notify push msg error "
            r11.append(r12)
            r11.append(r10)
            java.lang.String r11 = r11.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r11)
            r10.printStackTrace()
        L5b:
            return
    }

    private static void a(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3) {
            com.xiaomi.push.service.z r0 = new com.xiaomi.push.service.z
            r1 = 4
            r0.<init>(r1, r2, r3)
            r2.a(r0)
            return
    }

    private static void a(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3, com.xiaomi.push.ii r4) {
            com.xiaomi.push.service.af r0 = new com.xiaomi.push.service.af
            r1 = 4
            r0.<init>(r1, r4, r3, r2)
            r2.a(r0)
            return
    }

    private static void a(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3, java.lang.String r4) {
            com.xiaomi.push.service.ad r0 = new com.xiaomi.push.service.ad
            r1 = 4
            r0.<init>(r1, r2, r3, r4)
            r2.a(r0)
            return
    }

    private static void a(com.xiaomi.push.service.XMPushService r7, com.xiaomi.push.if r8, java.lang.String r9, java.lang.String r10) {
            com.xiaomi.push.service.ae r6 = new com.xiaomi.push.service.ae
            r1 = 4
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r7.a(r6)
            return
    }

    public static void a(com.xiaomi.push.service.XMPushService r19, java.lang.String r20, byte[] r21, android.content.Intent r22) {
            r1 = r19
            r0 = r21
            r2 = r22
            com.xiaomi.push.if r3 = a(r21)
            com.xiaomi.push.hw r4 = r3.a()
            r5 = 0
            if (r0 == 0) goto L21
            java.lang.String r6 = r3.b()
            android.content.Context r7 = r19.getApplicationContext()
            com.xiaomi.push.hj r8 = r3.a()
            int r9 = r0.length
            com.xiaomi.push.db.a(r6, r7, r5, r8, r9)
        L21:
            boolean r6 = c(r3)
            if (r6 == 0) goto L51
            boolean r6 = a(r19, r20)
            if (r6 == 0) goto L51
            boolean r0 = com.xiaomi.push.service.al.e(r3)
            if (r0 == 0) goto L4c
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r2 = r3.b()
            java.lang.String r5 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r4 = r4.a()
            java.lang.String r6 = "5"
            r0.a(r2, r5, r4, r6)
        L4c:
            c(r1, r3)
            goto L4ba
        L51:
            boolean r6 = a(r3)
            if (r6 == 0) goto L87
            boolean r6 = a(r19, r20)
            if (r6 != 0) goto L87
            boolean r6 = b(r3)
            if (r6 != 0) goto L87
            boolean r0 = com.xiaomi.push.service.al.e(r3)
            if (r0 == 0) goto L82
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r2 = r3.b()
            java.lang.String r5 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r4 = r4.a()
            java.lang.String r6 = "6"
            r0.a(r2, r5, r4, r6)
        L82:
            d(r1, r3)
            goto L4ba
        L87:
            boolean r6 = com.xiaomi.push.service.al.a(r3)
            if (r6 == 0) goto L95
            java.lang.String r6 = r3.b
            boolean r6 = com.xiaomi.push.h.b(r1, r6)
            if (r6 != 0) goto L9b
        L95:
            boolean r6 = a(r1, r2)
            if (r6 == 0) goto L46b
        L9b:
            com.xiaomi.push.hj r6 = com.xiaomi.push.hj.a
            com.xiaomi.push.hj r7 = r3.a()
            java.lang.String r8 = "eventMessageType"
            java.lang.String r9 = "messageId"
            r10 = 0
            if (r6 != r7) goto L11c
            java.lang.String r12 = r3.b()
            java.lang.String r6 = "pref_registered_pkg_names"
            android.content.SharedPreferences r6 = r1.getSharedPreferences(r6, r10)
            android.content.SharedPreferences$Editor r6 = r6.edit()
            java.lang.String r7 = r3.a
            r6.putString(r12, r7)
            r6.commit()
            com.xiaomi.push.ik r6 = com.xiaomi.push.service.n.a(r3)
            long r13 = r6.a()
            r15 = 0
            int r7 = (r13 > r15 ? 1 : (r13 == r15 ? 0 : -1))
            if (r7 != 0) goto Lde
            java.lang.String r7 = r6.b()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lde
            java.lang.String r6 = r6.b()
            com.xiaomi.push.service.n.a(r1, r12, r6)
            goto Le3
        Lde:
            java.lang.String r6 = "read regSecret failed"
            com.xiaomi.channel.commonutils.logger.b.d(r6)
        Le3:
            com.xiaomi.push.service.v r6 = com.xiaomi.push.service.v.a(r19)
            r6.e(r12)
            com.xiaomi.push.service.v r6 = com.xiaomi.push.service.v.a(r19)
            r6.f(r12)
            android.content.Context r6 = r19.getApplicationContext()
            com.xiaomi.push.eo r11 = com.xiaomi.push.eo.a(r6)
            java.lang.String r14 = r4.a()
            r15 = 6003(0x1773, float:8.412E-42)
            r16 = 0
            java.lang.String r13 = "E100003"
            r11.a(r12, r13, r14, r15, r16)
            java.lang.String r6 = r4.a()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L11c
            java.lang.String r6 = r4.a()
            r2.putExtra(r9, r6)
            r6 = 6000(0x1770, float:8.408E-42)
            r2.putExtra(r8, r6)
        L11c:
            boolean r6 = com.xiaomi.push.service.al.c(r3)
            if (r6 == 0) goto L157
            android.content.Context r6 = r19.getApplicationContext()
            com.xiaomi.push.eo r11 = com.xiaomi.push.eo.a(r6)
            java.lang.String r12 = r3.b()
            java.lang.String r13 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r14 = r4.a()
            r15 = 1001(0x3e9, float:1.403E-42)
            long r16 = java.lang.System.currentTimeMillis()
            r18 = 0
            r11.a(r12, r13, r14, r15, r16, r18)
            java.lang.String r6 = r4.a()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L157
            java.lang.String r6 = r4.a()
            r2.putExtra(r9, r6)
            r6 = 1000(0x3e8, float:1.401E-42)
            r2.putExtra(r8, r6)
        L157:
            boolean r6 = com.xiaomi.push.service.al.b(r3)
            if (r6 == 0) goto L192
            android.content.Context r6 = r19.getApplicationContext()
            com.xiaomi.push.eo r11 = com.xiaomi.push.eo.a(r6)
            java.lang.String r12 = r3.b()
            java.lang.String r13 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r14 = r4.a()
            r15 = 2001(0x7d1, float:2.804E-42)
            long r16 = java.lang.System.currentTimeMillis()
            r18 = 0
            r11.a(r12, r13, r14, r15, r16, r18)
            java.lang.String r6 = r4.a()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L192
            java.lang.String r6 = r4.a()
            r2.putExtra(r9, r6)
            r6 = 2000(0x7d0, float:2.803E-42)
            r2.putExtra(r8, r6)
        L192:
            boolean r6 = com.xiaomi.push.service.al.a(r3)
            if (r6 == 0) goto L1cd
            android.content.Context r6 = r19.getApplicationContext()
            com.xiaomi.push.eo r11 = com.xiaomi.push.eo.a(r6)
            java.lang.String r12 = r3.b()
            java.lang.String r13 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r14 = r4.a()
            r15 = 3001(0xbb9, float:4.205E-42)
            long r16 = java.lang.System.currentTimeMillis()
            r18 = 0
            r11.a(r12, r13, r14, r15, r16, r18)
            java.lang.String r6 = r4.a()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L1cd
            java.lang.String r6 = r4.a()
            r2.putExtra(r9, r6)
            r6 = 3000(0xbb8, float:4.204E-42)
            r2.putExtra(r8, r6)
        L1cd:
            java.lang.String r6 = "com.xiaomi.xmsf"
            r7 = 1
            if (r4 == 0) goto L274
            java.lang.String r8 = r4.c()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L274
            java.lang.String r8 = r4.d()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L274
            int r8 = r4.b
            if (r8 == r7) goto L274
            java.lang.String r8 = r3.b
            java.util.Map r9 = r4.a()
            boolean r9 = com.xiaomi.push.service.al.a(r9)
            boolean r8 = com.xiaomi.push.service.al.a(r1, r8, r9)
            if (r8 == 0) goto L1fc
            goto L274
        L1fc:
            if (r4 == 0) goto L21e
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.a
            if (r2 == 0) goto L20d
            java.util.Map<java.lang.String, java.lang.String> r2 = r4.a
            java.lang.String r5 = "jobkey"
            java.lang.Object r2 = r2.get(r5)
            r5 = r2
            java.lang.String r5 = (java.lang.String) r5
        L20d:
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto L218
            java.lang.String r2 = r4.a()
            r5 = r2
        L218:
            java.lang.String r2 = r3.b
            boolean r10 = com.xiaomi.push.service.an.a(r1, r2, r5)
        L21e:
            if (r10 == 0) goto L25d
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r2 = r3.b()
            java.lang.String r7 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r4 = r4.a()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "1:"
            r8.append(r9)
            r8.append(r5)
            java.lang.String r8 = r8.toString()
            r0.c(r2, r7, r4, r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "drop a duplicate message, key="
            r0.append(r2)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
        L259:
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            goto L26f
        L25d:
            boolean r2 = com.xiaomi.push.m.a(r19)
            if (r2 == 0) goto L26c
            boolean r2 = com.xiaomi.push.service.ag.a(r3)
            if (r2 == 0) goto L26c
            java.lang.String r0 = "receive pull down message"
            goto L259
        L26c:
            a(r1, r3, r0)
        L26f:
            b(r1, r3)
            goto L455
        L274:
            java.lang.String r0 = r3.b
            boolean r0 = r6.contains(r0)
            if (r0 == 0) goto L2b3
            boolean r0 = r3.b()
            if (r0 != 0) goto L2b3
            if (r4 == 0) goto L2b3
            java.util.Map r0 = r4.a()
            if (r0 == 0) goto L2b3
            java.util.Map r0 = r4.a()
            java.lang.String r8 = "ab"
            boolean r0 = r0.containsKey(r8)
            if (r0 == 0) goto L2b3
            b(r1, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "receive abtest message. ack it."
            r0.append(r2)
            java.lang.String r2 = r4.a()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            goto L455
        L2b3:
            r0 = r20
            boolean r0 = a(r1, r0, r3, r4)
            if (r0 == 0) goto L43c
            if (r4 == 0) goto L343
            java.lang.String r0 = r4.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L343
            boolean r0 = com.xiaomi.push.service.al.b(r3)
            if (r0 == 0) goto L2e9
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r11 = com.xiaomi.push.eo.a(r0)
            java.lang.String r12 = r3.b()
            java.lang.String r13 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r14 = r4.a()
            r15 = 2002(0x7d2, float:2.805E-42)
            r16 = 0
        L2e5:
            r11.a(r12, r13, r14, r15, r16)
            goto L343
        L2e9:
            boolean r0 = com.xiaomi.push.service.al.a(r3)
            if (r0 == 0) goto L309
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r8 = r3.b()
            java.lang.String r9 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r11 = r4.a()
            java.lang.String r12 = "7"
        L305:
            r0.a(r8, r9, r11, r12)
            goto L343
        L309:
            boolean r0 = com.xiaomi.push.service.al.c(r3)
            if (r0 == 0) goto L326
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r8 = r3.b()
            java.lang.String r9 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r11 = r4.a()
            java.lang.String r12 = "8"
            goto L305
        L326:
            boolean r0 = com.xiaomi.push.service.al.d(r3)
            if (r0 == 0) goto L343
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r11 = com.xiaomi.push.eo.a(r0)
            java.lang.String r12 = r3.b()
            java.lang.String r14 = r4.a()
            r15 = 6004(0x1774, float:8.413E-42)
            r16 = 0
            java.lang.String r13 = "E100003"
            goto L2e5
        L343:
            com.xiaomi.push.hj r0 = com.xiaomi.push.hj.i
            com.xiaomi.push.hj r8 = r3.a
            if (r0 != r8) goto L42a
            com.xiaomi.push.iu r5 = com.xiaomi.push.service.ce.a(r1, r3)     // Catch: com.xiaomi.push.iz -> L368
            if (r5 != 0) goto L366
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: com.xiaomi.push.iz -> L368
            r0.<init>()     // Catch: com.xiaomi.push.iz -> L368
            java.lang.String r8 = "receiving an un-recognized notification message. "
            r0.append(r8)     // Catch: com.xiaomi.push.iz -> L368
            com.xiaomi.push.hj r8 = r3.a     // Catch: com.xiaomi.push.iz -> L368
            r0.append(r8)     // Catch: com.xiaomi.push.iz -> L368
            java.lang.String r0 = r0.toString()     // Catch: com.xiaomi.push.iz -> L368
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: com.xiaomi.push.iz -> L368
            goto L37d
        L366:
            r0 = r7
            goto L37e
        L368:
            r0 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "receive a message which action string is not valid. "
            r8.append(r9)
            r8.append(r0)
            java.lang.String r0 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L37d:
            r0 = r10
        L37e:
            if (r0 == 0) goto L42a
            boolean r0 = r5 instanceof com.xiaomi.push.ii
            if (r0 == 0) goto L42a
            com.xiaomi.push.ii r5 = (com.xiaomi.push.ii) r5
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.C
            java.lang.String r0 = r0.a
            java.lang.String r8 = r5.d
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L42a
            java.util.Map r0 = r5.a()
            if (r0 == 0) goto L42a
            java.util.Map r0 = r5.a()
            java.lang.String r7 = com.xiaomi.push.service.bk.M
            java.lang.Object r0 = r0.get(r7)
            java.lang.String r0 = (java.lang.String) r0
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            r8 = -2
            if (r7 != 0) goto L3c6
            int r8 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L3b0
            goto L3c6
        L3b0:
            r0 = move-exception
            r7 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r9 = "parse notifyId from STRING to INT failed: "
            r0.append(r9)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L3c6:
            r0 = -1
            if (r8 < r0) goto L3e3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r7 = "try to retract a message by notifyId="
            r0.append(r7)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.String r0 = r3.b
            com.xiaomi.push.service.al.a(r1, r0, r8)
            goto L405
        L3e3:
            java.util.Map r0 = r5.a()
            java.lang.String r7 = com.xiaomi.push.service.bk.K
            java.lang.Object r0 = r0.get(r7)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Map r7 = r5.a()
            java.lang.String r8 = com.xiaomi.push.service.bk.L
            java.lang.Object r7 = r7.get(r8)
            java.lang.String r7 = (java.lang.String) r7
            java.lang.String r8 = "try to retract a message by title&description."
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            java.lang.String r8 = r3.b
            com.xiaomi.push.service.al.a(r1, r8, r0, r7)
        L405:
            if (r4 == 0) goto L426
            java.util.Map r0 = r4.a()
            if (r0 == 0) goto L426
            boolean r0 = com.xiaomi.push.m.a(r19)
            if (r0 == 0) goto L426
            java.util.Map r0 = r4.a()
            java.lang.String r0 = com.xiaomi.push.service.ay.a(r0)
            java.lang.String r4 = "pulldown"
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L426
            com.xiaomi.push.service.ag.a(r3)
        L426:
            a(r1, r3, r5)
            goto L42b
        L42a:
            r10 = r7
        L42b:
            if (r10 == 0) goto L455
            java.lang.String r0 = "broadcast passthrough message."
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.String r0 = r3.b
            java.lang.String r0 = com.xiaomi.push.service.ah.a(r0)
            r1.sendBroadcast(r2, r0)
            goto L455
        L43c:
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r2 = r3.b()
            java.lang.String r5 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r4 = r4.a()
            java.lang.String r7 = "9"
            r0.a(r2, r5, r4, r7)
        L455:
            com.xiaomi.push.hj r0 = r3.a()
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.b
            if (r0 != r2) goto L4ba
            java.lang.String r0 = r19.getPackageName()
            boolean r0 = r6.equals(r0)
            if (r0 != 0) goto L4ba
            r19.stopSelf()
            goto L4ba
        L46b:
            java.lang.String r0 = r3.b
            boolean r0 = com.xiaomi.push.h.b(r1, r0)
            if (r0 != 0) goto L496
            boolean r0 = com.xiaomi.push.service.al.e(r3)
            if (r0 == 0) goto L492
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r2 = r3.b()
            java.lang.String r5 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r4 = r4.a()
            java.lang.String r6 = "2"
            r0.b(r2, r5, r4, r6)
        L492:
            a(r1, r3)
            goto L4ba
        L496:
            java.lang.String r0 = "receive a mipush message, we can see the app, but we can't see the receiver."
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            boolean r0 = com.xiaomi.push.service.al.e(r3)
            if (r0 == 0) goto L4ba
            android.content.Context r0 = r19.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            java.lang.String r1 = r3.b()
            java.lang.String r2 = com.xiaomi.push.service.al.b(r3)
            java.lang.String r3 = r4.a()
            java.lang.String r4 = "3"
            r0.b(r1, r2, r3, r4)
        L4ba:
            return
    }

    private static void a(com.xiaomi.push.service.XMPushService r12, byte[] r13, long r14) {
            com.xiaomi.push.if r0 = a(r13)
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r1 = r0.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L15
            java.lang.String r12 = "receive a mipush message without package name"
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            return
        L15:
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            long r2 = r1.longValue()
            android.content.Intent r2 = a(r13, r2)
            java.lang.String r11 = com.xiaomi.push.service.al.a(r0)
            r7 = 1
            r8 = 1
            long r9 = java.lang.System.currentTimeMillis()
            r3 = r12
            r4 = r11
            r5 = r14
            com.xiaomi.push.hb.a(r3, r4, r5, r7, r8, r9)
            com.xiaomi.push.hw r14 = r0.a()
            if (r14 == 0) goto L62
            java.lang.String r15 = r14.a()
            if (r15 == 0) goto L62
            r15 = 3
            java.lang.Object[] r15 = new java.lang.Object[r15]
            r3 = 0
            java.lang.String r4 = r0.a()
            r15[r3] = r4
            r3 = 1
            java.lang.String r4 = r14.a()
            r15[r3] = r4
            r3 = 2
            com.xiaomi.push.hj r4 = r0.a()
            r15[r3] = r4
            java.lang.String r3 = "receive a message. appid=%1$s, msgid= %2$s, action=%3$s"
            java.lang.String r15 = java.lang.String.format(r3, r15)
            com.xiaomi.channel.commonutils.logger.b.e(r15)
        L62:
            if (r14 == 0) goto L71
            long r3 = r1.longValue()
            java.lang.String r15 = java.lang.Long.toString(r3)
            java.lang.String r1 = "mrt"
            r14.a(r1, r15)
        L71:
            com.xiaomi.push.hj r15 = com.xiaomi.push.hj.e
            com.xiaomi.push.hj r1 = r0.a()
            java.lang.String r3 = ""
            if (r15 != r1) goto Lc8
            com.xiaomi.push.service.v r15 = com.xiaomi.push.service.v.a(r12)
            java.lang.String r1 = r0.b
            boolean r15 = r15.a(r1)
            if (r15 == 0) goto Lc8
            boolean r15 = com.xiaomi.push.service.al.a(r0)
            if (r15 != 0) goto Lc8
            if (r14 == 0) goto Lae
            java.lang.String r3 = r14.a()
            boolean r13 = com.xiaomi.push.service.al.e(r0)
            if (r13 == 0) goto Lae
            android.content.Context r13 = r12.getApplicationContext()
            com.xiaomi.push.eo r13 = com.xiaomi.push.eo.a(r13)
            java.lang.String r14 = r0.b()
            java.lang.String r15 = com.xiaomi.push.service.al.b(r0)
            java.lang.String r1 = "1"
            r13.a(r14, r15, r3, r1)
        Lae:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "Drop a message for unregistered, msgid="
            r13.append(r14)
            r13.append(r3)
            java.lang.String r13 = r13.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r13)
            java.lang.String r13 = r0.b
            a(r12, r0, r13)
            return
        Lc8:
            com.xiaomi.push.hj r15 = com.xiaomi.push.hj.e
            com.xiaomi.push.hj r1 = r0.a()
            if (r15 != r1) goto L11d
            com.xiaomi.push.service.v r15 = com.xiaomi.push.service.v.a(r12)
            java.lang.String r1 = r0.b
            boolean r15 = r15.c(r1)
            if (r15 == 0) goto L11d
            boolean r15 = com.xiaomi.push.service.al.a(r0)
            if (r15 != 0) goto L11d
            if (r14 == 0) goto L103
            java.lang.String r3 = r14.a()
            boolean r13 = com.xiaomi.push.service.al.e(r0)
            if (r13 == 0) goto L103
            android.content.Context r13 = r12.getApplicationContext()
            com.xiaomi.push.eo r13 = com.xiaomi.push.eo.a(r13)
            java.lang.String r14 = r0.b()
            java.lang.String r15 = com.xiaomi.push.service.al.b(r0)
            java.lang.String r1 = "2"
            r13.a(r14, r15, r3, r1)
        L103:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "Drop a message for push closed, msgid="
            r13.append(r14)
            r13.append(r3)
            java.lang.String r13 = r13.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r13)
            java.lang.String r13 = r0.b
            a(r12, r0, r13)
            return
        L11d:
            com.xiaomi.push.hj r15 = com.xiaomi.push.hj.e
            com.xiaomi.push.hj r1 = r0.a()
            if (r15 != r1) goto L1a5
            java.lang.String r15 = r12.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r15 = android.text.TextUtils.equals(r15, r1)
            if (r15 != 0) goto L1a5
            java.lang.String r15 = r12.getPackageName()
            java.lang.String r1 = r0.b
            boolean r15 = android.text.TextUtils.equals(r15, r1)
            if (r15 != 0) goto L1a5
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r15 = "Receive a message with wrong package name, expect "
            r13.append(r15)
            java.lang.String r15 = r12.getPackageName()
            r13.append(r15)
            java.lang.String r15 = ", received "
            r13.append(r15)
            java.lang.String r15 = r0.b
            r13.append(r15)
            java.lang.String r13 = r13.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r13)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r15 = "package should be "
            r13.append(r15)
            java.lang.String r15 = r12.getPackageName()
            r13.append(r15)
            java.lang.String r15 = ", but got "
            r13.append(r15)
            java.lang.String r15 = r0.b
            r13.append(r15)
            java.lang.String r13 = r13.toString()
            java.lang.String r15 = "unmatched_package"
            a(r12, r0, r15, r13)
            if (r14 == 0) goto L1a4
            boolean r13 = com.xiaomi.push.service.al.e(r0)
            if (r13 == 0) goto L1a4
            android.content.Context r12 = r12.getApplicationContext()
            com.xiaomi.push.eo r12 = com.xiaomi.push.eo.a(r12)
            java.lang.String r13 = r0.b()
            java.lang.String r15 = com.xiaomi.push.service.al.b(r0)
            java.lang.String r14 = r14.a()
            java.lang.String r0 = "3"
            r12.a(r13, r15, r14, r0)
        L1a4:
            return
        L1a5:
            com.xiaomi.push.hj r15 = com.xiaomi.push.hj.e
            com.xiaomi.push.hj r1 = r0.a()
            if (r15 != r1) goto L207
            int r15 = com.xiaomi.push.j.a()
            r1 = 999(0x3e7, float:1.4E-42)
            if (r15 != r1) goto L207
            boolean r15 = com.xiaomi.push.j.a(r12, r11)
            if (r15 == 0) goto L207
            java.lang.String r13 = "Receive the uninstalled dual app message"
            com.xiaomi.channel.commonutils.logger.b.a(r13)
            java.lang.String r13 = r0.a()     // Catch: com.xiaomi.push.gh -> L1e5
            com.xiaomi.push.if r13 = com.xiaomi.push.service.ah.a(r11, r13)     // Catch: com.xiaomi.push.gh -> L1e5
            com.xiaomi.push.service.ah.a(r12, r13)     // Catch: com.xiaomi.push.gh -> L1e5
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: com.xiaomi.push.gh -> L1e5
            r13.<init>()     // Catch: com.xiaomi.push.gh -> L1e5
            java.lang.String r14 = "uninstall "
            r13.append(r14)     // Catch: com.xiaomi.push.gh -> L1e5
            r13.append(r11)     // Catch: com.xiaomi.push.gh -> L1e5
            java.lang.String r14 = " msg sent"
            r13.append(r14)     // Catch: com.xiaomi.push.gh -> L1e5
            java.lang.String r13 = r13.toString()     // Catch: com.xiaomi.push.gh -> L1e5
            com.xiaomi.channel.commonutils.logger.b.a(r13)     // Catch: com.xiaomi.push.gh -> L1e5
            goto L203
        L1e5:
            r13 = move-exception
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "Fail to send Message: "
            r14.append(r15)
            java.lang.String r15 = r13.getMessage()
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r14)
            r14 = 10
            r12.a(r14, r13)
        L203:
            com.xiaomi.push.service.al.a(r12, r11)
            return
        L207:
            if (r14 == 0) goto L229
            java.util.Map r14 = r14.a()
            if (r14 == 0) goto L229
            java.lang.String r15 = "hide"
            boolean r1 = r14.containsKey(r15)
            if (r1 == 0) goto L229
            java.lang.Object r14 = r14.get(r15)
            java.lang.String r14 = (java.lang.String) r14
            java.lang.String r15 = "true"
            boolean r14 = r15.equalsIgnoreCase(r14)
            if (r14 == 0) goto L229
            b(r12, r0)
            return
        L229:
            a(r12, r11, r13, r2)
            return
    }

    private static boolean a(android.content.Context r2, android.content.Intent r3) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r0 = 32
            r1 = 1
            java.util.List r2 = r2.queryBroadcastReceivers(r3, r0)     // Catch: java.lang.Exception -> L15
            if (r2 == 0) goto L14
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Exception -> L15
            if (r2 != 0) goto L14
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    private static boolean a(android.content.Context r3, java.lang.String r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.mipush.miui.CLICK_MESSAGE"
            r0.<init>(r1)
            r0.setPackage(r4)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.xiaomi.mipush.miui.RECEIVE_MESSAGE"
            r1.<init>(r2)
            r1.setPackage(r4)
            android.content.pm.PackageManager r3 = r3.getPackageManager()
            r4 = 0
            r2 = 32
            java.util.List r1 = r3.queryBroadcastReceivers(r1, r2)     // Catch: java.lang.Exception -> L31
            java.util.List r3 = r3.queryIntentServices(r0, r2)     // Catch: java.lang.Exception -> L31
            boolean r0 = r1.isEmpty()     // Catch: java.lang.Exception -> L31
            if (r0 == 0) goto L2f
            boolean r3 = r3.isEmpty()     // Catch: java.lang.Exception -> L31
            if (r3 != 0) goto L30
        L2f:
            r4 = 1
        L30:
            return r4
        L31:
            r3 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r4
    }

    public static boolean a(android.content.Context r3, java.lang.String r4, byte[] r5) {
            boolean r0 = com.xiaomi.push.h.a(r3, r4)
            r1 = 0
            if (r0 == 0) goto L48
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r2 = "com.xiaomi.mipush.MESSAGE_ARRIVED"
            r0.<init>(r2)
            java.lang.String r2 = "mipush_payload"
            r0.putExtra(r2, r5)
            r0.setPackage(r4)
            android.content.pm.PackageManager r5 = r3.getPackageManager()     // Catch: java.lang.Exception -> L33
            java.util.List r5 = r5.queryBroadcastReceivers(r0, r1)     // Catch: java.lang.Exception -> L33
            boolean r5 = r5.isEmpty()     // Catch: java.lang.Exception -> L33
            if (r5 != 0) goto L48
            java.lang.String r5 = "broadcast message arrived."
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Exception -> L33
            java.lang.String r4 = com.xiaomi.push.service.ah.a(r4)     // Catch: java.lang.Exception -> L33
            r3.sendBroadcast(r0, r4)     // Catch: java.lang.Exception -> L33
            r3 = 1
            r1 = r3
            goto L48
        L33:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "meet error when broadcast message arrived. "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L48:
            return r1
    }

    private static boolean a(com.xiaomi.push.if r2) {
            java.lang.String r0 = r2.b
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2c
            com.xiaomi.push.hw r0 = r2.a()
            if (r0 == 0) goto L2c
            com.xiaomi.push.hw r0 = r2.a()
            java.util.Map r0 = r0.a()
            if (r0 == 0) goto L2c
            com.xiaomi.push.hw r2 = r2.a()
            java.util.Map r2 = r2.a()
            java.lang.String r0 = "miui_package_name"
            boolean r2 = r2.containsKey(r0)
            if (r2 == 0) goto L2c
            r2 = 1
            goto L2d
        L2c:
            r2 = 0
        L2d:
            return r2
    }

    private static boolean a(com.xiaomi.push.service.XMPushService r6, java.lang.String r7, com.xiaomi.push.if r8, com.xiaomi.push.hw r9) {
            r0 = 1
            if (r9 == 0) goto L8c
            java.util.Map r1 = r9.a()
            if (r1 == 0) goto L8c
            java.util.Map r1 = r9.a()
            java.lang.String r2 = "__check_alive"
            boolean r1 = r1.containsKey(r2)
            if (r1 == 0) goto L8c
            java.util.Map r1 = r9.a()
            java.lang.String r2 = "__awake"
            boolean r1 = r1.containsKey(r2)
            if (r1 == 0) goto L8c
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            java.lang.String r3 = r8.a()
            r1.b(r3)
            r1.d(r7)
            com.xiaomi.push.ht r3 = com.xiaomi.push.ht.H
            java.lang.String r3 = r3.a
            r1.c(r3)
            java.lang.String r3 = r9.a()
            r1.a(r3)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r1.a = r3
            android.content.Context r3 = r6.getApplicationContext()
            boolean r7 = com.xiaomi.push.h.a(r3, r7)
            java.util.Map<java.lang.String, java.lang.String> r3 = r1.a
            java.lang.String r4 = java.lang.Boolean.toString(r7)
            java.lang.String r5 = "app_running"
            r3.put(r5, r4)
            if (r7 != 0) goto L76
            java.util.Map r7 = r9.a()
            java.lang.Object r7 = r7.get(r2)
            java.lang.String r7 = (java.lang.String) r7
            boolean r7 = java.lang.Boolean.parseBoolean(r7)
            java.util.Map<java.lang.String, java.lang.String> r9 = r1.a
            java.lang.String r2 = java.lang.Boolean.toString(r7)
            java.lang.String r3 = "awaked"
            r9.put(r3, r2)
            if (r7 != 0) goto L76
            r0 = 0
        L76:
            java.lang.String r7 = r8.b()
            java.lang.String r8 = r8.a()
            com.xiaomi.push.hj r9 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r7 = com.xiaomi.push.service.ah.a(r7, r8, r1, r9)
            com.xiaomi.push.service.ah.a(r6, r7)     // Catch: com.xiaomi.push.gh -> L88
            goto L8c
        L88:
            r6 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L8c:
            return r0
    }

    private static void b(android.content.Context r2, com.xiaomi.push.if r3, byte[] r4) {
            boolean r0 = com.xiaomi.push.service.al.a(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = com.xiaomi.push.service.al.a(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L12
            return
        L12:
            boolean r4 = a(r2, r0, r4)
            if (r4 != 0) goto L2d
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)
            java.lang.String r4 = com.xiaomi.push.service.al.b(r3)
            com.xiaomi.push.hw r3 = r3.a()
            java.lang.String r3 = r3.a()
            java.lang.String r1 = "1"
            r2.b(r0, r4, r3, r1)
        L2d:
            return
    }

    private static void b(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3) {
            com.xiaomi.push.service.aa r0 = new com.xiaomi.push.service.aa
            r1 = 4
            r0.<init>(r1, r2, r3)
            r2.a(r0)
            return
    }

    private static boolean b(com.xiaomi.push.if r1) {
            com.xiaomi.push.hw r1 = r1.a()
            java.util.Map r1 = r1.a()
            if (r1 == 0) goto L14
            java.lang.String r0 = "notify_effect"
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    private static void c(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3) {
            com.xiaomi.push.service.ab r0 = new com.xiaomi.push.service.ab
            r1 = 4
            r0.<init>(r1, r2, r3)
            r2.a(r0)
            return
    }

    private static boolean c(com.xiaomi.push.if r1) {
            com.xiaomi.push.hw r0 = r1.a()
            if (r0 == 0) goto L26
            com.xiaomi.push.hw r0 = r1.a()
            java.util.Map r0 = r0.a()
            if (r0 != 0) goto L11
            goto L26
        L11:
            com.xiaomi.push.hw r1 = r1.a()
            java.util.Map r1 = r1.a()
            java.lang.String r0 = "obslete_ads_message"
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r0 = "1"
            boolean r1 = r0.equals(r1)
            return r1
        L26:
            r1 = 0
            return r1
    }

    private static void d(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.if r3) {
            com.xiaomi.push.service.ac r0 = new com.xiaomi.push.service.ac
            r1 = 4
            r0.<init>(r1, r2, r3)
            r2.a(r0)
            return
    }

    public void a(android.content.Context r1, com.xiaomi.push.service.bg.b r2, boolean r3, int r4, java.lang.String r5) {
            r0 = this;
            if (r3 != 0) goto L19
            com.xiaomi.push.service.t r2 = com.xiaomi.push.service.u.a(r1)
            if (r2 == 0) goto L19
            java.lang.String r3 = "token-expired"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L19
            java.lang.String r3 = r2.f
            java.lang.String r4 = r2.d
            java.lang.String r2 = r2.e
            com.xiaomi.push.service.u.a(r1, r3, r4, r2)
        L19:
            return
    }

    public void a(com.xiaomi.push.service.XMPushService r3, com.xiaomi.push.fl r4, com.xiaomi.push.service.bg.b r5) {
            r2 = this;
            java.lang.String r5 = r5.h     // Catch: java.lang.IllegalArgumentException -> Lf
            byte[] r5 = r4.a(r5)     // Catch: java.lang.IllegalArgumentException -> Lf
            int r4 = r4.c()     // Catch: java.lang.IllegalArgumentException -> Lf
            long r0 = (long) r4     // Catch: java.lang.IllegalArgumentException -> Lf
            a(r3, r5, r0)     // Catch: java.lang.IllegalArgumentException -> Lf
            goto L13
        Lf:
            r3 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L13:
            return
    }

    public void a(com.xiaomi.push.service.XMPushService r3, com.xiaomi.push.gn r4, com.xiaomi.push.service.bg.b r5) {
            r2 = this;
            boolean r0 = r4 instanceof com.xiaomi.push.gm
            if (r0 == 0) goto L33
            r0 = r4
            com.xiaomi.push.gm r0 = (com.xiaomi.push.gm) r0
            java.lang.String r1 = "s"
            com.xiaomi.push.gk r1 = r0.a(r1)
            if (r1 == 0) goto L38
            java.lang.String r5 = r5.h     // Catch: java.lang.IllegalArgumentException -> L2e
            java.lang.String r0 = r0.j()     // Catch: java.lang.IllegalArgumentException -> L2e
            byte[] r5 = com.xiaomi.push.service.bp.a(r5, r0)     // Catch: java.lang.IllegalArgumentException -> L2e
            java.lang.String r0 = r1.c()     // Catch: java.lang.IllegalArgumentException -> L2e
            byte[] r5 = com.xiaomi.push.service.bp.a(r5, r0)     // Catch: java.lang.IllegalArgumentException -> L2e
            java.lang.String r4 = r4.a()     // Catch: java.lang.IllegalArgumentException -> L2e
            int r4 = com.xiaomi.push.hb.a(r4)     // Catch: java.lang.IllegalArgumentException -> L2e
            long r0 = (long) r4     // Catch: java.lang.IllegalArgumentException -> L2e
            a(r3, r5, r0)     // Catch: java.lang.IllegalArgumentException -> L2e
            goto L38
        L2e:
            r3 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            goto L38
        L33:
            java.lang.String r3 = "not a mipush message"
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L38:
            return
    }
}
