package com.alipay.apmobilesecuritysdk.d;

public final class a {
    public static synchronized java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.d.a> r0 = com.alipay.apmobilesecuritysdk.d.a.class
            monitor-enter(r0)
            java.lang.String r1 = "appchannel"
            java.lang.String r2 = ""
            java.lang.String r5 = com.alipay.sdk.m.z.a.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L3a
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L3a
            r1.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r3 = "AA1"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L3a
            com.alipay.sdk.m.a0.a.a()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = com.alipay.sdk.m.a0.a.a(r4)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "AA2"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = "AA3"
            java.lang.String r2 = "APPSecuritySDK-ALIPAYSDK"
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = "AA4"
            java.lang.String r2 = "3.4.0.202303020703"
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = "AA6"
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r0)
            return r1
        L3a:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }
}
