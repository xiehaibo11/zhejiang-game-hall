package com.tkay.core.common;

public class i {
    private static volatile com.tkay.core.common.i a;

    private i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.common.i a() {
            com.tkay.core.common.i r0 = com.tkay.core.common.i.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.i> r0 = com.tkay.core.common.i.class
            monitor-enter(r0)
            com.tkay.core.common.i r1 = com.tkay.core.common.i.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.i r1 = new com.tkay.core.common.i     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.i.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.i r0 = com.tkay.core.common.i.a
            return r0
    }

    public static java.lang.String a(com.tkay.core.c.d r1) {
            java.lang.String r1 = r1.s()
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc
            java.lang.String r1 = ""
        Lc:
            return r1
    }

    public static java.lang.String a(com.tkay.core.c.d r0, boolean r1) {
            if (r1 == 0) goto L10
            java.lang.String r1 = r0.w()
            r0.ao()
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            return r1
        L10:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            com.tkay.core.common.f.m r0 = r0.r()
            boolean r1 = m()
            if (r1 == 0) goto L35
            java.lang.String r1 = "http://adx.anythinktech.com/bid"
            goto L37
        L35:
            java.lang.String r1 = "https://adx.anythinktech.com/bid"
        L37:
            if (r0 == 0) goto L42
            java.lang.String r0 = r0.c()
            java.lang.String r0 = a(r0, r1)
            return r0
        L42:
            return r1
    }

    private static java.lang.String a(java.lang.String r0) {
            return r0
    }

    private static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return r2
        L7:
            return r1
    }

    public static java.lang.String b() {
            boolean r0 = m()
            if (r0 == 0) goto L9
            java.lang.String r0 = "http://api.anythinktech.com/v2/open/app"
            goto Lb
        L9:
            java.lang.String r0 = "https://api.anythinktech.com/v2/open/app"
        Lb:
            com.tkay.core.common.e.a r1 = com.tkay.core.common.e.a.a()
            java.lang.String r0 = r1.a(r0)
            return r0
    }

    public static java.lang.String b(com.tkay.core.c.d r0) {
            java.lang.String r0 = r0.r()
            return r0
    }

    public static java.lang.String c() {
            boolean r0 = m()
            if (r0 == 0) goto L9
            java.lang.String r0 = "http://api.anythinktech.com/v2/open/placement"
            goto Lb
        L9:
            java.lang.String r0 = "https://api.anythinktech.com/v2/open/placement"
        Lb:
            com.tkay.core.common.e.a r1 = com.tkay.core.common.e.a.a()
            java.lang.String r0 = r1.a(r0)
            return r0
    }

    public static java.lang.String d() {
            boolean r0 = m()
            if (r0 == 0) goto L9
            java.lang.String r0 = "http://api.anythinktech.com/v2/open/eu"
            return r0
        L9:
            java.lang.String r0 = "https://api.anythinktech.com/v2/open/eu"
            return r0
    }

    public static java.lang.String e() {
            boolean r0 = m()
            if (r0 == 0) goto L9
            java.lang.String r0 = "http://api.anythinktech.com/v2/open/area"
            return r0
        L9:
            java.lang.String r0 = "https://api.anythinktech.com/v2/open/area"
            return r0
    }

    public static java.lang.String f() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            com.tkay.core.common.f.m r0 = r0.r()
            boolean r1 = m()
            if (r1 == 0) goto L25
            java.lang.String r1 = "http://adx.anythinktech.com/request"
            goto L27
        L25:
            java.lang.String r1 = "https://adx.anythinktech.com/request"
        L27:
            if (r0 == 0) goto L32
            java.lang.String r0 = r0.b()
            java.lang.String r0 = a(r0, r1)
            return r0
        L32:
            return r1
    }

    public static java.lang.String g() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            com.tkay.core.common.f.m r0 = r0.r()
            boolean r1 = m()
            if (r1 == 0) goto L25
            java.lang.String r1 = "http://adxtk.anythinktech.com/v1"
            goto L27
        L25:
            java.lang.String r1 = "https://adxtk.anythinktech.com/v1"
        L27:
            if (r0 == 0) goto L32
            java.lang.String r0 = r0.d()
            java.lang.String r0 = a(r0, r1)
            return r0
        L32:
            return r1
    }

    public static java.lang.String h() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            com.tkay.core.common.f.m r0 = r0.r()
            boolean r1 = m()
            if (r1 == 0) goto L25
            java.lang.String r1 = "http://adx.anythinktech.com/openapi/req"
            goto L27
        L25:
            java.lang.String r1 = "https://adx.anythinktech.com/openapi/req"
        L27:
            if (r0 == 0) goto L32
            java.lang.String r0 = r0.a()
            java.lang.String r0 = a(r0, r1)
            return r0
        L32:
            return r1
    }

    public static java.lang.String i() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            boolean r1 = m()
            if (r1 == 0) goto L21
            java.lang.String r1 = "http://tk.anythinktech.com/ss/rrd"
            goto L23
        L21:
            java.lang.String r1 = "https://tk.anythinktech.com/ss/rrd"
        L23:
            if (r0 == 0) goto L2e
            java.lang.String r0 = r0.o()
            java.lang.String r0 = a(r0, r1)
            return r0
        L2e:
            return r1
    }

    public static java.lang.String j() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            boolean r1 = m()
            if (r1 == 0) goto L21
            java.lang.String r1 = "http://tk.anythinktech.com/v1/open/tk"
            goto L23
        L21:
            java.lang.String r1 = "https://tk.anythinktech.com/v1/open/tk"
        L23:
            if (r0 == 0) goto L2e
            java.lang.String r0 = r0.X()
            java.lang.String r0 = a(r0, r1)
            return r0
        L2e:
            return r1
    }

    public static java.lang.String k() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            boolean r1 = m()
            if (r1 == 0) goto L21
            java.lang.String r1 = "http://da.anythinktech.com/v1/open/da"
            goto L23
        L21:
            java.lang.String r1 = "https://da.anythinktech.com/v1/open/da"
        L23:
            if (r0 == 0) goto L2e
            java.lang.String r0 = r0.ac()
            java.lang.String r0 = a(r0, r1)
            return r0
        L2e:
            return r1
    }

    public static java.lang.String l() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            java.lang.String r1 = "https://img.anythinktech.com/gdpr/PrivacyPolicySetting.html"
            if (r0 == 0) goto L25
            java.lang.String r0 = r0.T()
            java.lang.String r0 = a(r0, r1)
            return r0
        L25:
            return r1
    }

    private static boolean m() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.C()
            if (r0 == 0) goto L16
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.B()
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }
}
