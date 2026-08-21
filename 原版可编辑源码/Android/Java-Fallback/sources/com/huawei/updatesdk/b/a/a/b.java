package com.huawei.updatesdk.b.a.a;

public class b {
    private static com.huawei.updatesdk.b.a.a.b b;
    private final java.util.Map<java.lang.String, com.huawei.updatesdk.b.a.a.a> a;

    private b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static synchronized com.huawei.updatesdk.b.a.a.b a() {
            java.lang.Class<com.huawei.updatesdk.b.a.a.b> r0 = com.huawei.updatesdk.b.a.a.b.class
            monitor-enter(r0)
            com.huawei.updatesdk.b.a.a.b r1 = com.huawei.updatesdk.b.a.a.b.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.updatesdk.b.a.a.b r1 = new com.huawei.updatesdk.b.a.a.b     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.updatesdk.b.a.a.b.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.updatesdk.b.a.a.b r1 = com.huawei.updatesdk.b.a.a.b.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public java.lang.String a(android.content.pm.PackageInfo r6) {
            r5 = this;
            if (r6 == 0) goto Lc9
            java.lang.String r0 = r6.packageName
            if (r0 == 0) goto Lc9
            android.content.pm.ApplicationInfo r0 = r6.applicationInfo
            java.lang.String r0 = r0.sourceDir
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            goto Lc9
        L12:
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.a.a.a> r0 = r5.a
            java.lang.String r1 = r6.packageName
            java.lang.Object r0 = r0.get(r1)
            com.huawei.updatesdk.b.a.a.a r0 = (com.huawei.updatesdk.b.a.a.a) r0
            if (r0 == 0) goto L35
            long r1 = r0.b()
            long r3 = r6.lastUpdateTime
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L35
            int r1 = r0.c()
            int r2 = r6.versionCode
            if (r1 != r2) goto L35
            java.lang.String r6 = r0.a()
            return r6
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = r6.lastUpdateTime
            r0.append(r1)
            int r1 = r6.versionCode
            r0.append(r1)
            java.lang.String r1 = r6.packageName
            r0.append(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "packagekey"
            r1.append(r2)
            java.lang.String r2 = r6.packageName
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "fileshakey"
            r2.append(r3)
            java.lang.String r3 = r6.packageName
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = r0.toString()
            com.huawei.updatesdk.b.b.a r4 = com.huawei.updatesdk.b.b.a.d()
            java.lang.String r4 = r4.c(r1)
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            r3 = r3 ^ 1
            if (r3 == 0) goto L8e
            com.huawei.updatesdk.b.b.a r4 = com.huawei.updatesdk.b.b.a.d()
            java.lang.String r0 = r0.toString()
            r4.a(r1, r0)
        L8e:
            com.huawei.updatesdk.b.b.a r0 = com.huawei.updatesdk.b.b.a.d()
            java.lang.String r0 = r0.c(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L9e
            if (r3 == 0) goto Laf
        L9e:
            android.content.pm.ApplicationInfo r0 = r6.applicationInfo
            java.lang.String r0 = r0.sourceDir
            java.lang.String r1 = "SHA-256"
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.d.a(r0, r1)
            com.huawei.updatesdk.b.b.a r1 = com.huawei.updatesdk.b.b.a.d()
            r1.a(r2, r0)
        Laf:
            com.huawei.updatesdk.b.a.a.a r1 = new com.huawei.updatesdk.b.a.a.a
            r1.<init>()
            r1.a(r0)
            long r2 = r6.lastUpdateTime
            r1.a(r2)
            int r2 = r6.versionCode
            r1.a(r2)
            java.util.Map<java.lang.String, com.huawei.updatesdk.b.a.a.a> r2 = r5.a
            java.lang.String r6 = r6.packageName
            r2.put(r6, r1)
            return r0
        Lc9:
            r6 = 0
            return r6
    }
}
