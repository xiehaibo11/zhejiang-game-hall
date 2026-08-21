package com.tkay.expressad.foundation.h;

public final class t extends com.tkay.expressad.foundation.h.g {
    public static final java.lang.String a = "SameTools";
    static java.util.List<java.lang.String> b;
    private static char[] c;
    private static char[] d;
    private static int e;
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

    static {
            r0 = 15
            char[] r0 = new char[r0]
            r0 = {x0034: FILL_ARRAY_DATA , data: [65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 73, 110, 102, 111} // fill-array
            com.tkay.expressad.foundation.h.t.c = r0
            r0 = 2
            char[] r1 = new char[r0]
            r1 = {x0048: FILL_ARRAY_DATA , data: [46, 88} // fill-array
            com.tkay.expressad.foundation.h.t.d = r1
            r1 = 0
            com.tkay.expressad.foundation.h.t.e = r1
            r2 = 1
            com.tkay.expressad.foundation.h.t.f = r2
            com.tkay.expressad.foundation.h.t.g = r0
            r0 = 3
            com.tkay.expressad.foundation.h.t.h = r0
            com.tkay.expressad.foundation.h.t.i = r1
            r0 = 7
            com.tkay.expressad.foundation.h.t.j = r0
            r0 = 14
            com.tkay.expressad.foundation.h.t.k = r0
            r0 = 19
            com.tkay.expressad.foundation.h.t.l = r0
            r0 = 16
            com.tkay.expressad.foundation.h.t.m = r0
            r0 = 26
            com.tkay.expressad.foundation.h.t.n = r0
            com.tkay.expressad.foundation.h.t.o = r2
            return
    }

    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    public static double a(java.lang.Double r3) {
            java.util.Locale r0 = java.util.Locale.US     // Catch: java.lang.Exception -> L1c
            java.text.DecimalFormatSymbols r0 = java.text.DecimalFormatSymbols.getInstance(r0)     // Catch: java.lang.Exception -> L1c
            java.text.DecimalFormat r1 = new java.text.DecimalFormat     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = "0.00"
            r1.<init>(r2, r0)     // Catch: java.lang.Exception -> L1c
            java.lang.String r3 = r1.format(r3)     // Catch: java.lang.Exception -> L1c
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r3)     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L20
            double r0 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> L1c
            return r0
        L1c:
            r3 = move-exception
            r3.printStackTrace()
        L20:
            r0 = 0
            return r0
    }

    public static int a() {
            int r0 = com.tkay.expressad.foundation.h.t.o
            int r1 = r0 + 1
            com.tkay.expressad.foundation.h.t.o = r1
            return r0
    }

    public static int a(int r2) {
            r0 = 100
            if (r2 <= r0) goto L8
            r0 = 199(0xc7, float:2.79E-43)
            if (r2 < r0) goto Lb
        L8:
            r0 = 2
            if (r2 != r0) goto Ld
        Lb:
            r2 = 1
            return r2
        Ld:
            r1 = 200(0xc8, float:2.8E-43)
            if (r2 <= r1) goto L15
            r1 = 299(0x12b, float:4.19E-43)
            if (r2 < r1) goto L18
        L15:
            r1 = 4
            if (r2 != r1) goto L19
        L18:
            return r0
        L19:
            r0 = 500(0x1f4, float:7.0E-43)
            if (r2 <= r0) goto L23
            r0 = 599(0x257, float:8.4E-43)
            if (r2 >= r0) goto L23
            r2 = 5
            return r2
        L23:
            r2 = -1
            return r2
    }

    public static int a(android.content.Context r2, float r3) {
            r0 = 1075838976(0x40200000, float:2.5)
            if (r2 == 0) goto L1a
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Exception -> L16
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Exception -> L16
            float r2 = r2.density     // Catch: java.lang.Exception -> L16
            r1 = 0
            int r1 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r1 != 0) goto L14
            goto L1a
        L14:
            r0 = r2
            goto L1a
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            float r3 = r3 / r0
            r2 = 1056964608(0x3f000000, float:0.5)
            float r3 = r3 + r2
            int r2 = (int) r3
            return r2
    }

    public static int a(java.lang.Object r2) {
            r0 = 0
            if (r2 == 0) goto L13
            boolean r1 = r2 instanceof java.lang.String     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto L13
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lf
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> Lf
            r0 = r2
            goto L13
        Lf:
            r2 = move-exception
            r2.getMessage()
        L13:
            return r0
    }

    public static synchronized java.lang.String a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.tkay.expressad.foundation.h.t> r0 = com.tkay.expressad.foundation.h.t.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = a(r4, r2, r3)     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
            r1.append(r2)     // Catch: java.lang.Exception -> Lf java.lang.Throwable -> L15
        Lf:
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return r2
        L15:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static synchronized java.lang.String a(java.lang.String r2, android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.tkay.expressad.foundation.h.t> r0 = com.tkay.expressad.foundation.h.t.class
            monitor-enter(r0)
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.util.Set r2 = r2.getQueryParameterNames()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            if (r2 == 0) goto L1b
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            if (r2 <= 0) goto L1b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.String r1 = "&rtins_type="
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            goto L2c
        L1b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            java.lang.String r1 = "?rtins_type="
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L25
            goto L2c
        L23:
            r2 = move-exception
            goto L4b
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = "&rtins_type="
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L23
        L2c:
            r1 = 0
            java.lang.Object r3 = b(r4, r3)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L42
            r4 = 1
            if (r3 == 0) goto L36
            r3 = r4
            goto L37
        L36:
            r3 = r1
        L37:
            if (r3 == 0) goto L3d
            r2.append(r4)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L42
            goto L45
        L3d:
            r3 = 2
            r2.append(r3)     // Catch: java.lang.Throwable -> L23 java.lang.Exception -> L42
            goto L45
        L42:
            r2.append(r1)     // Catch: java.lang.Throwable -> L23
        L45:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L23
            monitor-exit(r0)
            return r2
        L4b:
            monitor-exit(r0)
            throw r2
    }

    public static java.util.List<java.lang.String> a(org.json.JSONArray r5) {
            r0 = 0
            if (r5 == 0) goto L2b
            int r1 = r5.length()     // Catch: java.lang.Throwable -> L27
            if (r1 <= 0) goto L2b
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L27
            r2 = 0
        Lf:
            int r3 = r5.length()     // Catch: java.lang.Throwable -> L27
            if (r2 >= r3) goto L25
            java.lang.String r3 = r5.optString(r2)     // Catch: java.lang.Throwable -> L27
            boolean r4 = com.tkay.expressad.foundation.h.w.b(r3)     // Catch: java.lang.Throwable -> L27
            if (r4 == 0) goto L22
            r1.add(r3)     // Catch: java.lang.Throwable -> L27
        L22:
            int r2 = r2 + 1
            goto Lf
        L25:
            r0 = r1
            goto L2b
        L27:
            r5 = move-exception
            r5.getMessage()
        L2b:
            return r0
    }

    public static void a(android.view.View r2) {
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf
            r1 = 11
            if (r0 < r1) goto Le
            r0 = 4102(0x1006, float:5.748E-42)
            r2.setSystemUiVisibility(r0)     // Catch: java.lang.Throwable -> Lf
        Le:
            return
        Lf:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public static synchronized boolean a(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.tkay.expressad.foundation.h.t> r0 = com.tkay.expressad.foundation.h.t.class
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

    public static boolean a(com.tkay.expressad.foundation.d.c r2) {
            r0 = 0
            if (r2 == 0) goto L10
            int r2 = r2.N()     // Catch: java.lang.Exception -> Lc
            r1 = 1
            if (r2 != r1) goto Lb
            return r1
        Lb:
            return r0
        Lc:
            r2 = move-exception
            r2.printStackTrace()
        L10:
            return r0
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

    public static boolean a(java.lang.String r2, android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L10
            int r2 = r1.checkPermission(r2, r3)     // Catch: java.lang.Exception -> L10
            if (r2 != 0) goto L10
            r0 = 1
        L10:
            return r0
    }

    private static boolean a(java.util.List r0) {
            if (r0 == 0) goto Lb
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    private static <T> boolean a(T[] r0) {
            if (r0 == 0) goto L8
            int r0 = r0.length
            if (r0 != 0) goto L6
            goto L8
        L6:
            r0 = 0
            return r0
        L8:
            r0 = 1
            return r0
    }

    public static double b(java.lang.String r3) {
            r0 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Ld
            if (r2 != 0) goto L11
            double r0 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r3 = move-exception
            r3.printStackTrace()
        L11:
            return r0
    }

    public static int b(android.content.Context r1, float r2) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            float r2 = r2 * r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    private static java.lang.Object b(java.lang.String r8, android.content.Context r9) {
            r0 = 0
            int r1 = com.tkay.expressad.foundation.h.t.e     // Catch: java.lang.Throwable -> L5e
            char[] r1 = b(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L5e
            int r2 = com.tkay.expressad.foundation.h.t.g     // Catch: java.lang.Throwable -> L5e
            char[] r2 = b(r2)     // Catch: java.lang.Throwable -> L5e
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
            int r2 = com.tkay.expressad.foundation.h.t.f     // Catch: java.lang.Throwable -> L5e
            char[] r2 = b(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L5e
            int r4 = com.tkay.expressad.foundation.h.t.h     // Catch: java.lang.Throwable -> L5e
            char[] r4 = b(r4)     // Catch: java.lang.Throwable -> L5e
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

    public static boolean b() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            java.lang.Thread r0 = r0.getThread()
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            if (r0 != r1) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static boolean b(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L12
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L12
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L12
            if (r2 == 0) goto L11
            r2 = 1
            return r2
        L11:
            return r0
        L12:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    private static boolean b(java.util.List r2) {
            r0 = 0
            r1 = 1
            if (r2 == 0) goto Ld
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = r0
            goto Le
        Ld:
            r2 = r1
        Le:
            if (r2 != 0) goto L11
            return r1
        L11:
            return r0
    }

    private static <T> boolean b(T[] r2) {
            r0 = 0
            r1 = 1
            if (r2 == 0) goto La
            int r2 = r2.length
            if (r2 != 0) goto L8
            goto La
        L8:
            r2 = r0
            goto Lb
        La:
            r2 = r1
        Lb:
            if (r2 != 0) goto Le
            return r1
        Le:
            return r0
    }

    private static final char[] b(int r3) {
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
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.m
            int r2 = com.tkay.expressad.foundation.h.t.l
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.r.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L2f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.m
            int r2 = com.tkay.expressad.foundation.h.t.l
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.t.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L50:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.j
            char[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.t.d
            int r1 = com.tkay.expressad.foundation.h.t.i
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.j
            int r2 = com.tkay.expressad.foundation.h.t.k
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.t.d
            int r1 = com.tkay.expressad.foundation.h.t.i
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.l
            int r2 = com.tkay.expressad.foundation.h.t.n
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            goto Lf3
        L99:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.j
            char[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.t.d
            int r1 = com.tkay.expressad.foundation.h.t.i
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.j
            int r2 = com.tkay.expressad.foundation.h.t.k
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.t.d
            int r1 = com.tkay.expressad.foundation.h.t.i
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.s.b
            int r1 = com.tkay.expressad.foundation.h.t.k
            int r2 = com.tkay.expressad.foundation.h.t.m
            char[] r0 = java.util.Arrays.copyOfRange(r0, r1, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.t.d
            int r1 = com.tkay.expressad.foundation.h.t.i
            char r0 = r0[r1]
            r3.append(r0)
            char[] r0 = com.tkay.expressad.foundation.h.r.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.append(r0)
        Lf3:
            java.lang.String r3 = r3.toString()
            char[] r3 = r3.toCharArray()
            return r3
    }

    public static float c(android.content.Context r2) {
            r0 = 1075838976(0x40200000, float:2.5)
            if (r2 == 0) goto L1a
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Exception -> L16
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Exception -> L16
            float r2 = r2.density     // Catch: java.lang.Exception -> L16
            r1 = 0
            int r1 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r1 != 0) goto L14
            goto L1a
        L14:
            r0 = r2
            goto L1a
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            return r0
    }

    public static java.lang.String c(java.lang.String r1) {
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r1)     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L11
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r0)     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.getMessage()
        L11:
            java.lang.String r1 = ""
            return r1
    }

    public static int d(android.content.Context r3) {
            java.lang.String r0 = "com.android.internal.R$dimen"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L25
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "status_bar_height"
            java.lang.reflect.Field r0 = r0.getField(r2)     // Catch: java.lang.Exception -> L25
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L25
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L25
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Exception -> L25
            int r3 = r3.getDimensionPixelSize(r0)     // Catch: java.lang.Exception -> L25
            goto L2a
        L25:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
        L2a:
            return r3
    }

    public static boolean d(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L21
            if (r2 == 0) goto L25
            java.lang.String r0 = "nativecananim"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Exception -> L21
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L21
            if (r0 != 0) goto L25
            java.lang.String r0 = "1"
            boolean r1 = r2.equals(r0)     // Catch: java.lang.Exception -> L21
            goto L25
        L21:
            r2 = move-exception
            r2.getMessage()
        L25:
            return r1
    }

    public static int e(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.util.DisplayMetrics r1 = k(r1)     // Catch: java.lang.Exception -> Lb
            int r1 = r1.heightPixels     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean e(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            r0 = 1
            if (r4 == 0) goto L45
            java.lang.String r2 = "dyview"
            java.lang.String r2 = r4.getQueryParameter(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            if (r3 == 0) goto L21
            java.lang.String r2 = "view"
            java.lang.String r2 = r4.getQueryParameter(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
        L21:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L46 java.lang.Throwable -> L4d
            if (r3 != 0) goto L32
            r3 = -1
            int r3 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L4d
        L2c:
            int r3 = r3 % 2
            if (r3 != 0) goto L32
            r2 = r0
            goto L33
        L32:
            r2 = r1
        L33:
            java.lang.String r3 = "natmp"
            java.lang.String r4 = r4.getQueryParameter(r3)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L4c
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L4c
            if (r4 != 0) goto L41
            r1 = r0
            goto L45
        L41:
            r1 = r2
            goto L45
        L43:
            r4 = move-exception
            goto L48
        L45:
            return r1
        L46:
            r4 = move-exception
            r2 = r1
        L48:
            r4.getMessage()     // Catch: java.lang.Throwable -> L4c
            return r1
        L4c:
            r1 = r2
        L4d:
            return r1
    }

    public static int f(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.util.DisplayMetrics r1 = k(r1)     // Catch: java.lang.Exception -> Lb
            int r1 = r1.widthPixels     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static boolean f(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L21
            if (r2 == 0) goto L25
            java.lang.String r0 = "isplayableec"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Exception -> L21
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L21
            if (r0 != 0) goto L25
            java.lang.String r0 = "0"
            boolean r1 = r2.equals(r0)     // Catch: java.lang.Exception -> L21
            goto L25
        L21:
            r2 = move-exception
            r2.getMessage()
        L25:
            return r1
    }

    public static int g(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> Lf
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> Lf
            int r1 = r1.widthPixels     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static int g(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L2b
            if (r3 == 0) goto L2a
            java.lang.String r0 = "dyview"
            java.lang.String r0 = r3.getQueryParameter(r0)     // Catch: java.lang.Exception -> L2b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2b
            if (r2 == 0) goto L20
            java.lang.String r0 = "view"
            java.lang.String r0 = r3.getQueryParameter(r0)     // Catch: java.lang.Exception -> L2b
        L20:
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2b
            if (r3 != 0) goto L2a
            int r1 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L2a
        L2a:
            return r1
        L2b:
            r3 = move-exception
            r3.getMessage()
            return r1
    }

    public static int h(android.content.Context r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> Lf
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> Lf
            int r1 = r1.heightPixels     // Catch: java.lang.Exception -> Lf
            return r1
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    private static <T extends java.lang.String> boolean h(T r0) {
            if (r0 == 0) goto La
            int r0 = r0.length()
            if (r0 <= 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public static int i(android.content.Context r5) {
            java.lang.String r0 = "android"
            r1 = 0
            if (r5 == 0) goto L6
            return r1
        L6:
            android.content.res.Resources r2 = r5.getResources()     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "config_showNavigationBar"
            java.lang.String r4 = "bool"
            int r2 = r2.getIdentifier(r3, r4, r0)     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L2d
            android.content.res.Resources r2 = r5.getResources()     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "navigation_bar_height"
            java.lang.String r4 = "dimen"
            int r0 = r2.getIdentifier(r3, r4, r0)     // Catch: java.lang.Exception -> L29
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L29
            int r5 = r5.getDimensionPixelSize(r0)     // Catch: java.lang.Exception -> L29
            return r5
        L29:
            r5 = move-exception
            r5.printStackTrace()
        L2d:
            return r1
    }

    private static boolean i(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L20
            if (r2 == 0) goto L1b
            java.lang.String r0 = "dyview"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L20
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1c java.lang.Throwable -> L20
            if (r2 != 0) goto L1b
            r1 = 1
        L1b:
            return r1
        L1c:
            r2 = move-exception
            r2.getMessage()     // Catch: java.lang.Throwable -> L20
        L20:
            return r1
    }

    public static int j(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4c
            r2 = 26
            if (r1 < r2) goto Lf
            android.content.pm.PackageInfo r3 = android.webkit.WebView.getCurrentWebViewPackage()     // Catch: java.lang.Exception -> L4c
            goto L1a
        Lf:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L4c
            java.lang.String r1 = "com.google.android.webview"
            r2 = 1
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L4c
        L1a:
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L4c
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L4c
            r1.e()     // Catch: java.lang.Exception -> L4c
            com.tkay.expressad.d.a r1 = com.tkay.expressad.d.b.b()     // Catch: java.lang.Exception -> L4c
            if (r1 != 0) goto L31
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L4c
            com.tkay.expressad.d.a r1 = com.tkay.expressad.d.b.c()     // Catch: java.lang.Exception -> L4c
        L31:
            if (r3 == 0) goto L47
            java.lang.String r2 = r3.versionName     // Catch: java.lang.Exception -> L4c
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L4c
            if (r2 != 0) goto L47
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "77.0.3865.92"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Exception -> L4c
            if (r3 == 0) goto L47
            r3 = 5
            return r3
        L47:
            int r3 = r1.P()     // Catch: java.lang.Exception -> L4c
            return r3
        L4c:
            return r0
    }

    private static android.util.DisplayMetrics k(android.content.Context r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            java.lang.String r1 = "window"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L23
            android.view.WindowManager r1 = (android.view.WindowManager) r1     // Catch: java.lang.Throwable -> L23
            android.view.Display r1 = r1.getDefaultDisplay()     // Catch: java.lang.Throwable -> L23
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L23
            r3 = 17
            if (r2 < r3) goto L1f
            r1.getRealMetrics(r0)     // Catch: java.lang.Throwable -> L23
            goto L2f
        L1f:
            r1.getMetrics(r0)     // Catch: java.lang.Throwable -> L23
            goto L2f
        L23:
            r0 = move-exception
            r0.printStackTrace()
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r0 = r4.getDisplayMetrics()
        L2f:
            return r0
    }
}
