package com.alipay.sdk.m.a0;

public final class e {
    public static com.alipay.sdk.m.a0.e a;

    static {
            com.alipay.sdk.m.a0.e r0 = new com.alipay.sdk.m.a0.e
            r0.<init>()
            com.alipay.sdk.m.a0.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.a0.e a() {
            com.alipay.sdk.m.a0.e r0 = com.alipay.sdk.m.a0.e.a
            return r0
    }

    public static java.lang.String a(java.lang.String r7, java.lang.String r8) {
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

    public static java.lang.String b() {
            java.lang.String r0 = "android"
            return r0
    }

    public static boolean c() {
            java.lang.String r0 = "/system/bin/"
            java.lang.String r1 = "/system/xbin/"
            java.lang.String r2 = "/system/sbin/"
            java.lang.String r3 = "/sbin/"
            java.lang.String r4 = "/vendor/bin/"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            r1 = 0
            r2 = 0
        L10:
            r3 = 5
            if (r2 >= r3) goto L36
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L36
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L36
            r4.<init>()     // Catch: java.lang.Exception -> L36
            r5 = r0[r2]     // Catch: java.lang.Exception -> L36
            r4.append(r5)     // Catch: java.lang.Exception -> L36
            java.lang.String r5 = "su"
            r4.append(r5)     // Catch: java.lang.Exception -> L36
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L36
            r3.<init>(r4)     // Catch: java.lang.Exception -> L36
            boolean r3 = r3.exists()     // Catch: java.lang.Exception -> L36
            if (r3 == 0) goto L33
            r0 = 1
            return r0
        L33:
            int r2 = r2 + 1
            goto L10
        L36:
            return r1
    }

    public static boolean d() {
            r0 = 0
            java.lang.String r1 = android.os.Build.HARDWARE     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "goldfish"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L22
            if (r1 != 0) goto L21
            java.lang.String r1 = android.os.Build.PRODUCT     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "sdk"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L22
            if (r1 != 0) goto L21
            java.lang.String r1 = android.os.Build.FINGERPRINT     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "generic"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L20
            goto L21
        L20:
            return r0
        L21:
            r0 = 1
        L22:
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = android.os.Build.BOARD
            return r0
    }

    public static java.lang.String f() {
            java.lang.String r0 = android.os.Build.BRAND
            return r0
    }

    public static java.lang.String g() {
            java.lang.String r0 = android.os.Build.DEVICE
            return r0
    }

    public static java.lang.String h() {
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
    }

    public static java.lang.String i() {
            java.lang.String r0 = android.os.Build.VERSION.INCREMENTAL
            return r0
    }

    public static java.lang.String j() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public static java.lang.String k() {
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    public static java.lang.String l() {
            java.lang.String r0 = android.os.Build.PRODUCT
            return r0
    }

    public static java.lang.String m() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            return r0
    }

    public static java.lang.String n() {
            java.lang.String r0 = android.os.Build.VERSION.SDK
            return r0
    }

    public static java.lang.String o() {
            java.lang.String r0 = android.os.Build.TAGS
            return r0
    }

    public static java.lang.String p() {
            java.lang.String r0 = "ro.kernel.qemu"
            java.lang.String r1 = "0"
            java.lang.String r0 = a(r0, r1)
            return r0
    }
}
