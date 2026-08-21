package com.reyun.tracking.a;

public class a {
    public static java.lang.String a;
    public static java.lang.String b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String e;
    private static java.lang.String f;
    private static java.lang.String g;
    private static java.lang.String h;
    private static float i;
    private static org.json.JSONArray j;
    private static long k;
    private static java.lang.Runnable l;
    private static android.hardware.SensorManager m;
    private static com.reyun.tracking.a.d n;

    static {
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static float a(float r0) {
            com.reyun.tracking.a.a.i = r0
            return r0
    }

    public static java.lang.String a() {
            java.lang.String r0 = "GMT+8:00"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            int r0 = r0.getRawOffset()
            int r0 = r0 / 1000
            int r0 = r0 / 3600
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            if (r0 <= 0) goto L22
            r1.<init>()
            java.lang.String r2 = "+"
            r1.append(r2)
            r1.append(r0)
        L1d:
            java.lang.String r0 = r1.toString()
            return r0
        L22:
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ""
            r1.append(r0)
            goto L1d
    }

    public static java.lang.String a(long r2) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            java.lang.String r1 = "GMT+8"
            java.util.TimeZone r1 = java.util.TimeZone.getTimeZone(r1)
            r0.setTimeZone(r1)
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.String r2 = r0.format(r2)
            return r2
    }

    public static java.lang.String a(android.content.Context r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = "unknown"
            return r0
        L5:
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    public static java.lang.String a(android.content.Context r3, int r4) {
            java.lang.String r0 = "activity"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3
            r0 = 0
            if (r3 != 0) goto Lc
            return r0
        Lc:
            java.util.List r3 = r3.getRunningAppProcesses()
            if (r3 != 0) goto L13
            return r0
        L13:
            java.util.Iterator r3 = r3.iterator()
        L17:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r3.next()
            android.app.ActivityManager$RunningAppProcessInfo r1 = (android.app.ActivityManager.RunningAppProcessInfo) r1
            if (r1 == 0) goto L17
            int r2 = r1.pid
            if (r2 != r4) goto L17
            java.lang.String r3 = r1.processName
            return r3
        L2c:
            return r0
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = b(r1)
            if (r0 == 0) goto L7
            r1 = r2
        L7:
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L12
            java.lang.String r2 = "Tracking"
            b(r2, r3)
        L12:
            return r1
    }

    public static java.lang.String a(java.util.Map r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.util.Set r3 = r3.keySet()
            java.util.Iterator r3 = r3.iterator()
        Lc:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L1d
            java.lang.String r3 = "null"
            return r3
        L1d:
            java.lang.String r2 = "^[A-Za-z_][a-zA-Z0-9_]*$"
            boolean r2 = r1.matches(r2)
            if (r2 != 0) goto Lc
            return r1
        L26:
            return r0
    }

    static org.json.JSONArray a(org.json.JSONArray r0) {
            com.reyun.tracking.a.a.j = r0
            return r0
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.reyun.tracking.a.i.a
            if (r0 == 0) goto Lf
            if (r1 != 0) goto L8
            java.lang.String r1 = "null tag"
        L8:
            if (r2 != 0) goto Lc
            java.lang.String r2 = "null log"
        Lc:
            android.util.Log.d(r1, r2)
        Lf:
            return
    }

    public static void a(java.util.Map r2, org.json.JSONObject r3) {
            if (r2 == 0) goto L38
            java.lang.String r0 = "context"
            org.json.JSONObject r3 = r3.getJSONObject(r0)     // Catch: java.lang.Exception -> L38
            if (r3 == 0) goto L38
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Exception -> L38
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L38
        L12:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L38
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Exception -> L38
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Exception -> L38
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L38
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto L12
            if (r0 == 0) goto L12
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L38
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L38
            r3.put(r1, r0)     // Catch: java.lang.Exception -> L38
            goto L12
        L38:
            return
    }

    public static boolean a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.content.pm.PackageManager r1 = r2.getPackageManager()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L16
            int r2 = r1.checkPermission(r3, r2)     // Catch: java.lang.Exception -> L16
            if (r2 != 0) goto L16
            r0 = 1
        L16:
            return r0
    }

    public static boolean a(java.lang.String r0) {
            boolean r0 = b(r0)
            r0 = r0 ^ 1
            return r0
    }

    static long b(long r0) {
            com.reyun.tracking.a.a.k = r0
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = com.reyun.tracking.a.a.b
            return r0
    }

    public static java.lang.String b(android.content.Context r5) {
            java.lang.String r0 = com.reyun.tracking.a.a.a
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = "device_id"
            java.lang.String r1 = "tracking_device_id_cache"
            java.lang.String r2 = com.reyun.tracking.utils.f.a(r5, r1, r0)
            com.reyun.tracking.a.a.a = r2
            java.lang.String r2 = "device_id_type"
            java.lang.String r3 = com.reyun.tracking.utils.f.a(r5, r1, r2)
            com.reyun.tracking.a.a.b = r3
            java.lang.String r3 = com.reyun.tracking.a.a.a
            java.lang.String r4 = "_default_"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L3b
            com.reyun.tracking.a.f r3 = r(r5)
            java.lang.String r4 = com.reyun.tracking.a.f.a(r3)
            com.reyun.tracking.a.a.a = r4
            java.lang.String r3 = com.reyun.tracking.a.f.b(r3)
            com.reyun.tracking.a.a.b = r3
            java.lang.String r3 = com.reyun.tracking.a.a.a
            com.reyun.tracking.utils.f.b(r5, r1, r0, r3)
            java.lang.String r0 = com.reyun.tracking.a.a.b
            com.reyun.tracking.utils.f.b(r5, r1, r2, r0)
        L3b:
            java.lang.String r5 = com.reyun.tracking.a.a.a
            return r5
    }

    public static void b(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.reyun.tracking.a.i.a
            if (r0 == 0) goto Lf
            if (r1 != 0) goto L8
            java.lang.String r1 = "null tag"
        L8:
            if (r2 != 0) goto Lc
            java.lang.String r2 = "null log"
        Lc:
            android.util.Log.w(r1, r2)
        Lf:
            return
    }

    public static void b(java.util.Map r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Set r0 = r3.keySet()
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            if (r1 != 0) goto L1d
        L19:
            r0.remove()
            goto Lb
        L1d:
            java.lang.String r2 = "^[_A-Za-z][a-zA-Z0-9_]*$"
            boolean r2 = r1.matches(r2)
            if (r2 != 0) goto L26
            goto L19
        L26:
            java.lang.Object r1 = r3.get(r1)
            if (r1 != 0) goto L2d
            goto L19
        L2d:
            java.lang.String r1 = java.lang.String.valueOf(r1)
            int r1 = r1.length()
            r2 = 64
            if (r1 <= r2) goto Lb
            goto L19
        L3a:
            return
    }

    private static boolean b(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Exception -> L11
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L11
            int r2 = r1.checkPermission(r3, r2)     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto L11
            r2 = 1
            return r2
        L11:
            return r0
    }

    public static boolean b(java.lang.String r0) {
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.trim()
            int r0 = r0.length()
            if (r0 != 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = "unknown"
            java.lang.String r1 = com.reyun.tracking.a.a.h
            if (r1 == 0) goto L7
            return r1
        L7:
            java.util.Enumeration r1 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Exception -> L6f
            r2 = r0
        Lc:
            boolean r3 = r1.hasMoreElements()     // Catch: java.lang.Exception -> L6e
            if (r3 == 0) goto L70
            java.lang.Object r3 = r1.nextElement()     // Catch: java.lang.Exception -> L6e
            java.net.NetworkInterface r3 = (java.net.NetworkInterface) r3     // Catch: java.lang.Exception -> L6e
            java.util.Enumeration r3 = r3.getInetAddresses()     // Catch: java.lang.Exception -> L6e
        L1c:
            boolean r4 = r3.hasMoreElements()     // Catch: java.lang.Exception -> L6e
            if (r4 == 0) goto L65
            java.lang.Object r4 = r3.nextElement()     // Catch: java.lang.Exception -> L6e
            java.net.InetAddress r4 = (java.net.InetAddress) r4     // Catch: java.lang.Exception -> L6e
            if (r4 == 0) goto L1c
            boolean r5 = r4 instanceof java.net.Inet6Address     // Catch: java.lang.Exception -> L6e
            if (r5 == 0) goto L1c
            java.lang.String r4 = r4.getHostAddress()     // Catch: java.lang.Exception -> L6e
            if (r4 == 0) goto L1c
            java.lang.String r5 = r4.toLowerCase()     // Catch: java.lang.Exception -> L6e
            java.lang.String r6 = "fe80"
            boolean r5 = r5.startsWith(r6)     // Catch: java.lang.Exception -> L6e
            if (r5 != 0) goto L1c
            java.lang.String r5 = r4.toLowerCase()     // Catch: java.lang.Exception -> L6e
            java.lang.String r6 = "::1"
            boolean r5 = r5.startsWith(r6)     // Catch: java.lang.Exception -> L6e
            if (r5 != 0) goto L1c
            java.lang.String r5 = r4.toLowerCase()     // Catch: java.lang.Exception -> L6e
            java.lang.String r6 = "::"
            boolean r5 = r5.startsWith(r6)     // Catch: java.lang.Exception -> L6e
            if (r5 != 0) goto L1c
            java.lang.String r5 = r4.toLowerCase()     // Catch: java.lang.Exception -> L6e
            java.lang.String r6 = "fec0"
            boolean r5 = r5.startsWith(r6)     // Catch: java.lang.Exception -> L6e
            if (r5 != 0) goto L1c
            r2 = r4
        L65:
            if (r2 == 0) goto Lc
            boolean r3 = r2.equals(r0)     // Catch: java.lang.Exception -> L6e
            if (r3 != 0) goto Lc
            goto L70
        L6e:
            r0 = r2
        L6f:
            r2 = r0
        L70:
            com.reyun.tracking.a.a.h = r2
            return r2
    }

    public static java.lang.String c(android.content.Context r2) {
            java.lang.String r0 = "unknown"
            java.lang.String r1 = com.reyun.tracking.a.a.e
            if (r1 == 0) goto L7
            return r1
        L7:
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = "android_id"
            java.lang.String r2 = android.provider.Settings.Secure.getString(r2, r1)     // Catch: java.lang.Exception -> L12
            goto L17
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = r0
        L17:
            if (r2 == 0) goto L23
            int r1 = r2.length()
            if (r1 != 0) goto L20
            goto L23
        L20:
            com.reyun.tracking.a.a.e = r2
            return r2
        L23:
            com.reyun.tracking.a.a.e = r0
            return r0
    }

    public static java.lang.String c(java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            byte[] r7 = r7.getBytes()     // Catch: java.security.NoSuchAlgorithmException -> L4f
            byte[] r7 = r0.digest(r7)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            int r0 = r7.length     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r2 = 0
            r3 = r1
        L1a:
            if (r2 >= r0) goto L4e
            r4 = r7[r2]     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r4 = r4 & 255(0xff, float:3.57E-43)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            int r5 = r4.length()     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r6 = 1
            if (r5 != r6) goto L3c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r5.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L4f
            java.lang.String r6 = "0"
            r5.append(r6)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r5.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            java.lang.String r4 = r5.toString()     // Catch: java.security.NoSuchAlgorithmException -> L4f
        L3c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r5.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r5.append(r3)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            r5.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L4f
            java.lang.String r3 = r5.toString()     // Catch: java.security.NoSuchAlgorithmException -> L4f
            int r2 = r2 + 1
            goto L1a
        L4e:
            return r3
        L4f:
            r7 = move-exception
            r7.printStackTrace()
            return r1
    }

    public static void c(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.reyun.tracking.a.i.a
            if (r0 == 0) goto Lf
            if (r1 != 0) goto L8
            java.lang.String r1 = "null tag"
        L8:
            if (r2 != 0) goto Lc
            java.lang.String r2 = "null log"
        Lc:
            android.util.Log.e(r1, r2)
        Lf:
            return
    }

    public static java.lang.String d(android.content.Context r8) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = b(r8, r0)
            if (r0 != 0) goto Lb
            java.lang.String r8 = "unknown"
            return r8
        Lb:
            java.lang.Class<com.reyun.tracking.a.a> r0 = com.reyun.tracking.a.a.class
            monitor-enter(r0)
            java.lang.String r1 = com.reyun.tracking.a.a.c     // Catch: java.lang.Throwable -> La0
            if (r1 == 0) goto L16
            java.lang.String r8 = com.reyun.tracking.a.a.c     // Catch: java.lang.Throwable -> La0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            return r8
        L16:
            java.lang.String r1 = "tracking_device_id_cache"
            java.lang.String r2 = "imei2"
            java.lang.String r1 = com.reyun.tracking.utils.f.a(r8, r1, r2)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            if (r1 == 0) goto L44
            java.lang.String r2 = "_default_"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            if (r2 != 0) goto L44
            java.lang.String r8 = "Tracking"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            r2.<init>()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.String r3 = "%%% imei2="
            r2.append(r3)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.String r3 = com.reyun.tracking.a.a.c     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            r2.append(r3)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            d(r8, r2)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            com.reyun.tracking.a.a.c = r1     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            return r1
        L44:
            java.lang.String r1 = "phone"
            java.lang.Object r1 = r8.getSystemService(r1)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            r3 = 29
            if (r2 < r3) goto L57
            java.lang.String r1 = "unknown"
        L54:
            com.reyun.tracking.a.a.c = r1     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            goto L85
        L57:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            r3 = 26
            r4 = 1
            if (r2 < r3) goto L63
            java.lang.String r1 = r1.getImei(r4)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            goto L54
        L63:
            java.lang.Class r2 = r1.getClass()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.String r3 = "getImei"
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r5)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            r3[r7] = r4     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            goto L54
        L85:
            java.lang.String r1 = com.reyun.tracking.a.a.c     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            if (r1 != 0) goto L8d
            java.lang.String r1 = "unknown"
            com.reyun.tracking.a.a.c = r1     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
        L8d:
            java.lang.String r1 = "tracking_device_id_cache"
            java.lang.String r2 = "imei2"
            java.lang.String r3 = com.reyun.tracking.a.a.c     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            com.reyun.tracking.utils.f.b(r8, r1, r2, r3)     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            java.lang.String r8 = com.reyun.tracking.a.a.c     // Catch: java.lang.Exception -> L9a java.lang.Throwable -> La0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            return r8
        L9a:
            java.lang.String r8 = "unknown"
            com.reyun.tracking.a.a.c = r8     // Catch: java.lang.Throwable -> La0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            return r8
        La0:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            throw r8
    }

    public static void d() {
            java.lang.Runnable r0 = com.reyun.tracking.a.a.l
            if (r0 != 0) goto L5
            return
        L5:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.getDefault()
            java.lang.String r3 = "yyyy-MM-dd HH:mm:ss"
            r1.<init>(r3, r2)
            java.util.Date r2 = new java.util.Date
            long r4 = com.reyun.tracking.a.a.k
            r2.<init>(r4)
            java.lang.String r1 = r1.format(r2)
            java.lang.String r2 = "electricityStartTime"
            r0.put(r2, r1)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.getDefault()
            r1.<init>(r3, r2)
            java.util.Date r2 = new java.util.Date
            r2.<init>()
            java.lang.String r1 = r1.format(r2)
            java.lang.String r2 = "electricityEndTime"
            r0.put(r2, r1)
            org.json.JSONArray r1 = com.reyun.tracking.a.a.j
            java.lang.String r2 = "electricityData"
            r0.put(r2, r1)
            java.lang.String r1 = "electricityDataEvent"
            com.reyun.tracking.sdk.Tracking.setEvent(r1, r0)
            r0 = 0
            com.reyun.tracking.a.a.l = r0
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.reyun.tracking.a.i.a
            if (r0 == 0) goto L7
            android.util.Log.i(r1, r2)
        L7:
            return
    }

    public static java.lang.String e(android.content.Context r7) {
            java.lang.String r0 = "meid"
            java.lang.String r1 = "tracking_device_id_cache"
            java.lang.String r2 = "android.permission.READ_PHONE_STATE"
            boolean r2 = b(r7, r2)
            java.lang.String r3 = "unknown"
            if (r2 != 0) goto Lf
            return r3
        Lf:
            java.lang.String r2 = com.reyun.tracking.a.a.d
            if (r2 == 0) goto L14
            return r2
        L14:
            java.lang.String r2 = com.reyun.tracking.utils.f.a(r7, r1, r0)     // Catch: java.lang.Exception -> L53
            if (r2 == 0) goto L25
            java.lang.String r4 = "_default_"
            boolean r4 = r4.equals(r2)     // Catch: java.lang.Exception -> L53
            if (r4 != 0) goto L25
            com.reyun.tracking.a.a.d = r2     // Catch: java.lang.Exception -> L53
            return r2
        L25:
            java.lang.String r2 = "phone"
            java.lang.Object r2 = r7.getSystemService(r2)     // Catch: java.lang.Exception -> L53
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Exception -> L53
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L53
            r5 = 26
            r6 = 0
            if (r4 < r5) goto L3b
            java.lang.String r2 = r2.getMeid(r6)     // Catch: java.lang.Exception -> L53
        L38:
            com.reyun.tracking.a.a.d = r2     // Catch: java.lang.Exception -> L53
            goto L4b
        L3b:
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L53
            r5 = 23
            if (r4 < r5) goto L46
            java.lang.String r2 = r2.getDeviceId(r6)     // Catch: java.lang.Exception -> L53
            goto L38
        L46:
            java.lang.String r2 = r2.getDeviceId()     // Catch: java.lang.Exception -> L53
            goto L38
        L4b:
            java.lang.String r2 = com.reyun.tracking.a.a.d     // Catch: java.lang.Exception -> L53
            com.reyun.tracking.utils.f.b(r7, r1, r0, r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r7 = com.reyun.tracking.a.a.d     // Catch: java.lang.Exception -> L53
            return r7
        L53:
            com.reyun.tracking.a.a.d = r3
            return r3
    }

    public static void e() {
            android.hardware.SensorManager r0 = com.reyun.tracking.a.a.m
            if (r0 == 0) goto L12
            com.reyun.tracking.a.d r0 = com.reyun.tracking.a.a.n
            if (r0 == 0) goto L12
            com.reyun.tracking.a.d.a(r0)
            android.hardware.SensorManager r0 = com.reyun.tracking.a.a.m
            com.reyun.tracking.a.d r1 = com.reyun.tracking.a.a.n
            r0.unregisterListener(r1)
        L12:
            r0 = 0
            com.reyun.tracking.a.a.n = r0
            return
    }

    static float f() {
            float r0 = com.reyun.tracking.a.a.i
            return r0
    }

    public static com.reyun.tracking.a.f f(android.content.Context r7) {
            java.lang.String r0 = "oaid"
            java.lang.String r1 = "^[0]+-[0]+-[0]+-[0]+-[0]+$"
            java.lang.String r2 = "unknown"
            java.lang.String r3 = "androidid"
            com.reyun.tracking.a.f r4 = new com.reyun.tracking.a.f
            r4.<init>()
            java.lang.String r5 = g(r7)     // Catch: java.lang.Exception -> L73
            com.reyun.tracking.a.f.a(r4, r5)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = "imei"
            com.reyun.tracking.a.f.b(r4, r5)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = com.reyun.tracking.a.f.a(r4)     // Catch: java.lang.Exception -> L73
            boolean r5 = b(r5)     // Catch: java.lang.Exception -> L73
            if (r5 != 0) goto L2f
            java.lang.String r5 = com.reyun.tracking.a.f.a(r4)     // Catch: java.lang.Exception -> L73
            boolean r5 = r2.equals(r5)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L2e
            goto L2f
        L2e:
            return r4
        L2f:
            java.lang.String r5 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L68
            java.lang.String r5 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L73
            boolean r5 = r5.equals(r2)     // Catch: java.lang.Exception -> L73
            if (r5 != 0) goto L68
            java.lang.String r5 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L73
            int r5 = r5.length()     // Catch: java.lang.Exception -> L73
            if (r5 <= 0) goto L68
            java.lang.String r5 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L73
            boolean r5 = java.util.regex.Pattern.matches(r1, r5)     // Catch: java.lang.Exception -> L73
            if (r5 != 0) goto L5f
            java.lang.String r5 = "^[0]+$"
            java.lang.String r6 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L73
            boolean r5 = java.util.regex.Pattern.matches(r5, r6)     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L56
            goto L5f
        L56:
            com.reyun.tracking.a.f.b(r4, r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L73
        L5b:
            com.reyun.tracking.a.f.a(r4, r5)     // Catch: java.lang.Exception -> L73
            goto L67
        L5f:
            com.reyun.tracking.a.f.b(r4, r3)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = c(r7)     // Catch: java.lang.Exception -> L73
            goto L5b
        L67:
            return r4
        L68:
            com.reyun.tracking.a.f.b(r4, r3)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = c(r7)     // Catch: java.lang.Exception -> L73
            com.reyun.tracking.a.f.a(r4, r5)     // Catch: java.lang.Exception -> L73
            return r4
        L73:
            java.lang.String r5 = com.reyun.tracking.a.h.a
            if (r5 == 0) goto La1
            java.lang.String r5 = com.reyun.tracking.a.h.a
            boolean r2 = r5.equals(r2)
            if (r2 != 0) goto La1
            java.lang.String r2 = com.reyun.tracking.a.h.a
            int r2 = r2.length()
            if (r2 <= 0) goto La1
            java.lang.String r2 = com.reyun.tracking.a.h.a
            boolean r1 = java.util.regex.Pattern.matches(r1, r2)
            if (r1 == 0) goto L98
            com.reyun.tracking.a.f.b(r4, r3)
            java.lang.String r7 = c(r7)
            goto L9d
        L98:
            com.reyun.tracking.a.f.b(r4, r0)
            java.lang.String r7 = com.reyun.tracking.a.h.a
        L9d:
            com.reyun.tracking.a.f.a(r4, r7)
            return r4
        La1:
            com.reyun.tracking.a.f.b(r4, r3)
            java.lang.String r7 = c(r7)
            com.reyun.tracking.a.f.a(r4, r7)
            return r4
    }

    public static java.lang.String g(android.content.Context r4) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = b(r4, r0)
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = com.reyun.tracking.a.a.f
            if (r0 == 0) goto L10
            return r0
        L10:
            java.lang.String r0 = "phone"
            java.lang.Object r4 = r4.getSystemService(r0)     // Catch: java.lang.Throwable -> L43
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Throwable -> L43
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L43
            r2 = 29
            if (r0 < r2) goto L21
            com.reyun.tracking.a.a.f = r1     // Catch: java.lang.Throwable -> L43
            return r1
        L21:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L43
            r2 = 26
            r3 = 0
            if (r0 < r2) goto L2f
            java.lang.String r4 = r4.getImei(r3)     // Catch: java.lang.Throwable -> L43
            com.reyun.tracking.a.a.f = r4     // Catch: java.lang.Throwable -> L43
            return r4
        L2f:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L43
            r2 = 23
            if (r0 < r2) goto L3c
            java.lang.String r4 = r4.getDeviceId(r3)     // Catch: java.lang.Throwable -> L43
            com.reyun.tracking.a.a.f = r4     // Catch: java.lang.Throwable -> L43
            return r4
        L3c:
            java.lang.String r4 = r4.getDeviceId()     // Catch: java.lang.Throwable -> L43
            com.reyun.tracking.a.a.f = r4     // Catch: java.lang.Throwable -> L43
            return r4
        L43:
            com.reyun.tracking.a.a.f = r1
            return r1
    }

    static org.json.JSONArray g() {
            org.json.JSONArray r0 = com.reyun.tracking.a.a.j
            return r0
    }

    static long h() {
            long r0 = com.reyun.tracking.a.a.k
            return r0
    }

    public static java.lang.String h(android.content.Context r4) {
            java.lang.String r0 = "phone"
            java.lang.String r1 = "android.permission.READ_PHONE_STATE"
            boolean r1 = b(r4, r1)
            java.lang.String r2 = "unknown"
            if (r1 != 0) goto Ld
            return r2
        Ld:
            java.lang.String r1 = com.reyun.tracking.a.a.g
            if (r1 == 0) goto L12
            return r1
        L12:
            java.lang.Object r1 = r4.getSystemService(r0)     // Catch: java.lang.Exception -> L73
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Exception -> L73
            java.lang.String r1 = r1.getSimOperatorName()     // Catch: java.lang.Exception -> L73
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L73
            if (r3 == 0) goto L70
            java.lang.String r1 = ""
            java.lang.Object r4 = r4.getSystemService(r0)     // Catch: java.lang.Exception -> L73
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Exception -> L73
            java.lang.String r4 = r4.getSubscriberId()     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L6d
            java.lang.String r0 = "46000"
            boolean r0 = r4.startsWith(r0)     // Catch: java.lang.Exception -> L73
            if (r0 != 0) goto L68
            java.lang.String r0 = "46002"
            boolean r0 = r4.startsWith(r0)     // Catch: java.lang.Exception -> L73
            if (r0 != 0) goto L68
            java.lang.String r0 = "46007"
            boolean r0 = r4.startsWith(r0)     // Catch: java.lang.Exception -> L73
            if (r0 == 0) goto L49
            goto L68
        L49:
            java.lang.String r0 = "46001"
            boolean r0 = r4.startsWith(r0)     // Catch: java.lang.Exception -> L73
            if (r0 != 0) goto L65
            java.lang.String r0 = "46006"
            boolean r0 = r4.startsWith(r0)     // Catch: java.lang.Exception -> L73
            if (r0 == 0) goto L5a
            goto L65
        L5a:
            java.lang.String r0 = "46003"
            boolean r4 = r4.startsWith(r0)     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L6a
            java.lang.String r1 = "中国电信"
            goto L6a
        L65:
            java.lang.String r1 = "中国联通"
            goto L6a
        L68:
            java.lang.String r1 = "中国移动"
        L6a:
            com.reyun.tracking.a.a.g = r1     // Catch: java.lang.Exception -> L73
            return r1
        L6d:
            com.reyun.tracking.a.a.g = r2     // Catch: java.lang.Exception -> L73
            return r2
        L70:
            com.reyun.tracking.a.a.g = r1     // Catch: java.lang.Exception -> L73
            return r1
        L73:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get operator failed! cause "
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "Tracking"
            d(r0, r4)
            com.reyun.tracking.a.a.g = r2
            return r2
    }

    public static java.lang.String i(android.content.Context r2) {
            java.lang.String r0 = "window"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Exception -> L2d
            android.view.WindowManager r2 = (android.view.WindowManager) r2     // Catch: java.lang.Exception -> L2d
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            android.view.Display r2 = r2.getDefaultDisplay()     // Catch: java.lang.Exception -> L2d
            r2.getMetrics(r0)     // Catch: java.lang.Exception -> L2d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2d
            r2.<init>()     // Catch: java.lang.Exception -> L2d
            int r1 = r0.widthPixels     // Catch: java.lang.Exception -> L2d
            r2.append(r1)     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "*"
            r2.append(r1)     // Catch: java.lang.Exception -> L2d
            int r0 = r0.heightPixels     // Catch: java.lang.Exception -> L2d
            r2.append(r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L2d
            return r2
        L2d:
            java.lang.String r2 = "unknown"
            return r2
    }

    public static java.lang.String j(android.content.Context r4) {
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "android.permission.INTERNET"
            boolean r1 = a(r4, r1)     // Catch: java.lang.Exception -> L4c
            if (r1 == 0) goto L41
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L4c
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L4c
            r2 = 1
            android.net.NetworkInfo r2 = r1.getNetworkInfo(r2)     // Catch: java.lang.Exception -> L4c
            r3 = 0
            android.net.NetworkInfo r1 = r1.getNetworkInfo(r3)     // Catch: java.lang.Exception -> L4c
            if (r2 == 0) goto L2d
            boolean r3 = r2.isAvailable()     // Catch: java.lang.Exception -> L4c
            if (r3 == 0) goto L2d
            boolean r2 = r2.isConnected()     // Catch: java.lang.Exception -> L4c
            if (r2 == 0) goto L2d
            java.lang.String r4 = "WIFI"
            return r4
        L2d:
            if (r1 == 0) goto L40
            boolean r2 = r1.isAvailable()     // Catch: java.lang.Exception -> L4c
            if (r2 == 0) goto L40
            boolean r1 = r1.isConnected()     // Catch: java.lang.Exception -> L4c
            if (r1 == 0) goto L40
            java.lang.String r4 = s(r4)     // Catch: java.lang.Exception -> L4c
            return r4
        L40:
            return r0
        L41:
            boolean r4 = com.reyun.tracking.a.i.a     // Catch: java.lang.Exception -> L4c
            if (r4 == 0) goto L4c
            java.lang.String r4 = " lost  permission"
            java.lang.String r1 = "lost----> android.permission.INTERNET"
            android.util.Log.w(r4, r1)     // Catch: java.lang.Exception -> L4c
        L4c:
            return r0
    }

    public static java.lang.String k(android.content.Context r4) {
            java.lang.String r0 = "unknown"
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L1d
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L1d
            r2 = 0
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: java.lang.Exception -> L1d
            java.lang.String r4 = r4.versionName     // Catch: java.lang.Exception -> L1d
            if (r4 == 0) goto L1c
            int r1 = r4.length()     // Catch: java.lang.Exception -> L1a
            if (r1 > 0) goto L24
            goto L1c
        L1a:
            r0 = move-exception
            goto L21
        L1c:
            return r0
        L1d:
            r4 = move-exception
            r3 = r0
            r0 = r4
            r4 = r3
        L21:
            r0.printStackTrace()
        L24:
            return r4
    }

    public static boolean l(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            int r2 = r2.screenLayout
            r2 = r2 & 15
            r1 = 3
            if (r2 < r1) goto L14
            r0 = 1
        L14:
            return r0
    }

    public static java.lang.String m(android.content.Context r4) {
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "android.permission.ACCESS_WIFI_STATE"
            boolean r2 = a(r4, r1)     // Catch: java.lang.Throwable -> L3a
            if (r2 != 0) goto L26
            java.lang.String r4 = "Tracking"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
            r2.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r3 = "!!!MISSING permission ["
            r2.append(r3)     // Catch: java.lang.Throwable -> L3a
            r2.append(r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "]"
            r2.append(r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L3a
            android.util.Log.w(r4, r1)     // Catch: java.lang.Throwable -> L3a
            return r0
        L26:
            java.lang.String r1 = "wifi"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L3a
            android.net.wifi.WifiManager r4 = (android.net.wifi.WifiManager) r4     // Catch: java.lang.Throwable -> L3a
            android.net.wifi.WifiInfo r4 = r4.getConnectionInfo()     // Catch: java.lang.Throwable -> L3a
            if (r4 != 0) goto L35
            return r0
        L35:
            java.lang.String r4 = r4.getMacAddress()     // Catch: java.lang.Throwable -> L3a
            return r4
        L3a:
            return r0
    }

    public static int n(android.content.Context r1) {
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = "screen_brightness"
            int r1 = android.provider.Settings.System.getInt(r1, r0)     // Catch: java.lang.Exception -> Lb
            goto Ld
        Lb:
            r1 = 255(0xff, float:3.57E-43)
        Ld:
            return r1
    }

    public static int o(android.content.Context r1) {
            java.lang.String r0 = "audio"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Exception -> Le
            android.media.AudioManager r1 = (android.media.AudioManager) r1     // Catch: java.lang.Exception -> Le
            r0 = 1
            int r1 = r1.getStreamVolume(r0)     // Catch: java.lang.Exception -> Le
            return r1
        Le:
            r1 = 0
            return r1
    }

    public static void p(android.content.Context r2) {
            java.lang.Runnable r0 = com.reyun.tracking.a.a.l
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 0
            com.reyun.tracking.a.a.i = r0
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            com.reyun.tracking.a.a.j = r0
            long r0 = java.lang.System.currentTimeMillis()
            com.reyun.tracking.a.a.k = r0
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.a.b r1 = new com.reyun.tracking.a.b
            r1.<init>(r2, r0)
            com.reyun.tracking.a.a.l = r1
            r0.a(r1)
            return
    }

    public static void q(android.content.Context r3) {
            com.reyun.tracking.a.d r0 = com.reyun.tracking.a.a.n
            if (r0 == 0) goto L5
            return
        L5:
            com.reyun.tracking.a.d r0 = new com.reyun.tracking.a.d
            r1 = 0
            r0.<init>(r1)
            com.reyun.tracking.a.a.n = r0
            java.lang.String r0 = "sensor"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.hardware.SensorManager r3 = (android.hardware.SensorManager) r3
            com.reyun.tracking.a.a.m = r3
            if (r3 == 0) goto L28
            r0 = 4
            android.hardware.Sensor r3 = r3.getDefaultSensor(r0)
            if (r3 == 0) goto L28
            android.hardware.SensorManager r0 = com.reyun.tracking.a.a.m
            com.reyun.tracking.a.d r1 = com.reyun.tracking.a.a.n
            r2 = 2
            r0.registerListener(r1, r3, r2)
        L28:
            return
    }

    private static com.reyun.tracking.a.f r(android.content.Context r8) {
            java.lang.String r0 = "tracking_device_id_cache"
            java.lang.String r1 = "^[0]+-[0]+-[0]+-[0]+-[0]+$"
            java.lang.String r2 = "unknown"
            java.lang.String r3 = "oaid"
            java.lang.String r4 = "androidid"
            com.reyun.tracking.a.f r5 = new com.reyun.tracking.a.f
            r5.<init>()
            java.lang.String r6 = g(r8)     // Catch: java.lang.Exception -> L7e
            com.reyun.tracking.a.f.a(r5, r6)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = "imei"
            com.reyun.tracking.a.f.b(r5, r6)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = com.reyun.tracking.a.f.a(r5)     // Catch: java.lang.Exception -> L7e
            boolean r6 = b(r6)     // Catch: java.lang.Exception -> L7e
            if (r6 != 0) goto L31
            java.lang.String r6 = com.reyun.tracking.a.f.a(r5)     // Catch: java.lang.Exception -> L7e
            boolean r6 = r2.equals(r6)     // Catch: java.lang.Exception -> L7e
            if (r6 == 0) goto L30
            goto L31
        L30:
            return r5
        L31:
            java.lang.String r6 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L7e
            if (r6 == 0) goto L73
            java.lang.String r6 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L7e
            boolean r6 = r6.equals(r2)     // Catch: java.lang.Exception -> L7e
            if (r6 != 0) goto L73
            java.lang.String r6 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L7e
            int r6 = r6.length()     // Catch: java.lang.Exception -> L7e
            if (r6 <= 0) goto L73
            java.lang.String r6 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L7e
            boolean r6 = java.util.regex.Pattern.matches(r1, r6)     // Catch: java.lang.Exception -> L7e
            if (r6 != 0) goto L68
            java.lang.String r6 = "^[0]+$"
            java.lang.String r7 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L7e
            boolean r6 = java.util.regex.Pattern.matches(r6, r7)     // Catch: java.lang.Exception -> L7e
            if (r6 == 0) goto L58
            goto L68
        L58:
            com.reyun.tracking.a.f.b(r5, r3)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L7e
            com.reyun.tracking.a.f.a(r5, r6)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = com.reyun.tracking.a.f.a(r5)     // Catch: java.lang.Exception -> L7e
            com.reyun.tracking.utils.f.b(r8, r0, r3, r6)     // Catch: java.lang.Exception -> L7e
            goto L72
        L68:
            com.reyun.tracking.a.f.b(r5, r4)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = c(r8)     // Catch: java.lang.Exception -> L7e
            com.reyun.tracking.a.f.a(r5, r6)     // Catch: java.lang.Exception -> L7e
        L72:
            return r5
        L73:
            com.reyun.tracking.a.f.b(r5, r4)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = c(r8)     // Catch: java.lang.Exception -> L7e
            com.reyun.tracking.a.f.a(r5, r6)     // Catch: java.lang.Exception -> L7e
            return r5
        L7e:
            java.lang.String r6 = com.reyun.tracking.a.h.a
            if (r6 == 0) goto Lb6
            java.lang.String r6 = com.reyun.tracking.a.h.a
            boolean r2 = r6.equals(r2)
            if (r2 != 0) goto Lb6
            java.lang.String r2 = com.reyun.tracking.a.h.a
            int r2 = r2.length()
            if (r2 <= 0) goto Lb6
            java.lang.String r2 = com.reyun.tracking.a.h.a
            boolean r1 = java.util.regex.Pattern.matches(r1, r2)
            if (r1 == 0) goto La6
            com.reyun.tracking.a.f.b(r5, r4)
            java.lang.String r8 = c(r8)
            com.reyun.tracking.a.f.a(r5, r8)
            goto Lb5
        La6:
            com.reyun.tracking.a.f.b(r5, r3)
            java.lang.String r1 = com.reyun.tracking.a.h.a
            com.reyun.tracking.a.f.a(r5, r1)
            java.lang.String r1 = com.reyun.tracking.a.f.a(r5)
            com.reyun.tracking.utils.f.b(r8, r0, r3, r1)
        Lb5:
            return r5
        Lb6:
            com.reyun.tracking.a.f.b(r5, r4)
            java.lang.String r8 = c(r8)
            com.reyun.tracking.a.f.a(r5, r8)
            return r5
    }

    private static java.lang.String s(android.content.Context r4) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = b(r4, r0)
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = "phone"
            java.lang.Object r4 = r4.getSystemService(r0)
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4
            int r4 = r4.getNetworkType()
            r0 = 4
            java.lang.String r2 = "2G"
            java.lang.String r3 = "3G"
            if (r4 != r0) goto L20
        L1e:
            r1 = r2
            goto L5a
        L20:
            r0 = 2
            if (r4 != r0) goto L24
            goto L1e
        L24:
            r0 = 5
            if (r4 != r0) goto L29
        L27:
            r1 = r3
            goto L5a
        L29:
            r0 = 6
            if (r4 != r0) goto L2d
        L2c:
            goto L27
        L2d:
            r0 = 1
            if (r4 != r0) goto L31
            goto L1e
        L31:
            r0 = 8
            if (r4 != r0) goto L36
            goto L27
        L36:
            r0 = 10
            if (r4 != r0) goto L3d
            java.lang.String r1 = "HSPA"
            goto L5a
        L3d:
            r0 = 9
            if (r4 != r0) goto L44
            java.lang.String r1 = "HSUPA"
            goto L5a
        L44:
            r0 = 3
            if (r4 != r0) goto L48
            goto L2c
        L48:
            r0 = 13
            if (r4 != r0) goto L4f
            java.lang.String r1 = "4G"
            goto L5a
        L4f:
            r0 = 20
            if (r4 != r0) goto L56
            java.lang.String r1 = "5G"
            goto L5a
        L56:
            if (r4 != 0) goto L5a
            java.lang.String r1 = "UNKOWN"
        L5a:
            return r1
    }
}
