package com.huawei.updatesdk.b.d;

public class d {
    private static volatile com.huawei.updatesdk.b.d.d a;

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.huawei.updatesdk.b.d.d a() {
            java.lang.Class<com.huawei.updatesdk.b.d.d> r0 = com.huawei.updatesdk.b.d.d.class
            monitor-enter(r0)
            com.huawei.updatesdk.b.d.d r1 = com.huawei.updatesdk.b.d.d.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.updatesdk.b.d.d r1 = new com.huawei.updatesdk.b.d.d     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.updatesdk.b.d.d.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.updatesdk.b.d.d r1 = com.huawei.updatesdk.b.d.d.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String b() {
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            java.lang.String r0 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = ""
            if (r1 == 0) goto L11
            return r2
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "/updatesdk"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r3 = r1.exists()
            if (r3 != 0) goto L34
            boolean r1 = r1.mkdirs()
            if (r1 != 0) goto L34
            return r2
        L34:
            return r0
    }

    public javax.net.ssl.HttpsURLConnection a(java.lang.String r4) {
            r3 = this;
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            javax.net.ssl.HttpsURLConnection r4 = com.huawei.updatesdk.a.a.b.b.a(r4, r0)
            r0 = 7000(0x1b58, float:9.809E-42)
            r4.setConnectTimeout(r0)
            r0 = 10000(0x2710, float:1.4013E-41)
            r4.setReadTimeout(r0)
            r0 = 0
            r4.setUseCaches(r0)
            r0 = 1
            r4.setDoInput(r0)
            java.lang.String r1 = "Accept-Encoding"
            java.lang.String r2 = "identity"
            r4.setRequestProperty(r1, r2)
            r4.setInstanceFollowRedirects(r0)
            return r4
    }
}
