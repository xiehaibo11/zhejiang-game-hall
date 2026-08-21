package com.alipay.apmobilesecuritysdk.e;

public final class e {
    public static com.alipay.apmobilesecuritysdk.e.f a(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "device_feature_prefs_name"
            java.lang.String r2 = "device_feature_prefs_key"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1, r2)
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)
            if (r1 == 0) goto L1a
            java.lang.String r3 = "device_feature_file_name"
            java.lang.String r1 = "device_feature_file_key"
            java.lang.String r3 = com.alipay.apmobilesecuritysdk.f.a.a(r3, r1)
        L1a:
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)
            if (r1 == 0) goto L21
            return r0
        L21:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L59
            r1.<init>(r3)     // Catch: java.lang.Exception -> L59
            com.alipay.apmobilesecuritysdk.e.f r3 = new com.alipay.apmobilesecuritysdk.e.f     // Catch: java.lang.Exception -> L59
            r3.<init>()     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "imei"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L59
            r3.a(r2)     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "imsi"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L59
            r3.b(r2)     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "mac"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L59
            r3.c(r2)     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "bluetoothmac"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L59
            r3.d(r2)     // Catch: java.lang.Exception -> L59
            java.lang.String r2 = "gsi"
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Exception -> L59
            r3.e(r1)     // Catch: java.lang.Exception -> L59
            return r3
        L59:
            r3 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r3)
            return r0
    }
}
