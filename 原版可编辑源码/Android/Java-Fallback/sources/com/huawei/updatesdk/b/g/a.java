package com.huawei.updatesdk.b.g;

public final class a {
    private static java.lang.String a;

    public static java.lang.String a() {
            java.lang.String r0 = com.huawei.updatesdk.b.g.a.a
            if (r0 == 0) goto L5
            return r0
        L5:
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            java.lang.String r1 = r0.getPackageName()     // Catch: java.lang.Exception -> L55
            android.content.pm.PackageManager r2 = r0.getPackageManager()     // Catch: java.lang.Exception -> L55
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L55
            r3 = 0
            android.content.pm.PackageInfo r0 = r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> L55
            if (r0 == 0) goto L31
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r2.<init>()     // Catch: java.lang.Exception -> L55
            r2.append(r1)     // Catch: java.lang.Exception -> L55
            java.lang.String r0 = r0.versionName     // Catch: java.lang.Exception -> L55
            r2.append(r0)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L55
        L31:
            java.lang.String r0 = android.os.Build.BRAND     // Catch: java.lang.Exception -> L55
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L55
            if (r0 == 0) goto L3c
            java.lang.String r0 = "other"
            goto L3e
        L3c:
            java.lang.String r0 = android.os.Build.BRAND     // Catch: java.lang.Exception -> L55
        L3e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r2.<init>()     // Catch: java.lang.Exception -> L55
            r2.append(r1)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = "_"
            r2.append(r1)     // Catch: java.lang.Exception -> L55
            r2.append(r0)     // Catch: java.lang.Exception -> L55
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L55
            com.huawei.updatesdk.b.g.a.a = r0     // Catch: java.lang.Exception -> L55
            return r0
        L55:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getUserAgent() "
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "ApplicationSession"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r0)
            r0 = 0
            return r0
    }
}
