package com.mbridge.msdk.foundation.tools;

public class e {
    private static java.lang.String a = "";
    private static java.lang.String b = "";
    private static int c = -1;
    private static java.lang.String d = "";
    private static java.lang.String e = "";
    private static java.lang.String f = "";
    private static org.json.JSONObject g = null;
    private static java.lang.String h = "";
    private static java.lang.String i = "";
    private static java.lang.String j = "";
    private static java.lang.String k = "";
    private static java.lang.String l = "";
    private static java.lang.String m;
    private static java.lang.String n;

    static {
            return
    }

    public static int a() {
            r0 = 0
            return r0
    }

    public static java.lang.String a(android.content.Context r2) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_device_id"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 != 0) goto Lf
            return r1
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L18
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.a
            return r2
        L18:
            if (r2 != 0) goto L1b
            return r1
        L1b:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L26
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.a
            return r2
        L26:
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.getOaid(r2)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.tools.e.a = r2     // Catch: java.lang.Throwable -> L35
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L35
            if (r2 != 0) goto L3f
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.a     // Catch: java.lang.Throwable -> L35
            return r2
        L35:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0, r2)
        L3f:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.a
            return r2
    }

    public static void a(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.e.k = r0
            return
    }

    public static java.lang.String b() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.CPU_ABI2
            return r0
    }

    public static java.lang.String b(android.content.Context r3) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_imei_mac"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 != 0) goto Lf
            return r1
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L18
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.e.k
            return r3
        L18:
            if (r3 != 0) goto L1b
            return r1
        L1b:
            java.lang.String r3 = com.mbridge.msdk.optimize.SensitiveDataUtil.getIMEI(r3)     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.foundation.tools.e.k = r3     // Catch: java.lang.Throwable -> L2a
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2a
            if (r3 != 0) goto L34
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.e.k     // Catch: java.lang.Throwable -> L2a
            return r3
        L2a:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r2 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0, r3)
        L34:
            return r1
    }

    public static void b(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.e.l = r0
            return
    }

    public static java.lang.String c() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.CPU_ABI
            return r0
    }

    public static java.lang.String c(android.content.Context r3) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_imei_mac"
            boolean r0 = r0.a(r1)
            java.lang.String r1 = ""
            if (r0 != 0) goto Lf
            return r1
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L18
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.e.l
            return r3
        L18:
            if (r3 != 0) goto L1b
            return r1
        L1b:
            java.lang.String r3 = com.mbridge.msdk.optimize.SensitiveDataUtil.getImsi(r3)     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.foundation.tools.e.l = r3     // Catch: java.lang.Throwable -> L2a
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2a
            if (r3 != 0) goto L34
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.e.l     // Catch: java.lang.Throwable -> L2a
            return r3
        L2a:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r2 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0, r3)
        L34:
            return r1
    }

    public static void c(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.e.e = r0
            return
    }

    public static java.lang.String d() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.TAGS
            return r0
    }

    public static java.lang.String d(android.content.Context r0) {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.i
            return r0
    }

    public static void d(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.e.a = r0
            return
    }

    public static java.lang.String e() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.USER
            return r0
    }

    public static java.lang.String e(android.content.Context r0) {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.j
            return r0
    }

    public static void e(java.lang.String r0) {
            com.mbridge.msdk.foundation.tools.e.d = r0
            return
    }

    public static java.lang.String f() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.RADIO
            return r0
    }

    public static java.lang.String f(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.d
            return r2
        L5:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.d     // Catch: java.lang.Throwable -> L18
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L22
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.getAndroidID(r2)     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.a(r2)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.tools.e.d = r2     // Catch: java.lang.Throwable -> L18
            goto L22
        L18:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0, r2)
        L22:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.d
            return r2
    }

    private static java.lang.String f(java.lang.String r7) {
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2f
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L2f
            if (r1 != 0) goto Lc
            return r0
        Lc:
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "android.os.SystemProperties"
            java.lang.Class r1 = r1.loadClass(r2)     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2f
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L2f
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L2f
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2f
            r3[r6] = r7     // Catch: java.lang.Exception -> L2f
            java.lang.Object r7 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L2f
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L2f
            return r7
        L2f:
            r7 = move-exception
            java.lang.String r7 = r7.toString()
            java.lang.String r1 = "DomainSameDiTool"
            android.util.Log.e(r1, r7)
            return r0
    }

    public static java.lang.String g() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.BOOTLOADER
            return r0
    }

    public static java.lang.String g(android.content.Context r2) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_android_id"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r2 = ""
            return r2
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L18
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.d
            return r2
        L18:
            if (r2 != 0) goto L1d
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.m
            return r2
        L1d:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.m     // Catch: java.lang.Throwable -> L2c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L36
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.getAndroidID(r2)     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.foundation.tools.e.m = r2     // Catch: java.lang.Throwable -> L2c
            goto L36
        L2c:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0, r2)
        L36:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.m
            return r2
    }

    public static java.lang.String h() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.HARDWARE
            return r0
    }

    public static java.lang.String h(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            r0 = 0
            com.mbridge.msdk.foundation.tools.e.n = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L25
            java.lang.String r2 = g(r2)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.foundation.tools.e.n = r2     // Catch: java.lang.Throwable -> L1b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.SameMD5.getUPMD5(r2)     // Catch: java.lang.Throwable -> L1b
            com.mbridge.msdk.foundation.tools.e.n = r2     // Catch: java.lang.Throwable -> L1b
            goto L25
        L1b:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r2)
        L25:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.n
            return r2
    }

    public static java.lang.String i() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.HOST
            return r0
    }

    public static java.lang.String i(android.content.Context r2) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_imei_mac"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r2 = ""
            return r2
        Lf:
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()
            if (r0 != 0) goto L18
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.e
            return r2
        L18:
            if (r2 != 0) goto L1d
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.e
            return r2
        L1d:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.e     // Catch: java.lang.Throwable -> L2c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L36
            java.lang.String r2 = com.mbridge.msdk.optimize.SensitiveDataUtil.getMacAddress(r2)     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.foundation.tools.e.e = r2     // Catch: java.lang.Throwable -> L2c
            goto L36
        L2c:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0, r2)
        L36:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.e.e
            return r2
    }

    public static java.lang.String j() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.VERSION.CODENAME
            return r0
    }

    public static java.lang.String j(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.e.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1e
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = "com.android.vending"
            r2 = 0
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L1d
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.foundation.tools.e.f = r3     // Catch: java.lang.Exception -> L1d
            return r3
        L1d:
            return r0
        L1e:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.e.f
            return r3
    }

    public static int k(android.content.Context r5) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            r1 = -1
            if (r0 != 0) goto Le
            return r1
        Le:
            if (r5 != 0) goto L11
            return r1
        L11:
            r0 = 0
            r2 = 0
            android.content.IntentFilter r3 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L34
            java.lang.String r4 = "android.intent.action.BATTERY_CHANGED"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L34
            android.content.Intent r5 = r5.registerReceiver(r0, r3)     // Catch: java.lang.Exception -> L34
            if (r5 == 0) goto L3e
            android.os.Bundle r0 = r5.getExtras()     // Catch: java.lang.Exception -> L34
            if (r0 == 0) goto L3e
            java.lang.String r0 = "status"
            int r5 = r5.getIntExtra(r0, r1)     // Catch: java.lang.Exception -> L34
            r0 = 2
            if (r5 == r0) goto L32
            r0 = 5
            if (r5 != r0) goto L3e
        L32:
            r2 = 1
            goto L3e
        L34:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            java.lang.String r1 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r5)
        L3e:
            return r2
    }

    public static java.lang.String k() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.VERSION.INCREMENTAL
            return r0
    }

    public static java.lang.String l() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_serial_id"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.SERIAL
            return r0
    }

    public static java.lang.String l(android.content.Context r9) {
            java.lang.String r0 = "DomainSameDiTool"
            java.lang.String r1 = "com.android.internal.os.PowerProfile"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)
            java.lang.String r3 = ""
            if (r2 != 0) goto L13
            return r3
        L13:
            r4 = 0
            if (r9 == 0) goto L18
            return r3
        L18:
            java.lang.Class r2 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r3 = 1
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.reflect.Constructor r2 = r2.getConstructor(r6)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r3[r8] = r9     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Object r9 = r2.newInstance(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r2 = "getBatteryCapacity"
            java.lang.Class[] r3 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Object[] r2 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Object r9 = r1.invoke(r9, r2)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.Double r9 = (java.lang.Double) r9     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            double r4 = r9.doubleValue()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            goto L5c
        L49:
            r9 = move-exception
            goto L4d
        L4b:
            r9 = move-exception
            goto L55
        L4d:
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)
            goto L5c
        L55:
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r9)
        L5c:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r4)
            java.lang.String r0 = " mAh"
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            java.lang.String r9 = java.lang.String.valueOf(r9)
            return r9
    }

    public static int m(android.content.Context r3) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            r1 = -1
            if (r0 != 0) goto Le
            return r1
        Le:
            if (r3 != 0) goto L11
            return r1
        L11:
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L91
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L91
            java.lang.String r3 = r3.getSimOperator()     // Catch: java.lang.Exception -> L91
            java.lang.String r0 = "46000"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "46002"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "46007"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "46008"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "45412"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 == 0) goto L46
            goto L8e
        L46:
            java.lang.String r0 = "46001"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8c
            java.lang.String r0 = "46006"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8c
            java.lang.String r0 = "46009"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 == 0) goto L5f
            goto L8c
        L5f:
            java.lang.String r0 = "46003"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "46005"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "46011"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "45502"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "45507"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r3 == 0) goto L88
            goto L8a
        L88:
            r3 = -2
            goto L8f
        L8a:
            r3 = 2
            goto L8f
        L8c:
            r3 = 1
            goto L8f
        L8e:
            r3 = 0
        L8f:
            r1 = r3
            goto L9b
        L91:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r2 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r0, r3)
        L9b:
            return r1
    }

    public static java.lang.String m() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
    }

    public static int n(android.content.Context r3) {
            java.lang.String r0 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            r2 = -1
            if (r1 != 0) goto L10
            return r2
        L10:
            if (r3 != 0) goto L13
            return r2
        L13:
            java.lang.String r1 = "sensor"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2d
            android.hardware.SensorManager r3 = (android.hardware.SensorManager) r3     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2d
            java.util.List r3 = r3.getSensorList(r2)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2d
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2d
            return r3
        L24:
            r3 = move-exception
            java.lang.String r1 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
            goto L35
        L2d:
            r3 = move-exception
            java.lang.String r1 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
        L35:
            return r2
    }

    public static java.lang.String n() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.BOARD
            return r0
    }

    public static java.lang.String o() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.TYPE
            return r0
    }

    public static java.lang.String o(android.content.Context r8) {
            java.lang.String r0 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)
            java.lang.String r2 = ""
            if (r1 != 0) goto L11
            return r2
        L11:
            if (r8 != 0) goto L14
            return r2
        L14:
            java.lang.String r1 = "input_method"
            java.lang.Object r1 = r8.getSystemService(r1)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            android.view.inputmethod.InputMethodManager r1 = (android.view.inputmethod.InputMethodManager) r1     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.util.List r1 = r1.getInputMethodList()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            r4 = 0
        L26:
            int r5 = r1.size()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            if (r4 >= r5) goto L59
            java.lang.Object r5 = r1.get(r4)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            android.view.inputmethod.InputMethodInfo r5 = (android.view.inputmethod.InputMethodInfo) r5     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            android.content.pm.PackageManager r6 = r8.getPackageManager()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.lang.CharSequence r5 = r5.loadLabel(r6)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            r6.<init>()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.lang.String r7 = "keybroad"
            r6.append(r7)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            r6.append(r4)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            r6.append(r5)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.lang.String r5 = " "
            r6.append(r5)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            r3.append(r5)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            int r4 = r4 + 1
            goto L26
        L59:
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L67
            return r8
        L5e:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r8)
            goto L6f
        L67:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r8)
        L6f:
            return r2
    }

    public static java.lang.String p() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            return r0
    }

    protected static void p(android.content.Context r7) {
            if (r7 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "com.mbridge.msdk.mbjscommon.webEnvCheck.WebEnvCheckEntry"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L23
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = "check"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L23
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L23
            java.lang.reflect.Method r0 = r0.getMethod(r2, r4)     // Catch: java.lang.Exception -> L23
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L23
            r2[r6] = r7     // Catch: java.lang.Exception -> L23
            r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L23
            goto L27
        L23:
            r7 = move-exception
            r7.printStackTrace()
        L27:
            return
    }

    public static int q() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Le
            r0 = -1
            return r0
        Le:
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    public static int r() {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto Le
            r0 = -1
            return r0
        Le:
            r0 = 1
            return r0
    }

    public static java.lang.String s() {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L48
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L2f
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r2 = "authority_general_data"
            boolean r0 = r0.a(r2)
            if (r0 == 0) goto L2a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L1f
            goto L2a
        L1f:
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            java.util.List r0 = java.util.Arrays.asList(r0)
            java.lang.String r0 = r0.toString()
            goto L2c
        L2a:
            java.lang.String r0 = ""
        L2c:
            com.mbridge.msdk.foundation.tools.e.b = r0
            goto L48
        L2f:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = c()
            r0.add(r1)
            java.lang.String r1 = b()
            r0.add(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.e.b = r0
        L48:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.b
            return r0
    }

    public static org.json.JSONObject t() {
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.e.g
            if (r0 != 0) goto Lb
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.foundation.tools.e.g = r0
        Lb:
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.e.g
            int r0 = r0.length()
            if (r0 <= 0) goto L16
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.e.g
            return r0
        L16:
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a.a()     // Catch: org.json.JSONException -> L56
            java.lang.String r1 = "e_c"
            r2 = 0
            boolean r0 = r0.a(r1, r2)     // Catch: org.json.JSONException -> L56
            if (r0 == 0) goto L5a
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.e.g     // Catch: org.json.JSONException -> L56
            java.lang.String r1 = "qemu"
            java.lang.String r3 = "ro.kernel.qemu"
            java.lang.String r3 = f(r3)     // Catch: org.json.JSONException -> L56
            java.lang.String r4 = "1"
            boolean r3 = r4.equals(r3)     // Catch: org.json.JSONException -> L56
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L56
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.e.g     // Catch: org.json.JSONException -> L56
            java.lang.String r1 = "abi"
            java.lang.String r3 = "ro.product.cpu.abi"
            java.lang.String r3 = f(r3)     // Catch: org.json.JSONException -> L56
            if (r3 != 0) goto L43
            goto L52
        L43:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L56
            if (r4 != 0) goto L52
            java.lang.String r4 = "x86"
            boolean r3 = r3.contains(r4)     // Catch: org.json.JSONException -> L56
            if (r3 == 0) goto L52
            r2 = 1
        L52:
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L56
            goto L5a
        L56:
            r0 = move-exception
            r0.printStackTrace()
        L5a:
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.e.g
            return r0
    }

    public static java.lang.String u() {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L42
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.tools.v.t()
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "emuStr:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.t.a(r0)
            com.mbridge.msdk.foundation.tools.e.h = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "_emuBase64String:"
            r0.append(r1)
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.e.h
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
        L42:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.e.h
            return r0
    }
}
