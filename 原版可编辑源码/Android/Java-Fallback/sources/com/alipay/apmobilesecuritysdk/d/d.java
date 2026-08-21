package com.alipay.apmobilesecuritysdk.d;

public final class d {
    public static synchronized java.util.Map<java.lang.String, java.lang.String> a() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.d> r0 = com.alipay.apmobilesecuritysdk.d.d.class
            monitor-enter(r0)
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = "AE16"
            com.alipay.apmobilesecuritysdk.c.b r3 = new com.alipay.apmobilesecuritysdk.c.b     // Catch: java.lang.Throwable -> L14
            r3.<init>()     // Catch: java.lang.Throwable -> L14
            java.lang.String r3 = ""
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L14
        L14:
            monitor-exit(r0)
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.d> r0 = com.alipay.apmobilesecuritysdk.d.d.class
            monitor-enter(r0)
            com.alipay.sdk.m.a0.e.a()     // Catch: java.lang.Throwable -> Lca
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r4 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.getInstance(r4)     // Catch: java.lang.Throwable -> Lca
            com.alipay.sdk.m.a0.b.a(r4)     // Catch: java.lang.Throwable -> Lca
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lca
            r4.<init>()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.b()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE1"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = "AE2"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lca
            r2.<init>()     // Catch: java.lang.Throwable -> Lca
            boolean r3 = com.alipay.sdk.m.a0.e.c()     // Catch: java.lang.Throwable -> Lca
            if (r3 == 0) goto L2b
            java.lang.String r3 = "1"
            goto L2d
        L2b:
            java.lang.String r3 = "0"
        L2d:
            r2.append(r3)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lca
            r4.put(r1, r2)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = "AE3"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lca
            r2.<init>()     // Catch: java.lang.Throwable -> Lca
            boolean r3 = com.alipay.sdk.m.a0.e.d()     // Catch: java.lang.Throwable -> Lca
            if (r3 == 0) goto L47
            java.lang.String r3 = "1"
            goto L49
        L47:
            java.lang.String r3 = "0"
        L49:
            r2.append(r3)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lca
            r4.put(r1, r2)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.e()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE4"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.f()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE5"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.g()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE6"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.h()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE7"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.i()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE8"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.j()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE9"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.k()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE10"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.l()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE11"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.m()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE12"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.n()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE13"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.o()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE14"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.e.p()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE15"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            java.lang.String r1 = com.alipay.sdk.m.a0.b.f()     // Catch: java.lang.Throwable -> Lca
            java.lang.String r2 = "AE21"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> Lca
            monitor-exit(r0)
            return r4
        Lca:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }
}
