package com.alipay.apmobilesecuritysdk.d;

public final class b {
    public static synchronized java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r10, java.util.Map<java.lang.String, java.lang.String> r11) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.b> r0 = com.alipay.apmobilesecuritysdk.d.b.class
            monitor-enter(r0)
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L82
            r1.<init>()     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "tid"
            java.lang.String r3 = ""
            java.lang.String r2 = com.alipay.sdk.m.z.a.a(r11, r2, r3)     // Catch: java.lang.Throwable -> L82
            java.lang.String r3 = "utdid"
            java.lang.String r4 = ""
            java.lang.String r3 = com.alipay.sdk.m.z.a.a(r11, r3, r4)     // Catch: java.lang.Throwable -> L82
            java.lang.String r4 = "userId"
            java.lang.String r5 = ""
            java.lang.String r4 = com.alipay.sdk.m.z.a.a(r11, r4, r5)     // Catch: java.lang.Throwable -> L82
            java.lang.String r5 = "appName"
            java.lang.String r6 = ""
            java.lang.String r5 = com.alipay.sdk.m.z.a.a(r11, r5, r6)     // Catch: java.lang.Throwable -> L82
            java.lang.String r6 = "appKeyClient"
            java.lang.String r7 = ""
            java.lang.String r6 = com.alipay.sdk.m.z.a.a(r11, r6, r7)     // Catch: java.lang.Throwable -> L82
            java.lang.String r7 = "tmxSessionId"
            java.lang.String r8 = ""
            java.lang.String r7 = com.alipay.sdk.m.z.a.a(r11, r7, r8)     // Catch: java.lang.Throwable -> L82
            java.lang.String r10 = com.alipay.apmobilesecuritysdk.e.h.f(r10)     // Catch: java.lang.Throwable -> L82
            java.lang.String r8 = "sessionId"
            java.lang.String r9 = ""
            java.lang.String r11 = com.alipay.sdk.m.z.a.a(r11, r8, r9)     // Catch: java.lang.Throwable -> L82
            java.lang.String r8 = "AC1"
            r1.put(r8, r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "AC2"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "AC3"
            java.lang.String r3 = ""
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "AC4"
            r1.put(r2, r10)     // Catch: java.lang.Throwable -> L82
            java.lang.String r10 = "AC5"
            r1.put(r10, r4)     // Catch: java.lang.Throwable -> L82
            java.lang.String r10 = "AC6"
            r1.put(r10, r7)     // Catch: java.lang.Throwable -> L82
            java.lang.String r10 = "AC7"
            java.lang.String r2 = ""
            r1.put(r10, r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r10 = "AC8"
            r1.put(r10, r5)     // Catch: java.lang.Throwable -> L82
            java.lang.String r10 = "AC9"
            r1.put(r10, r6)     // Catch: java.lang.Throwable -> L82
            boolean r10 = com.alipay.sdk.m.z.a.b(r11)     // Catch: java.lang.Throwable -> L82
            if (r10 == 0) goto L80
            java.lang.String r10 = "AC10"
            r1.put(r10, r11)     // Catch: java.lang.Throwable -> L82
        L80:
            monitor-exit(r0)
            return r1
        L82:
            r10 = move-exception
            monitor-exit(r0)
            throw r10
    }
}
