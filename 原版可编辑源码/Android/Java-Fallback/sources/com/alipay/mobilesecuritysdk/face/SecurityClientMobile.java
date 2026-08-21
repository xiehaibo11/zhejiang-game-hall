package com.alipay.mobilesecuritysdk.face;

public class SecurityClientMobile {
    public SecurityClientMobile() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized java.lang.String GetApdid(android.content.Context r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            java.lang.Class<com.alipay.mobilesecuritysdk.face.SecurityClientMobile> r0 = com.alipay.mobilesecuritysdk.face.SecurityClientMobile.class
            monitor-enter(r0)
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L3e
            r1.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "utdid"
            java.lang.String r3 = ""
            java.lang.String r2 = com.alipay.sdk.m.z.a.a(r5, r2, r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = "utdid"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "tid"
            java.lang.String r3 = ""
            java.lang.String r2 = com.alipay.sdk.m.z.a.a(r5, r2, r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = "tid"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "userId"
            java.lang.String r3 = ""
            java.lang.String r5 = com.alipay.sdk.m.z.a.a(r5, r2, r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "userId"
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L3e
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r5 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.getInstance(r4)     // Catch: java.lang.Throwable -> L3e
            r2 = 0
            r3 = 0
            r5.initToken(r2, r1, r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = com.alipay.apmobilesecuritysdk.a.a.a(r4)     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r0)
            return r4
        L3e:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }
}
