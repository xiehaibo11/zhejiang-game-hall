package com.alipay.sdk.data;

public class c {
    private static final java.lang.String a = "virtualImeiAndImsi";
    private static final java.lang.String b = "virtual_imei";
    private static final java.lang.String c = "virtual_imsi";
    private static com.alipay.sdk.data.c d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;

    private c() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "sdk-and-lite"
            r3.f = r0
            java.lang.String r0 = com.alipay.sdk.app.i.a()
            boolean r1 = com.alipay.sdk.app.i.b()
            if (r1 != 0) goto L29
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.f
            r1.append(r2)
            r2 = 95
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.f = r0
        L29:
            return
    }

    private java.lang.String a(android.content.Context r3, java.util.HashMap<java.lang.String, java.lang.String> r4) {
            r2 = this;
            java.lang.String r0 = "third"
            java.lang.String r3 = com.alipay.mobilesecuritysdk.face.SecurityClientMobile.GetApdid(r3, r4)     // Catch: java.lang.Throwable -> L7
            goto L12
        L7:
            r3 = move-exception
            com.alipay.sdk.util.c.a(r3)
            java.lang.String r4 = "GetApdidEx"
            com.alipay.sdk.app.statistic.a.a(r0, r4, r3)
            java.lang.String r3 = ""
        L12:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L1f
            java.lang.String r4 = "GetApdidNull"
            java.lang.String r1 = "apdid == null"
            com.alipay.sdk.app.statistic.a.a(r0, r4, r1)
        L1f:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "apdid:"
            r4.append(r0)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "msp"
            com.alipay.sdk.util.c.d(r0, r4)
            return r3
    }

    static java.lang.String a(com.alipay.sdk.data.c r0, android.content.Context r1, java.util.HashMap r2) {
            java.lang.String r0 = r0.a(r1, r2)
            return r0
    }

    public static synchronized com.alipay.sdk.data.c b() {
            java.lang.Class<com.alipay.sdk.data.c> r0 = com.alipay.sdk.data.c.class
            monitor-enter(r0)
            com.alipay.sdk.data.c r1 = com.alipay.sdk.data.c.d     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.alipay.sdk.data.c r1 = new com.alipay.sdk.data.c     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.alipay.sdk.data.c.d = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.alipay.sdk.data.c r1 = com.alipay.sdk.data.c.d     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private java.lang.String b(android.content.Context r2) {
            r1 = this;
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r2)
            float r2 = r0.getTextSize()
            java.lang.String r2 = java.lang.Float.toString(r2)
            return r2
    }

    private java.lang.String b(android.content.Context r3, java.util.HashMap<java.lang.String, java.lang.String> r4) {
            r2 = this;
            r0 = 2
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            com.alipay.sdk.data.d r1 = new com.alipay.sdk.data.d
            r1.<init>(r2, r3, r4)
            java.util.concurrent.Future r3 = r0.submit(r1)
            r0 = 3000(0xbb8, double:1.482E-320)
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L19
            java.lang.Object r3 = r3.get(r0, r4)     // Catch: java.lang.Throwable -> L19
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L19
            goto L23
        L19:
            r3 = move-exception
            java.lang.String r4 = "third"
            java.lang.String r0 = "GetApdidTimeout"
            com.alipay.sdk.app.statistic.a.a(r4, r0, r3)
            java.lang.String r3 = ""
        L23:
            return r3
    }

    private java.lang.String c(android.content.Context r2) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "wifi"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.net.wifi.WifiManager r2 = (android.net.wifi.WifiManager) r2
            android.net.wifi.WifiInfo r2 = r2.getConnectionInfo()
            if (r2 == 0) goto L17
            java.lang.String r2 = r2.getSSID()
            return r2
        L17:
            java.lang.String r2 = "-1"
            return r2
    }

    private java.lang.String d(android.content.Context r2) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "wifi"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.net.wifi.WifiManager r2 = (android.net.wifi.WifiManager) r2
            android.net.wifi.WifiInfo r2 = r2.getConnectionInfo()
            if (r2 == 0) goto L17
            java.lang.String r2 = r2.getBSSID()
            return r2
        L17:
            java.lang.String r2 = "00"
            return r2
    }

    private java.lang.String e() {
            r1 = this;
            java.lang.String r0 = "1"
            return r0
    }

    private java.lang.String f() {
            r1 = this;
            java.lang.String r0 = "-1;-1"
            return r0
    }

    private java.lang.String g() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toHexString(r0)
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r0 = 9000(0x2328, float:1.2612E-41)
            int r0 = r1.nextInt(r0)
            int r0 = r0 + 1000
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public java.lang.String a(android.content.Context r4) {
            r3 = this;
            if (r4 == 0) goto L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = r4.getPackageName()     // Catch: java.lang.Exception -> L30
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L30
            r2 = 0
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "("
            r0.append(r2)     // Catch: java.lang.Exception -> L30
            r0.append(r1)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = ";"
            r0.append(r1)     // Catch: java.lang.Exception -> L30
            int r4 = r4.versionCode     // Catch: java.lang.Exception -> L30
            r0.append(r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = ")"
            r0.append(r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L30
            return r4
        L30:
            java.lang.String r4 = ""
            return r4
    }

    public java.lang.String a(com.alipay.sdk.tid.b r19) {
            r18 = this;
            r0 = r18
            com.alipay.sdk.sys.b r1 = com.alipay.sdk.sys.b.a()
            android.content.Context r1 = r1.b()
            com.alipay.sdk.util.a r2 = com.alipay.sdk.util.a.a(r1)
            java.lang.String r3 = r0.e
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r4 = ";"
            if (r3 == 0) goto L66
            java.lang.String r3 = com.alipay.sdk.util.n.b()
            java.lang.String r5 = com.alipay.sdk.util.n.c()
            java.lang.String r6 = com.alipay.sdk.util.n.d(r1)
            java.lang.String r7 = com.alipay.sdk.util.n.g(r1)
            java.lang.String r8 = com.alipay.sdk.util.n.e(r1)
            java.lang.String r9 = r0.b(r1)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "Msp/15.6.2"
            r10.append(r11)
            java.lang.String r11 = " ("
            r10.append(r11)
            r10.append(r3)
            r10.append(r4)
            r10.append(r5)
            r10.append(r4)
            r10.append(r6)
            r10.append(r4)
            r10.append(r7)
            r10.append(r4)
            r10.append(r8)
            r10.append(r4)
            r10.append(r9)
            java.lang.String r3 = r10.toString()
            r0.e = r3
        L66:
            com.alipay.sdk.util.d r3 = com.alipay.sdk.util.a.b(r1)
            java.lang.String r3 = r3.b()
            java.lang.String r5 = com.alipay.sdk.util.n.h(r1)
            java.lang.String r6 = r18.e()
            java.lang.String r7 = r2.a()
            java.lang.String r8 = r2.b()
            java.lang.String r9 = r18.d()
            java.lang.String r10 = r18.c()
            if (r19 == 0) goto L8e
            java.lang.String r11 = r19.b()
            r0.g = r11
        L8e:
            java.lang.String r11 = android.os.Build.MANUFACTURER
            java.lang.String r12 = " "
            java.lang.String r11 = r11.replace(r4, r12)
            java.lang.String r13 = android.os.Build.MODEL
            java.lang.String r12 = r13.replace(r4, r12)
            boolean r13 = com.alipay.sdk.sys.b.d()
            java.lang.String r2 = r2.d()
            java.lang.String r14 = r0.c(r1)
            java.lang.String r15 = r0.d(r1)
            r16 = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r17 = r15
            java.lang.String r15 = r0.e
            r1.append(r15)
            r1.append(r4)
            r1.append(r3)
            r1.append(r4)
            r1.append(r5)
            r1.append(r4)
            r1.append(r6)
            r1.append(r4)
            r1.append(r7)
            r1.append(r4)
            r1.append(r8)
            r1.append(r4)
            java.lang.String r3 = r0.g
            r1.append(r3)
            r1.append(r4)
            r1.append(r11)
            r1.append(r4)
            r1.append(r12)
            r1.append(r4)
            r1.append(r13)
            r1.append(r4)
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = r18.f()
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = r0.f
            r1.append(r2)
            r1.append(r4)
            r1.append(r9)
            r1.append(r4)
            r1.append(r10)
            r1.append(r4)
            r1.append(r14)
            r1.append(r4)
            r2 = r17
            r1.append(r2)
            if (r19 == 0) goto L157
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            com.alipay.sdk.tid.b r3 = com.alipay.sdk.tid.b.a(r16)
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tid"
            r2.put(r5, r3)
            com.alipay.sdk.sys.b r3 = com.alipay.sdk.sys.b.a()
            java.lang.String r3 = r3.e()
            java.lang.String r5 = "utdid"
            r2.put(r5, r3)
            r3 = r16
            java.lang.String r2 = r0.b(r3, r2)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L157
            r1.append(r4)
            r1.append(r2)
        L157:
            java.lang.String r2 = ")"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public synchronized void a(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L9
            monitor-exit(r2)
            return
        L9:
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()     // Catch: java.lang.Throwable -> L26
            android.content.Context r0 = r0.b()     // Catch: java.lang.Throwable -> L26
            android.content.SharedPreferences r0 = android.preference.PreferenceManager.getDefaultSharedPreferences(r0)     // Catch: java.lang.Throwable -> L26
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "trideskey"
            android.content.SharedPreferences$Editor r0 = r0.putString(r1, r3)     // Catch: java.lang.Throwable -> L26
            r0.commit()     // Catch: java.lang.Throwable -> L26
            com.alipay.sdk.cons.a.c = r3     // Catch: java.lang.Throwable -> L26
            monitor-exit(r2)
            return
        L26:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public java.lang.String c() {
            r5 = this;
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            android.content.Context r0 = r0.b()
            java.lang.String r1 = "virtualImeiAndImsi"
            r2 = 0
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            java.lang.String r2 = "virtual_imei"
            r3 = 0
            java.lang.String r3 = r1.getString(r2, r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L43
            com.alipay.sdk.tid.b r3 = com.alipay.sdk.tid.b.a(r0)
            java.lang.String r3 = r3.a()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L2f
            java.lang.String r0 = r5.g()
            goto L37
        L2f:
            com.alipay.sdk.util.a r0 = com.alipay.sdk.util.a.a(r0)
            java.lang.String r0 = r0.b()
        L37:
            r3 = r0
            android.content.SharedPreferences$Editor r0 = r1.edit()
            android.content.SharedPreferences$Editor r0 = r0.putString(r2, r3)
            r0.commit()
        L43:
            return r3
    }

    public java.lang.String d() {
            r5 = this;
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            android.content.Context r0 = r0.b()
            java.lang.String r1 = "virtualImeiAndImsi"
            r2 = 0
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            java.lang.String r2 = "virtual_imsi"
            r3 = 0
            java.lang.String r3 = r1.getString(r2, r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L59
            com.alipay.sdk.tid.b r3 = com.alipay.sdk.tid.b.a(r0)
            java.lang.String r3 = r3.a()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L45
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            java.lang.String r0 = r0.e()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L3d
            java.lang.String r0 = r5.g()
            goto L4d
        L3d:
            r3 = 3
            r4 = 18
            java.lang.String r0 = r0.substring(r3, r4)
            goto L4d
        L45:
            com.alipay.sdk.util.a r0 = com.alipay.sdk.util.a.a(r0)
            java.lang.String r0 = r0.a()
        L4d:
            r3 = r0
            android.content.SharedPreferences$Editor r0 = r1.edit()
            android.content.SharedPreferences$Editor r0 = r0.putString(r2, r3)
            r0.commit()
        L59:
            return r3
    }
}
