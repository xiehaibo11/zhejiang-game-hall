package com.cmic.gen.sdk.e;

public class f {
    public static java.lang.String a(android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L2e
            java.lang.String r2 = d(r4)     // Catch: java.lang.Exception -> L2e
            r3 = 0
            android.content.pm.ApplicationInfo r2 = r1.getApplicationInfo(r2, r3)     // Catch: java.lang.Exception -> L2e
            java.lang.CharSequence r1 = r1.getApplicationLabel(r2)     // Catch: java.lang.Exception -> L2e
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L17
            return r1
        L17:
            android.content.pm.PackageInfo r2 = c(r4)     // Catch: java.lang.Exception -> L2b
            if (r2 != 0) goto L1e
            return r0
        L1e:
            android.content.pm.ApplicationInfo r0 = r2.applicationInfo     // Catch: java.lang.Exception -> L2b
            int r0 = r0.labelRes     // Catch: java.lang.Exception -> L2b
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L2b
            java.lang.String r4 = r4.getString(r0)     // Catch: java.lang.Exception -> L2b
            goto L33
        L2b:
            r4 = move-exception
            r0 = r1
            goto L2f
        L2e:
            r4 = move-exception
        L2f:
            r4.printStackTrace()
            r4 = r0
        L33:
            return r4
    }

    public static java.lang.String b(android.content.Context r2) {
            android.content.pm.PackageInfo r0 = c(r2)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L25
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L21
            r1.<init>()     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = d(r2)     // Catch: java.lang.Exception -> L21
            r1.append(r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = "&"
            r1.append(r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = r0.versionName     // Catch: java.lang.Exception -> L21
            r1.append(r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Exception -> L21
            return r2
        L21:
            r2 = move-exception
            r2.printStackTrace()
        L25:
            java.lang.String r2 = ""
            return r2
    }

    private static android.content.pm.PackageInfo c(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            java.lang.String r2 = r2.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            return r2
        Le:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    private static java.lang.String d(android.content.Context r0) {
            android.content.pm.PackageInfo r0 = c(r0)
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            goto Lb
        L9:
            java.lang.String r0 = r0.packageName
        Lb:
            return r0
    }
}
