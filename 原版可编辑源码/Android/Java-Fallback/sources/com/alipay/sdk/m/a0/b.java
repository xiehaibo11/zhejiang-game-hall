package com.alipay.sdk.m.a0;

public final class b {
    public static com.alipay.sdk.m.a0.b b;
    public com.alipay.sdk.m.a0.f a;

    static {
            com.alipay.sdk.m.a0.b r0 = new com.alipay.sdk.m.a0.b
            r0.<init>()
            com.alipay.sdk.m.a0.b.b = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.a0.b a(com.alipay.sdk.m.a0.f r1) {
            com.alipay.sdk.m.a0.b r0 = com.alipay.sdk.m.a0.b.b
            r0.a = r1
            return r0
    }

    public static boolean a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.checkPermission(r2, r1)
            r2 = 1
            r0 = 0
            if (r1 != 0) goto L12
            r1 = 1
            goto L13
        L12:
            r1 = 0
        L13:
            if (r1 != 0) goto L16
            return r2
        L16:
            return r0
    }

    public static java.lang.String b() {
            java.io.File r0 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L1a
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getBlockSize()     // Catch: java.lang.Throwable -> L1a
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getAvailableBlocks()     // Catch: java.lang.Throwable -> L1a
            long r0 = (long) r0
            long r0 = r0 * r2
            goto L1c
        L1a:
            r0 = 0
        L1c:
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static java.lang.String c() {
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = "/sdcard"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L14
            int r1 = r0.getBlockSize()     // Catch: java.lang.Throwable -> L14
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L14
            int r0 = r0.getAvailableBlocks()     // Catch: java.lang.Throwable -> L14
            long r3 = (long) r0
            long r1 = r1 * r3
            goto L16
        L14:
            r1 = 0
        L16:
            java.lang.String r0 = java.lang.String.valueOf(r1)
            return r0
    }

    public static java.lang.String d() {
            java.lang.String r0 = "0000000000000000"
            r1 = 0
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L51
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = "/proc/cpuinfo"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L51
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L51
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L4f
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L4f
            java.io.LineNumberReader r4 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> L4d
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L4d
            r1 = 1
            r5 = 1
        L1b:
            r6 = 100
            if (r5 >= r6) goto L46
            java.lang.String r6 = r4.readLine()     // Catch: java.lang.Throwable -> L44
            if (r6 == 0) goto L46
            java.lang.String r7 = "Serial"
            int r7 = r6.indexOf(r7)     // Catch: java.lang.Throwable -> L44
            if (r7 < 0) goto L41
            java.lang.String r5 = ":"
            int r5 = r6.indexOf(r5)     // Catch: java.lang.Throwable -> L44
            int r5 = r5 + r1
            int r1 = r6.length()     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = r6.substring(r5, r1)     // Catch: java.lang.Throwable -> L44
            java.lang.String r0 = r1.trim()     // Catch: java.lang.Throwable -> L44
            goto L46
        L41:
            int r5 = r5 + 1
            goto L1b
        L44:
            r1 = r4
            goto L53
        L46:
            r4.close()     // Catch: java.lang.Throwable -> L49
        L49:
            r3.close()     // Catch: java.lang.Throwable -> L63
            goto L63
        L4d:
            goto L53
        L4f:
            r3 = r1
            goto L53
        L51:
            r2 = r1
            r3 = r2
        L53:
            if (r1 == 0) goto L5a
            r1.close()     // Catch: java.lang.Throwable -> L59
            goto L5a
        L59:
        L5a:
            if (r3 == 0) goto L61
            r3.close()     // Catch: java.lang.Throwable -> L60
            goto L61
        L60:
        L61:
            if (r2 == 0) goto L68
        L63:
            r2.close()     // Catch: java.lang.Throwable -> L67
            goto L68
        L67:
        L68:
            if (r0 != 0) goto L6c
            java.lang.String r0 = ""
        L6c:
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = t()
            boolean r1 = com.alipay.sdk.m.z.a.a(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = u()
            return r0
    }

    public static java.lang.String f() {
            r0 = 0
            java.io.FileReader r1 = new java.io.FileReader     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = "/proc/cpuinfo"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2b
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = r2.readLine()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = ":\\s+"
            r4 = 2
            java.lang.String[] r0 = r0.split(r3, r4)     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L27
            int r3 = r0.length     // Catch: java.lang.Throwable -> L2c
            r4 = 1
            if (r3 <= r4) goto L27
            r0 = r0[r4]     // Catch: java.lang.Throwable -> L2c
            r1.close()     // Catch: java.lang.Throwable -> L23
        L23:
            r2.close()     // Catch: java.lang.Throwable -> L26
        L26:
            return r0
        L27:
            r1.close()     // Catch: java.lang.Throwable -> L38
            goto L38
        L2b:
            r2 = r0
        L2c:
            r0 = r1
            goto L2f
        L2e:
            r2 = r0
        L2f:
            if (r0 == 0) goto L36
            r0.close()     // Catch: java.lang.Throwable -> L35
            goto L36
        L35:
        L36:
            if (r2 == 0) goto L3b
        L38:
            r2.close()     // Catch: java.lang.Throwable -> L3b
        L3b:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String f(android.content.Context r2) {
            r0 = 0
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r1 = "airplane_mode_on"
            int r0 = android.provider.Settings.System.getInt(r2, r1, r0)     // Catch: java.lang.Throwable -> Lc
            goto Ld
        Lc:
        Ld:
            r2 = 1
            if (r0 != r2) goto L13
            java.lang.String r2 = "1"
            return r2
        L13:
            java.lang.String r2 = "0"
            return r2
    }

    public static java.lang.String g() {
            java.lang.String r0 = "/proc/meminfo"
            r1 = 0
            r2 = 0
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L2c
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L2c
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L29
            r5 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r4, r5)     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L25
            java.lang.String r5 = "\\s+"
            java.lang.String[] r1 = r1.split(r5)     // Catch: java.lang.Throwable -> L2a
            r5 = 1
            r1 = r1[r5]     // Catch: java.lang.Throwable -> L2a
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L2a
            long r2 = (long) r1
        L25:
            r4.close()     // Catch: java.lang.Throwable -> L36
            goto L36
        L29:
            r0 = r1
        L2a:
            r1 = r4
            goto L2d
        L2c:
            r0 = r1
        L2d:
            if (r1 == 0) goto L34
            r1.close()     // Catch: java.lang.Throwable -> L33
            goto L34
        L33:
        L34:
            if (r0 == 0) goto L39
        L36:
            r0.close()     // Catch: java.lang.Throwable -> L39
        L39:
            java.lang.String r0 = java.lang.String.valueOf(r2)
            return r0
    }

    public static java.lang.String g(android.content.Context r7) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "audio"
            java.lang.Object r7 = r7.getSystemService(r1)     // Catch: java.lang.Throwable -> L65
            android.media.AudioManager r7 = (android.media.AudioManager) r7     // Catch: java.lang.Throwable -> L65
            int r1 = r7.getRingerMode()     // Catch: java.lang.Throwable -> L65
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L17
            r1 = 1
            goto L18
        L17:
            r1 = 0
        L18:
            int r3 = r7.getStreamVolume(r3)     // Catch: java.lang.Throwable -> L65
            int r2 = r7.getStreamVolume(r2)     // Catch: java.lang.Throwable -> L65
            r4 = 2
            int r4 = r7.getStreamVolume(r4)     // Catch: java.lang.Throwable -> L65
            r5 = 3
            int r5 = r7.getStreamVolume(r5)     // Catch: java.lang.Throwable -> L65
            r6 = 4
            int r7 = r7.getStreamVolume(r6)     // Catch: java.lang.Throwable -> L65
            java.lang.String r6 = "ringermode"
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L65
            r0.put(r6, r1)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = "call"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L65
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = "system"
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L65
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = "ring"
            java.lang.String r2 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L65
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = "music"
            java.lang.String r2 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L65
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = "alarm"
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Throwable -> L65
            r0.put(r1, r7)     // Catch: java.lang.Throwable -> L65
        L65:
            java.lang.String r7 = r0.toString()
            return r7
    }

    public static java.lang.String h() {
            java.io.File r0 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L1a
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getBlockSize()     // Catch: java.lang.Throwable -> L1a
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getBlockCount()     // Catch: java.lang.Throwable -> L1a
            long r0 = (long) r0
            long r0 = r0 * r2
            goto L1c
        L1a:
            r0 = 0
        L1c:
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static java.lang.String h(android.content.Context r3) {
            if (r3 == 0) goto L4d
            java.lang.String r0 = "sensor"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Throwable -> L4d
            android.hardware.SensorManager r3 = (android.hardware.SensorManager) r3     // Catch: java.lang.Throwable -> L4d
            if (r3 == 0) goto L4d
            r0 = -1
            java.util.List r3 = r3.getSensorList(r0)     // Catch: java.lang.Throwable -> L4d
            if (r3 == 0) goto L4d
            int r0 = r3.size()     // Catch: java.lang.Throwable -> L4d
            if (r0 <= 0) goto L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r0.<init>()     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L4d
        L22:
            boolean r1 = r3.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L44
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Throwable -> L4d
            android.hardware.Sensor r1 = (android.hardware.Sensor) r1     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = r1.getName()     // Catch: java.lang.Throwable -> L4d
            r0.append(r2)     // Catch: java.lang.Throwable -> L4d
            int r2 = r1.getVersion()     // Catch: java.lang.Throwable -> L4d
            r0.append(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = r1.getVendor()     // Catch: java.lang.Throwable -> L4d
            r0.append(r1)     // Catch: java.lang.Throwable -> L4d
            goto L22
        L44:
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = com.alipay.sdk.m.z.a.e(r3)     // Catch: java.lang.Throwable -> L4d
            goto L4e
        L4d:
            r3 = 0
        L4e:
            if (r3 != 0) goto L52
            java.lang.String r3 = ""
        L52:
            return r3
    }

    public static java.lang.String i() {
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = "/sdcard"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L14
            int r1 = r0.getBlockSize()     // Catch: java.lang.Throwable -> L14
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L14
            int r0 = r0.getBlockCount()     // Catch: java.lang.Throwable -> L14
            long r3 = (long) r0
            long r1 = r1 * r3
            goto L16
        L14:
            r1 = 0
        L16:
            java.lang.String r0 = java.lang.String.valueOf(r1)
            return r0
    }

    public static java.lang.String i(android.content.Context r5) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            if (r5 == 0) goto L54
            java.lang.String r1 = "sensor"
            java.lang.Object r5 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L54
            android.hardware.SensorManager r5 = (android.hardware.SensorManager) r5     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L54
            r1 = -1
            java.util.List r5 = r5.getSensorList(r1)     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L54
            int r1 = r5.size()     // Catch: java.lang.Throwable -> L54
            if (r1 <= 0) goto L54
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L54
        L22:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L54
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L54
            android.hardware.Sensor r1 = (android.hardware.Sensor) r1     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L22
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L54
            r2.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "name"
            java.lang.String r4 = r1.getName()     // Catch: java.lang.Throwable -> L54
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "version"
            int r4 = r1.getVersion()     // Catch: java.lang.Throwable -> L54
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "vendor"
            java.lang.String r1 = r1.getVendor()     // Catch: java.lang.Throwable -> L54
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L54
            r0.put(r2)     // Catch: java.lang.Throwable -> L54
            goto L22
        L54:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String j() {
            java.lang.String r0 = ""
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "get"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L30
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Throwable -> L30
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Throwable -> L30
            java.lang.reflect.Method r1 = r1.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L30
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "gsm.version.baseband"
            r3[r7] = r4     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = "no message"
            r3[r8] = r4     // Catch: java.lang.Throwable -> L30
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L30
            goto L31
        L30:
            r1 = r0
        L31:
            if (r1 != 0) goto L34
            goto L35
        L34:
            r0 = r1
        L35:
            return r0
    }

    public static java.lang.String j(android.content.Context r2) {
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L29
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L29
            int r1 = r2.widthPixels     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> L29
            r0.append(r1)     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "*"
            r0.append(r1)     // Catch: java.lang.Throwable -> L29
            int r2 = r2.heightPixels     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = java.lang.Integer.toString(r2)     // Catch: java.lang.Throwable -> L29
            r0.append(r2)     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> L29
            return r2
        L29:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.String k() {
            java.lang.String r0 = ""
            java.util.Locale r1 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> Lb
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb
            goto Lc
        Lb:
            r1 = r0
        Lc:
            if (r1 != 0) goto Lf
            goto L10
        Lf:
            r0 = r1
        L10:
            return r0
    }

    public static java.lang.String k(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L17
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Throwable -> L17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17
            r0.<init>()     // Catch: java.lang.Throwable -> L17
            int r1 = r1.widthPixels     // Catch: java.lang.Throwable -> L17
            r0.append(r1)     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Throwable -> L17
            return r1
        L17:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String l() {
            java.lang.String r0 = ""
            java.util.TimeZone r1 = java.util.TimeZone.getDefault()     // Catch: java.lang.Throwable -> Lc
            r2 = 0
            java.lang.String r1 = r1.getDisplayName(r2, r2)     // Catch: java.lang.Throwable -> Lc
            goto Ld
        Lc:
            r1 = r0
        Ld:
            if (r1 != 0) goto L10
            goto L11
        L10:
            r0 = r1
        L11:
            return r0
    }

    public static java.lang.String l(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L17
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Throwable -> L17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17
            r0.<init>()     // Catch: java.lang.Throwable -> L17
            int r1 = r1.heightPixels     // Catch: java.lang.Throwable -> L17
            r0.append(r1)     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Throwable -> L17
            return r1
        L17:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String m() {
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1b
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1b
            long r0 = r0 - r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r2.<init>()     // Catch: java.lang.Throwable -> L1b
            r3 = 1000(0x3e8, double:4.94E-321)
            long r3 = r0 % r3
            long r0 = r0 - r3
            r2.append(r0)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L1b
            return r0
        L1b:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String m(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Throwable -> L13
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto L13
            int r1 = r1.getNetworkType()     // Catch: java.lang.Throwable -> L13
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L13
            return r1
        L13:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String n() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11
            r0.<init>()     // Catch: java.lang.Throwable -> L11
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L11
            r0.append(r1)     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L11
            return r0
        L11:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String n(android.content.Context r3) {
            java.lang.String r0 = ""
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo()
            int r3 = r3.targetSdkVersion
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21
            r2 = 29
            if (r1 < r2) goto Lf
            goto L21
        Lf:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21
            r2 = 26
            if (r1 < r2) goto L1e
            r1 = 28
            if (r3 < r1) goto L1e
            java.lang.String r3 = android.os.Build.getSerial()     // Catch: java.lang.Throwable -> L21
            goto L22
        L1e:
            java.lang.String r3 = android.os.Build.SERIAL     // Catch: java.lang.Throwable -> L21
            goto L22
        L21:
            r3 = r0
        L22:
            if (r3 != 0) goto L25
            goto L26
        L25:
            r0 = r3
        L26:
            return r0
    }

    public static java.lang.String o() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "/dev/qemu_pipe"
            java.lang.String r2 = "/dev/socket/qemud"
            java.lang.String r3 = "/system/lib/libc_malloc_debug_qemu.so"
            java.lang.String r4 = "/sys/qemu_trace"
            java.lang.String r5 = "/system/bin/qemu-props"
            java.lang.String r6 = "/dev/socket/genyd"
            java.lang.String r7 = "/dev/socket/baseband_genyd"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7}     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "00:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L3e
            r2 = 0
        L1d:
            r3 = 7
            if (r2 >= r3) goto L39
            r3 = r1[r2]     // Catch: java.lang.Throwable -> L3e
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L3e
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L3e
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L3e
            if (r3 == 0) goto L33
            java.lang.String r3 = "1"
        L2f:
            r0.append(r3)     // Catch: java.lang.Throwable -> L3e
            goto L36
        L33:
            java.lang.String r3 = "0"
            goto L2f
        L36:
            int r2 = r2 + 1
            goto L1d
        L39:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3e
            return r0
        L3e:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String o(android.content.Context r7) {
            java.lang.String r0 = "keyguard"
            java.lang.Object r7 = r7.getSystemService(r0)     // Catch: java.lang.Throwable -> L48
            android.app.KeyguardManager r7 = (android.app.KeyguardManager) r7     // Catch: java.lang.Throwable -> L48
            boolean r7 = r7.isKeyguardSecure()     // Catch: java.lang.Throwable -> L48
            r0 = 0
            if (r7 != 0) goto L13
            java.lang.String r7 = "0:0"
            return r7
        L13:
            java.lang.String r7 = "/data/system/password.key"
            java.lang.String r2 = "/data/system/gesture.key"
            java.lang.String r3 = "/data/system/gatekeeper.password.key"
            java.lang.String r4 = "/data/system/gatekeeper.gesture.key"
            java.lang.String r5 = "/data/system/gatekeeper.pattern.key"
            java.lang.String[] r7 = new java.lang.String[]{r7, r2, r3, r4, r5}     // Catch: java.lang.Throwable -> L48
            r2 = 0
        L22:
            r3 = 5
            if (r2 >= r3) goto L39
            r3 = r7[r2]     // Catch: java.lang.Throwable -> L48
            r4 = -1
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L32
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L32
            long r4 = r6.lastModified()     // Catch: java.lang.Throwable -> L32
        L32:
            long r0 = java.lang.Math.max(r4, r0)     // Catch: java.lang.Throwable -> L48
            int r2 = r2 + 1
            goto L22
        L39:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "1:"
            r7.<init>(r2)     // Catch: java.lang.Throwable -> L48
            r7.append(r0)     // Catch: java.lang.Throwable -> L48
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L48
            return r7
        L48:
            java.lang.String r7 = ""
            return r7
    }

    public static java.lang.String p() {
            java.lang.String r0 = "dalvik.system.Taint"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "00"
            r1.append(r2)
            java.lang.String r2 = ":"
            r1.append(r2)
            r2 = 0
            r3 = 0
        L17:
            if (r3 > 0) goto L2c
            r4 = r0[r2]
            java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L24
            java.lang.String r4 = "1"
            r1.append(r4)     // Catch: java.lang.Throwable -> L24
            goto L29
        L24:
            java.lang.String r4 = "0"
            r1.append(r4)
        L29:
            int r3 = r3 + 1
            goto L17
        L2c:
            java.lang.String r0 = r1.toString()
            return r0
    }

    public static java.lang.String p(android.content.Context r3) {
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "android.intent.action.BATTERY_CHANGED"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            android.content.Intent r3 = r3.registerReceiver(r1, r0)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r0 = "level"
            r1 = -1
            int r0 = r3.getIntExtra(r0, r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "status"
            int r3 = r3.getIntExtra(r2, r1)     // Catch: java.lang.Throwable -> L3f
            r1 = 2
            if (r3 == r1) goto L22
            r1 = 5
            if (r3 != r1) goto L20
            goto L22
        L20:
            r3 = 0
            goto L23
        L22:
            r3 = 1
        L23:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r1.<init>()     // Catch: java.lang.Throwable -> L3f
            if (r3 == 0) goto L2d
            java.lang.String r3 = "1"
            goto L2f
        L2d:
            java.lang.String r3 = "0"
        L2f:
            r1.append(r3)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r3 = ":"
            r1.append(r3)     // Catch: java.lang.Throwable -> L3f
            r1.append(r0)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L3f
            return r3
        L3f:
            java.lang.String r3 = ""
            return r3
    }

    public static java.lang.String q() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "/system/build.prop"
            java.lang.String r3 = "ro.product.name=sdk"
            r1.put(r2, r3)
            java.lang.String r2 = "goldfish"
            java.lang.String r3 = "/proc/tty/drivers"
            r1.put(r3, r2)
            java.lang.String r3 = "/proc/cpuinfo"
            r1.put(r3, r2)
            java.lang.String r2 = "00:"
            r0.append(r2)
            java.util.Set r2 = r1.keySet()
            java.util.Iterator r2 = r2.iterator()
        L2a:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L75
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4 = 0
            r5 = 48
            java.io.LineNumberReader r6 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> L69
            java.io.InputStreamReader r7 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L69
            java.io.FileInputStream r8 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L69
            r8.<init>(r3)     // Catch: java.lang.Throwable -> L69
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L69
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L69
        L48:
            java.lang.String r4 = r6.readLine()     // Catch: java.lang.Throwable -> L67
            if (r4 == 0) goto L60
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L67
            java.lang.Object r7 = r1.get(r3)     // Catch: java.lang.Throwable -> L67
            java.lang.CharSequence r7 = (java.lang.CharSequence) r7     // Catch: java.lang.Throwable -> L67
            boolean r4 = r4.contains(r7)     // Catch: java.lang.Throwable -> L67
            if (r4 == 0) goto L48
            r5 = 49
        L60:
            r0.append(r5)
            r6.close()     // Catch: java.lang.Throwable -> L73
            goto L2a
        L67:
            r4 = r6
            goto L6a
        L69:
        L6a:
            r0.append(r5)
            if (r4 == 0) goto L2a
            r4.close()     // Catch: java.lang.Throwable -> L73
            goto L2a
        L73:
            goto L2a
        L75:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String q(android.content.Context r3) {
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r0 = a(r3, r0)
            if (r0 == 0) goto Lb
            java.lang.String r3 = ""
            return r3
        Lb:
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Throwable -> L70
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3     // Catch: java.lang.Throwable -> L70
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L70
            if (r3 != 0) goto L1b
            goto L70
        L1b:
            int r1 = r3.getType()     // Catch: java.lang.Throwable -> L70
            r2 = 1
            if (r1 != r2) goto L25
            java.lang.String r0 = "WIFI"
            goto L70
        L25:
            int r1 = r3.getType()     // Catch: java.lang.Throwable -> L70
            if (r1 != 0) goto L70
            int r3 = r3.getSubtype()     // Catch: java.lang.Throwable -> L70
            r0 = 4
            if (r3 == r0) goto L6e
            if (r3 == r2) goto L6e
            r0 = 2
            if (r3 == r0) goto L6e
            r0 = 7
            if (r3 == r0) goto L6e
            r0 = 11
            if (r3 != r0) goto L3f
            goto L6e
        L3f:
            r0 = 3
            if (r3 == r0) goto L6b
            r0 = 5
            if (r3 == r0) goto L6b
            r0 = 6
            if (r3 == r0) goto L6b
            r0 = 8
            if (r3 == r0) goto L6b
            r0 = 9
            if (r3 == r0) goto L6b
            r0 = 10
            if (r3 == r0) goto L6b
            r0 = 12
            if (r3 == r0) goto L6b
            r0 = 14
            if (r3 == r0) goto L6b
            r0 = 15
            if (r3 != r0) goto L61
            goto L6b
        L61:
            r0 = 13
            if (r3 != r0) goto L68
            java.lang.String r0 = "4G"
            goto L70
        L68:
            java.lang.String r0 = "UNKNOW"
            goto L70
        L6b:
            java.lang.String r0 = "3G"
            goto L70
        L6e:
            java.lang.String r0 = "2G"
        L70:
            return r0
    }

    public static java.lang.String r() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "00:"
            r0.append(r1)
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "generic"
            java.lang.String r3 = "BRAND"
            r1.put(r3, r2)
            java.lang.String r3 = "BOARD"
            java.lang.String r4 = "unknown"
            r1.put(r3, r4)
            java.lang.String r3 = "DEVICE"
            r1.put(r3, r2)
            java.lang.String r2 = "HARDWARE"
            java.lang.String r3 = "goldfish"
            r1.put(r2, r3)
            java.lang.String r2 = "sdk"
            java.lang.String r3 = "PRODUCT"
            r1.put(r3, r2)
            java.lang.String r3 = "MODEL"
            r1.put(r3, r2)
            java.util.Set r2 = r1.keySet()
            java.util.Iterator r2 = r2.iterator()
        L3d:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L72
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4 = 48
            java.lang.Class<android.os.Build> r5 = android.os.Build.class
            java.lang.reflect.Field r5 = r5.getField(r3)     // Catch: java.lang.Throwable -> L6e
            r6 = 0
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L6e
            if (r5 == 0) goto L64
            java.lang.String r6 = r5.toLowerCase()     // Catch: java.lang.Throwable -> L6e
        L64:
            if (r6 == 0) goto L6e
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L6e
            if (r3 == 0) goto L6e
            r4 = 49
        L6e:
            r0.append(r4)
            goto L3d
        L72:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String s() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "00:"
            r0.append(r1)
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.String r2 = "ro.hardware"
            java.lang.String r3 = "goldfish"
            r1.put(r2, r3)
            java.lang.String r2 = "ro.kernel.qemu"
            java.lang.String r3 = "1"
            r1.put(r2, r3)
            java.lang.String r2 = "generic"
            java.lang.String r3 = "ro.product.device"
            r1.put(r3, r2)
            java.lang.String r3 = "sdk"
            java.lang.String r4 = "ro.product.model"
            r1.put(r4, r3)
            java.lang.String r4 = "ro.product.brand"
            r1.put(r4, r2)
            java.lang.String r2 = "ro.product.name"
            r1.put(r2, r3)
            java.lang.String r2 = "ro.build.fingerprint"
            java.lang.String r3 = "test-keys"
            r1.put(r2, r3)
            java.lang.String r2 = "ro.product.manufacturer"
            java.lang.String r3 = "unknow"
            r1.put(r2, r3)
            java.util.Set r2 = r1.keySet()
            java.util.Iterator r2 = r2.iterator()
        L4b:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L73
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4 = 48
            java.lang.Object r5 = r1.get(r3)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r6 = ""
            java.lang.String r3 = com.alipay.sdk.m.z.a.b(r3, r6)
            if (r3 == 0) goto L6f
            boolean r3 = r3.contains(r5)
            if (r3 == 0) goto L6f
            r4 = 49
        L6f:
            r0.append(r4)
            goto L4b
        L73:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String t() {
            java.lang.String r0 = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq"
            r1 = 0
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L2c
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2a
            r3 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L28
            boolean r3 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L28
            if (r3 != 0) goto L24
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L28
            r0.close()     // Catch: java.lang.Throwable -> L20
        L20:
            r2.close()     // Catch: java.lang.Throwable -> L23
        L23:
            return r1
        L24:
            r0.close()     // Catch: java.lang.Throwable -> L36
            goto L36
        L28:
            r1 = r0
            goto L2d
        L2a:
            goto L2d
        L2c:
            r2 = r1
        L2d:
            if (r1 == 0) goto L34
            r1.close()     // Catch: java.lang.Throwable -> L33
            goto L34
        L33:
        L34:
            if (r2 == 0) goto L39
        L36:
            r2.close()     // Catch: java.lang.Throwable -> L39
        L39:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String u() {
            java.lang.String r0 = "/proc/cpuinfo"
            java.lang.String r1 = ""
            r2 = 0
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L41
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L41
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3e
            r4 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L3e
        L11:
            java.lang.String r2 = r0.readLine()     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto L3a
            boolean r4 = com.alipay.sdk.m.z.a.a(r2)     // Catch: java.lang.Throwable -> L3f
            if (r4 != 0) goto L11
            java.lang.String r4 = ":"
            java.lang.String[] r2 = r2.split(r4)     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto L11
            int r4 = r2.length     // Catch: java.lang.Throwable -> L3f
            r5 = 1
            if (r4 <= r5) goto L11
            r4 = 0
            r4 = r2[r4]     // Catch: java.lang.Throwable -> L3f
            java.lang.String r6 = "BogoMIPS"
            boolean r4 = r4.contains(r6)     // Catch: java.lang.Throwable -> L3f
            if (r4 == 0) goto L11
            r2 = r2[r5]     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = r2.trim()     // Catch: java.lang.Throwable -> L3f
        L3a:
            r3.close()     // Catch: java.lang.Throwable -> L4b
            goto L4b
        L3e:
            r0 = r2
        L3f:
            r2 = r3
            goto L42
        L41:
            r0 = r2
        L42:
            if (r2 == 0) goto L49
            r2.close()     // Catch: java.lang.Throwable -> L48
            goto L49
        L48:
        L49:
            if (r0 == 0) goto L4e
        L4b:
            r0.close()     // Catch: java.lang.Throwable -> L4e
        L4e:
            return r1
    }

    private java.lang.String v() {
            r7 = this;
            java.lang.String r0 = "ip"
            java.lang.String r1 = com.alipay.sdk.m.a0.d.a(r0)
            if (r1 == 0) goto L9
            return r1
        L9:
            com.alipay.sdk.m.a0.f r2 = r7.a
            boolean r2 = r2.isBackgroundRunning()
            java.lang.String r3 = ""
            if (r2 == 0) goto L14
            return r3
        L14:
            java.util.Enumeration r2 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Throwable -> L49
        L18:
            boolean r4 = r2.hasMoreElements()     // Catch: java.lang.Throwable -> L49
            if (r4 == 0) goto L4a
            if (r1 != 0) goto L4a
            java.lang.Object r4 = r2.nextElement()     // Catch: java.lang.Throwable -> L49
            java.net.NetworkInterface r4 = (java.net.NetworkInterface) r4     // Catch: java.lang.Throwable -> L49
            java.util.Enumeration r4 = r4.getInetAddresses()     // Catch: java.lang.Throwable -> L49
        L2a:
            boolean r5 = r4.hasMoreElements()     // Catch: java.lang.Throwable -> L49
            if (r5 == 0) goto L18
            java.lang.Object r5 = r4.nextElement()     // Catch: java.lang.Throwable -> L49
            java.net.InetAddress r5 = (java.net.InetAddress) r5     // Catch: java.lang.Throwable -> L49
            boolean r6 = r5.isLoopbackAddress()     // Catch: java.lang.Throwable -> L49
            if (r6 != 0) goto L2a
            boolean r6 = r5 instanceof java.net.Inet4Address     // Catch: java.lang.Throwable -> L49
            if (r6 == 0) goto L2a
            java.lang.String r4 = r5.getHostAddress()     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L49
            goto L18
        L49:
        L4a:
            if (r1 != 0) goto L4d
            goto L4e
        L4d:
            r3 = r1
        L4e:
            com.alipay.sdk.m.a0.d.a(r0, r3)
            return r3
    }

    public final java.lang.String a() {
            r2 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = "/sys/devices/system/cpu/"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
            com.alipay.sdk.m.a0.c r1 = new com.alipay.sdk.m.a0.c     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            java.io.File[] r0 = r0.listFiles(r1)     // Catch: java.lang.Throwable -> L16
            int r0 = r0.length     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L16
            return r0
        L16:
            java.lang.String r0 = "1"
            return r0
    }

    public final synchronized java.lang.String a(android.content.Context r3) {
            r2 = this;
            monitor-enter(r2)
            com.alipay.sdk.m.a0.f r0 = r2.a     // Catch: java.lang.Throwable -> L4a
            java.lang.String r0 = r0.getSubscriberId()     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto Lb
            monitor-exit(r2)
            return r0
        Lb:
            java.lang.String r0 = "imsi"
            java.lang.String r0 = com.alipay.sdk.m.a0.d.a(r0)     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto L15
            monitor-exit(r2)
            return r0
        L15:
            com.alipay.sdk.m.a0.f r1 = r2.a     // Catch: java.lang.Throwable -> L4a
            boolean r1 = r1.isBackgroundRunning()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L21
            java.lang.String r3 = ""
            monitor-exit(r2)
            return r3
        L21:
            java.lang.String r1 = "android.permission.READ_PHONE_STATE"
            boolean r1 = a(r3, r1)     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L2d
            java.lang.String r3 = ""
            monitor-exit(r2)
            return r3
        L2d:
            if (r3 == 0) goto L3f
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Throwable -> L3e
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Throwable -> L3e
            if (r3 == 0) goto L3f
            java.lang.String r0 = r3.getSubscriberId()     // Catch: java.lang.Throwable -> L3e
            goto L3f
        L3e:
        L3f:
            if (r0 != 0) goto L43
            java.lang.String r0 = ""
        L43:
            java.lang.String r3 = "imsi"
            com.alipay.sdk.m.a0.d.a(r3, r0)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r2)
            return r0
        L4a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized java.lang.String b(android.content.Context r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = "NetworkOperatorName"
            java.lang.String r0 = com.alipay.sdk.m.a0.d.a(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto Lb
            monitor-exit(r2)
            return r0
        Lb:
            if (r3 == 0) goto L1d
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Throwable -> L1c
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Throwable -> L1c
            if (r3 == 0) goto L1d
            java.lang.String r0 = r3.getNetworkOperatorName()     // Catch: java.lang.Throwable -> L1c
            goto L1d
        L1c:
        L1d:
            if (r0 == 0) goto L27
            java.lang.String r3 = "null"
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> L30
            if (r3 == 0) goto L29
        L27:
            java.lang.String r0 = ""
        L29:
            java.lang.String r3 = "NetworkOperatorName"
            com.alipay.sdk.m.a0.d.a(r3, r0)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r2)
            return r0
        L30:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized java.lang.String c(android.content.Context r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = "SimSerial"
            java.lang.String r0 = com.alipay.sdk.m.a0.d.a(r0)     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto Lb
            monitor-exit(r2)
            return r0
        Lb:
            com.alipay.sdk.m.a0.f r1 = r2.a     // Catch: java.lang.Throwable -> L42
            boolean r1 = r1.isBackgroundRunning()     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L17
            java.lang.String r3 = ""
            monitor-exit(r2)
            return r3
        L17:
            java.lang.String r1 = "android.permission.READ_PHONE_STATE"
            boolean r1 = a(r3, r1)     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L23
            java.lang.String r3 = ""
            monitor-exit(r2)
            return r3
        L23:
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Throwable -> L3b
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r3.getSimSerialNumber()     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L39
            if (r0 == 0) goto L3b
            int r3 = r0.length()     // Catch: java.lang.Throwable -> L3b
            if (r3 != 0) goto L3b
        L39:
            java.lang.String r0 = ""
        L3b:
            java.lang.String r3 = "SimSerial"
            com.alipay.sdk.m.a0.d.a(r3, r0)     // Catch: java.lang.Throwable -> L42
            monitor-exit(r2)
            return r0
        L42:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized java.lang.String d(android.content.Context r3) {
            r2 = this;
            monitor-enter(r2)
            com.alipay.sdk.m.a0.f r0 = r2.a     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.getAndroidId()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto Lb
            monitor-exit(r2)
            return r0
        Lb:
            java.lang.String r0 = "ANDROIDID"
            java.lang.String r0 = com.alipay.sdk.m.a0.d.a(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L15
            monitor-exit(r2)
            return r0
        L15:
            com.alipay.sdk.m.a0.f r1 = r2.a     // Catch: java.lang.Throwable -> L38
            boolean r1 = r1.isBackgroundRunning()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L21
            java.lang.String r3 = ""
            monitor-exit(r2)
            return r3
        L21:
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "android_id"
            java.lang.String r0 = android.provider.Settings.Secure.getString(r3, r1)     // Catch: java.lang.Throwable -> L2c
            goto L2d
        L2c:
        L2d:
            if (r0 != 0) goto L31
            java.lang.String r0 = ""
        L31:
            java.lang.String r3 = "ANDROIDID"
            com.alipay.sdk.m.a0.d.a(r3, r0)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r2)
            return r0
        L38:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final java.lang.String e(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = q(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = r2.v()     // Catch: java.lang.Throwable -> L2d
            boolean r1 = com.alipay.sdk.m.z.a.b(r3)     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L2d
            boolean r0 = com.alipay.sdk.m.z.a.b(r0)     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L2d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            r0.append(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = ":"
            r0.append(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r2.v()     // Catch: java.lang.Throwable -> L2d
            r0.append(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2d
            goto L2f
        L2d:
            java.lang.String r3 = ""
        L2f:
            return r3
    }
}
