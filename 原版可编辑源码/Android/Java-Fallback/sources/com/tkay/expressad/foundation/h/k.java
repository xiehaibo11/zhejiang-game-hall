package com.tkay.expressad.foundation.h;

public final class k extends com.tkay.expressad.foundation.h.d {
    private static final java.lang.String a = "SameDiTool";
    private static java.lang.String b = null;
    private static java.lang.String c = null;
    private static int d = -1;
    private static int e = -1;
    private static int f = -1;
    private static java.lang.String g = "";
    private static java.lang.String h = "";
    private static java.lang.String i = "";
    private static java.lang.String j = "";
    private static int k = 0;
    private static java.lang.String l = "";
    private static java.lang.String m = "";
    private static int n = -1;
    private static java.lang.String o = "";
    private static int p = 0;
    private static java.lang.String q = "";


    final class 2 implements java.lang.Runnable {
        final android.content.Context a;

        2(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                r0 = 0
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L66
                java.lang.String r2 = "network_type"
                boolean r1 = r1.c(r2)     // Catch: java.lang.Throwable -> L66
                if (r1 == 0) goto Le
                return
            Le:
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> L66
                android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> L66
                com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> L66
                boolean r1 = r1.b()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> L66
                if (r1 != 0) goto L21
                return
            L21:
                android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L66
                if (r1 != 0) goto L26
                return
            L26:
                android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L66
                java.lang.String r2 = "connectivity"
                java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L66
                android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Throwable -> L66
                if (r1 != 0) goto L33
                return
            L33:
                android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L66
                if (r1 != 0) goto L3d
                com.tkay.expressad.foundation.h.k.b(r0)     // Catch: java.lang.Throwable -> L66
                return
            L3d:
                int r1 = r1.getType()     // Catch: java.lang.Throwable -> L66
                r2 = 1
                if (r1 != r2) goto L4a
                r1 = 9
                com.tkay.expressad.foundation.h.k.b(r1)     // Catch: java.lang.Throwable -> L66
                return
            L4a:
                android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L66
                java.lang.String r2 = "phone"
                java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L66
                android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Throwable -> L66
                if (r1 != 0) goto L5a
                com.tkay.expressad.foundation.h.k.b(r0)     // Catch: java.lang.Throwable -> L66
                return
            L5a:
                int r1 = r1.getNetworkType()     // Catch: java.lang.Throwable -> L66
                int r1 = com.tkay.expressad.foundation.h.k.a(r1)     // Catch: java.lang.Throwable -> L66
                com.tkay.expressad.foundation.h.k.b(r1)     // Catch: java.lang.Throwable -> L66
            L65:
                return
            L66:
                r1 = move-exception
                r1.getMessage()
                com.tkay.expressad.foundation.h.k.b(r0)
                return
        }
    }

    static {
            return
    }

    private k() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a() {
            r0 = 0
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L5b
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L5b
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r3 = "network_type"
            boolean r2 = r2.c(r3)     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L18
            int r0 = com.tkay.expressad.foundation.h.k.f     // Catch: java.lang.Throwable -> L5b
            return r0
        L18:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L58 java.lang.Throwable -> L5b
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L58 java.lang.Throwable -> L5b
            com.tkay.core.common.b.p r2 = com.tkay.core.common.b.p.a(r2)     // Catch: java.lang.Exception -> L58 java.lang.Throwable -> L5b
            boolean r2 = r2.b()     // Catch: java.lang.Exception -> L58 java.lang.Throwable -> L5b
            if (r2 != 0) goto L2d
            int r0 = com.tkay.expressad.foundation.h.k.f     // Catch: java.lang.Exception -> L58 java.lang.Throwable -> L5b
            return r0
        L2d:
            if (r1 != 0) goto L32
            int r0 = com.tkay.expressad.foundation.h.k.f     // Catch: java.lang.Throwable -> L5b
            return r0
        L32:
            int r2 = com.tkay.expressad.foundation.h.k.f     // Catch: java.lang.Throwable -> L5b
            r3 = -1
            if (r2 == r3) goto L55
            com.tkay.expressad.foundation.h.k$2 r2 = new com.tkay.expressad.foundation.h.k$2     // Catch: java.lang.Throwable -> L4e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L4e
            java.util.concurrent.ThreadPoolExecutor r1 = com.tkay.expressad.foundation.g.h.a.b()     // Catch: java.lang.Throwable -> L4e
            int r1 = r1.getActiveCount()     // Catch: java.lang.Throwable -> L4e
            if (r1 > 0) goto L52
            java.util.concurrent.ThreadPoolExecutor r1 = com.tkay.expressad.foundation.g.h.a.b()     // Catch: java.lang.Throwable -> L4e
            r1.execute(r2)     // Catch: java.lang.Throwable -> L4e
            goto L52
        L4e:
            r1 = move-exception
            r1.getMessage()     // Catch: java.lang.Throwable -> L5b
        L52:
            int r0 = com.tkay.expressad.foundation.h.k.f     // Catch: java.lang.Throwable -> L5b
            return r0
        L55:
            com.tkay.expressad.foundation.h.k.f = r0     // Catch: java.lang.Throwable -> L5b
            return r0
        L58:
            int r0 = com.tkay.expressad.foundation.h.k.f     // Catch: java.lang.Throwable -> L5b
            return r0
        L5b:
            r1 = move-exception
            r1.getMessage()
            com.tkay.expressad.foundation.h.k.f = r0
            return r0
    }

    public static int a(int r1) {
            r0 = 20
            if (r1 == r0) goto Lf
            switch(r1) {
                case 1: goto Ld;
                case 2: goto Ld;
                case 3: goto Lb;
                case 4: goto Ld;
                case 5: goto Lb;
                case 6: goto Lb;
                case 7: goto Ld;
                case 8: goto Lb;
                case 9: goto Lb;
                case 10: goto Lb;
                case 11: goto Ld;
                case 12: goto Lb;
                case 13: goto L9;
                case 14: goto Lb;
                case 15: goto Lb;
                default: goto L7;
            }
        L7:
            r1 = 0
            return r1
        L9:
            r1 = 4
            return r1
        Lb:
            r1 = 3
            return r1
        Ld:
            r1 = 2
            return r1
        Lf:
            r1 = 5
            return r1
    }

    public static java.lang.String a(android.content.Context r2, int r3) {
            java.lang.String r0 = ""
            if (r3 == 0) goto L26
            r1 = 9
            if (r3 != r1) goto L9
            goto L26
        L9:
            boolean r3 = com.tkay.expressad.foundation.g.a.bW     // Catch: java.lang.Throwable -> L22
            if (r3 == 0) goto L26
            java.lang.String r3 = "phone"
            java.lang.Object r2 = r2.getSystemService(r3)     // Catch: java.lang.Throwable -> L22
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L18
            return r0
        L18:
            int r2 = r2.getNetworkType()     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L22
            r0 = r2
            goto L26
        L22:
            r2 = move-exception
            r2.getMessage()
        L26:
            return r0
    }

    private static java.lang.String a(java.lang.String r1, android.content.Context r2) {
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.o     // Catch: java.lang.Exception -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2a
            if (r0 != 0) goto Lb
            java.lang.String r1 = com.tkay.expressad.foundation.h.k.o     // Catch: java.lang.Exception -> L2a
            return r1
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L2a
            if (r0 != 0) goto L2e
            if (r2 == 0) goto L2e
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r2.getInstallerPackageName(r1)     // Catch: java.lang.Exception -> L2a
            com.tkay.expressad.foundation.h.k.o = r1     // Catch: java.lang.Exception -> L2a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "PKGSource:"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.o     // Catch: java.lang.Exception -> L2a
            r1.append(r2)     // Catch: java.lang.Exception -> L2a
            goto L2e
        L2a:
            r1 = move-exception
            r1.getMessage()
        L2e:
            java.lang.String r1 = com.tkay.expressad.foundation.h.k.o
            return r1
    }

    private static void a(java.lang.String r1) {
            java.lang.String r0 = com.tkay.expressad.foundation.h.j.a(r1)
            com.tkay.expressad.foundation.h.k.c = r0
            com.tkay.expressad.foundation.h.k.b = r1
            return
    }

    static int b(int r0) {
            com.tkay.expressad.foundation.h.k.f = r0
            return r0
    }

    public static int b(android.content.Context r2) {
            r0 = 1
            if (r2 == 0) goto L1d
            android.content.res.Resources r1 = r2.getResources()
            if (r1 != 0) goto La
            goto L1d
        La:
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            if (r2 != 0) goto L15
            return r0
        L15:
            int r2 = r2.orientation
            r1 = 2
            if (r2 != r1) goto L1b
            return r1
        L1b:
            if (r2 != r0) goto L1d
        L1d:
            return r0
    }

    public static java.lang.String b() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "model"
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
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.MANUFACTURER
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L3b:
            return r1
    }

    public static int c(android.content.Context r2) {
            if (r2 != 0) goto L5
            int r2 = com.tkay.expressad.foundation.h.k.k
            return r2
        L5:
            int r0 = com.tkay.expressad.foundation.h.k.k
            if (r0 != 0) goto L21
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L1b
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L1b
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L1b
            com.tkay.expressad.foundation.h.k.k = r2     // Catch: java.lang.Exception -> L1b
            return r2
        L1b:
            r2 = move-exception
            r2.printStackTrace()
            r2 = -1
            return r2
        L21:
            return r0
    }

    public static java.lang.String c() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "os_vc"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L37
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L37
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)     // Catch: java.lang.Exception -> L37
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L34
            int r0 = d()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.tkay.expressad.foundation.h.k.h = r0
        L34:
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.h
            return r0
        L37:
            return r1
    }

    public static int d() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3
            return r0
        L3:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static java.lang.String d(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.j
            return r2
        L5:
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.j     // Catch: java.lang.Exception -> L22
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1f
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.foundation.h.k.j = r2     // Catch: java.lang.Exception -> L22
            return r2
        L1f:
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.j
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = ""
            return r2
    }

    public static int e(android.content.Context r4) {
            java.lang.String r0 = "width"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = "screen"
            boolean r1 = r1.c(r2)
            r2 = 0
            if (r1 == 0) goto L10
            return r2
        L10:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L4a
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L4a
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)     // Catch: java.lang.Exception -> L4a
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> L4a
            if (r1 != 0) goto L23
            return r2
        L23:
            if (r4 != 0) goto L26
            return r2
        L26:
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Exception -> L46
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> L46
            java.util.HashMap r4 = g(r4)     // Catch: java.lang.Exception -> L46
            java.lang.Object r3 = r4.get(r0)     // Catch: java.lang.Exception -> L46
            if (r3 != 0) goto L3b
            int r4 = r1.widthPixels     // Catch: java.lang.Exception -> L46
            return r4
        L3b:
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L46
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L46
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L46
            return r4
        L46:
            r4 = move-exception
            r4.printStackTrace()
        L4a:
            return r2
    }

    public static java.lang.String e() {
            java.lang.String r0 = ""
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L73
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L73
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L73
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L73
            long r2 = r2 - r4
            long r4 = l()     // Catch: java.lang.Exception -> L73
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L73
            java.lang.String r7 = "app_tki_"
            r6.<init>(r7)     // Catch: java.lang.Exception -> L73
            r6.append(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r7 = "_"
            r6.append(r7)     // Catch: java.lang.Exception -> L73
            r6.append(r4)     // Catch: java.lang.Exception -> L73
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L73
            java.lang.Object r7 = com.tkay.expressad.foundation.h.v.b(r1, r6, r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L73
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L70
            if (r8 == 0) goto L78
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Exception -> L70
            r8.<init>()     // Catch: java.lang.Exception -> L70
            java.lang.String r9 = "1"
            r8.put(r9, r0)     // Catch: java.lang.Exception -> L60
            java.lang.String r9 = "2"
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L60
            r8.put(r9, r4)     // Catch: java.lang.Exception -> L60
            java.lang.String r4 = "3"
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L60
            r8.put(r4, r2)     // Catch: java.lang.Exception -> L60
            java.lang.String r2 = "4"
            r8.put(r2, r0)     // Catch: java.lang.Exception -> L60
            java.lang.String r2 = "5"
            r8.put(r2, r0)     // Catch: java.lang.Exception -> L60
            goto L64
        L60:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L70
        L64:
            java.lang.String r0 = r8.toString()     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = com.tkay.expressad.foundation.h.a.a(r0)     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.foundation.h.v.a(r1, r6, r0)     // Catch: java.lang.Exception -> L73
            goto L77
        L70:
            r1 = move-exception
            r0 = r7
            goto L74
        L73:
            r1 = move-exception
        L74:
            r1.printStackTrace()
        L77:
            r7 = r0
        L78:
            return r7
    }

    public static int f() {
            java.lang.String r0 = "TotalRamSize"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)
            boolean r1 = r1.b()
            if (r1 != 0) goto L16
            r0 = 0
            return r0
        L16:
            int r1 = com.tkay.expressad.foundation.h.k.d
            if (r1 > 0) goto L62
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L5e
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L5e
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L5e
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L5e
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5e
            long r2 = r4 - r2
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L44
            int r2 = com.tkay.expressad.foundation.h.k.d     // Catch: java.lang.Throwable -> L5e
            r3 = -1
            if (r2 != r3) goto L62
        L44:
            long r2 = l()     // Catch: java.lang.Throwable -> L5e
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            long r2 = r2 / r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L5e
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L5e
            com.tkay.expressad.foundation.h.k.d = r2     // Catch: java.lang.Throwable -> L5e
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L5e
            com.tkay.expressad.foundation.h.v.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L5e
            goto L62
        L5e:
            r0 = move-exception
            r0.getMessage()
        L62:
            int r0 = com.tkay.expressad.foundation.h.k.d
            return r0
    }

    public static int f(android.content.Context r4) {
            java.lang.String r0 = "height"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = "screen"
            boolean r1 = r1.c(r2)
            r2 = 0
            if (r1 == 0) goto L10
            return r2
        L10:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L4a
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L4a
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)     // Catch: java.lang.Exception -> L4a
            boolean r1 = r1.b()     // Catch: java.lang.Exception -> L4a
            if (r1 != 0) goto L23
            return r2
        L23:
            if (r4 != 0) goto L26
            return r2
        L26:
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Exception -> L46
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> L46
            java.util.HashMap r4 = g(r4)     // Catch: java.lang.Exception -> L46
            java.lang.Object r3 = r4.get(r0)     // Catch: java.lang.Exception -> L46
            if (r3 != 0) goto L3b
            int r4 = r1.heightPixels     // Catch: java.lang.Exception -> L46
            return r4
        L3b:
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Exception -> L46
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L46
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L46
            return r4
        L46:
            r4 = move-exception
            r4.printStackTrace()
        L4a:
            return r2
    }

    public static int g() {
            java.lang.String r0 = "FreeRamSize"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L72
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L72
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)     // Catch: java.lang.Throwable -> L72
            boolean r1 = r1.b()     // Catch: java.lang.Throwable -> L72
            if (r1 != 0) goto L16
            r0 = 0
            return r0
        L16:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L72
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L72
            r2 = 0
            java.lang.Long r4 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L72
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r1, r0, r4)     // Catch: java.lang.Throwable -> L72
            java.lang.Long r4 = (java.lang.Long) r4     // Catch: java.lang.Throwable -> L72
            long r4 = r4.longValue()     // Catch: java.lang.Throwable -> L72
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L72
            long r4 = r6 - r4
            r8 = 1800000(0x1b7740, double:8.89318E-318)
            int r4 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r4 > 0) goto L40
            int r4 = com.tkay.expressad.foundation.h.k.e     // Catch: java.lang.Throwable -> L72
            r5 = -1
            if (r4 != r5) goto L76
        L40:
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L72
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> L72
            if (r4 == 0) goto L5c
            java.lang.String r2 = "activity"
            java.lang.Object r2 = r4.getSystemService(r2)     // Catch: java.lang.Throwable -> L72
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2     // Catch: java.lang.Throwable -> L72
            android.app.ActivityManager$MemoryInfo r3 = new android.app.ActivityManager$MemoryInfo     // Catch: java.lang.Throwable -> L72
            r3.<init>()     // Catch: java.lang.Throwable -> L72
            r2.getMemoryInfo(r3)     // Catch: java.lang.Throwable -> L72
            long r2 = r3.availMem     // Catch: java.lang.Throwable -> L72
        L5c:
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            long r2 = r2 / r4
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L72
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.h.k.e = r2     // Catch: java.lang.Throwable -> L72
            java.lang.Long r2 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.foundation.h.v.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L72
            goto L76
        L72:
            r0 = move-exception
            r0.getMessage()
        L76:
            int r0 = com.tkay.expressad.foundation.h.k.e
            return r0
    }

    public static java.util.HashMap g(android.content.Context r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "window"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L3d
            android.view.WindowManager r4 = (android.view.WindowManager) r4     // Catch: java.lang.Exception -> L3d
            android.view.Display r4 = r4.getDefaultDisplay()     // Catch: java.lang.Exception -> L3d
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L3d
            r1.<init>()     // Catch: java.lang.Exception -> L3d
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3d
            r3 = 17
            if (r2 < r3) goto L23
            r4.getRealMetrics(r1)     // Catch: java.lang.Exception -> L3d
            goto L26
        L23:
            r4.getMetrics(r1)     // Catch: java.lang.Exception -> L3d
        L26:
            java.lang.String r4 = "height"
            int r2 = r1.heightPixels     // Catch: java.lang.Exception -> L3d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3d
            r0.put(r4, r2)     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = "width"
            int r1 = r1.widthPixels     // Catch: java.lang.Exception -> L3d
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L3d
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L3d
            goto L41
        L3d:
            r4 = move-exception
            r4.getMessage()
        L41:
            return r0
    }

    public static java.lang.String h() {
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.q
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L6c
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            java.lang.String r2 = ""
            if (r0 < r1) goto L30
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            boolean r0 = r0.b()
            if (r0 != 0) goto L23
            goto L2d
        L23:
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            java.util.List r0 = java.util.Arrays.asList(r0)
            java.lang.String r2 = r0.toString()
        L2d:
            com.tkay.expressad.foundation.h.k.q = r2
            goto L6c
        L30:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)
            boolean r1 = r1.b()
            if (r1 != 0) goto L49
            r1 = r2
            goto L4b
        L49:
            java.lang.String r1 = android.os.Build.CPU_ABI
        L4b:
            r0.add(r1)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)
            boolean r1 = r1.b()
            if (r1 != 0) goto L61
            goto L63
        L61:
            java.lang.String r2 = android.os.Build.CPU_ABI2
        L63:
            r0.add(r2)
            java.lang.String r0 = r0.toString()
            com.tkay.expressad.foundation.h.k.q = r0
        L6c:
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.q
            return r0
    }

    public static java.lang.String h(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.i
            return r2
        L5:
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.i     // Catch: java.lang.Exception -> L22
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L1f
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L22
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.foundation.h.k.i = r2     // Catch: java.lang.Exception -> L22
            return r2
        L1f:
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.i
            return r2
        L22:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = ""
            return r2
    }

    public static int i() {
            r0 = 0
            return r0
    }

    public static void i(android.content.Context r2) {
            if (r2 != 0) goto L3
            return
        L3:
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L22
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L22
            if (r0 != r1) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 == 0) goto L16
            a(r2)     // Catch: java.lang.Throwable -> L22
            return
        L16:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L22
            com.tkay.expressad.foundation.h.k$1 r1 = new com.tkay.expressad.foundation.h.k$1     // Catch: java.lang.Throwable -> L22
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            r0.a(r1)     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    private static java.util.UUID j() {
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L5
            goto La
        L5:
            r0 = move-exception
            r0.getMessage()
            r0 = 0
        La:
            return r0
    }

    private static void j(android.content.Context r1) {
            h(r1)     // Catch: java.lang.Throwable -> L1f
            d(r1)     // Catch: java.lang.Throwable -> L1f
            c(r1)     // Catch: java.lang.Throwable -> L1f
            b(r1)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r0, r1)     // Catch: java.lang.Throwable -> L1f
            com.tkay.expressad.foundation.g.a.bX = r0     // Catch: java.lang.Throwable -> L1f
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r0 = com.tkay.expressad.foundation.h.t.a(r0, r1)     // Catch: java.lang.Throwable -> L1f
            com.tkay.expressad.foundation.g.a.bW = r0     // Catch: java.lang.Throwable -> L1f
            k(r1)     // Catch: java.lang.Throwable -> L1f
        L1f:
            return
    }

    private static int k() {
            int r0 = com.tkay.expressad.foundation.h.k.n
            return r0
    }

    private static int k(android.content.Context r1) {
            if (r1 != 0) goto L5
            int r1 = com.tkay.expressad.foundation.h.k.p
            return r1
        L5:
            int r0 = com.tkay.expressad.foundation.h.k.p
            if (r0 != 0) goto L16
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L12
            int r1 = r1.targetSdkVersion     // Catch: java.lang.Exception -> L12
            com.tkay.expressad.foundation.h.k.p = r1     // Catch: java.lang.Exception -> L12
            goto L16
        L12:
            r1 = move-exception
            r1.getMessage()
        L16:
            int r1 = com.tkay.expressad.foundation.h.k.p
            return r1
    }

    private static long l() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L23
            java.lang.String r1 = "activity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            android.app.ActivityManager$MemoryInfo r1 = new android.app.ActivityManager$MemoryInfo
            r1.<init>()
            r0.getMemoryInfo(r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L23
            long r0 = r1.totalMem
            return r0
        L23:
            r0 = 0
            return r0
    }

    private static void l(android.content.Context r1) {
            com.tkay.expressad.foundation.h.k$2 r0 = new com.tkay.expressad.foundation.h.k$2     // Catch: java.lang.Throwable -> L17
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.ThreadPoolExecutor r1 = com.tkay.expressad.foundation.g.h.a.b()     // Catch: java.lang.Throwable -> L17
            int r1 = r1.getActiveCount()     // Catch: java.lang.Throwable -> L17
            if (r1 > 0) goto L16
            java.util.concurrent.ThreadPoolExecutor r1 = com.tkay.expressad.foundation.g.h.a.b()     // Catch: java.lang.Throwable -> L17
            r1.execute(r0)     // Catch: java.lang.Throwable -> L17
        L16:
            return
        L17:
            r1 = move-exception
            r1.getMessage()
            return
    }

    private static long m() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L1d
            java.lang.String r1 = "activity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            android.app.ActivityManager$MemoryInfo r1 = new android.app.ActivityManager$MemoryInfo
            r1.<init>()
            r0.getMemoryInfo(r1)
            long r0 = r1.availMem
            return r0
        L1d:
            r0 = 0
            return r0
    }

    private static boolean m(android.content.Context r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "window"
            java.lang.Object r8 = r8.getSystemService(r1)     // Catch: java.lang.Exception -> L3d
            android.view.WindowManager r8 = (android.view.WindowManager) r8     // Catch: java.lang.Exception -> L3d
            android.view.Display r8 = r8.getDefaultDisplay()     // Catch: java.lang.Exception -> L3d
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L3d
            r1.<init>()     // Catch: java.lang.Exception -> L3d
            r8.getMetrics(r1)     // Catch: java.lang.Exception -> L3d
            int r8 = r1.widthPixels     // Catch: java.lang.Exception -> L3d
            float r8 = (float) r8     // Catch: java.lang.Exception -> L3d
            float r2 = r1.xdpi     // Catch: java.lang.Exception -> L3d
            float r8 = r8 / r2
            double r2 = (double) r8     // Catch: java.lang.Exception -> L3d
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r2 = java.lang.Math.pow(r2, r4)     // Catch: java.lang.Exception -> L3d
            int r8 = r1.heightPixels     // Catch: java.lang.Exception -> L3d
            float r8 = (float) r8     // Catch: java.lang.Exception -> L3d
            float r1 = r1.ydpi     // Catch: java.lang.Exception -> L3d
            float r8 = r8 / r1
            double r6 = (double) r8     // Catch: java.lang.Exception -> L3d
            double r4 = java.lang.Math.pow(r6, r4)     // Catch: java.lang.Exception -> L3d
            double r2 = r2 + r4
            double r1 = java.lang.Math.sqrt(r2)     // Catch: java.lang.Exception -> L3d
            r3 = 4618441417868443648(0x4018000000000000, double:6.0)
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 < 0) goto L41
            r8 = 1
            return r8
        L3d:
            r8 = move-exception
            r8.getMessage()
        L41:
            return r0
    }

    private static java.lang.String n() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            boolean r0 = r0.b()
            if (r0 != 0) goto L15
            java.lang.String r0 = ""
            return r0
        L15:
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS
            java.util.List r0 = java.util.Arrays.asList(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static java.lang.String o() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            boolean r0 = r0.b()
            if (r0 != 0) goto L15
            java.lang.String r0 = ""
            return r0
        L15:
            java.lang.String r0 = android.os.Build.CPU_ABI
            return r0
    }

    private static java.lang.String p() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            boolean r0 = r0.b()
            if (r0 != 0) goto L15
            java.lang.String r0 = ""
            return r0
        L15:
            java.lang.String r0 = android.os.Build.CPU_ABI2
            return r0
    }
}
