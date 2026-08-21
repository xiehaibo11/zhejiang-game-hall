package com.tramini.plugin.a.g;

public final class e {
    private static java.lang.String a = "";
    private static java.lang.String b = "";
    private static java.lang.String c = "";
    private static java.lang.String d = "";
    private static int e;
    private static java.lang.String f;

    static {
            return
    }

    private e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            java.lang.String r1 = "os_vc"
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = com.tramini.plugin.a.g.e.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1f
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.tramini.plugin.a.g.e.b = r0
        L1f:
            java.lang.String r0 = com.tramini.plugin.a.g.e.b
            return r0
    }

    public static java.lang.String a(android.content.Context r3) {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            java.lang.String r1 = "app_vc"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            int r0 = com.tramini.plugin.a.g.e.e
            if (r0 != 0) goto L38
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L33
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L33
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L33
            int r3 = r3.versionCode     // Catch: java.lang.Exception -> L33
            com.tramini.plugin.a.g.e.e = r3     // Catch: java.lang.Exception -> L33
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r3.<init>()     // Catch: java.lang.Exception -> L33
            int r0 = com.tramini.plugin.a.g.e.e     // Catch: java.lang.Exception -> L33
            r3.append(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L33
            return r3
        L33:
            r3 = move-exception
            r3.printStackTrace()
            return r1
        L38:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            int r0 = com.tramini.plugin.a.g.e.e
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static java.lang.String b() {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            java.lang.String r1 = "os_vn"
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = com.tramini.plugin.a.g.e.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            com.tramini.plugin.a.g.e.a = r0
        L1b:
            java.lang.String r0 = com.tramini.plugin.a.g.e.a
            return r0
    }

    public static java.lang.String b(android.content.Context r3) {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            java.lang.String r1 = "app_vn"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            java.lang.String r0 = com.tramini.plugin.a.g.e.d     // Catch: java.lang.Exception -> L2c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L29
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L2c
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L2c
            com.tramini.plugin.a.g.e.d = r3     // Catch: java.lang.Exception -> L2c
            return r3
        L29:
            java.lang.String r3 = com.tramini.plugin.a.g.e.d
            return r3
        L2c:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    private static int c() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    public static java.lang.String c(android.content.Context r3) {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            java.lang.String r1 = "package_name"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            java.lang.String r0 = com.tramini.plugin.a.g.e.c     // Catch: java.lang.Exception -> L2c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L29
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L2c
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L2c
            com.tramini.plugin.a.g.e.c = r3     // Catch: java.lang.Exception -> L2c
            return r3
        L29:
            java.lang.String r3 = com.tramini.plugin.a.g.e.c
            return r3
        L2c:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    public static java.lang.String d(android.content.Context r3) {
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            java.lang.String r1 = "android_id"
            boolean r0 = r0.a(r1)
            java.lang.String r2 = ""
            if (r0 == 0) goto Lf
            return r2
        Lf:
            java.lang.String r0 = com.tramini.plugin.a.g.e.f     // Catch: java.lang.Exception -> L22
            if (r0 != 0) goto L24
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = android.provider.Settings.Secure.getString(r3, r1)     // Catch: java.lang.Exception -> L22
            com.tramini.plugin.a.g.e.f = r3     // Catch: java.lang.Exception -> L22
            if (r3 != 0) goto L24
            com.tramini.plugin.a.g.e.f = r2     // Catch: java.lang.Exception -> L22
            goto L24
        L22:
            com.tramini.plugin.a.g.e.f = r2
        L24:
            java.lang.String r3 = com.tramini.plugin.a.g.e.f
            return r3
    }
}
