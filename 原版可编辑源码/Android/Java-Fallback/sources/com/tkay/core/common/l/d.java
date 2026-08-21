package com.tkay.core.common.l;

public final class d {
    public static java.lang.String a = null;
    public static java.lang.String b = null;
    public static java.lang.String c = null;
    public static java.lang.String d = "";
    static java.lang.String e = null;
    private static java.lang.String f = null;
    private static java.lang.String g = null;
    private static java.lang.String h = null;
    private static java.lang.String i = "";
    private static java.lang.String j = "";
    private static java.lang.String k = "";
    private static java.lang.String l = "";
    private static java.lang.String m = "";
    private static int n = 0;
    private static java.lang.String o = "";
    private static java.lang.String p = "";
    private static java.lang.String q = null;
    private static java.lang.String r = "";
    private static java.lang.String s = "";
    private static int t = -1;
    private static int u = -1;
    private static int v = -1;
    private static int w = -1;


    static {
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(int r1) {
            r0 = 20
            if (r1 == r0) goto L10
            switch(r1) {
                case 1: goto Le;
                case 2: goto Le;
                case 3: goto Lc;
                case 4: goto Le;
                case 5: goto Lc;
                case 6: goto Lc;
                case 7: goto Le;
                case 8: goto Lc;
                case 9: goto Lc;
                case 10: goto Lc;
                case 11: goto Le;
                case 12: goto Lc;
                case 13: goto L9;
                case 14: goto Lc;
                case 15: goto Lc;
                default: goto L7;
            }
        L7:
            r1 = -1
            return r1
        L9:
            r1 = 13
            return r1
        Lc:
            r1 = 3
            return r1
        Le:
            r1 = 1
            return r1
        L10:
            r1 = 16
            return r1
    }

    public static java.lang.String a() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "model"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L25
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L25
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L25
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L25
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = android.os.Build.MODEL
            return r0
        L25:
            return r1
    }

    public static synchronized void a(int r3, java.lang.String r4) {
            java.lang.Class<com.tkay.core.common.l.d> r0 = com.tkay.core.common.l.d.class
            monitor-enter(r0)
            java.lang.String r1 = com.tkay.core.common.l.d.a     // Catch: java.lang.Throwable -> L45
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L2f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            java.lang.String r2 = com.tkay.core.common.l.d.a     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            java.lang.String r2 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            boolean r2 = r1.has(r2)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            if (r2 == 0) goto L1e
            monitor-exit(r0)
            return
        L1e:
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            com.tkay.core.common.l.d.a = r3     // Catch: java.lang.Exception -> L2d java.lang.Throwable -> L45
            monitor-exit(r0)
            return
        L2d:
            monitor-exit(r0)
            return
        L2f:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L45
            r1.<init>()     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L45
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L45
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L45
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L45
            com.tkay.core.common.l.d.a = r3     // Catch: java.lang.Exception -> L43 java.lang.Throwable -> L45
            monitor-exit(r0)
            return
        L43:
            monitor-exit(r0)
            return
        L45:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static void a(android.content.Context r3) {
            d()     // Catch: java.lang.Exception -> L62
            k(r3)     // Catch: java.lang.Exception -> L62
            i(r3)     // Catch: java.lang.Exception -> L62
            h(r3)     // Catch: java.lang.Exception -> L62
            g(r3)     // Catch: java.lang.Exception -> L62
            a()     // Catch: java.lang.Exception -> L62
            b()     // Catch: java.lang.Exception -> L62
            d(r3)     // Catch: java.lang.Exception -> L62
            f()     // Catch: java.lang.Exception -> L62
            f(r3)     // Catch: java.lang.Exception -> L62
            c()     // Catch: java.lang.Exception -> L62
            n(r3)     // Catch: java.lang.Exception -> L62
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "NETWORK_VERSION_NAME"
            java.lang.String r2 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r3, r0, r1, r2)     // Catch: java.lang.Exception -> L62
            com.tkay.core.common.l.d.a = r0     // Catch: java.lang.Exception -> L62
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = com.tkay.core.common.l.h.a(r0, r3)     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L62
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L62
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = r3.getSimOperator()     // Catch: java.lang.Exception -> L62
            boolean r0 = com.tkay.core.common.l.h.b(r3)     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L62
            int r0 = r3.length()     // Catch: java.lang.Exception -> L62
            r1 = 3
            if (r0 <= r1) goto L62
            r0 = 0
            java.lang.String r0 = r3.substring(r0, r1)     // Catch: java.lang.Exception -> L62
            com.tkay.core.common.l.d.r = r0     // Catch: java.lang.Exception -> L62
            int r0 = r3.length()     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = r3.substring(r1, r0)     // Catch: java.lang.Exception -> L62
            com.tkay.core.common.l.d.s = r3     // Catch: java.lang.Exception -> L62
        L62:
            return
    }

    public static void a(java.lang.String r3) {
            com.tkay.core.common.l.d.g = r3
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
            java.lang.String r0 = com.tkay.core.common.l.d.g
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "tkay_gaid"
            com.tkay.core.common.l.p.a(r3, r1, r2, r0)
            return
    }

    public static int b(java.lang.String r4) {
            int r0 = com.tkay.core.common.l.d.w
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            r0 = 0
            com.tkay.core.common.l.d.w = r0
            java.lang.Object r4 = c(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "com.tencent.mm.opensdk.openapi.IWXAPI"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = "getWXAppSupportAPI"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L29
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L29
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L29
            java.lang.Object r4 = r1.invoke(r4, r0)     // Catch: java.lang.Throwable -> L29
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L29
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L29
            com.tkay.core.common.l.d.w = r4     // Catch: java.lang.Throwable -> L29
        L29:
            int r4 = com.tkay.core.common.l.d.w
            return r4
    }

    public static java.lang.String b() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "brand"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L25
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L25
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L25
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L25
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = android.os.Build.BRAND
            return r0
        L25:
            return r1
    }

    public static java.lang.String b(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "mcc"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r2 != 0) goto L18
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            r2.f()
        L18:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L2e
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L2e
            com.tkay.core.common.b.p r2 = com.tkay.core.common.b.p.a(r2)     // Catch: java.lang.Exception -> L2e
            boolean r2 = r2.b()     // Catch: java.lang.Exception -> L2e
            if (r2 != 0) goto L2b
            return r1
        L2b:
            java.lang.String r2 = com.tkay.core.common.l.d.r
            return r2
        L2e:
            return r1
    }

    public static java.lang.Object c(java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "com.tencent.mm.opensdk.openapi.WXAPIFactory"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "createWXAPI"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L34
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L34
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L34
            java.lang.reflect.Method r0 = r0.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L34
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L34
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L34
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L34
            r2[r6] = r3     // Catch: java.lang.Throwable -> L34
            r2[r7] = r8     // Catch: java.lang.Throwable -> L34
            java.lang.Object r8 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L34
            return r8
        L34:
            return r1
    }

    public static java.lang.String c() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "timezone"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L3b
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L3b
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L3b
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L3b
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = com.tkay.core.common.l.d.p     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L38
            java.util.TimeZone r0 = java.util.TimeZone.getDefault()     // Catch: java.lang.Throwable -> L38
            java.util.Locale r1 = java.util.Locale.ENGLISH     // Catch: java.lang.Throwable -> L38
            r2 = 0
            java.lang.String r0 = r0.getDisplayName(r2, r2, r1)     // Catch: java.lang.Throwable -> L38
            com.tkay.core.common.l.d.p = r0     // Catch: java.lang.Throwable -> L38
            return r0
        L38:
            java.lang.String r0 = com.tkay.core.common.l.d.p
            return r0
        L3b:
            return r1
    }

    public static java.lang.String c(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "mnc"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r2 != 0) goto L18
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            r2.f()
        L18:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L2e
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L2e
            com.tkay.core.common.b.p r2 = com.tkay.core.common.b.p.a(r2)     // Catch: java.lang.Exception -> L2e
            boolean r2 = r2.b()     // Catch: java.lang.Exception -> L2e
            if (r2 != 0) goto L2b
            return r1
        L2b:
            java.lang.String r2 = com.tkay.core.common.l.d.s
            return r2
        L2e:
            return r1
    }

    public static java.lang.String d() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "os_vc"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L35
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L35
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L35
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L35
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = com.tkay.core.common.l.d.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L32
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.tkay.core.common.l.d.k = r0
        L32:
            java.lang.String r0 = com.tkay.core.common.l.d.k
            return r0
        L35:
            return r1
    }

    public static java.lang.String d(android.content.Context r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "android_id"
            boolean r0 = r0.c(r1)
            java.lang.String r2 = ""
            if (r0 == 0) goto Lf
            return r2
        Lf:
            if (r3 != 0) goto L19
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
        L19:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L44
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L44
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L44
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L44
            if (r0 != 0) goto L2c
            return r2
        L2c:
            java.lang.String r0 = com.tkay.core.common.l.d.h     // Catch: java.lang.Exception -> L3f
            if (r0 != 0) goto L41
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Exception -> L3f
            java.lang.String r3 = android.provider.Settings.Secure.getString(r3, r1)     // Catch: java.lang.Exception -> L3f
            com.tkay.core.common.l.d.h = r3     // Catch: java.lang.Exception -> L3f
            if (r3 != 0) goto L41
            com.tkay.core.common.l.d.h = r2     // Catch: java.lang.Exception -> L3f
            goto L41
        L3f:
            com.tkay.core.common.l.d.h = r2
        L41:
            java.lang.String r3 = com.tkay.core.common.l.d.h
            return r3
        L44:
            return r2
    }

    static boolean d(java.lang.String r1) {
            java.lang.String r0 = "^[0-]+$"
            boolean r1 = java.util.regex.Pattern.matches(r0, r1)
            return r1
    }

    public static java.lang.String e() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "os_vn"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = com.tkay.core.common.l.d.j
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            com.tkay.core.common.l.d.j = r0
        L1b:
            java.lang.String r0 = com.tkay.core.common.l.d.j
            return r0
    }

    public static java.lang.String e(android.content.Context r1) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            r0 = 0
            com.tkay.core.common.l.d.e = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L1a
            java.lang.String r1 = d(r1)     // Catch: java.lang.Throwable -> L1a
            com.tkay.core.common.l.d.e = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = com.tkay.core.common.l.f.b(r1)     // Catch: java.lang.Throwable -> L1a
            com.tkay.core.common.l.d.e = r1     // Catch: java.lang.Throwable -> L1a
        L1a:
            java.lang.String r1 = com.tkay.core.common.l.d.e
            return r1
    }

    private static boolean e(java.lang.String r1) {
            java.lang.String r0 = "^[0-]+$"
            boolean r1 = java.util.regex.Pattern.matches(r0, r1)
            return r1
    }

    public static java.lang.String f() {
            java.lang.String r0 = ""
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L31
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L31
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)     // Catch: java.lang.Exception -> L31
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> L31
            if (r1 != 0) goto L15
            return r0
        L15:
            java.lang.String r1 = com.tkay.core.common.l.d.g
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2f
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = "tkay_gaid"
            java.lang.String r0 = com.tkay.core.common.l.p.b(r1, r2, r3, r0)
            com.tkay.core.common.l.d.g = r0
        L2f:
            java.lang.String r0 = com.tkay.core.common.l.d.g
        L31:
            return r0
    }

    public static java.lang.String f(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "language"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r2 != 0) goto L19
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
        L19:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L48
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L48
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L48
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L48
            if (r0 != 0) goto L2c
            return r1
        L2c:
            java.lang.String r0 = com.tkay.core.common.l.d.o
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L45
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            java.util.Locale r2 = r2.locale
            java.lang.String r2 = r2.getLanguage()
            com.tkay.core.common.l.d.o = r2
            return r2
        L45:
            java.lang.String r2 = com.tkay.core.common.l.d.o
            return r2
        L48:
            return r1
    }

    public static int g(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "orient"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Le
            r2 = 0
            return r2
        Le:
            if (r2 != 0) goto L18
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
        L18:
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            int r2 = r2.orientation
            r0 = 2
            if (r2 != r0) goto L26
            return r0
        L26:
            r0 = 1
            if (r2 != r0) goto L29
        L29:
            return r0
    }

    public static java.lang.String g() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r0 = r0.b()
            java.lang.String r1 = ""
            if (r0 != 0) goto Ld
            return r1
        Ld:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2d
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L2d
            long r2 = r2 - r4
            double r2 = (double) r2     // Catch: java.lang.Throwable -> L2d
            r4 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r2 = r2 / r4
            java.math.BigDecimal r0 = new java.math.BigDecimal     // Catch: java.lang.Throwable -> L2d
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2d
            r2 = 6
            r3 = 4
            java.math.BigDecimal r0 = r0.setScale(r2, r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2d
            return r0
        L2d:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    public static java.lang.String h(android.content.Context r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "app_vc"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r3 != 0) goto L19
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
        L19:
            int r0 = com.tkay.core.common.l.d.n
            if (r0 != 0) goto L42
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L3d
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L3d
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L3d
            int r3 = r3.versionCode     // Catch: java.lang.Exception -> L3d
            com.tkay.core.common.l.d.n = r3     // Catch: java.lang.Exception -> L3d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d
            r3.<init>()     // Catch: java.lang.Exception -> L3d
            int r0 = com.tkay.core.common.l.d.n     // Catch: java.lang.Exception -> L3d
            r3.append(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L3d
            return r3
        L3d:
            r3 = move-exception
            r3.printStackTrace()
            return r1
        L42:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            int r0 = com.tkay.core.common.l.d.n
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static org.json.JSONObject h() {
            java.lang.String r0 = com.tkay.core.common.l.d.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = com.tkay.core.common.l.d.a     // Catch: java.lang.Exception -> L10
            r0.<init>(r1)     // Catch: java.lang.Exception -> L10
            return r0
        L10:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            return r0
    }

    public static synchronized java.lang.String i() {
            java.lang.Class<com.tkay.core.common.l.d> r0 = com.tkay.core.common.l.d.class
            monitor-enter(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = "ua"
            boolean r1 = r1.c(r2)     // Catch: java.lang.Throwable -> L7c
            if (r1 == 0) goto L13
            java.lang.String r1 = ""
            monitor-exit(r0)
            return r1
        L13:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L7c
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L7c
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L7c
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L7c
            if (r1 != 0) goto L29
            java.lang.String r1 = ""
            monitor-exit(r0)
            return r1
        L29:
            java.lang.String r1 = com.tkay.core.common.l.d.i     // Catch: java.lang.Throwable -> L7c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L7c
            if (r1 != 0) goto L35
            java.lang.String r1 = com.tkay.core.common.l.d.i     // Catch: java.lang.Throwable -> L7c
            monitor-exit(r0)
            return r1
        L35:
            java.lang.String r1 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = a()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = android.os.Build.ID     // Catch: java.lang.Throwable -> L7c
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L7c
            if (r4 != 0) goto L74
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L7c
            if (r4 != 0) goto L74
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L7c
            if (r4 != 0) goto L74
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c
            java.lang.String r5 = "Mozilla/5.0 (Linux; Android "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L7c
            r4.append(r1)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = "; "
            r4.append(r1)     // Catch: java.lang.Throwable -> L7c
            r4.append(r2)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = " Build/"
            r4.append(r1)     // Catch: java.lang.Throwable -> L7c
            r4.append(r3)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = ") AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19"
            r4.append(r1)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L7c
            monitor-exit(r0)
            return r1
        L74:
            java.lang.String r1 = ""
            monitor-exit(r0)
            return r1
        L78:
            java.lang.String r1 = ""
            monitor-exit(r0)
            return r1
        L7c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String i(android.content.Context r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "app_vn"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r3 != 0) goto L19
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
        L19:
            java.lang.String r0 = com.tkay.core.common.l.d.m     // Catch: java.lang.Exception -> L36
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L33
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L36
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L36
            com.tkay.core.common.l.d.m = r3     // Catch: java.lang.Exception -> L36
            return r3
        L33:
            java.lang.String r3 = com.tkay.core.common.l.d.m
            return r3
        L36:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    public static java.lang.String j() {
            java.lang.String r0 = com.tkay.core.common.l.d.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.tkay.core.common.l.d.d
            return r0
        Lb:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.F()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1c
            com.tkay.core.common.l.d.d = r0
            return r0
        L1c:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.F()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L42
            java.lang.String r0 = "com.unity3d.player.UnityPlayer"
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L32
            java.lang.String r0 = "2"
            goto L34
        L32:
            java.lang.String r0 = "1"
        L34:
            java.lang.String r1 = "org.cocos2dx.lib.Cocos2dxActivity"
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = "3"
            java.lang.String r1 = "org.cocos2dx.lib.Cocos2dxJavascriptJavaBridge"
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = "4"
        L42:
            com.tkay.core.common.l.d.d = r0
            return r0
    }

    public static java.lang.String j(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "screen"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r2 != 0) goto L19
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
        L19:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L6b
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L6b
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L6b
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L6b
            if (r0 != 0) goto L2c
            return r1
        L2c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r2 != 0) goto L3c
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            goto L3d
        L3c:
            r1 = r2
        L3d:
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.widthPixels
            r0.append(r1)
            java.lang.String r1 = "*"
            r0.append(r1)
            if (r2 != 0) goto L59
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
        L59:
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.heightPixels
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L6b:
            return r1
    }

    public static int k() {
            int r0 = com.tkay.core.common.l.d.u
            r1 = -1
            if (r0 != r1) goto L23
            java.lang.String r0 = l()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto L13
            com.tkay.core.common.l.d.u = r1
            goto L23
        L13:
            java.lang.String r0 = "com.tencent.mm.opensdk.openapi.WXAPIFactory"
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L21
            java.lang.String r0 = "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram"
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L21
            r0 = 1
            com.tkay.core.common.l.d.u = r0     // Catch: java.lang.Throwable -> L21
            goto L23
        L21:
            com.tkay.core.common.l.d.u = r1
        L23:
            int r0 = com.tkay.core.common.l.d.u
            return r0
    }

    public static java.lang.String k(android.content.Context r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "package_name"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r3 != 0) goto L19
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
        L19:
            java.lang.String r0 = com.tkay.core.common.l.d.l     // Catch: java.lang.Exception -> L36
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L33
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L36
            r2 = 0
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L36
            com.tkay.core.common.l.d.l = r3     // Catch: java.lang.Exception -> L36
            return r3
        L33:
            java.lang.String r3 = com.tkay.core.common.l.d.l
            return r3
        L36:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    public static java.lang.String l() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.c()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lf
            return r0
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L26
            java.util.Map r0 = r0.l()     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L2a
            java.lang.String r1 = "wechat_app_id"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L2a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L26
            return r0
        L26:
            r0 = move-exception
            r0.printStackTrace()
        L2a:
            r0 = 0
            return r0
    }

    public static java.lang.String l(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "it_src"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r2 != 0) goto L19
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
        L19:
            java.lang.String r0 = com.tkay.core.common.l.d.b     // Catch: java.lang.Exception -> L33
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L30
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = k(r2)     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = r0.getInstallerPackageName(r2)     // Catch: java.lang.Exception -> L33
            com.tkay.core.common.l.d.b = r2     // Catch: java.lang.Exception -> L33
            return r2
        L30:
            java.lang.String r2 = com.tkay.core.common.l.d.b
            return r2
        L33:
            return r1
    }

    public static int m() {
            int r0 = com.tkay.core.common.l.d.v
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            r0 = 0
            com.tkay.core.common.l.d.v = r0
            java.lang.String r0 = "com.tencent.mm.opensdk.constants.Build"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "SDK_INT"
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.Throwable -> L22
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L22
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L22
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L22
            com.tkay.core.common.l.d.v = r0     // Catch: java.lang.Throwable -> L22
        L22:
            int r0 = com.tkay.core.common.l.d.v
            return r0
    }

    public static java.lang.String m(android.content.Context r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "network_type"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L7d
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L7d
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L7d
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L7d
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = "-1"
            if (r4 != 0) goto L27
            return r0
        L27:
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L78
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L78
            if (r1 != 0) goto L32
            return r0
        L32:
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r2 = com.tkay.core.common.l.h.a(r2, r4)     // Catch: java.lang.Exception -> L78
            if (r2 == 0) goto L77
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L78
            if (r1 != 0) goto L41
            return r0
        L41:
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L78
            r2 = 1
            if (r1 != r2) goto L4b
            java.lang.String r4 = "-2"
            return r4
        L4b:
            java.lang.String r1 = "phone"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L78
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Exception -> L78
            if (r4 != 0) goto L56
            return r0
        L56:
            int r4 = r4.getNetworkType()     // Catch: java.lang.Exception -> L78
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L78
            r1.<init>()     // Catch: java.lang.Exception -> L78
            r3 = 20
            if (r4 == r3) goto L6d
            switch(r4) {
                case 1: goto L6f;
                case 2: goto L6f;
                case 3: goto L6b;
                case 4: goto L6f;
                case 5: goto L6b;
                case 6: goto L6b;
                case 7: goto L6f;
                case 8: goto L6b;
                case 9: goto L6b;
                case 10: goto L6b;
                case 11: goto L6f;
                case 12: goto L6b;
                case 13: goto L68;
                case 14: goto L6b;
                case 15: goto L6b;
                default: goto L66;
            }     // Catch: java.lang.Exception -> L78
        L66:
            r2 = -1
            goto L6f
        L68:
            r2 = 13
            goto L6f
        L6b:
            r2 = 3
            goto L6f
        L6d:
            r2 = 16
        L6f:
            r1.append(r2)     // Catch: java.lang.Exception -> L78
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L78
            return r4
        L77:
            return r0
        L78:
            r4 = move-exception
            r4.printStackTrace()
            return r0
        L7d:
            return r1
    }

    private static int n() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    public static java.lang.String n(android.content.Context r3) {
            java.lang.String r0 = com.tkay.core.common.l.d.q
            java.lang.String r1 = ""
            if (r0 != 0) goto L1f
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L1c
            java.lang.String r0 = "com.android.vending"
            r2 = 0
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r0, r2)     // Catch: java.lang.Exception -> L1c
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Exception -> L1c
            com.tkay.core.common.l.d.q = r3     // Catch: java.lang.Exception -> L1c
            if (r3 != 0) goto L19
            com.tkay.core.common.l.d.q = r1     // Catch: java.lang.Exception -> L1c
        L19:
            java.lang.String r3 = com.tkay.core.common.l.d.q     // Catch: java.lang.Exception -> L1c
            return r3
        L1c:
            com.tkay.core.common.l.d.q = r1
            return r1
        L1f:
            if (r0 != 0) goto L23
            com.tkay.core.common.l.d.q = r1
        L23:
            java.lang.String r3 = com.tkay.core.common.l.d.q
            return r3
    }

    public static java.lang.String o(android.content.Context r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r0 = r0.b()
            if (r0 != 0) goto Ld
            java.lang.String r1 = ""
            return r1
        Ld:
            java.lang.String r0 = com.tkay.core.common.l.d.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.view.Display r1 = r1.getDefaultDisplay()
            r1.getMetrics(r0)
            float r1 = r0.density
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.tkay.core.common.l.d.c = r1
        L31:
            java.lang.String r1 = com.tkay.core.common.l.d.c
            return r1
    }

    public static void p(android.content.Context r5) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "ua"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Ld
            return
        Ld:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L87
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L87
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L87
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L87
            if (r0 != 0) goto L20
            return
        L20:
            java.lang.String r0 = ""
            java.lang.String r1 = "local_ua"
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = com.tkay.core.common.l.p.b(r5, r2, r1, r0)
            com.tkay.core.common.l.d.i = r3
            java.lang.String r3 = "local_os"
            java.lang.String r0 = com.tkay.core.common.l.p.b(r5, r2, r3, r0)
            java.lang.String r4 = com.tkay.core.common.l.d.i
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L43
            java.lang.String r4 = android.os.Build.VERSION.RELEASE
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L43
            return
        L43:
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            if (r0 == r4) goto L56
            java.lang.String r5 = com.tkay.core.common.l.d.i
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L55
        L55:
            return
        L56:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7f
            r4 = 17
            if (r0 < r4) goto L63
            java.lang.String r0 = android.webkit.WebSettings.getDefaultUserAgent(r5)     // Catch: java.lang.Throwable -> L7f
            com.tkay.core.common.l.d.i = r0     // Catch: java.lang.Throwable -> L7f
            goto L75
        L63:
            android.webkit.WebView r0 = new android.webkit.WebView     // Catch: java.lang.Throwable -> L7f
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L7f
            com.tkay.core.common.l.g.a(r0)     // Catch: java.lang.Throwable -> L7f
            android.webkit.WebSettings r0 = r0.getSettings()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r0 = r0.getUserAgentString()     // Catch: java.lang.Throwable -> L7f
            com.tkay.core.common.l.d.i = r0     // Catch: java.lang.Throwable -> L7f
        L75:
            java.lang.String r0 = com.tkay.core.common.l.d.i     // Catch: java.lang.Throwable -> L7f
            com.tkay.core.common.l.p.a(r5, r2, r1, r0)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r0 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> L7f
            com.tkay.core.common.l.p.a(r5, r2, r3, r0)     // Catch: java.lang.Throwable -> L7f
        L7f:
            java.lang.String r5 = com.tkay.core.common.l.d.i
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L87
        L87:
            return
    }

    public static synchronized void q(android.content.Context r5) {
            java.lang.Class<com.tkay.core.common.l.d> r0 = com.tkay.core.common.l.d.class
            monitor-enter(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = r1.w()     // Catch: java.lang.Throwable -> L6b
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L6b
            if (r1 != 0) goto L13
            monitor-exit(r0)
            return
        L13:
            java.lang.String r1 = ""
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6b
            com.tkay.core.api.IExHandler r2 = r2.b()     // Catch: java.lang.Throwable -> L6b
            if (r2 == 0) goto L23
            java.lang.String r1 = r2.getUniqueId(r5)     // Catch: java.lang.Throwable -> L6b
        L23:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L6b
            if (r2 == 0) goto L2d
            java.lang.String r1 = r(r5)     // Catch: java.lang.Throwable -> L6b
        L2d:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L6b
            if (r2 != 0) goto L3b
            java.lang.String r2 = "^[0-]+$"
            boolean r2 = java.util.regex.Pattern.matches(r2, r1)     // Catch: java.lang.Throwable -> L6b
            if (r2 == 0) goto L3f
        L3b:
            java.lang.String r1 = d(r5)     // Catch: java.lang.Throwable -> L6b
        L3f:
            boolean r5 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L4d
            java.util.UUID r5 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> L6b
        L4d:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = com.tkay.core.common.l.f.a(r1)     // Catch: java.lang.Throwable -> L6b
            r5.k(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r5 = ""
            java.lang.String r1 = "3"
            java.lang.String r2 = ""
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L6b
            com.tkay.core.common.k.c.a(r5, r1, r2, r3)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r0)
            return
        L6b:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static synchronized java.lang.String r(android.content.Context r5) {
            java.lang.Class<com.tkay.core.common.l.d> r0 = com.tkay.core.common.l.d.class
            monitor-enter(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "gaid"
            boolean r1 = r1.c(r2)     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L13
            java.lang.String r5 = ""
            monitor-exit(r0)
            return r5
        L13:
            r1 = 2
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newFixedThreadPool(r1)     // Catch: java.lang.Throwable -> L41
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L41
            com.tkay.core.common.l.d$1 r3 = new com.tkay.core.common.l.d$1     // Catch: java.lang.Throwable -> L41
            r3.<init>(r5, r2, r1)     // Catch: java.lang.Throwable -> L41
            r1.submit(r3)     // Catch: java.lang.Throwable -> L41
            monitor-enter(r1)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L41
            r3 = 2000(0x7d0, double:9.88E-321)
            r1.wait(r3)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3a
            r1.shutdown()     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L41
            r5 = 0
            r1 = r2[r5]     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L41
            if (r1 == 0) goto L36
            r5 = r2[r5]     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L41
            monitor-exit(r0)
            return r5
        L36:
            java.lang.String r5 = ""
            monitor-exit(r0)
            return r5
        L3a:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L41
            throw r5     // Catch: java.lang.Exception -> L3d java.lang.Throwable -> L41
        L3d:
            java.lang.String r5 = ""
            monitor-exit(r0)
            return r5
        L41:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static int s(android.content.Context r2) {
            int r0 = com.tkay.core.common.l.d.t
            r1 = -1
            if (r0 != r1) goto Ld
            java.lang.String r0 = "com.tencent.mm"
            boolean r2 = com.tkay.core.common.l.h.a(r2, r0)
            com.tkay.core.common.l.d.t = r2
        Ld:
            int r2 = com.tkay.core.common.l.d.t
            return r2
    }

    private static int t(android.content.Context r0) {
            if (r0 != 0) goto La
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
        La:
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            return r0
    }

    private static int u(android.content.Context r0) {
            if (r0 != 0) goto La
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
        La:
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.heightPixels
            return r0
    }

    private static int v(android.content.Context r3) {
            r0 = -1
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L38
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L38
            if (r1 != 0) goto Lf
            return r0
        Lf:
            java.lang.String r2 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r2 = com.tkay.core.common.l.h.a(r2, r3)     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L37
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L38
            if (r1 != 0) goto L1e
            return r0
        L1e:
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L38
            r2 = 1
            if (r1 != r2) goto L27
            r3 = -2
            return r3
        L27:
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L38
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L38
            if (r3 != 0) goto L32
            return r0
        L32:
            int r3 = r3.getNetworkType()     // Catch: java.lang.Exception -> L38
            return r3
        L37:
            return r0
        L38:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    private static void w(android.content.Context r3) {
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "NETWORK_VERSION_NAME"
            java.lang.String r2 = ""
            java.lang.String r3 = com.tkay.core.common.l.p.b(r3, r0, r1, r2)
            com.tkay.core.common.l.d.a = r3
            return
    }
}
