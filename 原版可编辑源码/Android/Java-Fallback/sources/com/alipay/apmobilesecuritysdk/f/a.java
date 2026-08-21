package com.alipay.apmobilesecuritysdk.f;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            if (r2 == 0) goto L25
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)
            if (r1 != 0) goto L25
            boolean r1 = com.alipay.sdk.m.z.a.a(r4)
            if (r1 == 0) goto L10
            goto L25
        L10:
            java.lang.String r1 = ""
            java.lang.String r2 = com.alipay.sdk.m.b0.e.a(r2, r3, r4, r1)     // Catch: java.lang.Throwable -> L25
            boolean r3 = com.alipay.sdk.m.z.a.a(r2)     // Catch: java.lang.Throwable -> L25
            if (r3 == 0) goto L1d
            return r0
        L1d:
            java.lang.String r3 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L25
            java.lang.String r0 = com.alipay.sdk.m.y.c.b(r3, r2)     // Catch: java.lang.Throwable -> L25
        L25:
            return r0
    }

    public static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.f.a> r0 = com.alipay.apmobilesecuritysdk.f.a.class
            monitor-enter(r0)
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L3c
            r2 = 0
            if (r1 != 0) goto L3a
            boolean r1 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L11
            goto L3a
        L11:
            java.lang.String r3 = com.alipay.sdk.m.b0.b.a(r3)     // Catch: java.lang.Throwable -> L38
            boolean r1 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L1d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            return r2
        L1d:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L38
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L38
            java.lang.String r3 = r1.getString(r4)     // Catch: java.lang.Throwable -> L38
            boolean r4 = com.alipay.sdk.m.z.a.a(r3)     // Catch: java.lang.Throwable -> L38
            if (r4 == 0) goto L2e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            return r2
        L2e:
            java.lang.String r4 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L38
            java.lang.String r3 = com.alipay.sdk.m.y.c.b(r4, r3)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            return r3
        L38:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            return r2
        L3a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            return r2
        L3c:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            throw r3
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = com.alipay.sdk.m.z.a.a(r2)
            if (r0 != 0) goto L22
            boolean r0 = com.alipay.sdk.m.z.a.a(r3)
            if (r0 != 0) goto L22
            if (r1 != 0) goto Lf
            goto L22
        Lf:
            java.lang.String r0 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = com.alipay.sdk.m.y.c.a(r0, r4)     // Catch: java.lang.Throwable -> L22
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L22
            r0.<init>()     // Catch: java.lang.Throwable -> L22
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L22
            com.alipay.sdk.m.b0.e.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    public static void a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.f.a> r0 = com.alipay.apmobilesecuritysdk.f.a.class
            monitor-enter(r0)
            boolean r1 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L76
            if (r1 != 0) goto L74
            boolean r1 = com.alipay.sdk.m.z.a.a(r5)     // Catch: java.lang.Throwable -> L76
            if (r1 == 0) goto L10
            goto L74
        L10:
            java.lang.String r1 = com.alipay.sdk.m.b0.b.a(r4)     // Catch: java.lang.Throwable -> L72
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L72
            r2.<init>()     // Catch: java.lang.Throwable -> L72
            boolean r3 = com.alipay.sdk.m.z.a.b(r1)     // Catch: java.lang.Throwable -> L72
            if (r3 == 0) goto L2a
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L25 java.lang.Throwable -> L72
            r2.<init>(r1)     // Catch: java.lang.Exception -> L25 java.lang.Throwable -> L72
            goto L2a
        L25:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L72
            r2.<init>()     // Catch: java.lang.Throwable -> L72
        L2a:
            java.lang.String r1 = com.alipay.sdk.m.y.c.a()     // Catch: java.lang.Throwable -> L72
            java.lang.String r6 = com.alipay.sdk.m.y.c.a(r1, r6)     // Catch: java.lang.Throwable -> L72
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L72
            r2.toString()     // Catch: java.lang.Throwable -> L72
            java.lang.System.clearProperty(r4)     // Catch: java.lang.Throwable -> L3b
        L3b:
            boolean r5 = com.alipay.sdk.m.b0.c.a()     // Catch: java.lang.Throwable -> L72
            if (r5 == 0) goto L72
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L72
            java.lang.String r6 = ".SystemConfig"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L72
            java.lang.String r6 = java.io.File.separator     // Catch: java.lang.Throwable -> L72
            r5.append(r6)     // Catch: java.lang.Throwable -> L72
            r5.append(r4)     // Catch: java.lang.Throwable -> L72
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L72
            boolean r5 = com.alipay.sdk.m.b0.c.a()
            if (r5 == 0) goto L72
            java.io.File r5 = new java.io.File
            java.io.File r6 = android.os.Environment.getExternalStorageDirectory()
            r5.<init>(r6, r4)
            boolean r4 = r5.exists()
            if (r4 == 0) goto L72
            boolean r4 = r5.isFile()
            if (r4 == 0) goto L72
            r5.delete()
        L72:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
            return
        L74:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
            return
        L76:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
            throw r4
    }
}
