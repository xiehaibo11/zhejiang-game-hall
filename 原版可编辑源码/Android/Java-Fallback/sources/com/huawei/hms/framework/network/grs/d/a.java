package com.huawei.hms.framework.network.grs.d;

public class a {
    public static java.lang.String a() {
            java.lang.String r0 = "4.0.20.301"
            return r0
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            android.content.pm.PackageManager r1 = r3.getPackageManager()
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            java.lang.String r3 = r3.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            return r3
        L16:
            r3 = move-exception
            java.lang.String r1 = "AgentUtil"
            com.huawei.hms.framework.common.Logger.w(r1, r0, r3)
            return r0
    }

    public static java.lang.String a(android.content.Context r8, java.lang.String r9, java.lang.String r10) {
            r0 = 1
            r1 = 0
            if (r8 != 0) goto L24
            java.util.Locale r8 = java.util.Locale.ROOT
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r9)
            java.lang.String r9 = "/%s"
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            java.lang.Object[] r10 = new java.lang.Object[r0]
            java.lang.String r0 = a()
            r10[r1] = r0
            java.lang.String r8 = java.lang.String.format(r8, r9, r10)
            return r8
        L24:
            java.lang.String r2 = r8.getPackageName()
            java.lang.String r8 = a(r8)
            java.lang.String r3 = android.os.Build.VERSION.RELEASE
            java.lang.String r4 = android.os.Build.MODEL
            java.util.Locale r5 = java.util.Locale.ROOT
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "%s/%s (Linux; Android %s; %s) "
            r6.append(r7)
            r6.append(r9)
            java.lang.String r9 = "/%s %s"
            r6.append(r9)
            java.lang.String r9 = r6.toString()
            r6 = 6
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r6[r1] = r2
            r6[r0] = r8
            r8 = 2
            r6[r8] = r3
            r8 = 3
            r6[r8] = r4
            java.lang.String r8 = a()
            r0 = 4
            r6[r0] = r8
            r8 = 5
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L65
            java.lang.String r10 = "no_service_name"
        L65:
            r6[r8] = r10
            java.lang.String r8 = java.lang.String.format(r5, r9, r6)
            return r8
    }

    public static java.lang.String b(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = a(r0, r1, r2)
            return r0
    }
}
