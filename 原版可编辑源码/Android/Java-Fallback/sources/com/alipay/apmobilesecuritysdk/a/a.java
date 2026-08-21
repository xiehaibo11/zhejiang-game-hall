package com.alipay.apmobilesecuritysdk.a;

public final class a {
    public android.content.Context a;
    public com.alipay.apmobilesecuritysdk.b.a b;
    public int c;

    public a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.alipay.apmobilesecuritysdk.b.a r0 = com.alipay.apmobilesecuritysdk.b.a.a()
            r1.b = r0
            r0 = 4
            r1.c = r0
            r1.a = r2
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            java.lang.String r0 = b(r2)
            boolean r1 = com.alipay.sdk.m.z.a.a(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.e.h.f(r2)
        Le:
            return r0
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3) {
            b()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.e.i.a(r3)     // Catch: java.lang.Throwable -> L1c
            boolean r1 = com.alipay.sdk.m.z.a.a(r0)     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto Le
            return r0
        Le:
            java.lang.String r2 = com.alipay.apmobilesecuritysdk.e.g.a(r2, r3)     // Catch: java.lang.Throwable -> L1c
            com.alipay.apmobilesecuritysdk.e.i.a(r3, r2)     // Catch: java.lang.Throwable -> L1c
            boolean r3 = com.alipay.sdk.m.z.a.a(r2)     // Catch: java.lang.Throwable -> L1c
            if (r3 != 0) goto L1c
            return r2
        L1c:
            java.lang.String r2 = ""
            return r2
    }

    public static boolean a() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            java.lang.String r1 = "2017-01-27 2017-01-28"
            java.lang.String r2 = "2017-11-10 2017-11-11"
            java.lang.String r3 = "2017-12-11 2017-12-12"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}
            double r2 = java.lang.Math.random()
            r4 = 4627448617123184640(0x4038000000000000, double:24.0)
            double r2 = r2 * r4
            r4 = 4633641066610819072(0x404e000000000000, double:60.0)
            double r2 = r2 * r4
            double r2 = r2 * r4
            int r2 = (int) r2
            r3 = 1
            int r2 = r2 * 1
            r4 = 0
            r5 = 0
        L25:
            r6 = 3
            if (r5 >= r6) goto L89
            r6 = r1[r5]     // Catch: java.lang.Exception -> L89
            java.lang.String r7 = " "
            java.lang.String[] r6 = r6.split(r7)     // Catch: java.lang.Exception -> L89
            if (r6 == 0) goto L86
            int r7 = r6.length     // Catch: java.lang.Exception -> L89
            r8 = 2
            if (r7 != r8) goto L86
            java.util.Date r7 = new java.util.Date     // Catch: java.lang.Exception -> L89
            r7.<init>()     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            r8.<init>()     // Catch: java.lang.Exception -> L89
            r9 = r6[r4]     // Catch: java.lang.Exception -> L89
            r8.append(r9)     // Catch: java.lang.Exception -> L89
            java.lang.String r9 = " 00:00:00"
            r8.append(r9)     // Catch: java.lang.Exception -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L89
            java.util.Date r8 = r0.parse(r8)     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            r9.<init>()     // Catch: java.lang.Exception -> L89
            r6 = r6[r3]     // Catch: java.lang.Exception -> L89
            r9.append(r6)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = " 23:59:59"
            r9.append(r6)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = r9.toString()     // Catch: java.lang.Exception -> L89
            java.util.Date r6 = r0.parse(r6)     // Catch: java.lang.Exception -> L89
            java.util.Calendar r9 = java.util.Calendar.getInstance()     // Catch: java.lang.Exception -> L89
            r9.setTime(r6)     // Catch: java.lang.Exception -> L89
            r6 = 13
            r9.add(r6, r2)     // Catch: java.lang.Exception -> L89
            java.util.Date r6 = r9.getTime()     // Catch: java.lang.Exception -> L89
            boolean r8 = r7.after(r8)     // Catch: java.lang.Exception -> L89
            if (r8 == 0) goto L86
            boolean r6 = r7.before(r6)     // Catch: java.lang.Exception -> L89
            if (r6 == 0) goto L86
            return r3
        L86:
            int r5 = r5 + 1
            goto L25
        L89:
            return r4
    }

    private com.alipay.sdk.m.f0.c b(java.util.Map<java.lang.String, java.lang.String> r10) {
            r9 = this;
            java.lang.String r0 = ""
            android.content.Context r1 = r9.a     // Catch: java.lang.Throwable -> L9e
            com.alipay.sdk.m.f0.d r2 = new com.alipay.sdk.m.f0.d     // Catch: java.lang.Throwable -> L9e
            r2.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = "appName"
            java.lang.String r3 = com.alipay.sdk.m.z.a.a(r10, r3, r0)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r4 = "sessionId"
            java.lang.String r4 = com.alipay.sdk.m.z.a.a(r10, r4, r0)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r5 = "rpcVersion"
            java.lang.String r5 = com.alipay.sdk.m.z.a.a(r10, r5, r0)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = a(r1, r3)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r6 = com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.getSecurityToken(r1)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r7 = com.alipay.apmobilesecuritysdk.e.h.d(r1)     // Catch: java.lang.Throwable -> L9e
            boolean r8 = com.alipay.sdk.m.z.a.b(r4)     // Catch: java.lang.Throwable -> L9e
            if (r8 == 0) goto L30
            r2.c = r4     // Catch: java.lang.Throwable -> L9e
            goto L32
        L30:
            r2.c = r3     // Catch: java.lang.Throwable -> L9e
        L32:
            r2.d = r6     // Catch: java.lang.Throwable -> L9e
            r2.e = r7     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = "android"
            r2.a = r3     // Catch: java.lang.Throwable -> L9e
            com.alipay.apmobilesecuritysdk.e.c r3 = com.alipay.apmobilesecuritysdk.e.d.c(r1)     // Catch: java.lang.Throwable -> L9e
            if (r3 == 0) goto L45
            java.lang.String r4 = r3.a     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = r3.c     // Catch: java.lang.Throwable -> L9e
            goto L47
        L45:
            r3 = r0
            r4 = r3
        L47:
            boolean r6 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L9e
            if (r6 == 0) goto L57
            com.alipay.apmobilesecuritysdk.e.b r6 = com.alipay.apmobilesecuritysdk.e.a.c(r1)     // Catch: java.lang.Throwable -> L9e
            if (r6 == 0) goto L57
            java.lang.String r4 = r6.a     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = r6.c     // Catch: java.lang.Throwable -> L9e
        L57:
            com.alipay.apmobilesecuritysdk.e.c r6 = com.alipay.apmobilesecuritysdk.e.d.b()     // Catch: java.lang.Throwable -> L9e
            if (r6 == 0) goto L62
            java.lang.String r0 = r6.a     // Catch: java.lang.Throwable -> L9e
            java.lang.String r6 = r6.c     // Catch: java.lang.Throwable -> L9e
            goto L63
        L62:
            r6 = r0
        L63:
            boolean r7 = com.alipay.sdk.m.z.a.a(r0)     // Catch: java.lang.Throwable -> L9e
            if (r7 == 0) goto L73
            com.alipay.apmobilesecuritysdk.e.b r7 = com.alipay.apmobilesecuritysdk.e.a.b()     // Catch: java.lang.Throwable -> L9e
            if (r7 == 0) goto L73
            java.lang.String r0 = r7.a     // Catch: java.lang.Throwable -> L9e
            java.lang.String r6 = r7.c     // Catch: java.lang.Throwable -> L9e
        L73:
            r2.h = r4     // Catch: java.lang.Throwable -> L9e
            r2.g = r0     // Catch: java.lang.Throwable -> L9e
            r2.j = r5     // Catch: java.lang.Throwable -> L9e
            boolean r5 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Throwable -> L9e
            if (r5 == 0) goto L83
            r2.b = r0     // Catch: java.lang.Throwable -> L9e
            r3 = r6
            goto L85
        L83:
            r2.b = r4     // Catch: java.lang.Throwable -> L9e
        L85:
            r2.i = r3     // Catch: java.lang.Throwable -> L9e
            java.util.Map r10 = com.alipay.apmobilesecuritysdk.d.e.a(r1, r10)     // Catch: java.lang.Throwable -> L9e
            r2.f = r10     // Catch: java.lang.Throwable -> L9e
            android.content.Context r10 = r9.a     // Catch: java.lang.Throwable -> L9e
            com.alipay.apmobilesecuritysdk.b.a r0 = r9.b     // Catch: java.lang.Throwable -> L9e
            java.lang.String r0 = r0.c()     // Catch: java.lang.Throwable -> L9e
            com.alipay.sdk.m.g0.a r10 = com.alipay.sdk.m.d0.d.b(r10, r0)     // Catch: java.lang.Throwable -> L9e
            com.alipay.sdk.m.f0.c r10 = r10.a(r2)     // Catch: java.lang.Throwable -> L9e
            return r10
        L9e:
            r10 = move-exception
            r10.printStackTrace()
            com.alipay.apmobilesecuritysdk.c.a.a(r10)
            r10 = 0
            return r10
    }

    public static java.lang.String b(android.content.Context r2) {
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.e.i.b()     // Catch: java.lang.Throwable -> L2f
            boolean r1 = com.alipay.sdk.m.z.a.a(r0)     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto Lb
            return r0
        Lb:
            com.alipay.apmobilesecuritysdk.e.c r0 = com.alipay.apmobilesecuritysdk.e.d.b(r2)     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L1d
            com.alipay.apmobilesecuritysdk.e.i.a(r0)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L2f
            boolean r1 = com.alipay.sdk.m.z.a.b(r0)     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L1d
            return r0
        L1d:
            com.alipay.apmobilesecuritysdk.e.b r2 = com.alipay.apmobilesecuritysdk.e.a.b(r2)     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L2f
            com.alipay.apmobilesecuritysdk.e.i.a(r2)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = r2.a     // Catch: java.lang.Throwable -> L2f
            boolean r0 = com.alipay.sdk.m.z.a.b(r2)     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L2f
            return r2
        L2f:
            java.lang.String r2 = ""
            return r2
    }

    public static void b() {
            java.lang.String r0 = "device_feature_file_name"
            java.lang.String r1 = "wallet_times"
            java.lang.String r2 = "wxcasxx_v3"
            java.lang.String r3 = "wxcasxx_v4"
            java.lang.String r4 = "wxxzyy_v1"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}     // Catch: java.lang.Throwable -> L3d
            r1 = 0
        Lf:
            r2 = 5
            if (r1 >= r2) goto L3d
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L3d
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L3d
            java.io.File r4 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L3d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            java.lang.String r6 = ".SystemConfig/"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L3d
            r5.append(r2)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L3d
            r3.<init>(r4, r2)     // Catch: java.lang.Throwable -> L3d
            boolean r2 = r3.exists()     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L3a
            boolean r2 = r3.canWrite()     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L3a
            r3.delete()     // Catch: java.lang.Throwable -> L3d
        L3a:
            int r1 = r1 + 1
            goto Lf
        L3d:
            return
    }

    public final int a(java.util.Map<java.lang.String, java.lang.String> r10) {
            r9 = this;
            java.lang.String r0 = "utdid"
            java.lang.String r1 = "tid"
            java.lang.String r2 = ""
            android.content.Context r3 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = com.alipay.sdk.m.z.a.a(r10, r1, r2)     // Catch: java.lang.Exception -> L240
            java.lang.String r5 = com.alipay.sdk.m.z.a.a(r10, r0, r2)     // Catch: java.lang.Exception -> L240
            android.content.Context r6 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r6 = a(r6)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.c.a.a(r3, r4, r5, r6)     // Catch: java.lang.Exception -> L240
            java.lang.String r3 = "appName"
            java.lang.String r3 = com.alipay.sdk.m.z.a.a(r10, r3, r2)     // Catch: java.lang.Exception -> L240
            b()     // Catch: java.lang.Exception -> L240
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            b(r4)     // Catch: java.lang.Exception -> L240
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            a(r4, r3)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.i.a()     // Catch: java.lang.Exception -> L240
            boolean r4 = a()     // Catch: java.lang.Exception -> L240
            r5 = 0
            r6 = 1
            if (r4 != 0) goto La2
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.apmobilesecuritysdk.common.a.a(r4)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto L40
            goto La2
        L40:
            com.alipay.apmobilesecuritysdk.d.e.a()     // Catch: java.lang.Exception -> L240
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = com.alipay.apmobilesecuritysdk.d.e.b(r4, r10)     // Catch: java.lang.Exception -> L240
            java.lang.String r7 = com.alipay.apmobilesecuritysdk.e.i.c()     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r4, r7)     // Catch: java.lang.Exception -> L240
            r4 = r4 ^ r6
            if (r4 == 0) goto L55
            goto Lbb
        L55:
            java.lang.String r4 = com.alipay.sdk.m.z.a.a(r10, r1, r2)     // Catch: java.lang.Exception -> L240
            java.lang.String r7 = com.alipay.sdk.m.z.a.a(r10, r0, r2)     // Catch: java.lang.Exception -> L240
            boolean r8 = com.alipay.sdk.m.z.a.b(r4)     // Catch: java.lang.Exception -> L240
            if (r8 == 0) goto L6e
            java.lang.String r8 = com.alipay.apmobilesecuritysdk.e.i.d()     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r4, r8)     // Catch: java.lang.Exception -> L240
            if (r4 != 0) goto L6e
            goto Lbb
        L6e:
            boolean r4 = com.alipay.sdk.m.z.a.b(r7)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto L7f
            java.lang.String r4 = com.alipay.apmobilesecuritysdk.e.i.e()     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r7, r4)     // Catch: java.lang.Exception -> L240
            if (r4 != 0) goto L7f
            goto Lbb
        L7f:
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.apmobilesecuritysdk.e.i.a(r4, r3)     // Catch: java.lang.Exception -> L240
            if (r4 != 0) goto L88
            goto Lbb
        L88:
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = a(r4, r3)     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto L95
            goto Lbb
        L95:
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = b(r4)     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto Lbd
            goto Lbb
        La2:
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = a(r4, r3)     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto Laf
            goto Lbb
        Laf:
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = b(r4)     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r4)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto Lbd
        Lbb:
            r4 = 1
            goto Lbe
        Lbd:
            r4 = 0
        Lbe:
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            android.content.Context r8 = r9.a     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r8 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.getInstance(r8)     // Catch: java.lang.Exception -> L240
            com.alipay.sdk.m.a0.b.a(r8)     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = com.alipay.sdk.m.a0.b.m()     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.b(r7, r8)     // Catch: java.lang.Exception -> L240
            if (r4 != 0) goto Ld8
            goto L1e7
        Ld8:
            com.alipay.apmobilesecuritysdk.c.b r4 = new com.alipay.apmobilesecuritysdk.c.b     // Catch: java.lang.Exception -> L240
            r4.<init>()     // Catch: java.lang.Exception -> L240
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.b.a r7 = com.alipay.apmobilesecuritysdk.b.a.a()     // Catch: java.lang.Exception -> L240
            int r7 = r7.b()     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.startUmidTaskSync(r4, r7)     // Catch: java.lang.Exception -> L240
            com.alipay.sdk.m.f0.c r4 = r9.b(r10)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto Lf5
            int r7 = r4.c()     // Catch: java.lang.Exception -> L240
            goto Lf6
        Lf5:
            r7 = 2
        Lf6:
            if (r7 == r6) goto L126
            r10 = 3
            if (r7 == r10) goto L123
            if (r4 == 0) goto L111
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L240
            java.lang.String r0 = "Server error, result:"
            r10.<init>(r0)     // Catch: java.lang.Exception -> L240
            java.lang.String r0 = r4.b     // Catch: java.lang.Exception -> L240
            r10.append(r0)     // Catch: java.lang.Exception -> L240
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L240
        L10d:
            com.alipay.apmobilesecuritysdk.c.a.a(r10)     // Catch: java.lang.Exception -> L240
            goto L114
        L111:
            java.lang.String r10 = "Server error, returned null"
            goto L10d
        L114:
            android.content.Context r10 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r10 = a(r10, r3)     // Catch: java.lang.Exception -> L240
            boolean r10 = com.alipay.sdk.m.z.a.a(r10)     // Catch: java.lang.Exception -> L240
            if (r10 == 0) goto L1e7
            r10 = 4
            goto L1e8
        L123:
            r10 = 1
            goto L1e8
        L126:
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            boolean r8 = r4.b()     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.a(r7, r8)     // Catch: java.lang.Exception -> L240
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = r4.a()     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.d(r7, r8)     // Catch: java.lang.Exception -> L240
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = r4.g     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.e(r7, r8)     // Catch: java.lang.Exception -> L240
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = r4.h     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.a(r7, r8)     // Catch: java.lang.Exception -> L240
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = r4.i     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.f(r7, r8)     // Catch: java.lang.Exception -> L240
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r8 = r4.k     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.g(r7, r8)     // Catch: java.lang.Exception -> L240
            android.content.Context r7 = r9.a     // Catch: java.lang.Exception -> L240
            java.lang.String r7 = com.alipay.apmobilesecuritysdk.d.e.b(r7, r10)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.i.c(r7)     // Catch: java.lang.Exception -> L240
            java.lang.String r7 = r4.d     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.i.a(r3, r7)     // Catch: java.lang.Exception -> L240
            java.lang.String r7 = r4.c     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.i.b(r7)     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = r4.j     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.i.d(r4)     // Catch: java.lang.Exception -> L240
            java.lang.String r1 = com.alipay.sdk.m.z.a.a(r10, r1, r2)     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.b(r1)     // Catch: java.lang.Exception -> L240
            if (r4 == 0) goto L184
            java.lang.String r4 = com.alipay.apmobilesecuritysdk.e.i.d()     // Catch: java.lang.Exception -> L240
            boolean r4 = com.alipay.sdk.m.z.a.a(r1, r4)     // Catch: java.lang.Exception -> L240
            if (r4 != 0) goto L184
            com.alipay.apmobilesecuritysdk.e.i.e(r1)     // Catch: java.lang.Exception -> L240
            goto L188
        L184:
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.d()     // Catch: java.lang.Exception -> L240
        L188:
            com.alipay.apmobilesecuritysdk.e.i.e(r1)     // Catch: java.lang.Exception -> L240
            java.lang.String r10 = com.alipay.sdk.m.z.a.a(r10, r0, r2)     // Catch: java.lang.Exception -> L240
            boolean r0 = com.alipay.sdk.m.z.a.b(r10)     // Catch: java.lang.Exception -> L240
            if (r0 == 0) goto L1a3
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.e.i.e()     // Catch: java.lang.Exception -> L240
            boolean r0 = com.alipay.sdk.m.z.a.a(r10, r0)     // Catch: java.lang.Exception -> L240
            if (r0 != 0) goto L1a3
            com.alipay.apmobilesecuritysdk.e.i.f(r10)     // Catch: java.lang.Exception -> L240
            goto L1a7
        L1a3:
            java.lang.String r10 = com.alipay.apmobilesecuritysdk.e.i.e()     // Catch: java.lang.Exception -> L240
        L1a7:
            com.alipay.apmobilesecuritysdk.e.i.f(r10)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.i.a()     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.c r10 = com.alipay.apmobilesecuritysdk.e.i.g()     // Catch: java.lang.Exception -> L240
            android.content.Context r0 = r9.a     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.d.a(r0, r10)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.d.a()     // Catch: java.lang.Exception -> L240
            android.content.Context r10 = r9.a     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.b r0 = new com.alipay.apmobilesecuritysdk.e.b     // Catch: java.lang.Exception -> L240
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.i.b()     // Catch: java.lang.Exception -> L240
            java.lang.String r2 = com.alipay.apmobilesecuritysdk.e.i.c()     // Catch: java.lang.Exception -> L240
            java.lang.String r4 = com.alipay.apmobilesecuritysdk.e.i.f()     // Catch: java.lang.Exception -> L240
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.a.a(r10, r0)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.a.a()     // Catch: java.lang.Exception -> L240
            java.lang.String r10 = com.alipay.apmobilesecuritysdk.e.i.a(r3)     // Catch: java.lang.Exception -> L240
            android.content.Context r0 = r9.a     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.g.a(r0, r3, r10)     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.g.a()     // Catch: java.lang.Exception -> L240
            android.content.Context r10 = r9.a     // Catch: java.lang.Exception -> L240
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.e.h.a(r10, r3, r0)     // Catch: java.lang.Exception -> L240
        L1e7:
            r10 = 0
        L1e8:
            r9.c = r10     // Catch: java.lang.Exception -> L240
            android.content.Context r10 = r9.a     // Catch: java.lang.Exception -> L240
            com.alipay.apmobilesecuritysdk.b.a r0 = r9.b     // Catch: java.lang.Exception -> L240
            java.lang.String r0 = r0.c()     // Catch: java.lang.Exception -> L240
            com.alipay.sdk.m.g0.a r10 = com.alipay.sdk.m.d0.d.b(r10, r0)     // Catch: java.lang.Exception -> L240
            android.content.Context r0 = r9.a     // Catch: java.lang.Exception -> L240
            r1 = 0
            java.lang.String r2 = "connectivity"
            java.lang.Object r2 = r0.getSystemService(r2)     // Catch: java.lang.Exception -> L240
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L240
            if (r2 == 0) goto L207
            android.net.NetworkInfo r1 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L240
        L207:
            if (r1 == 0) goto L216
            boolean r2 = r1.isConnected()     // Catch: java.lang.Exception -> L240
            if (r2 == 0) goto L216
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L240
            if (r1 != r6) goto L216
            r5 = 1
        L216:
            if (r5 == 0) goto L244
            boolean r1 = com.alipay.apmobilesecuritysdk.e.h.c(r0)     // Catch: java.lang.Exception -> L240
            if (r1 == 0) goto L244
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L240
            r1.<init>()     // Catch: java.lang.Exception -> L240
            java.io.File r0 = r0.getFilesDir()     // Catch: java.lang.Exception -> L240
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Exception -> L240
            r1.append(r0)     // Catch: java.lang.Exception -> L240
            java.lang.String r0 = "/log/ap"
            r1.append(r0)     // Catch: java.lang.Exception -> L240
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L240
            com.alipay.sdk.m.c0.b r1 = new com.alipay.sdk.m.c0.b     // Catch: java.lang.Exception -> L240
            r1.<init>(r0, r10)     // Catch: java.lang.Exception -> L240
            r1.a()     // Catch: java.lang.Exception -> L240
            goto L244
        L240:
            r10 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r10)
        L244:
            int r10 = r9.c
            return r10
    }
}
