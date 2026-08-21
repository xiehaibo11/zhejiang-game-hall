package com.alipay.apmobilesecuritysdk.e;

public final class a {
    public static com.alipay.apmobilesecuritysdk.e.b a(java.lang.String r4) {
            boolean r0 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Exception -> L23
            if (r0 != 0) goto L27
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L23
            r0.<init>(r4)     // Catch: java.lang.Exception -> L23
            com.alipay.apmobilesecuritysdk.e.b r4 = new com.alipay.apmobilesecuritysdk.e.b     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = "apdid"
            java.lang.String r1 = r0.optString(r1)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = "deviceInfoHash"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Exception -> L23
            java.lang.String r3 = "timestamp"
            java.lang.String r0 = r0.optString(r3)     // Catch: java.lang.Exception -> L23
            r4.<init>(r1, r2, r0)     // Catch: java.lang.Exception -> L23
            goto L28
        L23:
            r4 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r4)
        L27:
            r4 = 0
        L28:
            return r4
    }

    public static synchronized void a() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.a> r0 = com.alipay.apmobilesecuritysdk.e.a.class
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    public static synchronized void a(android.content.Context r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.a> r0 = com.alipay.apmobilesecuritysdk.e.a.class
            monitor-enter(r0)
            java.lang.String r1 = "vkeyid_profiles_v3"
            java.lang.String r2 = "deviceid"
            java.lang.String r3 = ""
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r2, r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r4 = "wxcasxx_v3"
            java.lang.String r1 = "wxcasxx"
            java.lang.String r2 = ""
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return
        L17:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized void a(android.content.Context r4, com.alipay.apmobilesecuritysdk.e.b r5) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.a> r0 = com.alipay.apmobilesecuritysdk.e.a.class
            monitor-enter(r0)
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.lang.String r2 = "apdid"
            java.lang.String r3 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.lang.String r2 = "deviceInfoHash"
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.lang.String r2 = "timestamp"
            java.lang.String r5 = r5.c     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.lang.String r1 = "vkeyid_profiles_v3"
            java.lang.String r2 = "deviceid"
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            java.lang.String r4 = "wxcasxx_v3"
            java.lang.String r1 = "wxcasxx"
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r5)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L33
            monitor-exit(r0)
            return
        L31:
            r4 = move-exception
            goto L39
        L33:
            r4 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r4)     // Catch: java.lang.Throwable -> L31
            monitor-exit(r0)
            return
        L39:
            monitor-exit(r0)
            throw r4
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.b b() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.a> r0 = com.alipay.apmobilesecuritysdk.e.a.class
            monitor-enter(r0)
            java.lang.String r1 = "wxcasxx_v3"
            java.lang.String r2 = "wxcasxx"
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.f.a.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            boolean r2 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L14
            r1 = 0
            monitor-exit(r0)
            return r1
        L14:
            com.alipay.apmobilesecuritysdk.e.b r1 = a(r1)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r1
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.b b(android.content.Context r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.a> r0 = com.alipay.apmobilesecuritysdk.e.a.class
            monitor-enter(r0)
            java.lang.String r1 = "vkeyid_profiles_v3"
            java.lang.String r2 = "deviceid"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L1f
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L19
            java.lang.String r3 = "wxcasxx_v3"
            java.lang.String r1 = "wxcasxx"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1)     // Catch: java.lang.Throwable -> L1f
        L19:
            com.alipay.apmobilesecuritysdk.e.b r3 = a(r3)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return r3
        L1f:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.b c(android.content.Context r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.a> r0 = com.alipay.apmobilesecuritysdk.e.a.class
            monitor-enter(r0)
            java.lang.String r1 = "vkeyid_profiles_v3"
            java.lang.String r2 = "deviceid"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L1a
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L14
            r3 = 0
            monitor-exit(r0)
            return r3
        L14:
            com.alipay.apmobilesecuritysdk.e.b r3 = a(r3)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r3
        L1a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
