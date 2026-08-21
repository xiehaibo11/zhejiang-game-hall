package com.xiaomi.mipush.sdk;

public class s {
    private static volatile com.xiaomi.mipush.sdk.s a;
    private final android.content.Context a;

    private s(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            return
    }

    private static com.xiaomi.mipush.sdk.s a(android.content.Context r2) {
            com.xiaomi.mipush.sdk.s r0 = com.xiaomi.mipush.sdk.s.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.mipush.sdk.s> r0 = com.xiaomi.mipush.sdk.s.class
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.s r1 = com.xiaomi.mipush.sdk.s.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.mipush.sdk.s r1 = new com.xiaomi.mipush.sdk.s     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.mipush.sdk.s.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.mipush.sdk.s r2 = com.xiaomi.mipush.sdk.s.a
            return r2
    }

    public static void a(android.content.Context r2, com.xiaomi.push.if r3) {
            com.xiaomi.mipush.sdk.s r2 = a(r2)
            r0 = 0
            r1 = 1
            r2.a(r3, r0, r1)
            return
    }

    public static void a(android.content.Context r1, com.xiaomi.push.if r2, boolean r3) {
            com.xiaomi.mipush.sdk.s r1 = a(r1)
            r0 = 1
            r1.a(r2, r0, r3)
            return
    }

    private void a(com.xiaomi.push.if r12, int r13, boolean r14) {
            r11 = this;
            android.content.Context r0 = r11.a
            boolean r0 = com.xiaomi.push.m.a(r0)
            if (r0 != 0) goto L7e
            boolean r0 = com.xiaomi.push.m.a()
            if (r0 == 0) goto L7e
            if (r12 == 0) goto L7e
            com.xiaomi.push.hj r0 = r12.a
            com.xiaomi.push.hj r1 = com.xiaomi.push.hj.e
            if (r0 != r1) goto L7e
            com.xiaomi.push.hw r0 = r12.a()
            if (r0 == 0) goto L7e
            if (r14 == 0) goto L7e
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = "click to start activity result:"
            r14.append(r0)
            java.lang.String r0 = java.lang.String.valueOf(r13)
            r14.append(r0)
            java.lang.String r14 = r14.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r14)
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            com.xiaomi.push.hw r14 = r12.a()
            java.lang.String r14 = r14.a()
            r0 = 0
            r1.<init>(r14, r0)
            com.xiaomi.push.ht r14 = com.xiaomi.push.ht.ae
            java.lang.String r14 = r14.a
            r1.c(r14)
            java.lang.String r14 = r12.a()
            r1.b(r14)
            java.lang.String r14 = r12.b
            r1.d(r14)
            java.util.HashMap r14 = new java.util.HashMap
            r14.<init>()
            r1.a = r14
            java.util.Map<java.lang.String, java.lang.String> r14 = r1.a
            java.lang.String r13 = java.lang.String.valueOf(r13)
            java.lang.String r0 = "result"
            r14.put(r0, r13)
            android.content.Context r13 = r11.a
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r13)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 1
            java.lang.String r7 = r12.b
            java.lang.String r8 = r12.a
            r9 = 1
            r10 = 0
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
        L7e:
            return
    }

    public static void b(android.content.Context r1, com.xiaomi.push.if r2, boolean r3) {
            com.xiaomi.mipush.sdk.s r1 = a(r1)
            r0 = 2
            r1.a(r2, r0, r3)
            return
    }

    public static void c(android.content.Context r1, com.xiaomi.push.if r2, boolean r3) {
            com.xiaomi.mipush.sdk.s r1 = a(r1)
            r0 = 3
            r1.a(r2, r0, r3)
            return
    }

    public static void d(android.content.Context r1, com.xiaomi.push.if r2, boolean r3) {
            com.xiaomi.mipush.sdk.s r1 = a(r1)
            r0 = 4
            r1.a(r2, r0, r3)
            return
    }

    public static void e(android.content.Context r2, com.xiaomi.push.if r3, boolean r4) {
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r1 = r0.c()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L27
            java.lang.String r1 = r0.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L19
            goto L27
        L19:
            boolean r0 = r0.f()
            com.xiaomi.mipush.sdk.s r2 = a(r2)
            if (r0 == 0) goto L25
            r0 = 7
            goto L2c
        L25:
            r0 = 5
            goto L2c
        L27:
            com.xiaomi.mipush.sdk.s r2 = a(r2)
            r0 = 6
        L2c:
            r2.a(r3, r0, r4)
            return
    }
}
