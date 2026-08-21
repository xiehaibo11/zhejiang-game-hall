package com.xiaomi.push;

public class j {
    private static java.lang.String a = null;
    private static final java.util.Set<java.lang.String> a = null;
    private static boolean a = false;
    private static final java.lang.String[] a = null;
    private static java.lang.String b = null;
    private static java.lang.String c = "";
    private static java.lang.String d;
    private static java.lang.String e;
    private static final java.lang.String f = null;

    static {
            r0 = 2
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.xiaomi.push.j.f = r0
            java.lang.String r1 = "--"
            java.lang.String r2 = "a-"
            java.lang.String r3 = "u-"
            java.lang.String r4 = "v-"
            java.lang.String r5 = "o-"
            java.lang.String r6 = "g-"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6}
            com.xiaomi.push.j.a = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.xiaomi.push.j.a = r0
            java.lang.String r1 = "com.xiaomi.xmsf"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.xiaomi.push.j.a
            java.lang.String r1 = "com.xiaomi.finddevice"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.xiaomi.push.j.a
            java.lang.String r1 = "com.miui.securitycenter"
            r0.add(r1)
            r0 = 1
            com.xiaomi.push.j.a = r0
            return
    }

    private static double a(double r4) {
            r0 = 1
        L1:
            double r1 = (double) r0
            int r3 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r3 >= 0) goto L9
            int r0 = r0 << 1
            goto L1
        L9:
            return r1
    }

    private static float a(int r4) {
            r0 = 102400(0x19000, float:1.43493E-40)
            int r4 = r4 + r0
            r0 = 524288(0x80000, float:7.34684E-40)
            int r4 = r4 / r0
            int r4 = r4 + 1
            int r4 = r4 * 512
            int r4 = r4 * 1024
            float r4 = (float) r4
            r0 = 1149239296(0x44800000, float:1024.0)
            float r4 = r4 / r0
            float r4 = r4 / r0
            double r0 = (double) r4
            r2 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1e
            double r0 = java.lang.Math.ceil(r0)
            float r4 = (float) r0
        L1e:
            return r4
    }

    public static int a() {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "android.os.UserHandle"
            java.lang.String r2 = "myUserId"
            java.lang.Object r0 = com.xiaomi.push.bk.a(r1, r2, r0)
            if (r0 != 0) goto Lf
            r0 = -1
            return r0
        Lf:
            java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
            java.lang.Object r0 = r1.cast(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    private static long a(java.io.File r5) {
            android.os.StatFs r0 = new android.os.StatFs
            java.lang.String r5 = r5.getPath()
            r0.<init>(r5)
            long r1 = r0.getBlockCountLong()
            long r3 = r0.getBlockSizeLong()
            long r3 = r3 * r1
            return r3
    }

    public static java.lang.String a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = b()
            float r1 = a(r1)
            r0.append(r1)
            java.lang.String r1 = "GB"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static java.lang.String a(int r2) {
            if (r2 <= 0) goto Lb
            java.lang.String[] r0 = com.xiaomi.push.j.a
            int r1 = r0.length
            if (r2 < r1) goto L8
            goto Lb
        L8:
            r2 = r0[r2]
            return r2
        Lb:
            java.lang.String[] r2 = com.xiaomi.push.j.a
            r0 = 0
            r2 = r2[r0]
            return r2
    }

    public static java.lang.String a(android.content.Context r2) {
            com.xiaomi.push.k$a r2 = com.xiaomi.push.k.a(r2)     // Catch: java.lang.Exception -> L9
            java.lang.String r2 = r2.a()     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "failure to get gaid:"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            r2 = 0
            return r2
    }

    public static java.lang.String a(android.content.Context r5, boolean r6) {
            java.lang.String r0 = com.xiaomi.push.j.d
            if (r0 != 0) goto Lb8
            java.lang.String r0 = c(r5)
            boolean r1 = com.xiaomi.push.m.d()
            if (r1 != 0) goto L1a
            if (r6 == 0) goto L15
            java.lang.String r6 = d(r5)
            goto L1c
        L15:
            java.lang.String r6 = l(r5)
            goto L1c
        L1a:
            java.lang.String r6 = ""
        L1c:
            java.lang.String r1 = b(r5)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            r4 = 1
            if (r2 >= r3) goto L29
            r2 = r4
            goto L2a
        L29:
            r2 = 0
        L2a:
            if (r2 != 0) goto L73
            boolean r2 = b(r6)
            if (r2 == 0) goto L73
            boolean r2 = b(r1)
            if (r2 != 0) goto L39
            goto L73
        L39:
            com.xiaomi.push.ba r6 = com.xiaomi.push.ba.a(r5)
            java.lang.String r6 = r6.b()
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L58
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r6)
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            r4 = 2
            goto L85
        L58:
            com.xiaomi.push.ba r5 = com.xiaomi.push.ba.a(r5)
            java.lang.String r5 = r5.a()
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L71
            java.lang.String r6 = "00000000-0000-0000-0000-000000000000"
            boolean r6 = r5.startsWith(r6)
            if (r6 != 0) goto L71
            r4 = 4
            r0 = r5
            goto L85
        L71:
            r4 = 5
            goto L85
        L73:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r6)
            r5.append(r0)
            r5.append(r1)
            java.lang.String r0 = r5.toString()
        L85:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "devid rule select:"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r5)
            r5 = 3
            if (r4 != r5) goto L9f
            com.xiaomi.push.j.d = r0
            goto Lb8
        L9f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = a(r4)
            r5.append(r6)
            java.lang.String r6 = com.xiaomi.push.bp.b(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.xiaomi.push.j.d = r5
        Lb8:
            java.lang.String r5 = com.xiaomi.push.j.d
            return r5
    }

    public static boolean a(android.content.Context r3) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.intent.action.BATTERY_CHANGED"
            r0.<init>(r1)
            r1 = 0
            android.content.Intent r3 = r3.registerReceiver(r1, r0)
            r0 = 0
            if (r3 == 0) goto L1e
            r1 = -1
            java.lang.String r2 = "status"
            int r3 = r3.getIntExtra(r2, r1)
            r1 = 2
            if (r3 == r1) goto L1c
            r1 = 5
            if (r3 != r1) goto L1e
        L1c:
            r3 = 1
            r0 = r3
        L1e:
            return r0
    }

    public static boolean a(android.content.Context r4, java.lang.String r5) {
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r5
            r5 = 999(0x3e7, float:1.4E-42)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3 = 2
            r0[r3] = r5
            java.lang.String r5 = "getPackageInfoAsUser"
            java.lang.Object r4 = com.xiaomi.push.bk.a(r4, r5, r0)
            android.content.pm.PackageInfo r4 = (android.content.pm.PackageInfo) r4
            if (r4 == 0) goto L3a
            android.content.pm.ApplicationInfo r5 = r4.applicationInfo
            if (r5 == 0) goto L3a
            android.content.pm.ApplicationInfo r5 = r4.applicationInfo
            int r5 = r5.flags
            r0 = 2097152(0x200000, float:2.938736E-39)
            r5 = r5 & r0
            if (r5 != r0) goto L3b
            android.content.pm.ApplicationInfo r4 = r4.applicationInfo
            int r4 = r4.flags
            r5 = 8388608(0x800000, float:1.1754944E-38)
            r4 = r4 & r5
            if (r4 == r5) goto L3b
        L3a:
            r1 = r2
        L3b:
            return r1
    }

    public static boolean a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = r1
        L9:
            java.lang.String[] r2 = com.xiaomi.push.j.a
            int r3 = r2.length
            if (r0 >= r3) goto L1b
            r2 = r2[r0]
            boolean r2 = r4.startsWith(r2)
            if (r2 == 0) goto L18
            r4 = 1
            return r4
        L18:
            int r0 = r0 + 1
            goto L9
        L1b:
            return r1
    }

    public static int b() {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/proc/meminfo"
            r0.<init>(r1)
            boolean r0 = r0.exists()
            r2 = 0
            if (r0 == 0) goto L58
            r0 = 0
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L53
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L53
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L53
            r4 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L53
            java.lang.String r0 = r1.readLine()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            if (r3 != 0) goto L41
            java.lang.String r3 = "\\s+"
            java.lang.String[] r0 = r0.split(r3)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            if (r0 == 0) goto L41
            int r3 = r0.length     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r4 = 2
            if (r3 < r4) goto L41
            r3 = 1
            r4 = r0[r3]     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            boolean r4 = android.text.TextUtils.isDigitsOnly(r4)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            if (r4 == 0) goto L41
            r0 = r0[r3]     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L47
            r2 = r0
        L41:
            r1.close()     // Catch: java.io.IOException -> L58
            goto L58
        L45:
            r0 = move-exception
            goto L4d
        L47:
            r0 = r1
            goto L53
        L49:
            r1 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
        L4d:
            if (r1 == 0) goto L52
            r1.close()     // Catch: java.io.IOException -> L52
        L52:
            throw r0
        L53:
            if (r0 == 0) goto L58
            r0.close()     // Catch: java.io.IOException -> L58
        L58:
            return r2
    }

    public static java.lang.String b() {
            java.io.File r0 = android.os.Environment.getDataDirectory()
            long r0 = a(r0)
            double r0 = (double) r0
            r2 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r0 = r0 / r2
            double r0 = r0 / r2
            double r0 = r0 / r2
            double r0 = a(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "GB"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    public static java.lang.String b(android.content.Context r0) {
            r0 = 0
            return r0
    }

    public static boolean b(android.content.Context r1) {
            java.lang.String r0 = "power"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.os.PowerManager r1 = (android.os.PowerManager) r1
            if (r1 == 0) goto L13
            boolean r1 = r1.isScreenOn()
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    private static boolean b(java.lang.String r2) {
            r0 = 1
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = r2.trim()
            int r1 = r2.length()
            if (r1 == 0) goto L20
            java.lang.String r1 = "null"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L20
            java.lang.String r1 = "unknown"
            boolean r2 = r2.equalsIgnoreCase(r1)
            if (r2 == 0) goto L1f
            goto L20
        L1f:
            r0 = 0
        L20:
            return r0
    }

    private static int c() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 >= r1) goto L9
            r0 = 10
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public static java.lang.String c() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = b()
            r0.append(r1)
            java.lang.String r1 = "KB"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String c(android.content.Context r2) {
            java.lang.String r0 = com.xiaomi.push.j.b
            if (r0 != 0) goto L38
            boolean r0 = com.xiaomi.push.j.a
            if (r0 != 0) goto L9
            goto L38
        L9:
            boolean r0 = d(r2)
            com.xiaomi.push.j.a = r0
            if (r0 != 0) goto L13
            r2 = 0
            return r2
        L13:
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = "android_id"
            java.lang.String r2 = android.provider.Settings.Secure.getString(r2, r0)     // Catch: java.lang.Throwable -> L20
            com.xiaomi.push.j.b = r2     // Catch: java.lang.Throwable -> L20
            goto L35
        L20:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "failure to get androidId: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L35:
            java.lang.String r2 = com.xiaomi.push.j.b
            return r2
        L38:
            java.lang.String r2 = com.xiaomi.push.j.b
            return r2
    }

    private static boolean c(android.content.Context r4) {
            java.lang.String r0 = r4.getPackageName()
            boolean r1 = com.xiaomi.push.m.a()
            r2 = 0
            if (r1 == 0) goto L2c
            java.util.Set<java.lang.String> r1 = com.xiaomi.push.j.a
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L2c
            android.content.pm.PackageManager r1 = r4.getPackageManager()
            java.lang.String r3 = "android.permission.READ_PHONE_STATE"
            int r1 = r1.checkPermission(r3, r0)
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            java.lang.String r3 = "android.permission.READ_PRIVILEGED_PHONE_STATE"
            int r4 = r4.checkPermission(r3, r0)
            if (r1 == 0) goto L2b
            if (r4 != 0) goto L2c
        L2b:
            r2 = 1
        L2c:
            return r2
    }

    private static boolean c(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            int r0 = r3.length()
            r2 = 15
            if (r0 > r2) goto L29
            int r0 = r3.length()
            r2 = 14
            if (r0 >= r2) goto L19
            goto L29
        L19:
            boolean r0 = com.xiaomi.push.bp.b(r3)
            if (r0 != 0) goto L20
            return r1
        L20:
            boolean r3 = com.xiaomi.push.bp.c(r3)
            if (r3 == 0) goto L27
            return r1
        L27:
            r3 = 1
            return r3
        L29:
            return r1
    }

    public static java.lang.String d() {
            java.io.File r0 = android.os.Environment.getDataDirectory()
            long r0 = a(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 1024(0x400, double:5.06E-321)
            long r0 = r0 / r3
            r2.append(r0)
            java.lang.String r0 = "KB"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    public static java.lang.String d(android.content.Context r3) {
            int r0 = c()
            java.lang.String r1 = e(r3)
        L8:
            if (r1 != 0) goto L19
            int r2 = r0 + (-1)
            if (r0 <= 0) goto L19
            r0 = 500(0x1f4, double:2.47E-321)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L13
        L13:
            java.lang.String r1 = e(r3)
            r0 = r2
            goto L8
        L19:
            return r1
    }

    private static boolean d(android.content.Context r5) {
            java.lang.String r0 = r5.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            r1 = 1
            if (r0 == 0) goto Le
            return r1
        Le:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r2 = new android.content.ComponentName
            java.lang.String r3 = r5.getPackageName()
            java.lang.String r4 = "com.xiaomi.push.service.XMPushService"
            r2.<init>(r3, r4)
            r0.setComponent(r2)
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Exception -> L43
            r0 = 128(0x80, float:1.8E-43)
            android.content.pm.ServiceInfo r5 = r5.getServiceInfo(r2, r0)     // Catch: java.lang.Exception -> L43
            android.os.Bundle r0 = r5.metaData
            if (r0 == 0) goto L43
            android.os.Bundle r5 = r5.metaData
            java.lang.String r0 = "supportGetAndroidID"
            java.lang.String r5 = r5.getString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L3e
            return r1
        L3e:
            boolean r5 = java.lang.Boolean.parseBoolean(r5)
            return r5
        L43:
            return r1
    }

    public static java.lang.String e(android.content.Context r6) {
            boolean r0 = com.xiaomi.push.m.d()
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = com.xiaomi.push.j.a
            if (r0 == 0) goto Le
            return r0
        Le:
            r0 = 0
            boolean r2 = c(r6)     // Catch: java.lang.Throwable -> L85
            if (r2 == 0) goto L7a
            boolean r2 = com.xiaomi.push.m.a()     // Catch: java.lang.Throwable -> L85
            if (r2 == 0) goto L3f
            java.lang.String r2 = "miui.telephony.TelephonyManager"
            java.lang.String r3 = "getDefault"
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L85
            java.lang.Object r2 = com.xiaomi.push.bk.a(r2, r3, r5)     // Catch: java.lang.Throwable -> L85
            if (r2 == 0) goto L3f
            java.lang.String r3 = "getMiuiDeviceId"
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L85
            java.lang.Object r2 = com.xiaomi.push.bk.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L85
            if (r2 == 0) goto L3f
            boolean r3 = r2 instanceof java.lang.String     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L3f
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            java.lang.Object r2 = r3.cast(r2)     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L85
            goto L40
        L3f:
            r2 = r0
        L40:
            if (r2 != 0) goto L7b
            java.lang.String r3 = "phone"
            java.lang.Object r6 = r6.getSystemService(r3)     // Catch: java.lang.Throwable -> L85
            android.telephony.TelephonyManager r6 = (android.telephony.TelephonyManager) r6     // Catch: java.lang.Throwable -> L85
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L85
            r4 = 26
            if (r3 >= r4) goto L55
            java.lang.String r2 = r6.getDeviceId()     // Catch: java.lang.Throwable -> L85
            goto L7b
        L55:
            r3 = 1
            int r4 = r6.getPhoneType()     // Catch: java.lang.Throwable -> L85
            if (r3 != r4) goto L69
            java.lang.String r2 = "getImei"
            r3 = r0
            java.lang.Object[] r3 = (java.lang.Object[]) r3     // Catch: java.lang.Throwable -> L85
            java.lang.Object r6 = com.xiaomi.push.bk.a(r6, r2, r3)     // Catch: java.lang.Throwable -> L85
        L65:
            r2 = r6
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L85
            goto L7b
        L69:
            r3 = 2
            int r4 = r6.getPhoneType()     // Catch: java.lang.Throwable -> L85
            if (r3 != r4) goto L7b
            java.lang.String r2 = "getMeid"
            r3 = r0
            java.lang.Object[] r3 = (java.lang.Object[]) r3     // Catch: java.lang.Throwable -> L85
            java.lang.Object r6 = com.xiaomi.push.bk.a(r6, r2, r3)     // Catch: java.lang.Throwable -> L85
            goto L65
        L7a:
            r2 = r0
        L7b:
            boolean r6 = c(r2)     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L84
            com.xiaomi.push.j.a = r2     // Catch: java.lang.Throwable -> L85
            return r2
        L84:
            return r1
        L85:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "failure to get id:"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            return r0
    }

    public static java.lang.String f(android.content.Context r3) {
            int r0 = c()
            java.lang.String r1 = h(r3)
        L8:
            if (r1 != 0) goto L19
            int r2 = r0 + (-1)
            if (r0 <= 0) goto L19
            r0 = 500(0x1f4, double:2.47E-321)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L13
        L13:
            java.lang.String r1 = h(r3)
            r0 = r2
            goto L8
        L19:
            return r1
    }

    public static java.lang.String g(android.content.Context r8) {
            boolean r0 = com.xiaomi.push.m.d()
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 22
            if (r0 >= r2) goto L10
            return r1
        L10:
            java.lang.String r0 = com.xiaomi.push.j.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1b
            java.lang.String r8 = com.xiaomi.push.j.c
            return r8
        L1b:
            e(r8)
            java.lang.String r0 = com.xiaomi.push.j.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L27
            return r1
        L27:
            boolean r0 = c(r8)     // Catch: java.lang.Exception -> Ld7
            if (r0 == 0) goto Ld6
            java.lang.String r0 = "phone"
            java.lang.Object r8 = r8.getSystemService(r0)     // Catch: java.lang.Exception -> Ld7
            android.telephony.TelephonyManager r8 = (android.telephony.TelephonyManager) r8     // Catch: java.lang.Exception -> Ld7
            java.lang.String r0 = "getPhoneCount"
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> Ld7
            java.lang.Object r0 = com.xiaomi.push.bk.a(r8, r0, r3)     // Catch: java.lang.Exception -> Ld7
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> Ld7
            if (r0 == 0) goto Ld6
            int r3 = r0.intValue()     // Catch: java.lang.Exception -> Ld7
            r4 = 1
            if (r3 <= r4) goto Ld6
            r3 = 0
            r5 = r2
        L4b:
            int r6 = r0.intValue()     // Catch: java.lang.Exception -> Ld7
            if (r5 >= r6) goto Lc2
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Ld7
            r7 = 26
            if (r6 >= r7) goto L68
            java.lang.String r3 = "getDeviceId"
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Ld7
            java.lang.Integer r7 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> Ld7
            r6[r2] = r7     // Catch: java.lang.Exception -> Ld7
            java.lang.Object r3 = com.xiaomi.push.bk.a(r8, r3, r6)     // Catch: java.lang.Exception -> Ld7
        L65:
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Ld7
            goto L93
        L68:
            int r6 = r8.getPhoneType()     // Catch: java.lang.Exception -> Ld7
            if (r4 != r6) goto L7d
            java.lang.String r3 = "getImei"
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Ld7
            java.lang.Integer r7 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> Ld7
            r6[r2] = r7     // Catch: java.lang.Exception -> Ld7
            java.lang.Object r3 = com.xiaomi.push.bk.a(r8, r3, r6)     // Catch: java.lang.Exception -> Ld7
            goto L65
        L7d:
            r6 = 2
            int r7 = r8.getPhoneType()     // Catch: java.lang.Exception -> Ld7
            if (r6 != r7) goto L93
            java.lang.String r3 = "getMeid"
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Ld7
            java.lang.Integer r7 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> Ld7
            r6[r2] = r7     // Catch: java.lang.Exception -> Ld7
            java.lang.Object r3 = com.xiaomi.push.bk.a(r8, r3, r6)     // Catch: java.lang.Exception -> Ld7
            goto L65
        L93:
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Ld7
            if (r6 != 0) goto Lbf
            java.lang.String r6 = com.xiaomi.push.j.a     // Catch: java.lang.Exception -> Ld7
            boolean r6 = android.text.TextUtils.equals(r6, r3)     // Catch: java.lang.Exception -> Ld7
            if (r6 != 0) goto Lbf
            boolean r6 = c(r3)     // Catch: java.lang.Exception -> Ld7
            if (r6 == 0) goto Lbf
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld7
            r6.<init>()     // Catch: java.lang.Exception -> Ld7
            java.lang.String r7 = com.xiaomi.push.j.c     // Catch: java.lang.Exception -> Ld7
            r6.append(r7)     // Catch: java.lang.Exception -> Ld7
            r6.append(r3)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r7 = ","
            r6.append(r7)     // Catch: java.lang.Exception -> Ld7
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Ld7
            com.xiaomi.push.j.c = r6     // Catch: java.lang.Exception -> Ld7
        Lbf:
            int r5 = r5 + 1
            goto L4b
        Lc2:
            java.lang.String r8 = com.xiaomi.push.j.c     // Catch: java.lang.Exception -> Ld7
            int r8 = r8.length()     // Catch: java.lang.Exception -> Ld7
            if (r8 <= 0) goto Ld3
            java.lang.String r0 = com.xiaomi.push.j.c     // Catch: java.lang.Exception -> Ld7
            int r8 = r8 - r4
            java.lang.String r8 = r0.substring(r2, r8)     // Catch: java.lang.Exception -> Ld7
            com.xiaomi.push.j.c = r8     // Catch: java.lang.Exception -> Ld7
        Ld3:
            java.lang.String r8 = com.xiaomi.push.j.c     // Catch: java.lang.Exception -> Ld7
            return r8
        Ld6:
            return r1
        Ld7:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "failure to get ids: "
            r0.append(r2)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            return r1
    }

    public static java.lang.String h(android.content.Context r7) {
            g(r7)
            java.lang.String r7 = com.xiaomi.push.j.c
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r0 = ""
            if (r7 == 0) goto Le
            return r0
        Le:
            java.lang.String r7 = com.xiaomi.push.j.c
            java.lang.String r1 = ","
            java.lang.String[] r7 = r7.split(r1)
            int r2 = r7.length
            r3 = 0
            r4 = r3
        L19:
            if (r4 >= r2) goto L3d
            r5 = r7[r4]
            boolean r6 = c(r5)
            if (r6 != 0) goto L24
            goto L3a
        L24:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r0 = com.xiaomi.push.bp.a(r5)
            r6.append(r0)
            r6.append(r1)
            java.lang.String r0 = r6.toString()
        L3a:
            int r4 = r4 + 1
            goto L19
        L3d:
            int r7 = r0.length()
            if (r7 <= 0) goto L49
            int r7 = r7 + (-1)
            java.lang.String r0 = r0.substring(r3, r7)
        L49:
            return r0
    }

    public static synchronized java.lang.String i(android.content.Context r3) {
            java.lang.Class<com.xiaomi.push.j> r0 = com.xiaomi.push.j.class
            monitor-enter(r0)
            java.lang.String r1 = com.xiaomi.push.j.e     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto Lb
            java.lang.String r3 = com.xiaomi.push.j.e     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)
            return r3
        Lb:
            java.lang.String r1 = c(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = b(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a
            r2.<init>()     // Catch: java.lang.Throwable -> L2a
            r2.append(r1)     // Catch: java.lang.Throwable -> L2a
            r2.append(r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = r2.toString()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = com.xiaomi.push.bp.b(r3)     // Catch: java.lang.Throwable -> L2a
            com.xiaomi.push.j.e = r3     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)
            return r3
        L2a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized java.lang.String j(android.content.Context r3) {
            java.lang.Class<com.xiaomi.push.j> r0 = com.xiaomi.push.j.class
            monitor-enter(r0)
            java.lang.String r3 = c(r3)     // Catch: java.lang.Throwable -> L1d
            r1 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d
            r2.<init>()     // Catch: java.lang.Throwable -> L1d
            r2.append(r3)     // Catch: java.lang.Throwable -> L1d
            r2.append(r1)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r3 = r2.toString()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r3 = com.xiaomi.push.bp.b(r3)     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)
            return r3
        L1d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static java.lang.String k(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1
            java.lang.String r1 = r1.getSimOperatorName()
            return r1
    }

    private static java.lang.String l(android.content.Context r3) {
            int r0 = c()
            java.lang.String r1 = e(r3)
        L8:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L1d
            int r2 = r0 + (-1)
            if (r0 <= 0) goto L1d
            r0 = 500(0x1f4, double:2.47E-321)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L17
        L17:
            java.lang.String r1 = e(r3)
            r0 = r2
            goto L8
        L1d:
            return r1
    }
}
