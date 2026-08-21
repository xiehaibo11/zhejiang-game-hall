package com.alipay.apmobilesecuritysdk.e;

public final class d {
    public static com.alipay.apmobilesecuritysdk.e.c a(java.lang.String r7) {
            boolean r0 = com.alipay.sdk.m.z.a.a(r7)     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L34
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>(r7)     // Catch: java.lang.Exception -> L30
            com.alipay.apmobilesecuritysdk.e.c r7 = new com.alipay.apmobilesecuritysdk.e.c     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "apdid"
            java.lang.String r2 = r0.optString(r1)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "deviceInfoHash"
            java.lang.String r3 = r0.optString(r1)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "timestamp"
            java.lang.String r4 = r0.optString(r1)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "tid"
            java.lang.String r5 = r0.optString(r1)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "utdid"
            java.lang.String r6 = r0.optString(r1)     // Catch: java.lang.Exception -> L30
            r1 = r7
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L30
            goto L35
        L30:
            r7 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r7)
        L34:
            r7 = 0
        L35:
            return r7
    }

    public static synchronized void a() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.d> r0 = com.alipay.apmobilesecuritysdk.e.d.class
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    public static synchronized void a(android.content.Context r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.d> r0 = com.alipay.apmobilesecuritysdk.e.d.class
            monitor-enter(r0)
            java.lang.String r1 = "vkeyid_profiles_v4"
            java.lang.String r2 = "key_deviceid_v4"
            java.lang.String r3 = ""
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r2, r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r4 = "wxcasxx_v4"
            java.lang.String r1 = "key_wxcasxx_v4"
            java.lang.String r2 = ""
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return
        L17:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized void a(android.content.Context r4, com.alipay.apmobilesecuritysdk.e.c r5) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.d> r0 = com.alipay.apmobilesecuritysdk.e.d.class
            monitor-enter(r0)
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r2 = "apdid"
            java.lang.String r3 = r5.a     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r2 = "deviceInfoHash"
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r2 = "timestamp"
            java.lang.String r3 = r5.c     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r2 = "tid"
            java.lang.String r3 = r5.d     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r2 = "utdid"
            java.lang.String r5 = r5.e     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r1 = "vkeyid_profiles_v4"
            java.lang.String r2 = "key_deviceid_v4"
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r4 = "wxcasxx_v4"
            java.lang.String r1 = "key_wxcasxx_v4"
            com.alipay.apmobilesecuritysdk.f.a.a(r4, r1, r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            monitor-exit(r0)
            return
        L3f:
            r4 = move-exception
            goto L47
        L41:
            r4 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r4)     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r0)
            return
        L47:
            monitor-exit(r0)
            throw r4
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.c b() {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.d> r0 = com.alipay.apmobilesecuritysdk.e.d.class
            monitor-enter(r0)
            java.lang.String r1 = "wxcasxx_v4"
            java.lang.String r2 = "key_wxcasxx_v4"
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.f.a.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            boolean r2 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L14
            r1 = 0
            monitor-exit(r0)
            return r1
        L14:
            com.alipay.apmobilesecuritysdk.e.c r1 = a(r1)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r1
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.c b(android.content.Context r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.d> r0 = com.alipay.apmobilesecuritysdk.e.d.class
            monitor-enter(r0)
            java.lang.String r1 = "vkeyid_profiles_v4"
            java.lang.String r2 = "key_deviceid_v4"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L1f
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L19
            java.lang.String r3 = "wxcasxx_v4"
            java.lang.String r1 = "key_wxcasxx_v4"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1)     // Catch: java.lang.Throwable -> L1f
        L19:
            com.alipay.apmobilesecuritysdk.e.c r3 = a(r3)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return r3
        L1f:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized com.alipay.apmobilesecuritysdk.e.c c(android.content.Context r3) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.e.d> r0 = com.alipay.apmobilesecuritysdk.e.d.class
            monitor-enter(r0)
            java.lang.String r1 = "vkeyid_profiles_v4"
            java.lang.String r2 = "key_deviceid_v4"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L1a
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L14
            r3 = 0
            monitor-exit(r0)
            return r3
        L14:
            com.alipay.apmobilesecuritysdk.e.c r3 = a(r3)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r3
        L1a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
