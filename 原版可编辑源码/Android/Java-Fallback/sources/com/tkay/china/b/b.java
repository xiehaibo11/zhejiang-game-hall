package com.tkay.china.b;

public final class b {
    private static final java.lang.String[] a = null;

    static {
            java.lang.String r0 = "/su"
            java.lang.String r1 = "/su/bin/su"
            java.lang.String r2 = "/sbin/su"
            java.lang.String r3 = "/data/local/xbin/su"
            java.lang.String r4 = "/data/local/bin/su"
            java.lang.String r5 = "/data/local/su"
            java.lang.String r6 = "/system/xbin/su"
            java.lang.String r7 = "/system/bin/su"
            java.lang.String r8 = "/system/sd/xbin/su"
            java.lang.String r9 = "/system/bin/failsafe/su"
            java.lang.String r10 = "/system/bin/cufsdosck"
            java.lang.String r11 = "/system/xbin/cufsdosck"
            java.lang.String r12 = "/system/bin/cufsmgr"
            java.lang.String r13 = "/system/xbin/cufsmgr"
            java.lang.String r14 = "/system/bin/cufaevdd"
            java.lang.String r15 = "/system/xbin/cufaevdd"
            java.lang.String r16 = "/system/bin/conbb"
            java.lang.String r17 = "/system/xbin/conbb"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17}
            com.tkay.china.b.b.a = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String[] r0 = com.tkay.china.b.b.a     // Catch: java.lang.Throwable -> L2f
            int r1 = r0.length     // Catch: java.lang.Throwable -> L2f
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L19
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L2f
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L2f
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L2f
            boolean r4 = r5.exists()     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L16
            r2 = 1
            goto L19
        L16:
            int r3 = r3 + 1
            goto L5
        L19:
            java.lang.String r0 = android.os.Build.TAGS     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L27
            java.lang.String r0 = android.os.Build.TAGS     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = "test-keys"
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L29
        L27:
            if (r2 == 0) goto L2c
        L29:
            java.lang.String r0 = "1"
            return r0
        L2c:
            java.lang.String r0 = "2"
            return r0
        L2f:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String a(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3b
            r1 = 14
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            if (r0 == 0) goto L21
            java.lang.String r3 = "http.proxyHost"
            java.lang.String r3 = java.lang.System.getProperty(r3)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = "http.proxyPort"
            java.lang.String r0 = java.lang.System.getProperty(r0)     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L1a
            goto L1c
        L1a:
            java.lang.String r0 = "-1"
        L1c:
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L3b
            goto L2c
        L21:
            java.lang.String r0 = android.net.Proxy.getHost(r3)     // Catch: java.lang.Throwable -> L3b
            int r3 = android.net.Proxy.getPort(r3)     // Catch: java.lang.Throwable -> L3b
            r2 = r0
            r0 = r3
            r3 = r2
        L2c:
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L3b
            if (r3 != 0) goto L38
            r3 = -1
            if (r0 == r3) goto L38
            java.lang.String r3 = "1"
            return r3
        L38:
            java.lang.String r3 = "2"
            return r3
        L3b:
            java.lang.String r3 = ""
            return r3
    }

    public static java.lang.String b() {
            java.lang.String r0 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            r1.append(r0)     // Catch: java.lang.Throwable -> L21
            java.lang.String r0 = "|"
            r1.append(r0)     // Catch: java.lang.Throwable -> L21
            java.lang.String r0 = android.os.Build.CPU_ABI2     // Catch: java.lang.Throwable -> L21
            r1.append(r0)     // Catch: java.lang.Throwable -> L21
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L21
        L20:
            return r0
        L21:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String b(android.content.Context r7) {
            java.lang.String r0 = ""
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L52
            r2 = 28
            if (r1 < r2) goto L4d
            android.content.Context r1 = r7.getApplicationContext()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "location"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L52
            android.location.LocationManager r1 = (android.location.LocationManager) r1     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "gps"
            boolean r1 = r1.isProviderEnabled(r2)     // Catch: java.lang.Throwable -> L52
            android.content.Context r2 = r7.getApplicationContext()     // Catch: java.lang.Throwable -> L52
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = "android.permission.ACCESS_FINE_LOCATION"
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Throwable -> L52
            int r3 = r2.checkPermission(r3, r4)     // Catch: java.lang.Throwable -> L52
            r4 = 0
            r5 = 1
            if (r3 == 0) goto L3f
            java.lang.String r3 = "android.permission.ACCESS_COARSE_LOCATION"
            java.lang.String r6 = r7.getPackageName()     // Catch: java.lang.Throwable -> L52
            int r2 = r2.checkPermission(r3, r6)     // Catch: java.lang.Throwable -> L52
            if (r2 != 0) goto L3d
            goto L3f
        L3d:
            r2 = r4
            goto L40
        L3f:
            r2 = r5
        L40:
            if (r1 == 0) goto L45
            if (r2 == 0) goto L45
            r4 = r5
        L45:
            if (r4 == 0) goto L4c
            java.lang.String r7 = e(r7)     // Catch: java.lang.Throwable -> L52
            return r7
        L4c:
            return r0
        L4d:
            java.lang.String r7 = e(r7)     // Catch: java.lang.Throwable -> L52
            return r7
        L52:
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = ""
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = "/proc/sys/kernel/random/boot_id"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3b
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L3b
            if (r3 == 0) goto L46
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L3b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L3b
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L38
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L38
            r1 = r0
        L1b:
            java.lang.String r4 = r2.readLine()     // Catch: java.lang.Throwable -> L39
            if (r4 == 0) goto L31
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            r5.<init>()     // Catch: java.lang.Throwable -> L39
            r5.append(r1)     // Catch: java.lang.Throwable -> L39
            r5.append(r4)     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> L39
            goto L1b
        L31:
            r3.close()     // Catch: java.lang.Throwable -> L34
        L34:
            r2.close()     // Catch: java.lang.Throwable -> L37
        L37:
            return r1
        L38:
            r2 = r1
        L39:
            r1 = r3
            goto L3c
        L3b:
            r2 = r1
        L3c:
            if (r1 == 0) goto L41
            r1.close()     // Catch: java.lang.Throwable -> L41
        L41:
            if (r2 == 0) goto L46
            r2.close()     // Catch: java.lang.Throwable -> L46
        L46:
            return r0
    }

    public static java.lang.String[] c(android.content.Context r5) {
            android.content.Context r0 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L36
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L36
            r1 = 0
            android.content.pm.PackageInfo r5 = r0.getPackageInfo(r5, r1)     // Catch: java.lang.Throwable -> L36
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L36
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r2.<init>()     // Catch: java.lang.Throwable -> L36
            long r3 = r5.firstInstallTime     // Catch: java.lang.Throwable -> L36
            r2.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L36
            r0[r1] = r2     // Catch: java.lang.Throwable -> L36
            r1 = 1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L36
            r2.<init>()     // Catch: java.lang.Throwable -> L36
            long r3 = r5.lastUpdateTime     // Catch: java.lang.Throwable -> L36
            r2.append(r3)     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L36
            r0[r1] = r5     // Catch: java.lang.Throwable -> L36
            return r0
        L36:
            r5 = 0
            return r5
    }

    public static java.lang.String d() {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "/data/data"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L26
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L26
            long r0 = r0.lastModified()     // Catch: java.lang.Throwable -> L26
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
            r2.<init>()     // Catch: java.lang.Throwable -> L26
            r2.append(r0)     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = ".000000000"
            r2.append(r0)     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L26
            return r0
        L26:
            java.lang.String r0 = ""
            return r0
    }

    private static boolean d(android.content.Context r5) {
            android.content.Context r0 = r5.getApplicationContext()
            java.lang.String r1 = "location"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.location.LocationManager r0 = (android.location.LocationManager) r0
            java.lang.String r1 = "gps"
            boolean r0 = r0.isProviderEnabled(r1)
            android.content.Context r1 = r5.getApplicationContext()
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            java.lang.String r2 = r5.getPackageName()
            java.lang.String r3 = "android.permission.ACCESS_FINE_LOCATION"
            int r2 = r1.checkPermission(r3, r2)
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L37
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r2 = "android.permission.ACCESS_COARSE_LOCATION"
            int r5 = r1.checkPermission(r2, r5)
            if (r5 != 0) goto L35
            goto L37
        L35:
            r5 = r3
            goto L38
        L37:
            r5 = r4
        L38:
            if (r0 == 0) goto L3d
            if (r5 == 0) goto L3d
            return r4
        L3d:
            return r3
    }

    private static java.lang.String e(android.content.Context r4) {
            java.lang.String r0 = "<unknown ssid>"
            java.lang.String r1 = ""
            android.content.Context r2 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = "wifi"
            java.lang.Object r2 = r2.getSystemService(r3)     // Catch: java.lang.Throwable -> L3e
            android.net.wifi.WifiManager r2 = (android.net.wifi.WifiManager) r2     // Catch: java.lang.Throwable -> L3e
            android.net.wifi.WifiInfo r2 = r2.getConnectionInfo()     // Catch: java.lang.Throwable -> L3e
            if (r2 != 0) goto L18
            r2 = r1
            goto L1c
        L18:
            java.lang.String r2 = r2.getSSID()     // Catch: java.lang.Throwable -> L3e
        L1c:
            boolean r3 = r0.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L3e
            if (r3 == 0) goto L36
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "connectivity"
            java.lang.Object r4 = r4.getSystemService(r2)     // Catch: java.lang.Throwable -> L3e
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4     // Catch: java.lang.Throwable -> L3e
            android.net.NetworkInfo r4 = r4.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = r4.getExtraInfo()     // Catch: java.lang.Throwable -> L3e
        L36:
            boolean r4 = r0.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L3e
            if (r4 == 0) goto L3d
            return r1
        L3d:
            return r2
        L3e:
            return r1
    }
}
