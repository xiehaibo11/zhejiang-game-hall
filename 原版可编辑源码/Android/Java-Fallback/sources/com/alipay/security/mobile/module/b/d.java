package com.alipay.security.mobile.module.b;

public final class d {
    private static com.alipay.security.mobile.module.b.d a;

    static {
            com.alipay.security.mobile.module.b.d r0 = new com.alipay.security.mobile.module.b.d
            r0.<init>()
            com.alipay.security.mobile.module.b.d.a = r0
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.security.mobile.module.b.d a() {
            com.alipay.security.mobile.module.b.d r0 = com.alipay.security.mobile.module.b.d.a
            return r0
    }

    private static java.lang.String a(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L27
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L27
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L27
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L27
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L27
            r2[r5] = r7     // Catch: java.lang.Exception -> L27
            r2[r6] = r8     // Catch: java.lang.Exception -> L27
            java.lang.Object r7 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L27
            return r7
        L27:
            return r8
    }

    public static boolean a(android.content.Context r7) {
            r0 = 0
            java.lang.String r1 = android.os.Build.HARDWARE     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = "goldfish"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L66
            r2 = 1
            if (r1 != 0) goto L65
            java.lang.String r1 = android.os.Build.PRODUCT     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "sdk"
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Exception -> L66
            if (r1 != 0) goto L65
            java.lang.String r1 = android.os.Build.FINGERPRINT     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "generic"
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Exception -> L66
            if (r1 == 0) goto L21
            goto L65
        L21:
            java.lang.String r1 = "phone"
            java.lang.Object r1 = r7.getSystemService(r1)     // Catch: java.lang.Exception -> L66
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Exception -> L66
            if (r1 == 0) goto L56
            java.lang.String r1 = r1.getDeviceId()     // Catch: java.lang.Exception -> L66
            if (r1 == 0) goto L52
            int r3 = r1.length()     // Catch: java.lang.Exception -> L66
            if (r3 != 0) goto L38
            goto L52
        L38:
            r4 = 0
        L39:
            if (r4 >= r3) goto L52
            char r5 = r1.charAt(r4)     // Catch: java.lang.Exception -> L66
            boolean r5 = java.lang.Character.isWhitespace(r5)     // Catch: java.lang.Exception -> L66
            if (r5 != 0) goto L4f
            char r5 = r1.charAt(r4)     // Catch: java.lang.Exception -> L66
            r6 = 48
            if (r5 == r6) goto L4f
            r1 = 0
            goto L53
        L4f:
            int r4 = r4 + 1
            goto L39
        L52:
            r1 = 1
        L53:
            if (r1 == 0) goto L56
            return r2
        L56:
            android.content.ContentResolver r7 = r7.getContentResolver()     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "android_id"
            java.lang.String r7 = android.provider.Settings.Secure.getString(r7, r1)     // Catch: java.lang.Exception -> L66
            boolean r7 = com.alipay.security.mobile.module.a.a.a(r7)     // Catch: java.lang.Exception -> L66
            return r7
        L65:
            return r2
        L66:
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = "android"
            return r0
    }

    public static boolean c() {
            r0 = 5
            java.lang.String[] r1 = new java.lang.String[r0]
            r2 = 0
            java.lang.String r3 = "/system/bin/"
            r1[r2] = r3
            r3 = 1
            java.lang.String r4 = "/system/xbin/"
            r1[r3] = r4
            r4 = 2
            java.lang.String r5 = "/system/sbin/"
            r1[r4] = r5
            r4 = 3
            java.lang.String r5 = "/sbin/"
            r1[r4] = r5
            r4 = 4
            java.lang.String r5 = "/vendor/bin/"
            r1[r4] = r5
            r4 = 0
        L1d:
            if (r4 >= r0) goto L41
            java.io.File r5 = new java.io.File     // Catch: java.lang.Exception -> L41
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r6.<init>()     // Catch: java.lang.Exception -> L41
            r7 = r1[r4]     // Catch: java.lang.Exception -> L41
            r6.append(r7)     // Catch: java.lang.Exception -> L41
            java.lang.String r7 = "su"
            r6.append(r7)     // Catch: java.lang.Exception -> L41
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L41
            r5.<init>(r6)     // Catch: java.lang.Exception -> L41
            boolean r5 = r5.exists()     // Catch: java.lang.Exception -> L41
            if (r5 == 0) goto L3e
            return r3
        L3e:
            int r4 = r4 + 1
            goto L1d
        L41:
            return r2
    }

    public static java.lang.String d() {
            java.lang.String r0 = android.os.Build.BOARD
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = android.os.Build.BRAND
            return r0
    }

    public static java.lang.String f() {
            java.lang.String r0 = android.os.Build.DEVICE
            return r0
    }

    public static java.lang.String g() {
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
    }

    public static java.lang.String h() {
            java.lang.String r0 = android.os.Build.VERSION.INCREMENTAL
            return r0
    }

    public static java.lang.String i() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public static java.lang.String j() {
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    public static java.lang.String k() {
            java.lang.String r0 = android.os.Build.PRODUCT
            return r0
    }

    public static java.lang.String l() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            return r0
    }

    public static java.lang.String m() {
            java.lang.String r0 = android.os.Build.VERSION.SDK
            return r0
    }

    public static java.lang.String n() {
            java.lang.String r0 = android.os.Build.TAGS
            return r0
    }

    public static java.lang.String o() {
            java.lang.String r0 = "ro.kernel.qemu"
            java.lang.String r1 = "0"
            java.lang.String r0 = a(r0, r1)
            return r0
    }
}
