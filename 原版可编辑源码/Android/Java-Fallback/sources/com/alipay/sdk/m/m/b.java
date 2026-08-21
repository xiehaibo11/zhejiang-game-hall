package com.alipay.sdk.m.m;

public class b {
    public static final java.lang.String d = "virtualImeiAndImsi";
    public static final java.lang.String e = "virtual_imei";
    public static final java.lang.String f = "virtual_imsi";
    public static volatile com.alipay.sdk.m.m.b g;
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;

    public b() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "sdk-and-lite"
            r3.b = r0
            java.lang.String r0 = com.alipay.sdk.m.j.a.a()
            boolean r1 = com.alipay.sdk.m.j.a.b()
            if (r1 != 0) goto L29
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.b
            r1.append(r2)
            r2 = 95
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.b = r0
        L29:
            return
    }

    public static java.lang.String a(android.content.Context r1) {
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r1)
            float r1 = r0.getTextSize()
            java.lang.String r1 = java.lang.Float.toString(r1)
            return r1
    }

    public static synchronized void a(java.lang.String r3) {
            java.lang.Class<com.alipay.sdk.m.m.b> r0 = com.alipay.sdk.m.m.b.class
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto Lb
            monitor-exit(r0)
            return
        Lb:
            com.alipay.sdk.m.s.b r1 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Throwable -> L28
            android.content.Context r1 = r1.b()     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences r1 = android.preference.PreferenceManager.getDefaultSharedPreferences(r1)     // Catch: java.lang.Throwable -> L28
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "trideskey"
            android.content.SharedPreferences$Editor r1 = r1.putString(r2, r3)     // Catch: java.lang.Throwable -> L28
            r1.apply()     // Catch: java.lang.Throwable -> L28
            com.alipay.sdk.m.l.a.f = r3     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L28:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized com.alipay.sdk.m.m.b b() {
            java.lang.Class<com.alipay.sdk.m.m.b> r0 = com.alipay.sdk.m.m.b.class
            monitor-enter(r0)
            com.alipay.sdk.m.m.b r1 = com.alipay.sdk.m.m.b.g     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.alipay.sdk.m.m.b r1 = new com.alipay.sdk.m.m.b     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.alipay.sdk.m.m.b.g = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.alipay.sdk.m.m.b r1 = com.alipay.sdk.m.m.b.g     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String b(android.content.Context r3) {
            if (r3 == 0) goto L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = r3.getPackageName()     // Catch: java.lang.Exception -> L30
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L30
            r2 = 0
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "("
            r0.append(r2)     // Catch: java.lang.Exception -> L30
            r0.append(r1)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = ";"
            r0.append(r1)     // Catch: java.lang.Exception -> L30
            int r3 = r3.versionCode     // Catch: java.lang.Exception -> L30
            r0.append(r3)     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = ")"
            r0.append(r3)     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L30
            return r3
        L30:
            java.lang.String r3 = ""
            return r3
    }

    public static java.lang.String c() {
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

    public static java.lang.String d() {
            java.lang.String r0 = "-1;-1"
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = "1"
            return r0
    }

    public static java.lang.String f() {
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.content.Context r0 = r0.b()
            java.lang.String r1 = "virtualImeiAndImsi"
            r2 = 0
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            java.lang.String r2 = "virtual_imei"
            r3 = 0
            java.lang.String r3 = r1.getString(r2, r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L43
            com.alipay.sdk.m.t.a r3 = com.alipay.sdk.m.t.a.a(r0)
            java.lang.String r3 = r3.d()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L2f
            java.lang.String r0 = c()
            goto L37
        L2f:
            com.alipay.sdk.m.u.c r0 = com.alipay.sdk.m.u.c.b(r0)
            java.lang.String r0 = r0.b()
        L37:
            r3 = r0
            android.content.SharedPreferences$Editor r0 = r1.edit()
            android.content.SharedPreferences$Editor r0 = r0.putString(r2, r3)
            r0.apply()
        L43:
            return r3
    }

    public static java.lang.String g() {
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.content.Context r0 = r0.b()
            java.lang.String r1 = "virtualImeiAndImsi"
            r2 = 0
            android.content.SharedPreferences r1 = r0.getSharedPreferences(r1, r2)
            java.lang.String r2 = "virtual_imsi"
            r3 = 0
            java.lang.String r3 = r1.getString(r2, r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L60
            com.alipay.sdk.m.t.a r3 = com.alipay.sdk.m.t.a.a(r0)
            java.lang.String r3 = r3.d()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L4c
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            java.lang.String r0 = r0.c()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L47
            int r3 = r0.length()
            r4 = 18
            if (r3 >= r4) goto L41
            goto L47
        L41:
            r3 = 3
            java.lang.String r0 = r0.substring(r3, r4)
            goto L54
        L47:
            java.lang.String r0 = c()
            goto L54
        L4c:
            com.alipay.sdk.m.u.c r0 = com.alipay.sdk.m.u.c.b(r0)
            java.lang.String r0 = r0.c()
        L54:
            r3 = r0
            android.content.SharedPreferences$Editor r0 = r1.edit()
            android.content.SharedPreferences$Editor r0 = r0.putString(r2, r3)
            r0.apply()
        L60:
            return r3
    }

    public static java.lang.String h() {
            java.lang.String r0 = "00"
            return r0
    }

    public static java.lang.String i() {
            java.lang.String r0 = "-1"
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String a(com.alipay.sdk.m.s.a r18, com.alipay.sdk.m.t.a r19, boolean r20) {
            r17 = this;
            r0 = r17
            r1 = r18
            com.alipay.sdk.m.s.b r2 = com.alipay.sdk.m.s.b.d()
            android.content.Context r2 = r2.b()
            com.alipay.sdk.m.u.c r3 = com.alipay.sdk.m.u.c.b(r2)
            java.lang.String r4 = r0.a
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r5 = ";"
            if (r4 == 0) goto L68
            java.lang.String r4 = com.alipay.sdk.m.u.n.f()
            java.lang.String r6 = com.alipay.sdk.m.u.n.e()
            java.lang.String r7 = com.alipay.sdk.m.u.n.c(r2)
            java.lang.String r8 = com.alipay.sdk.m.u.n.e(r2)
            java.lang.String r9 = com.alipay.sdk.m.u.n.f(r2)
            java.lang.String r10 = a(r2)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "Msp/15.8.15"
            r11.append(r12)
            java.lang.String r12 = " ("
            r11.append(r12)
            r11.append(r4)
            r11.append(r5)
            r11.append(r6)
            r11.append(r5)
            r11.append(r7)
            r11.append(r5)
            r11.append(r8)
            r11.append(r5)
            r11.append(r9)
            r11.append(r5)
            r11.append(r10)
            java.lang.String r4 = r11.toString()
            r0.a = r4
        L68:
            com.alipay.sdk.m.u.g r4 = com.alipay.sdk.m.u.c.d(r2)
            java.lang.String r4 = r4.b()
            java.lang.String r6 = com.alipay.sdk.m.u.n.b(r2)
            java.lang.String r7 = e()
            java.lang.String r8 = r3.c()
            java.lang.String r9 = r3.b()
            java.lang.String r10 = g()
            java.lang.String r11 = f()
            if (r19 == 0) goto L90
            java.lang.String r12 = r19.c()
            r0.c = r12
        L90:
            java.lang.String r12 = android.os.Build.MANUFACTURER
            java.lang.String r13 = " "
            java.lang.String r12 = r12.replace(r5, r13)
            java.lang.String r14 = android.os.Build.MODEL
            java.lang.String r13 = r14.replace(r5, r13)
            boolean r14 = com.alipay.sdk.m.s.b.e()
            java.lang.String r3 = r3.d()
            java.lang.String r15 = i()
            java.lang.String r1 = h()
            r20 = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r16 = r1
            java.lang.String r1 = r0.a
            r2.append(r1)
            r2.append(r5)
            r2.append(r4)
            r2.append(r5)
            r2.append(r6)
            r2.append(r5)
            r2.append(r7)
            r2.append(r5)
            r2.append(r8)
            r2.append(r5)
            r2.append(r9)
            r2.append(r5)
            java.lang.String r1 = r0.c
            r2.append(r1)
            r2.append(r5)
            r2.append(r12)
            r2.append(r5)
            r2.append(r13)
            r2.append(r5)
            r2.append(r14)
            r2.append(r5)
            r2.append(r3)
            r2.append(r5)
            java.lang.String r1 = d()
            r2.append(r1)
            r2.append(r5)
            java.lang.String r1 = r0.b
            r2.append(r1)
            r2.append(r5)
            r2.append(r10)
            r2.append(r5)
            r2.append(r11)
            r2.append(r5)
            r2.append(r15)
            r2.append(r5)
            r1 = r16
            r2.append(r1)
            if (r19 == 0) goto L14a
            r1 = r18
            r3 = r20
            java.lang.String r4 = com.alipay.sdk.m.w.b.c(r1, r3)
            com.alipay.sdk.m.t.a r5 = com.alipay.sdk.m.t.a.a(r3)
            java.lang.String r5 = r5.d()
            java.lang.String r1 = com.alipay.sdk.m.w.b.a(r1, r3, r5, r4)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L14a
            java.lang.String r3 = ";;;"
            r2.append(r3)
            r2.append(r1)
        L14a:
            java.lang.String r1 = ")"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            return r1
    }
}
