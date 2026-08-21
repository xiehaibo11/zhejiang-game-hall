package com.xiaomi.push;

class fk {
    public static void a(com.xiaomi.push.service.bg.b r8, java.lang.String r9, com.xiaomi.push.fw r10) {
            com.xiaomi.push.dx$c r0 = new com.xiaomi.push.dx$c
            r0.<init>()
            java.lang.String r1 = r8.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L12
            java.lang.String r1 = r8.c
            r0.a(r1)
        L12:
            java.lang.String r1 = r8.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1f
            java.lang.String r1 = r8.e
            r0.d(r1)
        L1f:
            java.lang.String r1 = r8.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2c
            java.lang.String r1 = r8.f
            r0.e(r1)
        L2c:
            boolean r1 = r8.a
            java.lang.String r2 = "1"
            java.lang.String r3 = "0"
            if (r1 == 0) goto L36
            r1 = r2
            goto L37
        L36:
            r1 = r3
        L37:
            r0.b(r1)
            java.lang.String r1 = r8.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r4 = "XIAOMI-SASL"
            if (r1 != 0) goto L4a
            java.lang.String r1 = r8.d
            r0.c(r1)
            goto L4d
        L4a:
            r0.c(r4)
        L4d:
            com.xiaomi.push.fl r1 = new com.xiaomi.push.fl
            r1.<init>()
            java.lang.String r5 = r8.b
            r1.c(r5)
            java.lang.String r5 = r8.g
            int r5 = java.lang.Integer.parseInt(r5)
            r1.a(r5)
            java.lang.String r5 = r8.a
            r1.b(r5)
            r5 = 0
            java.lang.String r6 = "BIND"
            r1.a(r6, r5)
            java.lang.String r6 = r1.e()
            r1.a(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "[Slim]: bind id="
            r6.append(r7)
            java.lang.String r7 = r1.e()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            java.lang.String r7 = "challenge"
            r6.put(r7, r9)
            java.lang.String r9 = r8.c
            java.lang.String r7 = "token"
            r6.put(r7, r9)
            java.lang.String r9 = r8.g
            java.lang.String r7 = "chid"
            r6.put(r7, r9)
            java.lang.String r9 = r8.b
            java.lang.String r7 = "from"
            r6.put(r7, r9)
            java.lang.String r9 = r1.e()
            java.lang.String r7 = "id"
            r6.put(r7, r9)
            java.lang.String r9 = "to"
            java.lang.String r7 = "xiaomi.com"
            r6.put(r9, r7)
            boolean r9 = r8.a
            java.lang.String r7 = "kick"
            if (r9 == 0) goto Lc3
            r6.put(r7, r2)
            goto Lc6
        Lc3:
            r6.put(r7, r3)
        Lc6:
            java.lang.String r9 = r8.e
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            java.lang.String r2 = ""
            java.lang.String r3 = "client_attrs"
            if (r9 != 0) goto Ld8
            java.lang.String r9 = r8.e
            r6.put(r3, r9)
            goto Ldb
        Ld8:
            r6.put(r3, r2)
        Ldb:
            java.lang.String r9 = r8.f
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            java.lang.String r3 = "cloud_attrs"
            if (r9 != 0) goto Leb
            java.lang.String r9 = r8.f
            r6.put(r3, r9)
            goto Lee
        Leb:
            r6.put(r3, r2)
        Lee:
            java.lang.String r9 = r8.d
            java.lang.String r2 = "XIAOMI-PASS"
            boolean r9 = r9.equals(r2)
            if (r9 != 0) goto L10a
            java.lang.String r9 = r8.d
            java.lang.String r2 = "XMPUSH-PASS"
            boolean r9 = r9.equals(r2)
            if (r9 == 0) goto L103
            goto L10a
        L103:
            java.lang.String r8 = r8.d
            r8.equals(r4)
            r8 = r5
            goto L112
        L10a:
            java.lang.String r9 = r8.d
            java.lang.String r8 = r8.h
            java.lang.String r8 = com.xiaomi.push.bn.a(r9, r5, r6, r8)
        L112:
            r0.f(r8)
            byte[] r8 = r0.a()
            r1.a(r8, r5)
            r10.b(r1)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, com.xiaomi.push.fw r3) {
            com.xiaomi.push.fl r0 = new com.xiaomi.push.fl
            r0.<init>()
            r0.c(r2)
            int r1 = java.lang.Integer.parseInt(r1)
            r0.a(r1)
            java.lang.String r1 = "UBND"
            r2 = 0
            r0.a(r1, r2)
            r3.b(r0)
            return
    }
}
