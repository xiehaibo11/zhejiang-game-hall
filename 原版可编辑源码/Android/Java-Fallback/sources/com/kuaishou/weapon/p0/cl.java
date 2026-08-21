package com.kuaishou.weapon.p0;

public class cl {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;

    public cl(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            r3.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.i = r0
            r3.c = r4
            r3.g = r5
            return
    }

    public static java.lang.String b(android.content.Context r3) {
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.sKDeviceId     // Catch: java.lang.Exception -> Lc
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lc
            if (r1 != 0) goto Lc
            r1 = 1
            com.kuaishou.weapon.p0.bh.v = r1     // Catch: java.lang.Exception -> Lc
            return r0
        Lc:
            java.lang.String r0 = "re_po_rt"
            com.kuaishou.weapon.p0.h r0 = com.kuaishou.weapon.p0.h.a(r3, r0)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "a1_p_s_p_s"
            boolean r1 = r0.e(r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = "a1_p_s_p_s_c_b"
            boolean r0 = r0.e(r2)     // Catch: java.lang.Exception -> L44
            if (r1 != 0) goto L22
            if (r0 == 0) goto L44
        L22:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "ANDROID_"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L44
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "android_id"
            java.lang.String r3 = android.provider.Settings.Secure.getString(r3, r1)     // Catch: java.lang.Exception -> L44
            r0.append(r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L44
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L44
            if (r0 != 0) goto L44
            r0 = 3
            com.kuaishou.weapon.p0.bh.v = r0     // Catch: java.lang.Exception -> L44
            return r3
        L44:
            r3 = 4
            com.kuaishou.weapon.p0.bh.v = r3
            java.lang.String r3 = ""
            return r3
    }

    public static java.lang.String m() {
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.skProductName     // Catch: java.lang.Exception -> Lb
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lb
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.skProductName     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            java.lang.String r0 = "UNKNOWN_PRODUCT"
            return r0
    }

    private org.json.JSONObject n() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L61
            r0.<init>()     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "1"
            java.lang.String r2 = r3.a     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "2"
            java.lang.String r2 = r3.b     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "3"
            java.lang.String r2 = r3.c     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "4"
            java.lang.String r2 = r3.d     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "5"
            java.lang.String r2 = r3.e     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "6"
            java.lang.String r2 = r3.f     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "7"
            java.lang.String r2 = r3.g     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "8"
            java.lang.String r2 = r3.h     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "9"
            java.lang.String r2 = r3.i     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "11"
            java.lang.String r2 = r3.j     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "12"
            java.lang.String r2 = r3.l     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "13"
            java.lang.String r2 = "com.kuaishou.weapon"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r1 = "14"
            java.lang.String r2 = com.kuaishou.weapon.p0.WeaponHI.sKSSdkver     // Catch: java.lang.Throwable -> L61
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L61
            return r0
        L61:
            r0 = 0
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public org.json.JSONObject a(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = b(r2)     // Catch: java.lang.Throwable -> L39
            r1.a(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = m()     // Catch: java.lang.Throwable -> L39
            r1.b(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.q(r2)     // Catch: java.lang.Throwable -> L39
            r1.d(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.r(r2)     // Catch: java.lang.Throwable -> L39
            r1.e(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = com.kuaishou.weapon.p0.bg.s(r2)     // Catch: java.lang.Throwable -> L39
            r1.f(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = "5.2.1"
            r1.h(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = com.kuaishou.weapon.p0.bs.a(r2)     // Catch: java.lang.Throwable -> L39
            r1.j(r2)     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = com.kuaishou.weapon.p0.WeaponHI.sKSAppkey     // Catch: java.lang.Throwable -> L39
            r1.l(r2)     // Catch: java.lang.Throwable -> L39
            org.json.JSONObject r2 = r1.n()     // Catch: java.lang.Throwable -> L39
            return r2
        L39:
            r2 = 0
            return r2
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void h(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public void i(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public void j(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public void k(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public void l(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }
}
