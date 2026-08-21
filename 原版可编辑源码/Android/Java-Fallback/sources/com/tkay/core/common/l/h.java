package com.tkay.core.common.l;

public final class h {
    public static final java.lang.String a = "CommonUtils";
    public static char[] b;
    public static char[] c;
    private static char[] d;
    private static char[] e;
    private static int f;
    private static int g;
    private static int h;
    private static int i;
    private static int j;
    private static int k;
    private static int l;
    private static int m;
    private static int n;
    private static int o;

    final class 1 implements android.view.View.OnSystemUiVisibilityChangeListener {
        final android.view.View a;

        1(android.view.View r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onSystemUiVisibilityChange(int r1) {
                r0 = this;
                r1 = r1 & 2
                if (r1 != 0) goto L9
                android.view.View r1 = r0.a
                com.tkay.core.common.l.h.a(r1)
            L9:
                return
        }
    }

    static {
            r0 = 26
            char[] r1 = new char[r0]
            r1 = {x0040: FILL_ARRAY_DATA , data: [97, 110, 100, 114, 111, 105, 100, 99, 111, 110, 116, 101, 110, 116, 112, 109, 103, 101, 116, 67, 111, 110, 116, 101, 120, 116} // fill-array
            com.tkay.core.common.l.h.b = r1
            r1 = 15
            char[] r1 = new char[r1]
            r1 = {x005e: FILL_ARRAY_DATA , data: [65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 73, 110, 102, 111} // fill-array
            com.tkay.core.common.l.h.d = r1
            r1 = 2
            char[] r2 = new char[r1]
            r2 = {x0072: FILL_ARRAY_DATA , data: [46, 88} // fill-array
            com.tkay.core.common.l.h.e = r2
            r2 = 0
            com.tkay.core.common.l.h.f = r2
            r3 = 1
            com.tkay.core.common.l.h.g = r3
            com.tkay.core.common.l.h.h = r1
            r1 = 3
            com.tkay.core.common.l.h.i = r1
            com.tkay.core.common.l.h.j = r2
            r1 = 7
            com.tkay.core.common.l.h.k = r1
            r1 = 14
            com.tkay.core.common.l.h.l = r1
            r2 = 19
            com.tkay.core.common.l.h.m = r2
            r2 = 16
            com.tkay.core.common.l.h.n = r2
            com.tkay.core.common.l.h.o = r0
            char[] r0 = new char[r1]
            r0 = {x0078: FILL_ARRAY_DATA , data: [80, 97, 99, 107, 97, 103, 101, 77, 97, 110, 97, 103, 101, 114} // fill-array
            com.tkay.core.common.l.h.c = r0
            return
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    public static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L19
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "tkay_"
            java.lang.String r2 = r0.concat(r2)
            android.content.res.Resources r0 = r1.getResources()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.getIdentifier(r2, r3, r1)
            return r1
        L19:
            r1 = -1
            return r1
    }

    public static java.lang.String a(java.lang.Object[] r4) {
            java.lang.String r0 = ""
            if (r4 != 0) goto L5
            return r0
        L5:
            int r1 = r4.length
            int r1 = r1 + (-1)
            r2 = -1
            if (r1 != r2) goto Lc
            return r0
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r2 = 0
        L12:
            r3 = r4[r2]
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0.append(r3)
            if (r2 != r1) goto L22
            java.lang.String r4 = r0.toString()
            return r4
        L22:
            java.lang.String r3 = ","
            r0.append(r3)
            int r2 = r2 + 1
            goto L12
    }

    private static void a(android.app.Activity r1) {
            android.view.Window r1 = r1.getWindow()
            if (r1 == 0) goto L17
            android.view.View r1 = r1.getDecorView()
            r0 = 4870(0x1306, float:6.824E-42)
            r1.setSystemUiVisibility(r0)
            com.tkay.core.common.l.h$1 r0 = new com.tkay.core.common.l.h$1
            r0.<init>(r1)
            r1.setOnSystemUiVisibilityChangeListener(r0)
        L17:
            return
    }

    static void a(android.view.View r1) {
            r0 = 4870(0x1306, float:6.824E-42)
            r1.setSystemUiVisibility(r0)
            return
    }

    public static boolean a() {
            java.lang.String r0 = "http://www.toponad.com"
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L22
            r2 = 24
            if (r1 < r2) goto L11
            android.security.NetworkSecurityPolicy r1 = android.security.NetworkSecurityPolicy.getInstance()     // Catch: java.lang.Throwable -> L22
            boolean r0 = r1.isCleartextTrafficPermitted(r0)     // Catch: java.lang.Throwable -> L22
            return r0
        L11:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L22
            r1 = 23
            if (r0 < r1) goto L20
            android.security.NetworkSecurityPolicy r0 = android.security.NetworkSecurityPolicy.getInstance()     // Catch: java.lang.Throwable -> L22
            boolean r0 = r0.isCleartextTrafficPermitted()     // Catch: java.lang.Throwable -> L22
            return r0
        L20:
            r0 = 1
            return r0
        L22:
            r0 = 0
            return r0
    }

    public static boolean a(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L17
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L17
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L17
            if (r2 == 0) goto L17
            boolean r2 = r2.isAvailable()     // Catch: java.lang.Exception -> L17
            if (r2 == 0) goto L17
            r2 = 1
            return r2
        L17:
            return r0
    }

    public static synchronized boolean a(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.tkay.core.common.l.h> r0 = com.tkay.core.common.l.h.class
            monitor-enter(r0)
            r1 = 0
            if (r3 == 0) goto L18
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L15
            if (r2 != 0) goto L18
            java.lang.Object r3 = b(r4, r3)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            if (r3 == 0) goto L18
            r3 = 1
            r1 = r3
            goto L18
        L15:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
        L18:
            monitor-exit(r0)
            return r1
    }

    public static <T extends java.lang.String> boolean a(T r0) {
            if (r0 == 0) goto Lb
            int r0 = r0.length()
            if (r0 != 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public static boolean a(java.lang.String r3, android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L2e
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L2e
            int r4 = r1.checkPermission(r3, r4)     // Catch: java.lang.Exception -> L2e
            java.lang.String r1 = "Permission "
            if (r4 != 0) goto L21
            r4 = 1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2e
            r2.<init>(r1)     // Catch: java.lang.Exception -> L2e
            r2.append(r3)     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = " is granted"
            r2.append(r3)     // Catch: java.lang.Exception -> L2e
            r0 = r4
            goto L2e
        L21:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2e
            r4.<init>(r1)     // Catch: java.lang.Exception -> L2e
            r4.append(r3)     // Catch: java.lang.Exception -> L2e
            java.lang.String r3 = " is NOT granted"
            r4.append(r3)     // Catch: java.lang.Exception -> L2e
        L2e:
            return r0
    }

    private static final char[] a(int r3) {
            if (r3 == 0) goto L99
            r0 = 1
            if (r3 == r0) goto L50
            r0 = 2
            if (r3 == r0) goto L2f
            r0 = 3
            if (r3 == r0) goto Le
            r3 = 0
            goto Lf3
        Le:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.n
            int r2 = com.tkay.core.common.l.h.m
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L2f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.n
            int r2 = com.tkay.core.common.l.h.m
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.d
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L50:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.k
            char[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.e
            int r1 = com.tkay.core.common.l.h.j
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.k
            int r2 = com.tkay.core.common.l.h.l
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.e
            int r1 = com.tkay.core.common.l.h.j
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.m
            int r2 = com.tkay.core.common.l.h.o
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L99:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.k
            char[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.e
            int r1 = com.tkay.core.common.l.h.j
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.k
            int r2 = com.tkay.core.common.l.h.l
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.e
            int r1 = com.tkay.core.common.l.h.j
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.b
            int r1 = com.tkay.core.common.l.h.l
            int r2 = com.tkay.core.common.l.h.n
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.e
            int r1 = com.tkay.core.common.l.h.j
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.core.common.l.h.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
        Lf3:
            java.lang.String r3 = r3.toString()
            char[] r3 = r3.toCharArray()
            return r3
    }

    public static java.lang.String[] a(org.json.JSONArray r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r4.length()     // Catch: java.lang.Exception -> L1b
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Exception -> L1b
            r2 = 0
        Lb:
            int r3 = r4.length()     // Catch: java.lang.Exception -> L1b
            if (r2 >= r3) goto L1a
            java.lang.String r3 = r4.optString(r2)     // Catch: java.lang.Exception -> L1b
            r1[r2] = r3     // Catch: java.lang.Exception -> L1b
            int r2 = r2 + 1
            goto Lb
        L1a:
            return r1
        L1b:
            return r0
    }

    public static int b(android.content.Context r4) {
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "status_bar_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            int r4 = r4.getDimensionPixelSize(r0)
            goto L1a
        L19:
            r4 = 0
        L1a:
            return r4
    }

    private static int b(android.content.Context r8, java.lang.String r9, java.lang.String r10) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r8 = r8.getPackageName()
            r0.append(r8)
            java.lang.String r8 = ".R"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            java.lang.String r0 = "styleable"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r9)
            java.lang.String r9 = "_"
            r1.append(r9)
            r1.append(r10)
            java.lang.String r9 = r1.toString()
            r10 = 0
            java.lang.Class r8 = java.lang.Class.forName(r8)     // Catch: java.lang.Throwable -> L6a
            java.lang.Class[] r8 = r8.getClasses()     // Catch: java.lang.Throwable -> L6a
            int r1 = r8.length     // Catch: java.lang.Throwable -> L6a
            r2 = r10
        L36:
            if (r2 >= r1) goto L6e
            r3 = r8[r2]     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = r3.getSimpleName()     // Catch: java.lang.Throwable -> L6a
            boolean r4 = r4.equals(r0)     // Catch: java.lang.Throwable -> L6a
            if (r4 == 0) goto L67
            java.lang.reflect.Field[] r3 = r3.getFields()     // Catch: java.lang.Throwable -> L6a
            int r4 = r3.length     // Catch: java.lang.Throwable -> L6a
            r5 = r10
        L4a:
            if (r5 >= r4) goto L67
            r6 = r3[r5]     // Catch: java.lang.Throwable -> L6a
            java.lang.String r7 = r6.getName()     // Catch: java.lang.Throwable -> L6a
            boolean r7 = r7.equals(r9)     // Catch: java.lang.Throwable -> L6a
            if (r7 == 0) goto L64
            r8 = 0
            java.lang.Object r8 = r6.get(r8)     // Catch: java.lang.Throwable -> L6a
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Throwable -> L6a
            int r8 = r8.intValue()     // Catch: java.lang.Throwable -> L6a
            return r8
        L64:
            int r5 = r5 + 1
            goto L4a
        L67:
            int r2 = r2 + 1
            goto L36
        L6a:
            r8 = move-exception
            r8.printStackTrace()
        L6e:
            return r10
    }

    private static android.view.View.OnSystemUiVisibilityChangeListener b(android.view.View r1) {
            com.tkay.core.common.l.h$1 r0 = new com.tkay.core.common.l.h$1
            r0.<init>(r1)
            return r0
    }

    private static java.lang.Object b(java.lang.String r8, android.content.Context r9) {
            r0 = 0
            int r1 = com.tkay.core.common.l.h.f     // Catch: java.lang.Throwable -> L5e
            char[] r1 = a(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L5e
            int r2 = com.tkay.core.common.l.h.h     // Catch: java.lang.Throwable -> L5e
            char[] r2 = a(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L5e
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L5e
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L5e
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L5e
            int r2 = com.tkay.core.common.l.h.g     // Catch: java.lang.Throwable -> L5e
            char[] r2 = a(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L5e
            int r4 = com.tkay.core.common.l.h.i     // Catch: java.lang.Throwable -> L5e
            char[] r4 = a(r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class[] r5 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L5e
            java.lang.reflect.Method r2 = r2.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.Object[] r4 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L5e
            java.lang.Object r9 = r2.invoke(r9, r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L5e
            r2[r6] = r8     // Catch: java.lang.Throwable -> L5e
            r8 = 8192(0x2000, float:1.148E-41)
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L5e
            r2[r7] = r8     // Catch: java.lang.Throwable -> L5e
            java.lang.Object r0 = r1.invoke(r9, r2)     // Catch: java.lang.Throwable -> L5e
        L5e:
            return r0
    }

    public static <T extends java.lang.String> boolean b(T r0) {
            if (r0 == 0) goto La
            int r0 = r0.length()
            if (r0 <= 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    private static int[] b(android.content.Context r5, java.lang.String r6) {
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r1.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L38
            r1.append(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = ".R$styleable"
            r1.append(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L38
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.reflect.Field[] r5 = r5.getFields()     // Catch: java.lang.Throwable -> L38
            int r1 = r5.length     // Catch: java.lang.Throwable -> L38
            r2 = 0
        L20:
            if (r2 >= r1) goto L3c
            r3 = r5[r2]     // Catch: java.lang.Throwable -> L38
            java.lang.String r4 = r3.getName()     // Catch: java.lang.Throwable -> L38
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L38
            if (r4 == 0) goto L35
            java.lang.Object r5 = r3.get(r0)     // Catch: java.lang.Throwable -> L38
            int[] r5 = (int[]) r5     // Catch: java.lang.Throwable -> L38
            return r5
        L35:
            int r2 = r2 + 1
            goto L20
        L38:
            r5 = move-exception
            r5.printStackTrace()
        L3c:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Object> c(java.lang.String r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L28
            if (r1 != 0) goto L28
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L28
            r1.<init>(r4)     // Catch: java.lang.Exception -> L28
            java.util.Iterator r4 = r1.keys()     // Catch: java.lang.Exception -> L28
        L14:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Exception -> L28
            if (r2 == 0) goto L28
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Exception -> L28
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L28
            java.lang.Object r3 = r1.opt(r2)     // Catch: java.lang.Exception -> L28
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L28
            goto L14
        L28:
            return r0
    }
}
