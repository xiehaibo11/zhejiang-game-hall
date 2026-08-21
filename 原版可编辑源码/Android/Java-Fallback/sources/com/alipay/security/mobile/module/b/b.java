package com.alipay.security.mobile.module.b;

public final class b {
    private static com.alipay.security.mobile.module.b.b a;

    static {
            com.alipay.security.mobile.module.b.b r0 = new com.alipay.security.mobile.module.b.b
            r0.<init>()
            com.alipay.security.mobile.module.b.b.a = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String A() {
            java.util.Enumeration r0 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Throwable -> L33
        L4:
            boolean r1 = r0.hasMoreElements()     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.Throwable -> L33
            java.net.NetworkInterface r1 = (java.net.NetworkInterface) r1     // Catch: java.lang.Throwable -> L33
            java.util.Enumeration r1 = r1.getInetAddresses()     // Catch: java.lang.Throwable -> L33
        L14:
            boolean r2 = r1.hasMoreElements()     // Catch: java.lang.Throwable -> L33
            if (r2 == 0) goto L4
            java.lang.Object r2 = r1.nextElement()     // Catch: java.lang.Throwable -> L33
            java.net.InetAddress r2 = (java.net.InetAddress) r2     // Catch: java.lang.Throwable -> L33
            boolean r3 = r2.isLoopbackAddress()     // Catch: java.lang.Throwable -> L33
            if (r3 != 0) goto L14
            boolean r3 = r2 instanceof java.net.Inet4Address     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L14
            java.lang.String r0 = r2.getHostAddress()     // Catch: java.lang.Throwable -> L33
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L33
            return r0
        L33:
            java.lang.String r0 = ""
            return r0
    }

    public static com.alipay.security.mobile.module.b.b a() {
            com.alipay.security.mobile.module.b.b r0 = com.alipay.security.mobile.module.b.b.a
            return r0
    }

    private static java.lang.String a(android.bluetooth.BluetoothAdapter r6) {
            r0 = 0
            java.lang.Class<android.bluetooth.BluetoothAdapter> r1 = android.bluetooth.BluetoothAdapter.class
            java.lang.String r2 = "mService"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L33
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L33
            java.lang.Object r6 = r1.get(r6)     // Catch: java.lang.Throwable -> L33
            if (r6 != 0) goto L14
            return r0
        L14:
            java.lang.Class r1 = r6.getClass()     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = "getAddress"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L33
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L33
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L33
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L33
            java.lang.Object r6 = r1.invoke(r6, r2)     // Catch: java.lang.Throwable -> L33
            if (r6 == 0) goto L33
            boolean r1 = r6 instanceof java.lang.String     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L33
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L33
            return r6
        L33:
            return r0
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = a(r3, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            r0 = 0
            if (r3 == 0) goto L1e
            java.lang.String r2 = "phone"
            java.lang.Object r3 = r3.getSystemService(r2)     // Catch: java.lang.Throwable -> L1d
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Throwable -> L1d
            if (r3 == 0) goto L1e
            java.lang.String r0 = r3.getDeviceId()     // Catch: java.lang.Throwable -> L1d
            goto L1e
        L1d:
        L1e:
            if (r0 != 0) goto L21
            r0 = r1
        L21:
            return r0
    }

    private static boolean a(android.content.Context r1, java.lang.String r2) {
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

    public static java.lang.String b(android.content.Context r2) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = a(r2, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            if (r2 == 0) goto L1c
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L1c
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L1c
            java.lang.String r2 = r2.getSubscriberId()     // Catch: java.lang.Throwable -> L1c
            goto L1d
        L1c:
            r2 = r1
        L1d:
            if (r2 != 0) goto L20
            r2 = r1
        L20:
            return r2
    }

    public static java.lang.String c() {
            r0 = 0
            java.lang.String r2 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L28
            java.lang.String r3 = "mounted"
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Throwable -> L28
            if (r2 == 0) goto L28
            java.io.File r2 = com.alipay.security.mobile.module.a.a.a()     // Catch: java.lang.Throwable -> L28
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            int r2 = r3.getBlockSize()     // Catch: java.lang.Throwable -> L28
            long r4 = (long) r2     // Catch: java.lang.Throwable -> L28
            int r0 = r3.getAvailableBlocks()     // Catch: java.lang.Throwable -> L28
            long r0 = (long) r0
            long r4 = r4 * r0
            r0 = r4
        L28:
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static java.lang.String c(android.content.Context r2) {
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

    public static java.lang.String d() {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String d(android.content.Context r7) {
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

    public static java.lang.String e() {
            java.lang.String r0 = "0000000000000000"
            r1 = 0
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L56
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L56
            java.lang.String r4 = "/proc/cpuinfo"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L56
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L56
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L54
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L54
            java.io.LineNumberReader r4 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> L52
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L52
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
            goto L58
        L46:
            r4.close()     // Catch: java.lang.Throwable -> L49
        L49:
            r3.close()     // Catch: java.lang.Throwable -> L4c
        L4c:
            r2.close()     // Catch: java.lang.Throwable -> L50
            goto L69
        L50:
            goto L69
        L52:
            goto L58
        L54:
            r3 = r1
            goto L58
        L56:
            r2 = r1
            r3 = r2
        L58:
            if (r1 == 0) goto L5f
            r1.close()     // Catch: java.lang.Throwable -> L5e
            goto L5f
        L5e:
        L5f:
            if (r3 == 0) goto L66
            r3.close()     // Catch: java.lang.Throwable -> L65
            goto L66
        L65:
        L66:
            if (r2 == 0) goto L69
            goto L4c
        L69:
            if (r0 != 0) goto L6d
            java.lang.String r0 = ""
        L6d:
            return r0
    }

    public static java.lang.String e(android.content.Context r2) {
            r0 = 0
            if (r2 == 0) goto L14
            java.lang.String r1 = "phone"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Throwable -> L13
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L13
            if (r2 == 0) goto L14
            java.lang.String r2 = r2.getNetworkOperatorName()     // Catch: java.lang.Throwable -> L13
            r0 = r2
            goto L14
        L13:
        L14:
            if (r0 == 0) goto L1e
            java.lang.String r2 = "null"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L20
        L1e:
            java.lang.String r0 = ""
        L20:
            return r0
    }

    public static java.lang.String f(android.content.Context r4) {
            r0 = 0
            if (r4 == 0) goto L4f
            java.lang.String r1 = "sensor"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L4e
            android.hardware.SensorManager r4 = (android.hardware.SensorManager) r4     // Catch: java.lang.Throwable -> L4e
            if (r4 == 0) goto L4f
            r1 = -1
            java.util.List r4 = r4.getSensorList(r1)     // Catch: java.lang.Throwable -> L4e
            if (r4 == 0) goto L4f
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L4e
            if (r1 <= 0) goto L4f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4e
            r1.<init>()     // Catch: java.lang.Throwable -> L4e
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L4e
        L23:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Throwable -> L4e
            if (r2 == 0) goto L45
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Throwable -> L4e
            android.hardware.Sensor r2 = (android.hardware.Sensor) r2     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Throwable -> L4e
            r1.append(r3)     // Catch: java.lang.Throwable -> L4e
            int r3 = r2.getVersion()     // Catch: java.lang.Throwable -> L4e
            r1.append(r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = r2.getVendor()     // Catch: java.lang.Throwable -> L4e
            r1.append(r2)     // Catch: java.lang.Throwable -> L4e
            goto L23
        L45:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = com.alipay.security.mobile.module.a.a.e(r4)     // Catch: java.lang.Throwable -> L4e
            goto L4f
        L4e:
        L4f:
            if (r0 != 0) goto L53
            java.lang.String r0 = ""
        L53:
            return r0
    }

    public static java.lang.String g() {
            java.lang.String r0 = x()
            boolean r1 = com.alipay.security.mobile.module.a.a.a(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = y()
            return r0
    }

    public static java.lang.String g(android.content.Context r5) {
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

    public static java.lang.String h() {
            r0 = 0
            java.io.FileReader r1 = new java.io.FileReader     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "/proc/cpuinfo"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L32
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L30
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r0 = r2.readLine()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = ":\\s+"
            r4 = 2
            java.lang.String[] r0 = r0.split(r3, r4)     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L27
            int r3 = r0.length     // Catch: java.lang.Throwable -> L2e
            r4 = 1
            if (r3 <= r4) goto L27
            r0 = r0[r4]     // Catch: java.lang.Throwable -> L2e
            r1.close()     // Catch: java.lang.Throwable -> L23
        L23:
            r2.close()     // Catch: java.lang.Throwable -> L26
        L26:
            return r0
        L27:
            r1.close()     // Catch: java.lang.Throwable -> L2a
        L2a:
            r2.close()     // Catch: java.lang.Throwable -> L3f
            goto L3f
        L2e:
            r0 = r2
            goto L33
        L30:
            goto L33
        L32:
            r1 = r0
        L33:
            if (r1 == 0) goto L3a
            r1.close()     // Catch: java.lang.Throwable -> L39
            goto L3a
        L39:
        L3a:
            if (r0 == 0) goto L3f
            r0.close()     // Catch: java.lang.Throwable -> L3f
        L3f:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String h(android.content.Context r2) {
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

    public static java.lang.String i() {
            java.lang.String r0 = "/proc/meminfo"
            r1 = 0
            r2 = 0
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L31
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L31
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2f
            r5 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r4, r5)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L26
            java.lang.String r5 = "\\s+"
            java.lang.String[] r1 = r1.split(r5)     // Catch: java.lang.Throwable -> L2d
            r5 = 1
            r1 = r1[r5]     // Catch: java.lang.Throwable -> L2d
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L2d
            long r1 = (long) r1
            r2 = r1
        L26:
            r4.close()     // Catch: java.lang.Throwable -> L29
        L29:
            r0.close()     // Catch: java.lang.Throwable -> L3e
            goto L3e
        L2d:
            r1 = r0
            goto L32
        L2f:
            goto L32
        L31:
            r4 = r1
        L32:
            if (r4 == 0) goto L39
            r4.close()     // Catch: java.lang.Throwable -> L38
            goto L39
        L38:
        L39:
            if (r1 == 0) goto L3e
            r1.close()     // Catch: java.lang.Throwable -> L3e
        L3e:
            java.lang.String r0 = java.lang.String.valueOf(r2)
            return r0
    }

    public static java.lang.String i(android.content.Context r1) {
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

    public static java.lang.String j() {
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

    public static java.lang.String j(android.content.Context r1) {
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

    public static java.lang.String k() {
            r0 = 0
            java.lang.String r2 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L28
            java.lang.String r3 = "mounted"
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Throwable -> L28
            if (r2 == 0) goto L28
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L28
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            int r2 = r3.getBlockSize()     // Catch: java.lang.Throwable -> L28
            long r4 = (long) r2     // Catch: java.lang.Throwable -> L28
            int r0 = r3.getBlockCount()     // Catch: java.lang.Throwable -> L28
            long r0 = (long) r0
            long r4 = r4 * r0
            r0 = r4
        L28:
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static java.lang.String k(android.content.Context r2) {
            java.lang.String r0 = "android.permission.ACCESS_WIFI_STATE"
            boolean r0 = a(r2, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = "wifi"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L30
            android.net.wifi.WifiManager r2 = (android.net.wifi.WifiManager) r2     // Catch: java.lang.Throwable -> L30
            android.net.wifi.WifiInfo r2 = r2.getConnectionInfo()     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = r2.getMacAddress()     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2b
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L2b
            java.lang.String r2 = "02:00:00:00:00:00"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L30
        L2b:
            java.lang.String r2 = w()     // Catch: java.lang.Throwable -> L30
            return r2
        L30:
            return r1
    }

    public static java.lang.String l() {
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

    public static java.lang.String l(android.content.Context r2) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = a(r2, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L21
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = r2.getSimSerialNumber()     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L21
            if (r2 == 0) goto L22
            int r0 = r2.length()     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L22
        L21:
            r2 = r1
        L22:
            return r2
    }

    public static java.lang.String m() {
            java.lang.String r0 = ""
            java.lang.String r1 = android.os.Build.SERIAL     // Catch: java.lang.Throwable -> L5
            goto L6
        L5:
            r1 = r0
        L6:
            if (r1 != 0) goto L9
            goto La
        L9:
            r0 = r1
        La:
            return r0
    }

    public static java.lang.String m(android.content.Context r2) {
            java.lang.String r0 = ""
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = "android_id"
            java.lang.String r2 = android.provider.Settings.Secure.getString(r2, r1)     // Catch: java.lang.Throwable -> Ld
            goto Le
        Ld:
            r2 = r0
        Le:
            if (r2 != 0) goto L11
            r2 = r0
        L11:
            return r2
    }

    public static java.lang.String n() {
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

    public static java.lang.String n(android.content.Context r3) {
            java.lang.String r0 = "android.permission.BLUETOOTH"
            boolean r0 = a(r3, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = z()
            if (r0 == 0) goto L22
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L22
            java.lang.String r2 = "02:00:00:00:00:00"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L20
            goto L22
        L20:
            r3 = r0
            goto L2c
        L22:
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "bluetooth_address"
            java.lang.String r3 = android.provider.Settings.Secure.getString(r3, r2)     // Catch: java.lang.Throwable -> L31
        L2c:
            if (r3 != 0) goto L30
            r0 = r1
            goto L31
        L30:
            r0 = r3
        L31:
            return r0
    }

    public static java.lang.String o() {
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

    public static java.lang.String o(android.content.Context r1) {
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

    public static java.lang.String p() {
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

    public static java.lang.String p(android.content.Context r2) {
            java.lang.String r0 = "android.permission.ACCESS_WIFI_STATE"
            boolean r0 = a(r2, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = "wifi"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L22
            android.net.wifi.WifiManager r2 = (android.net.wifi.WifiManager) r2     // Catch: java.lang.Throwable -> L22
            boolean r0 = r2.isWifiEnabled()     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L22
            android.net.wifi.WifiInfo r2 = r2.getConnectionInfo()     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.getBSSID()     // Catch: java.lang.Throwable -> L22
            goto L23
        L22:
            r2 = r1
        L23:
            if (r2 != 0) goto L26
            r2 = r1
        L26:
            return r2
    }

    public static java.lang.String q() {
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

    public static java.lang.String q(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r3 = t(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = A()     // Catch: java.lang.Throwable -> L2f
            boolean r2 = com.alipay.security.mobile.module.a.a.b(r3)     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L2f
            boolean r1 = com.alipay.security.mobile.module.a.a.b(r1)     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L2f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f
            r1.<init>()     // Catch: java.lang.Throwable -> L2f
            r1.append(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = ":"
            r1.append(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = A()     // Catch: java.lang.Throwable -> L2f
            r1.append(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L2f
            r0 = r3
        L2f:
            return r0
    }

    public static java.lang.String r() {
            java.lang.String r0 = "00"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            r1.<init>()     // Catch: java.lang.Throwable -> L61
            r2 = 7
            java.lang.String[] r3 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "/dev/qemu_pipe"
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "/dev/socket/qemud"
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Throwable -> L61
            r4 = 2
            java.lang.String r6 = "/system/lib/libc_malloc_debug_qemu.so"
            r3[r4] = r6     // Catch: java.lang.Throwable -> L61
            r4 = 3
            java.lang.String r6 = "/sys/qemu_trace"
            r3[r4] = r6     // Catch: java.lang.Throwable -> L61
            r4 = 4
            java.lang.String r6 = "/system/bin/qemu-props"
            r3[r4] = r6     // Catch: java.lang.Throwable -> L61
            r4 = 5
            java.lang.String r6 = "/dev/socket/genyd"
            r3[r4] = r6     // Catch: java.lang.Throwable -> L61
            r4 = 6
            java.lang.String r6 = "/dev/socket/baseband_genyd"
            r3[r4] = r6     // Catch: java.lang.Throwable -> L61
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            r4.<init>()     // Catch: java.lang.Throwable -> L61
            r4.append(r0)     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = ":"
            r4.append(r0)     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L61
            r1.append(r0)     // Catch: java.lang.Throwable -> L61
        L41:
            if (r5 >= r2) goto L5c
            r0 = r3[r5]     // Catch: java.lang.Throwable -> L61
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L61
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L61
            boolean r0 = r4.exists()     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L56
            java.lang.String r0 = "1"
        L52:
            r1.append(r0)     // Catch: java.lang.Throwable -> L61
            goto L59
        L56:
            java.lang.String r0 = "0"
            goto L52
        L59:
            int r5 = r5 + 1
            goto L41
        L5c:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L61
            return r0
        L61:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String r(android.content.Context r8) {
            java.lang.String r0 = "keyguard"
            java.lang.Object r8 = r8.getSystemService(r0)     // Catch: java.lang.Throwable -> L54
            android.app.KeyguardManager r8 = (android.app.KeyguardManager) r8     // Catch: java.lang.Throwable -> L54
            boolean r8 = r8.isKeyguardSecure()     // Catch: java.lang.Throwable -> L54
            r0 = 0
            if (r8 != 0) goto L13
            java.lang.String r8 = "0:0"
            return r8
        L13:
            r8 = 5
            java.lang.String[] r2 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "/data/system/password.key"
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "/data/system/gesture.key"
            r5 = 1
            r2[r5] = r3     // Catch: java.lang.Throwable -> L54
            r3 = 2
            java.lang.String r5 = "/data/system/gatekeeper.password.key"
            r2[r3] = r5     // Catch: java.lang.Throwable -> L54
            r3 = 3
            java.lang.String r5 = "/data/system/gatekeeper.gesture.key"
            r2[r3] = r5     // Catch: java.lang.Throwable -> L54
            r3 = 4
            java.lang.String r5 = "/data/system/gatekeeper.pattern.key"
            r2[r3] = r5     // Catch: java.lang.Throwable -> L54
        L2f:
            if (r4 >= r8) goto L45
            r3 = r2[r4]     // Catch: java.lang.Throwable -> L54
            r5 = -1
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L3e
            r7.<init>(r3)     // Catch: java.lang.Throwable -> L3e
            long r5 = r7.lastModified()     // Catch: java.lang.Throwable -> L3e
        L3e:
            long r0 = java.lang.Math.max(r5, r0)     // Catch: java.lang.Throwable -> L54
            int r4 = r4 + 1
            goto L2f
        L45:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "1:"
            r8.<init>(r2)     // Catch: java.lang.Throwable -> L54
            r8.append(r0)     // Catch: java.lang.Throwable -> L54
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L54
            return r8
        L54:
            java.lang.String r8 = ""
            return r8
    }

    public static java.lang.String s() {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "dalvik.system.Taint"
            r0[r1] = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "00"
            r2.append(r3)
            java.lang.String r3 = ":"
            r2.append(r3)
            r3 = 0
        L18:
            if (r3 > 0) goto L2d
            r4 = r0[r1]
            java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = "1"
            r2.append(r4)     // Catch: java.lang.Throwable -> L25
            goto L2a
        L25:
            java.lang.String r4 = "0"
            r2.append(r4)
        L2a:
            int r3 = r3 + 1
            goto L18
        L2d:
            java.lang.String r0 = r2.toString()
            return r0
    }

    public static java.lang.String s(android.content.Context r3) {
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

    public static java.lang.String t() {
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
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "00"
            r2.append(r3)
            java.lang.String r3 = ":"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.util.Set r2 = r1.keySet()
            java.util.Iterator r2 = r2.iterator()
        L3b:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L84
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4 = 0
            r5 = 48
            java.io.LineNumberReader r6 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> L7b
            java.io.InputStreamReader r7 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L7b
            java.io.FileInputStream r8 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L7b
            r8.<init>(r3)     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L7b
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L7b
        L59:
            java.lang.String r4 = r6.readLine()     // Catch: java.lang.Throwable -> L7a
            if (r4 == 0) goto L71
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L7a
            java.lang.Object r7 = r1.get(r3)     // Catch: java.lang.Throwable -> L7a
            java.lang.CharSequence r7 = (java.lang.CharSequence) r7     // Catch: java.lang.Throwable -> L7a
            boolean r4 = r4.contains(r7)     // Catch: java.lang.Throwable -> L7a
            if (r4 == 0) goto L59
            r5 = 49
        L71:
            r0.append(r5)
            r6.close()     // Catch: java.lang.Throwable -> L78
            goto L3b
        L78:
            goto L3b
        L7a:
            r4 = r6
        L7b:
            r0.append(r5)
            if (r4 == 0) goto L3b
            r4.close()     // Catch: java.lang.Throwable -> L78
            goto L3b
        L84:
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static java.lang.String t(android.content.Context r3) {
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
            r1 = 4
            if (r3 == r1) goto L6e
            if (r3 == r2) goto L6e
            r1 = 2
            if (r3 == r1) goto L6e
            r1 = 7
            if (r3 == r1) goto L6e
            r1 = 11
            if (r3 != r1) goto L3f
            goto L6e
        L3f:
            r1 = 3
            if (r3 == r1) goto L6b
            r1 = 5
            if (r3 == r1) goto L6b
            r1 = 6
            if (r3 == r1) goto L6b
            r1 = 8
            if (r3 == r1) goto L6b
            r1 = 9
            if (r3 == r1) goto L6b
            r1 = 10
            if (r3 == r1) goto L6b
            r1 = 12
            if (r3 == r1) goto L6b
            r1 = 14
            if (r3 == r1) goto L6b
            r1 = 15
            if (r3 != r1) goto L61
            goto L6b
        L61:
            r1 = 13
            if (r3 != r1) goto L68
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

    public static java.lang.String u() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "00"
            r1.append(r2)
            java.lang.String r2 = ":"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
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
        L4e:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L83
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4 = 48
            java.lang.Class<android.os.Build> r5 = android.os.Build.class
            java.lang.reflect.Field r5 = r5.getField(r3)     // Catch: java.lang.Throwable -> L7f
            r6 = 0
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L7f
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7f
            if (r5 == 0) goto L75
            java.lang.String r6 = r5.toLowerCase()     // Catch: java.lang.Throwable -> L7f
        L75:
            if (r6 == 0) goto L7f
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L7f
            if (r3 == 0) goto L7f
            r4 = 49
        L7f:
            r0.append(r4)
            goto L4e
        L83:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String v() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "00"
            r1.append(r2)
            java.lang.String r2 = ":"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
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
        L5c:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L84
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4 = 48
            java.lang.Object r5 = r1.get(r3)
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r6 = ""
            java.lang.String r3 = com.alipay.security.mobile.module.a.a.b(r3, r6)
            if (r3 == 0) goto L80
            boolean r3 = r3.contains(r5)
            if (r3 == 0) goto L80
            r4 = 49
        L80:
            r0.append(r4)
            goto L5c
        L84:
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static java.lang.String w() {
            java.lang.String r0 = "02:00:00:00:00:00"
            java.util.Enumeration r1 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Throwable -> L6c
            java.util.ArrayList r1 = java.util.Collections.list(r1)     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L6c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L6c
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L6c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L6c
            java.net.NetworkInterface r2 = (java.net.NetworkInterface) r2     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L10
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Throwable -> L6c
            if (r3 == 0) goto L10
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "wlan0"
            boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L6c
            if (r3 == 0) goto L10
            byte[] r1 = r2.getHardwareAddress()     // Catch: java.lang.Throwable -> L6c
            if (r1 != 0) goto L37
            return r0
        L37:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6c
            r2.<init>()     // Catch: java.lang.Throwable -> L6c
            int r3 = r1.length     // Catch: java.lang.Throwable -> L6c
            r4 = 0
            r5 = 0
        L3f:
            r6 = 1
            if (r5 >= r3) goto L5a
            r7 = r1[r5]     // Catch: java.lang.Throwable -> L6c
            java.lang.String r8 = "%02X:"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L6c
            r7 = r7 & 255(0xff, float:3.57E-43)
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L6c
            r6[r4] = r7     // Catch: java.lang.Throwable -> L6c
            java.lang.String r6 = java.lang.String.format(r8, r6)     // Catch: java.lang.Throwable -> L6c
            r2.append(r6)     // Catch: java.lang.Throwable -> L6c
            int r5 = r5 + 1
            goto L3f
        L5a:
            int r1 = r2.length()     // Catch: java.lang.Throwable -> L6c
            if (r1 <= 0) goto L68
            int r1 = r2.length()     // Catch: java.lang.Throwable -> L6c
            int r1 = r1 - r6
            r2.deleteCharAt(r1)     // Catch: java.lang.Throwable -> L6c
        L68:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L6c
        L6c:
            return r0
    }

    private static java.lang.String x() {
            java.lang.String r0 = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq"
            r1 = 0
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L2d
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L2d
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2e
            r3 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L2b
            boolean r3 = com.alipay.security.mobile.module.a.a.a(r1)     // Catch: java.lang.Throwable -> L2b
            if (r3 != 0) goto L24
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L2b
            r0.close()     // Catch: java.lang.Throwable -> L20
        L20:
            r2.close()     // Catch: java.lang.Throwable -> L23
        L23:
            return r1
        L24:
            r0.close()     // Catch: java.lang.Throwable -> L27
        L27:
            r2.close()     // Catch: java.lang.Throwable -> L38
            goto L38
        L2b:
            r1 = r0
            goto L2e
        L2d:
            r2 = r1
        L2e:
            if (r1 == 0) goto L35
            r1.close()     // Catch: java.lang.Throwable -> L34
            goto L35
        L34:
        L35:
            if (r2 == 0) goto L38
            goto L27
        L38:
            java.lang.String r0 = ""
            return r0
    }

    private static java.lang.String y() {
            java.lang.String r0 = "/proc/cpuinfo"
            java.lang.String r1 = ""
            r2 = 0
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L45
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L45
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L43
            r4 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L43
        L11:
            java.lang.String r2 = r0.readLine()     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L3a
            boolean r4 = com.alipay.security.mobile.module.a.a.a(r2)     // Catch: java.lang.Throwable -> L41
            if (r4 != 0) goto L11
            java.lang.String r4 = ":"
            java.lang.String[] r2 = r2.split(r4)     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L11
            int r4 = r2.length     // Catch: java.lang.Throwable -> L41
            r5 = 1
            if (r4 <= r5) goto L11
            r4 = 0
            r4 = r2[r4]     // Catch: java.lang.Throwable -> L41
            java.lang.String r6 = "BogoMIPS"
            boolean r4 = r4.contains(r6)     // Catch: java.lang.Throwable -> L41
            if (r4 == 0) goto L11
            r2 = r2[r5]     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r2.trim()     // Catch: java.lang.Throwable -> L41
        L3a:
            r3.close()     // Catch: java.lang.Throwable -> L3d
        L3d:
            r0.close()     // Catch: java.lang.Throwable -> L52
            goto L52
        L41:
            r2 = r0
            goto L46
        L43:
            goto L46
        L45:
            r3 = r2
        L46:
            if (r3 == 0) goto L4d
            r3.close()     // Catch: java.lang.Throwable -> L4c
            goto L4d
        L4c:
        L4d:
            if (r2 == 0) goto L52
            r2.close()     // Catch: java.lang.Throwable -> L52
        L52:
            return r1
    }

    private static java.lang.String z() {
            java.lang.String r0 = ""
            android.bluetooth.BluetoothAdapter r1 = android.bluetooth.BluetoothAdapter.getDefaultAdapter()     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto Lf
            boolean r2 = r1.isEnabled()     // Catch: java.lang.Throwable -> L15
            if (r2 != 0) goto Lf
            return r0
        Lf:
            java.lang.String r2 = r1.getAddress()     // Catch: java.lang.Throwable -> L15
            goto L16
        L14:
            r1 = 0
        L15:
            r2 = r0
        L16:
            if (r2 == 0) goto L20
            java.lang.String r3 = "00:00:00:00:00"
            boolean r3 = r2.endsWith(r3)
            if (r3 == 0) goto L25
        L20:
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L25
            goto L26
        L25:
            r1 = r2
        L26:
            if (r1 != 0) goto L29
            goto L2a
        L29:
            r0 = r1
        L2a:
            return r0
    }

    public final java.lang.String f() {
            r2 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = "/sys/devices/system/cpu/"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
            com.alipay.security.mobile.module.b.c r1 = new com.alipay.security.mobile.module.b.c     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            java.io.File[] r0 = r0.listFiles(r1)     // Catch: java.lang.Throwable -> L16
            int r0 = r0.length     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L16
            return r0
        L16:
            java.lang.String r0 = "1"
            return r0
    }
}
