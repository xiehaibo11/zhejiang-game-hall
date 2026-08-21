package com.alipay.apmobilesecuritysdk.e;

public final class g {
    public static synchronized java.lang.String a(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.g> r0 = com.alipay.apmobilesecuritysdk.e.g.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            java.lang.String r2 = "openApi"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L37
            r1.append(r4)     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "openapi_file_pri"
            java.lang.String r2 = ""
            java.lang.String r3 = com.alipay.sdk.m.b0.e.a(r3, r1, r4, r2)     // Catch: java.lang.Throwable -> L37
            boolean r4 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L37
            if (r4 == 0) goto L23
            java.lang.String r3 = ""
            monitor-exit(r0)
            return r3
        L23:
            java.lang.String r4 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L37
            java.lang.String r3 = com.alipay.sdk.m.y.c.b(r4, r3)     // Catch: java.lang.Throwable -> L37
            boolean r4 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L37
            if (r4 == 0) goto L35
            java.lang.String r3 = ""
            monitor-exit(r0)
            return r3
        L35:
            monitor-exit(r0)
            return r3
        L37:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized void a() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.g> r0 = com.alipay.apmobilesecuritysdk.e.g.class
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    public static synchronized void a(android.content.Context r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.g> r0 = com.alipay.apmobilesecuritysdk.e.g.class
            monitor-enter(r0)
            java.lang.String r1 = "openapi_file_pri"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L18
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L16
            r3.clear()     // Catch: java.lang.Throwable -> L18
            r3.commit()     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)
            return
        L18:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.g> r0 = com.alipay.apmobilesecuritysdk.e.g.class
            monitor-enter(r0)
            java.lang.String r1 = "openapi_file_pri"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L2e
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L2e
            if (r3 == 0) goto L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "openApi"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            r1.append(r4)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = com.alipay.sdk.m.y.c.a(r1, r5)     // Catch: java.lang.Throwable -> L2e
            r3.putString(r4, r5)     // Catch: java.lang.Throwable -> L2e
            r3.commit()     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r0)
            return
        L2e:
            monitor-exit(r0)
            return
    }
}
