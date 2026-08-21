package com.igexin.push.util;

public class j {
    public static int a(android.content.Context r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Exception -> L12
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L12
            android.content.pm.PackageInfo r2 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> L12
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Exception -> L12
            int r2 = r2.targetSdkVersion     // Catch: java.lang.Exception -> L12
            return r2
        L12:
            return r0
    }

    public static java.lang.String a() {
            java.lang.String r0 = android.os.Build.BRAND
            return r0
    }

    public static boolean b() {
            java.lang.String r0 = com.igexin.push.config.j.r
            java.lang.String r1 = "*"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            java.lang.String r0 = com.igexin.push.config.j.r     // Catch: java.lang.Exception -> L27
            java.lang.String r0 = r0.toUpperCase()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = ","
            java.lang.String[] r0 = r0.split(r1)     // Catch: java.lang.Exception -> L27
            java.util.List r0 = java.util.Arrays.asList(r0)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = android.os.Build.BRAND     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = r1.toUpperCase()     // Catch: java.lang.Exception -> L27
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Exception -> L27
            return r0
        L27:
            r0 = 0
            return r0
    }
}
