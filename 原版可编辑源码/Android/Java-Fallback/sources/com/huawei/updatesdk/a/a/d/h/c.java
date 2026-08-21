package com.huawei.updatesdk.a.a.d.h;

public class c {
    public static final java.lang.String c = null;
    private static com.huawei.updatesdk.a.a.d.h.c d;
    private static java.lang.String e;
    private int a;
    private int b;

    static {
            com.huawei.updatesdk.a.a.d.h.c r0 = new com.huawei.updatesdk.a.a.d.h.c
            r0.<init>()
            com.huawei.updatesdk.a.a.d.h.c.d = r0
            r0 = 0
            com.huawei.updatesdk.a.a.d.h.c.e = r0
            java.lang.String r0 = "ro.product.brand"
            java.lang.String r1 = ""
            java.lang.String r0 = a(r0, r1)
            com.huawei.updatesdk.a.a.d.h.c.c = r0
            return
    }

    private c() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            r3.b = r0
            java.lang.String r1 = "ro.maple.enable"
            int r1 = a(r1, r0)
            r2 = 1
            if (r1 != r2) goto L13
            r3.a = r2
        L13:
            java.lang.String r1 = "ro.build.version.ark"
            int r0 = a(r1, r0)
            r3.b = r0
            return
    }

    public static int a(java.lang.String r7, int r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r1 = "getInt"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L2f
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L2f
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L2f
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Throwable -> L2f
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L2f
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L2f
            r2[r5] = r7     // Catch: java.lang.Throwable -> L2f
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L2f
            r2[r6] = r7     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r7 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L2f
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L2f
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L2f
            return r7
        L2f:
            r7 = move-exception
            java.lang.String r0 = "DeviceUtil"
            java.lang.String r1 = "Exception while getting system property: "
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1, r7)
            return r8
    }

    static java.lang.String a(android.content.Context r1) {
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.e
            if (r0 != 0) goto L10
            java.util.List r1 = b(r1)
            java.lang.String r0 = ","
            java.lang.String r1 = com.huawei.updatesdk.a.a.d.e.a(r1, r0)
            com.huawei.updatesdk.a.a.d.h.c.e = r1
        L10:
            java.lang.String r1 = com.huawei.updatesdk.a.a.d.h.c.e
            return r1
    }

    public static java.lang.String a(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = ""
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1e
            r1.<init>()     // Catch: java.lang.Exception -> L1e
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L1e
            r2 = 16
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r4, r2)     // Catch: java.lang.Exception -> L1e
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L1e
            r1.append(r3)     // Catch: java.lang.Exception -> L1e
            r1.append(r0)     // Catch: java.lang.Exception -> L1e
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L1e
            return r3
        L1e:
            return r0
    }

    public static java.lang.String a(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L27
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L27
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Throwable -> L27
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L27
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L27
            r2[r5] = r7     // Catch: java.lang.Throwable -> L27
            r2[r6] = r8     // Catch: java.lang.Throwable -> L27
            java.lang.Object r7 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L27
            return r7
        L27:
            r7 = move-exception
            java.lang.String r0 = "DeviceUtil"
            java.lang.String r1 = "Exception while getting system property: "
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1, r7)
            return r8
    }

    public static java.util.List<java.lang.String> a(java.util.List<java.lang.String> r3, java.lang.String[] r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L9:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = a(r1, r4)
            if (r2 != 0) goto L9
            r0.add(r1)
            goto L9
        L1f:
            return r0
    }

    static boolean a(java.lang.String r10, java.lang.String[] r11) {
            int r0 = r11.length
            r1 = 0
            r2 = r1
            r3 = r2
            r4 = r3
            r5 = r4
        L6:
            r6 = 1
            if (r2 >= r0) goto L39
            r7 = r11[r2]
            java.lang.String r8 = "config."
            boolean r9 = r7.startsWith(r8)
            if (r9 == 0) goto L15
            r3 = r6
            goto L1f
        L15:
            java.lang.String r6 = ".config."
            boolean r6 = r7.contains(r6)
            if (r6 != 0) goto L1f
            int r4 = r4 + 1
        L1f:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r8)
            r6.append(r10)
            java.lang.String r6 = r6.toString()
            boolean r6 = r7.endsWith(r6)
            if (r6 == 0) goto L36
            int r5 = r5 + 1
        L36:
            int r2 = r2 + 1
            goto L6
        L39:
            int r3 = r3 + r4
            if (r3 != r5) goto L3d
            r1 = r6
        L3d:
            return r1
    }

    public static java.lang.String b(android.content.Context r4, java.lang.String r5) {
            java.lang.String r4 = a(r4, r5)
            r5 = 0
            r0 = r5
            r1 = r0
        L7:
            int r2 = r4.length()
            r3 = 3
            if (r0 >= r2) goto L1d
            if (r1 >= r3) goto L1d
            char r2 = r4.charAt(r0)
            r3 = 46
            if (r2 != r3) goto L1a
            int r1 = r1 + 1
        L1a:
            int r0 = r0 + 1
            goto L7
        L1d:
            if (r3 != r1) goto L25
            int r0 = r0 + (-1)
            java.lang.String r4 = r4.substring(r5, r0)
        L25:
            return r4
    }

    private static java.util.List<java.lang.String> b(android.content.Context r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            android.content.pm.FeatureInfo[] r4 = r4.getSystemAvailableFeatures()
            if (r4 == 0) goto L23
            int r1 = r4.length
            r2 = 0
        L11:
            if (r2 >= r1) goto L23
            r3 = r4[r2]
            java.lang.String r3 = r3.name
            if (r3 == 0) goto L20
            java.lang.String r3 = com.huawei.updatesdk.a.a.d.c.a(r3)
            r0.add(r3)
        L20:
            int r2 = r2 + 1
            goto L11
        L23:
            return r0
    }

    private static android.util.DisplayMetrics c(android.content.Context r2) {
            java.lang.String r0 = "window"
            java.lang.Object r2 = r2.getSystemService(r0)
            boolean r0 = r2 instanceof android.view.WindowManager
            r1 = 0
            if (r0 == 0) goto Le
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            goto Lf
        Le:
            r2 = r1
        Lf:
            if (r2 == 0) goto L1f
            android.view.Display r2 = r2.getDefaultDisplay()
            if (r2 == 0) goto L1f
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics
            r1.<init>()
            r2.getMetrics(r1)
        L1f:
            return r1
    }

    public static java.lang.String c() {
            java.lang.String r0 = "com.huawei.system.BuildEx"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L1b java.lang.ClassNotFoundException -> L1e java.lang.NoSuchFieldException -> L21 java.lang.IllegalAccessException -> L24
            java.lang.String r1 = "DISPLAY"
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.Throwable -> L1b java.lang.ClassNotFoundException -> L1e java.lang.NoSuchFieldException -> L21 java.lang.IllegalAccessException -> L24
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L1b java.lang.ClassNotFoundException -> L1e java.lang.NoSuchFieldException -> L21 java.lang.IllegalAccessException -> L24
            if (r0 != 0) goto L16
            java.lang.String r0 = android.os.Build.DISPLAY     // Catch: java.lang.Throwable -> L1b java.lang.ClassNotFoundException -> L1e java.lang.NoSuchFieldException -> L21 java.lang.IllegalAccessException -> L24
            goto L1a
        L16:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1b java.lang.ClassNotFoundException -> L1e java.lang.NoSuchFieldException -> L21 java.lang.IllegalAccessException -> L24
        L1a:
            return r0
        L1b:
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
        L1e:
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
        L21:
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
        L24:
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
    }

    public static com.huawei.updatesdk.a.a.d.h.c d() {
            com.huawei.updatesdk.a.a.d.h.c r0 = com.huawei.updatesdk.a.a.d.h.c.d
            return r0
    }

    public static java.util.List<java.lang.String> d(android.content.Context r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            android.content.res.Resources r4 = r4.getResources()
            android.content.res.Configuration r4 = r4.getConfiguration()
            if (r1 < r2) goto L38
            android.os.LocaleList r4 = r4.getLocales()
            r1 = 0
        L18:
            int r2 = r4.size()
            if (r1 >= r2) goto L41
            java.util.Locale r2 = r4.get(r1)
            java.lang.String r2 = r2.getLanguage()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L35
            boolean r3 = r0.contains(r2)
            if (r3 != 0) goto L35
            r0.add(r2)
        L35:
            int r1 = r1 + 1
            goto L18
        L38:
            java.util.Locale r4 = r4.locale
            java.lang.String r4 = r4.getLanguage()
            r0.add(r4)
        L41:
            return r0
    }

    public static java.lang.String e() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r1 = r0.getLanguage()
            java.lang.String r2 = r0.getCountry()
            java.lang.String r3 = r0.getVariant()
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 21
            if (r4 < r5) goto L1b
            java.lang.String r0 = r0.getScript()
            goto L1c
        L1b:
            r0 = 0
        L1c:
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r5 = "_"
            if (r4 == 0) goto L3d
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L3d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r5)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            goto L5b
        L3d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r5)
            r4.append(r0)
            r4.append(r5)
            r4.append(r2)
            r4.append(r5)
            r4.append(r3)
            java.lang.String r0 = r4.toString()
        L5b:
            return r0
    }

    public static java.lang.String e(android.content.Context r2) {
            android.util.DisplayMetrics r2 = c(r2)
            if (r2 == 0) goto L27
            int r0 = r2.widthPixels
            java.lang.String r0 = java.lang.String.valueOf(r0)
            int r2 = r2.heightPixels
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "_"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            goto L29
        L27:
            java.lang.String r2 = ""
        L29:
            return r2
    }

    public static java.lang.String f(android.content.Context r0) {
            android.util.DisplayMetrics r0 = c(r0)
            if (r0 == 0) goto Ld
            int r0 = r0.densityDpi
            java.lang.String r0 = java.lang.String.valueOf(r0)
            goto Lf
        Ld:
            java.lang.String r0 = ""
        Lf:
            return r0
    }

    public static java.lang.String[] f() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto Le
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            if (r0 != 0) goto L15
            java.lang.String[] r0 = new java.lang.String[r1]
            goto L15
        Le:
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r2 = android.os.Build.CPU_ABI
            r0[r1] = r2
        L15:
            return r0
    }

    public static int g() {
            java.lang.String r0 = "ro.product.cpu.abi"
            java.lang.String r1 = ""
            java.lang.String r0 = a(r0, r1)
            java.lang.String r1 = "arm64"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L12
            r0 = 2
            goto L13
        L12:
            r0 = 1
        L13:
            return r0
    }

    public static int g(android.content.Context r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L26
            r0.<init>()     // Catch: java.lang.Exception -> L26
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L26
            r2 = 16
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L26
            int r3 = r3.versionCode     // Catch: java.lang.Exception -> L26
            r0.append(r3)     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = ""
            r0.append(r3)     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L26
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L26
            return r3
        L26:
            r3 = 1
            return r3
    }

    public static java.lang.String h() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r1 = ""
            if (r0 == 0) goto L1b
            java.lang.String r2 = r0.getLanguage()
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 21
            if (r3 < r4) goto L16
            java.lang.String r1 = r0.getScript()
        L16:
            java.lang.String r0 = r0.getCountry()
            goto L1f
        L1b:
            java.lang.String r2 = "en"
            java.lang.String r0 = "US"
        L1f:
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r4 = "_"
            if (r3 == 0) goto L3a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r4)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L3a:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r4)
            r3.append(r1)
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            return r0
    }

    public static java.lang.String h(android.content.Context r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22
            r0.<init>()     // Catch: java.lang.Exception -> L22
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L22
            r2 = 16
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L22
            r0.append(r3)     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = ""
            r0.append(r3)     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L22
            return r3
        L22:
            r3 = 0
            return r3
    }

    public static boolean i() {
            com.huawei.updatesdk.b.h.a r0 = com.huawei.updatesdk.b.h.a.d()
            int r0 = r0.a()
            if (r0 <= 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public static boolean i(android.content.Context r4) {
            java.lang.String r0 = "DeviceUtil"
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            r1 = 0
            java.lang.String r2 = "com.google.android.gsf.login"
            r3 = 16
            r4.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = "com.google.android.gsf"
            r4.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = "com.google.android.gms"
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L23
            android.content.pm.ApplicationInfo r4 = r4.applicationInfo     // Catch: java.lang.Exception -> L23
            int r4 = r4.flags     // Catch: java.lang.Exception -> L23
            r0 = 1
            r4 = r4 & r0
            if (r4 == 0) goto L22
            return r0
        L22:
            return r1
        L23:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.huawei.updatesdk.a.a.c.a.a.a.d(r0, r4)
            return r1
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void a(android.view.Window r7) {
            r6 = this;
            com.huawei.updatesdk.b.h.a r0 = com.huawei.updatesdk.b.h.a.d()
            int r0 = r0.a()
            r1 = 21
            if (r0 < r1) goto L4c
            if (r7 != 0) goto Lf
            goto L4c
        Lf:
            android.view.WindowManager$LayoutParams r7 = r7.getAttributes()
            java.lang.String r0 = "com.huawei.android.view.WindowManagerEx$LayoutParamsEx"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L45
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L45
            java.lang.Class<android.view.WindowManager$LayoutParams> r3 = android.view.WindowManager.LayoutParams.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Throwable -> L45
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Throwable -> L45
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L45
            r3[r4] = r7     // Catch: java.lang.Throwable -> L45
            java.lang.Object r7 = r2.newInstance(r3)     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = "setDisplaySideMode"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L45
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L45
            r3[r4] = r5     // Catch: java.lang.Throwable -> L45
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L45
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L45
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L45
            r2[r4] = r1     // Catch: java.lang.Throwable -> L45
            r0.invoke(r7, r2)     // Catch: java.lang.Throwable -> L45
            goto L4c
        L45:
            java.lang.String r7 = "DeviceUtil"
            java.lang.String r0 = "setWindowDisplaySideMode: exception"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r7, r0)
        L4c:
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}
