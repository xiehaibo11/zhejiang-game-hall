package com.huawei.secure.android.common.ssl.util;

public class h {
    private static final java.lang.String a = "h";

    static {
            return
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r4) {
            android.content.Context r0 = com.huawei.secure.android.common.ssl.util.c.a()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L1d android.content.pm.PackageManager.NameNotFoundException -> L39
            r2 = 0
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r2)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L1d android.content.pm.PackageManager.NameNotFoundException -> L39
            java.lang.String r4 = r4.versionName     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L1d android.content.pm.PackageManager.NameNotFoundException -> L39
            return r4
        L15:
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.h.a
            java.lang.String r0 = "throwable"
            com.huawei.secure.android.common.ssl.util.g.b(r4, r0)
            goto L54
        L1d:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.h.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getVersion: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r4)
            goto L54
        L39:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.h.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getVersion NameNotFoundException : "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r4)
        L54:
            return r1
    }

    public static int b(java.lang.String r4) {
            android.content.Context r0 = com.huawei.secure.android.common.ssl.util.c.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L13 android.content.pm.PackageManager.NameNotFoundException -> L2f
            android.content.pm.PackageInfo r4 = r0.getPackageInfo(r4, r1)     // Catch: java.lang.Exception -> L13 android.content.pm.PackageManager.NameNotFoundException -> L2f
            int r4 = r4.versionCode     // Catch: java.lang.Exception -> L13 android.content.pm.PackageManager.NameNotFoundException -> L2f
            return r4
        L13:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.h.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getVersion: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r4)
            goto L36
        L2f:
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.h.a
            java.lang.String r0 = "getVersion NameNotFoundException"
            com.huawei.secure.android.common.ssl.util.g.b(r4, r0)
        L36:
            return r1
    }
}
