package com.kuaishou.weapon.p0;

public class bk {
    public bk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String A() {
            java.lang.String r0 = "persist.service.bdroid.bdaddr"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Lf
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        Le:
            return r0
        Lf:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String B() {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "get"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L29
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L29
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L29
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = "gsm.version.baseband"
            r2[r5] = r3     // Catch: java.lang.Throwable -> L29
            java.lang.Object r0 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L29
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L29
            if (r1 == 0) goto L28
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        L28:
            return r0
        L29:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String C() {
            int r0 = android.hardware.Camera.getNumberOfCameras()     // Catch: java.lang.Throwable -> L11
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11
            r1.<init>()     // Catch: java.lang.Throwable -> L11
            r1.append(r0)     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L11
            return r0
        L11:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String D() {
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L28
            java.io.File r1 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L28
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L28
            long r0 = r0.getTotalBytes()     // Catch: java.lang.Throwable -> L28
            r2 = 20
            long r0 = r0 >> r2
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L28
            r1 = 1149239296(0x44800000, float:1024.0)
            float r0 = r0 / r1
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L28
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)     // Catch: java.lang.Throwable -> L28
            r1 = 2
            r2 = 4
            java.math.BigDecimal r0 = r0.setScale(r1, r2)     // Catch: java.lang.Throwable -> L28
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L28
            return r0
        L28:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String E() {
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L28
            java.io.File r1 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L28
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L28
            long r0 = r0.getAvailableBytes()     // Catch: java.lang.Throwable -> L28
            r2 = 20
            long r0 = r0 >> r2
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L28
            r1 = 1149239296(0x44800000, float:1024.0)
            float r0 = r0 / r1
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L28
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)     // Catch: java.lang.Throwable -> L28
            r1 = 2
            r2 = 4
            java.math.BigDecimal r0 = r0.setScale(r1, r2)     // Catch: java.lang.Throwable -> L28
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L28
            return r0
        L28:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String F() {
            java.lang.String r0 = "mounted"
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L39
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L36
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L36
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L39
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L39
            long r0 = r1.getTotalBytes()     // Catch: java.lang.Throwable -> L39
            r2 = 20
            long r0 = r0 >> r2
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L39
            r1 = 1149239296(0x44800000, float:1024.0)
            float r0 = r0 / r1
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L39
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)     // Catch: java.lang.Throwable -> L39
            r1 = 2
            r2 = 4
            java.math.BigDecimal r0 = r0.setScale(r1, r2)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L39
            return r0
        L36:
            java.lang.String r0 = "RISK_AUTH_FAILED"
            return r0
        L39:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String G() {
            java.lang.String r0 = "mounted"
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L39
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L36
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L36
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L39
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L39
            long r0 = r1.getAvailableBytes()     // Catch: java.lang.Throwable -> L39
            r2 = 20
            long r0 = r0 >> r2
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L39
            r1 = 1149239296(0x44800000, float:1024.0)
            float r0 = r0 / r1
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L39
            java.math.BigDecimal r0 = java.math.BigDecimal.valueOf(r0)     // Catch: java.lang.Throwable -> L39
            r1 = 2
            r2 = 4
            java.math.BigDecimal r0 = r0.setScale(r1, r2)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L39
            return r0
        L36:
            java.lang.String r0 = "RISK_AUTH_FAILED"
            return r0
        L39:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static long H() {
            java.io.FileReader r0 = new java.io.FileReader     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "/proc/meminfo"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L35
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L35
            r2 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r0, r2)     // Catch: java.lang.Throwable -> L35
        Le:
            java.lang.String r0 = r1.readLine()     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L31
            java.lang.String r2 = "MemTotal"
            boolean r2 = r0.contains(r2)     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto Le
            java.lang.String r2 = "\\s+"
            java.lang.String[] r0 = r0.split(r2)     // Catch: java.lang.Throwable -> L36
            r2 = 1
            r0 = r0[r2]     // Catch: java.lang.Throwable -> L36
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L36
            long r2 = r0.longValue()     // Catch: java.lang.Throwable -> L36
            r1.close()     // Catch: java.io.IOException -> L30
        L30:
            return r2
        L31:
            r1.close()     // Catch: java.io.IOException -> L39
            goto L39
        L35:
            r1 = 0
        L36:
            if (r1 == 0) goto L39
            goto L31
        L39:
            r0 = 0
            return r0
    }

    public static java.lang.String I() {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> Lc
            java.lang.String r1 = "/system/bin/app_process"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = com.kuaishou.weapon.p0.f.a(r0)     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String J() {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "/system/bin/servicemanager"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L18
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            boolean r1 = r0.canRead()     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            java.lang.String r0 = com.kuaishou.weapon.p0.f.a(r0)     // Catch: java.lang.Throwable -> L18
            return r0
        L18:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String K() {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "/system/framework/framework.jar"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L18
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            boolean r1 = r0.canRead()     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            java.lang.String r0 = com.kuaishou.weapon.p0.f.a(r0)     // Catch: java.lang.Throwable -> L18
            return r0
        L18:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String L() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r0 < r1) goto Lb
            java.lang.String r0 = android.os.Build.getRadioVersion()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    private static float a(android.util.DisplayMetrics r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            float r1 = r1.xdpi     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            return r0
    }

    public static int a(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Throwable -> L11
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Throwable -> L11
            if (r1 != 0) goto Lc
            r1 = -1
            return r1
        Lc:
            int r1 = r1.getPhoneType()     // Catch: java.lang.Throwable -> L11
            return r1
        L11:
            r1 = -2
            return r1
    }

    public static java.lang.String a() {
            java.lang.String r0 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    private static float b(android.util.DisplayMetrics r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            float r1 = r1.ydpi     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String b(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1a
            r1 = 17
            if (r0 < r1) goto Lb
            java.lang.String r2 = android.webkit.WebSettings.getDefaultUserAgent(r2)     // Catch: java.lang.Throwable -> Lb
            goto L11
        Lb:
            java.lang.String r2 = "http.agent"
            java.lang.String r2 = java.lang.System.getProperty(r2)     // Catch: java.lang.Throwable -> L1a
        L11:
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L19
            java.lang.String r2 = "RISK_GET_FIELD_EMPTY"
        L19:
            return r2
        L1a:
            java.lang.String r2 = "RISK_EXCEPTION_HAPPEN"
            return r2
    }

    public static java.lang.String c() {
            java.lang.String r0 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String c(android.content.Context r7) {
            java.lang.String r0 = ""
            java.lang.String r1 = "window"
            java.lang.Object r1 = r7.getSystemService(r1)     // Catch: java.lang.Throwable -> Le0
            android.view.WindowManager r1 = (android.view.WindowManager) r1     // Catch: java.lang.Throwable -> Le0
            android.view.Display r2 = r1.getDefaultDisplay()     // Catch: java.lang.Throwable -> Le0
            android.util.DisplayMetrics r3 = new android.util.DisplayMetrics     // Catch: java.lang.Throwable -> Le0
            r3.<init>()     // Catch: java.lang.Throwable -> Le0
            r2.getMetrics(r3)     // Catch: java.lang.Throwable -> Le0
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Le0
            r4 = 31
            r5 = 0
            if (r3 < r4) goto L32
            android.view.WindowMetrics r1 = r1.getMaximumWindowMetrics()     // Catch: java.lang.Throwable -> Le0
            android.graphics.Rect r2 = r1.getBounds()     // Catch: java.lang.Throwable -> Le0
            int r5 = r2.width()     // Catch: java.lang.Throwable -> Le0
            android.graphics.Rect r1 = r1.getBounds()     // Catch: java.lang.Throwable -> Le0
            int r1 = r1.height()     // Catch: java.lang.Throwable -> Le0
            goto L7f
        L32:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Le0
            r3 = 17
            if (r1 < r3) goto L45
            android.graphics.Point r1 = new android.graphics.Point     // Catch: java.lang.Throwable -> Le0
            r1.<init>()     // Catch: java.lang.Throwable -> Le0
            r2.getRealSize(r1)     // Catch: java.lang.Throwable -> Le0
            int r5 = r1.x     // Catch: java.lang.Throwable -> Le0
            int r1 = r1.y     // Catch: java.lang.Throwable -> Le0
            goto L7f
        L45:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Le0
            if (r1 >= r3) goto L7e
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Le0
            r3 = 14
            if (r1 < r3) goto L7e
            java.lang.Class<android.view.Display> r1 = android.view.Display.class
            java.lang.String r3 = "getRawHeight"
            java.lang.Class[] r4 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> Le0
            java.lang.reflect.Method r1 = r1.getMethod(r3, r4)     // Catch: java.lang.Throwable -> Le0
            java.lang.Class<android.view.Display> r3 = android.view.Display.class
            java.lang.String r4 = "getRawWidth"
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> Le0
            java.lang.reflect.Method r3 = r3.getMethod(r4, r6)     // Catch: java.lang.Throwable -> Le0
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Le0
            java.lang.Object r3 = r3.invoke(r2, r4)     // Catch: java.lang.Throwable -> Le0
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> Le0
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> Le0
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Le0
            java.lang.Object r1 = r1.invoke(r2, r4)     // Catch: java.lang.Throwable -> Le0
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> Le0
            int r5 = r1.intValue()     // Catch: java.lang.Throwable -> Le0
            r1 = r5
            r5 = r3
            goto L7f
        L7e:
            r1 = r5
        L7f:
            android.util.DisplayMetrics r2 = j(r7)     // Catch: java.lang.Throwable -> Le0
            float r2 = a(r2)     // Catch: java.lang.Throwable -> Le0
            android.util.DisplayMetrics r7 = j(r7)     // Catch: java.lang.Throwable -> Le0
            float r7 = b(r7)     // Catch: java.lang.Throwable -> Le0
            r3 = 0
            int r4 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r4 == 0) goto Le0
            int r3 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r3 != 0) goto L99
            goto Le0
        L99:
            float r3 = (float) r5     // Catch: java.lang.Throwable -> Le0
            float r3 = r3 / r2
            r2 = 1076006748(0x40228f5c, float:2.54)
            float r3 = r3 * r2
            int r3 = java.lang.Math.round(r3)     // Catch: java.lang.Throwable -> Le0
            int r3 = r3 * 10
            float r1 = (float) r1     // Catch: java.lang.Throwable -> Le0
            float r1 = r1 / r7
            float r1 = r1 * r2
            int r7 = java.lang.Math.round(r1)     // Catch: java.lang.Throwable -> Le0
            int r7 = r7 * 10
            java.lang.String r1 = "mm"
            java.lang.String r2 = "mm * "
            if (r3 <= r7) goto Lca
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le0
            r4.<init>()     // Catch: java.lang.Throwable -> Le0
            r4.append(r7)     // Catch: java.lang.Throwable -> Le0
            r4.append(r2)     // Catch: java.lang.Throwable -> Le0
            r4.append(r3)     // Catch: java.lang.Throwable -> Le0
            r4.append(r1)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> Le0
            return r7
        Lca:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le0
            r4.<init>()     // Catch: java.lang.Throwable -> Le0
            r4.append(r3)     // Catch: java.lang.Throwable -> Le0
            r4.append(r2)     // Catch: java.lang.Throwable -> Le0
            r4.append(r7)     // Catch: java.lang.Throwable -> Le0
            r4.append(r1)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> Le0
            return r7
        Le0:
            return r0
    }

    public static java.lang.String d() {
            java.lang.String r0 = android.os.Build.HARDWARE     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String d(android.content.Context r5) {
            java.lang.String r0 = "window"
            java.lang.Object r5 = r5.getSystemService(r0)     // Catch: java.lang.Throwable -> La7
            android.view.WindowManager r5 = (android.view.WindowManager) r5     // Catch: java.lang.Throwable -> La7
            android.view.Display r0 = r5.getDefaultDisplay()     // Catch: java.lang.Throwable -> La7
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Throwable -> La7
            r1.<init>()     // Catch: java.lang.Throwable -> La7
            r0.getMetrics(r1)     // Catch: java.lang.Throwable -> La7
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La7
            r2 = 31
            r3 = 0
            if (r1 < r2) goto L30
            android.view.WindowMetrics r5 = r5.getMaximumWindowMetrics()     // Catch: java.lang.Throwable -> La7
            android.graphics.Rect r0 = r5.getBounds()     // Catch: java.lang.Throwable -> La7
            int r3 = r0.width()     // Catch: java.lang.Throwable -> La7
            android.graphics.Rect r5 = r5.getBounds()     // Catch: java.lang.Throwable -> La7
            int r5 = r5.height()     // Catch: java.lang.Throwable -> La7
            goto L7d
        L30:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La7
            r1 = 17
            if (r5 < r1) goto L43
            android.graphics.Point r5 = new android.graphics.Point     // Catch: java.lang.Throwable -> La7
            r5.<init>()     // Catch: java.lang.Throwable -> La7
            r0.getRealSize(r5)     // Catch: java.lang.Throwable -> La7
            int r3 = r5.x     // Catch: java.lang.Throwable -> La7
            int r5 = r5.y     // Catch: java.lang.Throwable -> La7
            goto L7d
        L43:
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La7
            if (r5 >= r1) goto L7c
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La7
            r1 = 14
            if (r5 < r1) goto L7c
            java.lang.Class<android.view.Display> r5 = android.view.Display.class
            java.lang.String r1 = "getRawHeight"
            java.lang.Class[] r2 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> La7
            java.lang.reflect.Method r5 = r5.getMethod(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.Class<android.view.Display> r1 = android.view.Display.class
            java.lang.String r2 = "getRawWidth"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> La7
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> La7
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> La7
            java.lang.Object r1 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> La7
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> La7
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> La7
            java.lang.Object r5 = r5.invoke(r0, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> La7
            int r3 = r5.intValue()     // Catch: java.lang.Throwable -> La7
            r5 = r3
            r3 = r1
            goto L7d
        L7c:
            r5 = r3
        L7d:
            java.lang.String r0 = "*"
            if (r3 <= r5) goto L94
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            r1.<init>()     // Catch: java.lang.Throwable -> La7
            r1.append(r5)     // Catch: java.lang.Throwable -> La7
            r1.append(r0)     // Catch: java.lang.Throwable -> La7
            r1.append(r3)     // Catch: java.lang.Throwable -> La7
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> La7
            return r5
        L94:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            r1.<init>()     // Catch: java.lang.Throwable -> La7
            r1.append(r3)     // Catch: java.lang.Throwable -> La7
            r1.append(r0)     // Catch: java.lang.Throwable -> La7
            r1.append(r5)     // Catch: java.lang.Throwable -> La7
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> La7
            return r5
        La7:
            java.lang.String r5 = ""
            return r5
    }

    public static java.lang.String e() {
            java.lang.String r0 = android.os.Build.PRODUCT     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String e(android.content.Context r0) {
            android.util.DisplayMetrics r0 = j(r0)
            if (r0 == 0) goto Ld
            int r0 = r0.densityDpi
            java.lang.String r0 = java.lang.Integer.toString(r0)
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public static java.lang.String f() {
            java.lang.String r0 = android.os.Build.DEVICE     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String f(android.content.Context r7) {
            r7 = 0
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "cat /proc/version"
            java.lang.Process r0 = r0.exec(r1)     // Catch: java.lang.Throwable -> L6a
            java.io.InputStream r1 = r0.getInputStream()     // Catch: java.lang.Throwable -> L6b
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L68
            int r3 = r1.read(r2)     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = "RISK_GET_FIELD_EMPTY"
            if (r3 > 0) goto L26
            if (r1 == 0) goto L20
            r1.close()     // Catch: java.lang.Throwable -> L20
        L20:
            if (r0 == 0) goto L25
            r0.destroy()
        L25:
            return r4
        L26:
            byte[] r5 = new byte[r3]     // Catch: java.lang.Throwable -> L68
            r6 = 0
            java.lang.System.arraycopy(r2, r6, r5, r6, r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = "utf-8"
            r2.<init>(r5, r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = "version"
            int r3 = r2.indexOf(r3)     // Catch: java.lang.Throwable -> L68
            r5 = -1
            if (r3 == r5) goto L4c
            java.lang.String r2 = r2.substring(r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = " "
            java.lang.String[] r2 = r2.split(r3)     // Catch: java.lang.Throwable -> L68
            int r3 = r2.length     // Catch: java.lang.Throwable -> L68
            r5 = 1
            if (r5 >= r3) goto L4c
            r7 = r2[r5]     // Catch: java.lang.Throwable -> L68
        L4c:
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L5d
            if (r1 == 0) goto L57
            r1.close()     // Catch: java.lang.Throwable -> L57
        L57:
            if (r0 == 0) goto L5c
            r0.destroy()
        L5c:
            return r4
        L5d:
            if (r1 == 0) goto L62
            r1.close()     // Catch: java.lang.Throwable -> L62
        L62:
            if (r0 == 0) goto L67
            r0.destroy()
        L67:
            return r7
        L68:
            r7 = r1
            goto L6b
        L6a:
            r0 = r7
        L6b:
            if (r7 == 0) goto L70
            r7.close()     // Catch: java.lang.Throwable -> L70
        L70:
            if (r0 == 0) goto L75
            r0.destroy()
        L75:
            java.lang.String r7 = "RISK_EXCEPTION_HAPPEN"
            return r7
    }

    public static int g(android.content.Context r1) {
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = "screen_off_timeout"
            int r1 = android.provider.Settings.System.getInt(r1, r0)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = -2
            return r1
    }

    public static java.lang.String g() {
            java.lang.String r0 = android.os.Build.BOARD     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static int h(android.content.Context r1) {
            java.lang.String r0 = "audio"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Exception -> Ld
            android.media.AudioManager r1 = (android.media.AudioManager) r1     // Catch: java.lang.Exception -> Ld
            int r1 = r1.getRingerMode()     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = -2
            return r1
    }

    public static java.lang.String h() {
            java.lang.String r0 = android.os.Build.HOST     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static int i(android.content.Context r4) {
            java.lang.Class<android.net.ConnectivityManager> r0 = android.net.ConnectivityManager.class
            java.lang.String r1 = "getMobileDataEnabled"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L27
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L27
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = "connectivity"
            java.lang.Object r4 = r4.getSystemService(r3)     // Catch: java.lang.Throwable -> L27
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4     // Catch: java.lang.Throwable -> L27
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L27
            java.lang.Object r4 = r0.invoke(r4, r3)     // Catch: java.lang.Throwable -> L27
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Throwable -> L27
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Throwable -> L27
            if (r4 == 0) goto L26
            return r2
        L26:
            return r1
        L27:
            r4 = -2
            return r4
    }

    public static java.lang.String i() {
            java.lang.String r0 = android.os.Build.USER     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    private static android.util.DisplayMetrics j(android.content.Context r1) {
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Throwable -> L15
            android.view.WindowManager r1 = (android.view.WindowManager) r1     // Catch: java.lang.Throwable -> L15
            android.view.Display r1 = r1.getDefaultDisplay()     // Catch: java.lang.Throwable -> L15
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics     // Catch: java.lang.Throwable -> L15
            r0.<init>()     // Catch: java.lang.Throwable -> L15
            r1.getMetrics(r0)     // Catch: java.lang.Throwable -> L15
            return r0
        L15:
            r1 = 0
            return r1
    }

    public static java.lang.String j() {
            java.lang.String r0 = android.os.Build.TYPE     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String k() {
            java.lang.String r0 = android.os.Build.TAGS     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String l() {
            java.lang.String r0 = android.os.Build.BOOTLOADER     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String m() {
            java.lang.String r0 = android.os.Build.ID     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String n() {
            java.lang.String r0 = android.os.Build.DISPLAY     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String o() {
            java.lang.String r0 = android.os.Build.VERSION.CODENAME     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String p() {
            java.lang.String r0 = "rild.libpath"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Lf
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        Le:
            return r0
        Lf:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String q() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static int r() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3
            return r0
        L3:
            r0 = -2
            return r0
    }

    public static java.lang.String s() {
            java.lang.String r0 = android.os.Build.FINGERPRINT     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String t() {
            java.lang.String r0 = "http.agent"
            java.lang.String r0 = java.lang.System.getProperty(r0)     // Catch: java.lang.Throwable -> Lf
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        Le:
            return r0
        Lf:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String u() {
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "uname -a"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L3c
            int r2 = r1.waitFor()     // Catch: java.lang.Throwable -> L3a
            if (r2 != 0) goto L16
            java.io.InputStream r2 = r1.getInputStream()     // Catch: java.lang.Throwable -> L3a
            goto L1a
        L16:
            java.io.InputStream r2 = r1.getErrorStream()     // Catch: java.lang.Throwable -> L3a
        L1a:
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3e
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L3e
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L3e
            r5 = 512(0x200, float:7.17E-43)
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r0 = r3.readLine()     // Catch: java.lang.Throwable -> L38
            r3.close()     // Catch: java.lang.Throwable -> L2d
        L2d:
            if (r2 == 0) goto L32
            r2.close()     // Catch: java.lang.Throwable -> L32
        L32:
            if (r1 == 0) goto L37
            r1.destroy()
        L37:
            return r0
        L38:
            r0 = r3
            goto L3e
        L3a:
            r2 = r0
            goto L3e
        L3c:
            r1 = r0
            r2 = r1
        L3e:
            if (r0 == 0) goto L43
            r0.close()     // Catch: java.lang.Throwable -> L43
        L43:
            if (r2 == 0) goto L48
            r2.close()     // Catch: java.lang.Throwable -> L48
        L48:
            if (r1 == 0) goto L4d
            r1.destroy()
        L4d:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String v() {
            java.lang.String r0 = android.os.Build.RADIO     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String w() {
            java.lang.String r0 = "ro.build.description"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Lf
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        Le:
            return r0
        Lf:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String x() {
            java.lang.String r0 = android.os.Build.VERSION.INCREMENTAL     // Catch: java.lang.Throwable -> Lb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r1 == 0) goto La
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        La:
            return r0
        Lb:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String y() {
            java.lang.String r0 = "ro.product.name"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Lf
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        Le:
            return r0
        Lf:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }

    public static java.lang.String z() {
            java.lang.String r0 = "dalvik.vm.heapgrowthlimit"
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.a(r0)     // Catch: java.lang.Throwable -> Lf
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            java.lang.String r0 = "RISK_GET_FIELD_EMPTY"
        Le:
            return r0
        Lf:
            java.lang.String r0 = "RISK_EXCEPTION_HAPPEN"
            return r0
    }
}
