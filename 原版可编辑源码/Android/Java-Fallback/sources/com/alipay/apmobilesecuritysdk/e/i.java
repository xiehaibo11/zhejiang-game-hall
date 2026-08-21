package com.alipay.apmobilesecuritysdk.e;

public final class i {
    public static java.lang.String a = "";
    public static java.lang.String b = "";
    public static java.lang.String c = "";
    public static java.lang.String d = "";
    public static java.lang.String e = "";
    public static java.util.Map<java.lang.String, java.lang.String> f;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.alipay.apmobilesecuritysdk.e.i.f = r0
            return
    }

    public static synchronized java.lang.String a(java.lang.String r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "apdidTokenCache"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2d
            r1.append(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L2d
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.e.i.f     // Catch: java.lang.Throwable -> L2d
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L29
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.e.i.f     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L2d
            boolean r1 = com.alipay.sdk.m.z.a.b(r3)     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L29
            monitor-exit(r0)
            return r3
        L29:
            java.lang.String r3 = ""
            monitor-exit(r0)
            return r3
        L2d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized void a() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    public static synchronized void a(com.alipay.apmobilesecuritysdk.e.b r2) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            if (r2 == 0) goto L15
            java.lang.String r1 = r2.a     // Catch: java.lang.Throwable -> L12
            com.alipay.apmobilesecuritysdk.e.i.a = r1     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = r2.b     // Catch: java.lang.Throwable -> L12
            com.alipay.apmobilesecuritysdk.e.i.b = r1     // Catch: java.lang.Throwable -> L12
            java.lang.String r2 = r2.c     // Catch: java.lang.Throwable -> L12
            com.alipay.apmobilesecuritysdk.e.i.c = r2     // Catch: java.lang.Throwable -> L12
            goto L15
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L15:
            monitor-exit(r0)
            return
    }

    public static synchronized void a(com.alipay.apmobilesecuritysdk.e.c r2) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            if (r2 == 0) goto L1d
            java.lang.String r1 = r2.a     // Catch: java.lang.Throwable -> L1a
            com.alipay.apmobilesecuritysdk.e.i.a = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = r2.b     // Catch: java.lang.Throwable -> L1a
            com.alipay.apmobilesecuritysdk.e.i.b = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = r2.d     // Catch: java.lang.Throwable -> L1a
            com.alipay.apmobilesecuritysdk.e.i.d = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = r2.e     // Catch: java.lang.Throwable -> L1a
            com.alipay.apmobilesecuritysdk.e.i.e = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = r2.c     // Catch: java.lang.Throwable -> L1a
            com.alipay.apmobilesecuritysdk.e.i.c = r2     // Catch: java.lang.Throwable -> L1a
            goto L1d
        L1a:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L1d:
            monitor-exit(r0)
            return
    }

    public static synchronized void a(java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = "apdidTokenCache"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L25
            r1.append(r3)     // Catch: java.lang.Throwable -> L25
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L25
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.e.i.f     // Catch: java.lang.Throwable -> L25
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L1e
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.e.i.f     // Catch: java.lang.Throwable -> L25
            r1.remove(r3)     // Catch: java.lang.Throwable -> L25
        L1e:
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.apmobilesecuritysdk.e.i.f     // Catch: java.lang.Throwable -> L25
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)
            return
        L25:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized boolean a(android.content.Context r6, java.lang.String r7) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            long r1 = com.alipay.apmobilesecuritysdk.e.h.a(r6)     // Catch: java.lang.Throwable -> Ld
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L10
        Ld:
            r1 = 86400000(0x5265c00, double:4.2687272E-316)
        L10:
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L24
            long r6 = com.alipay.apmobilesecuritysdk.e.h.h(r6, r7)     // Catch: java.lang.Throwable -> L24
            long r3 = r3 - r6
            long r6 = java.lang.Math.abs(r3)     // Catch: java.lang.Throwable -> L24
            int r3 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r3 >= 0) goto L28
            r6 = 1
        L22:
            monitor-exit(r0)
            return r6
        L24:
            r6 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r6)     // Catch: java.lang.Throwable -> L2a
        L28:
            r6 = 0
            goto L22
        L2a:
            r6 = move-exception
            monitor-exit(r0)
            goto L2e
        L2d:
            throw r6
        L2e:
            goto L2d
    }

    public static synchronized java.lang.String b() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.a     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void b(java.lang.String r0) {
            com.alipay.apmobilesecuritysdk.e.i.a = r0
            return
    }

    public static synchronized java.lang.String c() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void c(java.lang.String r0) {
            com.alipay.apmobilesecuritysdk.e.i.b = r0
            return
    }

    public static synchronized java.lang.String d() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.d     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void d(java.lang.String r0) {
            com.alipay.apmobilesecuritysdk.e.i.c = r0
            return
    }

    public static synchronized java.lang.String e() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.e     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void e(java.lang.String r0) {
            com.alipay.apmobilesecuritysdk.e.i.d = r0
            return
    }

    public static synchronized java.lang.String f() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.c     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void f(java.lang.String r0) {
            com.alipay.apmobilesecuritysdk.e.i.e = r0
            return
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.c g() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.i> r0 = com.alipay.apmobilesecuritysdk.e.i.class
            monitor-enter(r0)
            com.alipay.apmobilesecuritysdk.e.c r7 = new com.alipay.apmobilesecuritysdk.e.c     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = com.alipay.apmobilesecuritysdk.e.i.a     // Catch: java.lang.Throwable -> L15
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.e.i.b     // Catch: java.lang.Throwable -> L15
            java.lang.String r4 = com.alipay.apmobilesecuritysdk.e.i.c     // Catch: java.lang.Throwable -> L15
            java.lang.String r5 = com.alipay.apmobilesecuritysdk.e.i.d     // Catch: java.lang.Throwable -> L15
            java.lang.String r6 = com.alipay.apmobilesecuritysdk.e.i.e     // Catch: java.lang.Throwable -> L15
            r1 = r7
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return r7
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void h() {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.alipay.apmobilesecuritysdk.e.i.f
            r0.clear()
            java.lang.String r0 = ""
            com.alipay.apmobilesecuritysdk.e.i.a = r0
            com.alipay.apmobilesecuritysdk.e.i.b = r0
            com.alipay.apmobilesecuritysdk.e.i.d = r0
            com.alipay.apmobilesecuritysdk.e.i.e = r0
            com.alipay.apmobilesecuritysdk.e.i.c = r0
            return
    }
}
