package com.tkay.china.b;

public final class a {
    private static java.lang.String a = "";
    private static java.lang.String b = "";
    private static java.lang.String c = "";
    private static java.lang.String d = "";
    private static java.lang.String e = "";
    private static java.lang.String f = "";
    private static java.lang.String g = "";
    private static java.lang.String h = "";
    private static java.lang.String i = "";
    private static boolean j;



    static {
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "mac"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = com.tkay.china.b.a.a
            return r0
    }

    public static void a(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = "oaid"
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r2 = com.tkay.core.common.l.p.b(r3, r2, r1, r0)
            com.tkay.china.b.a.c = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L2c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            boolean r1 = r2.c(r1)
            if (r1 != 0) goto L2c
            java.lang.String r1 = com.tkay.china.b.a.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2c
            com.tkay.china.b.a$1 r1 = new com.tkay.china.b.a$1
            r1.<init>(r3)
            com.tkay.china.a.b.a(r3, r1)
        L2c:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = "mac"
            boolean r1 = r1.c(r2)
            if (r1 == 0) goto L39
            goto L48
        L39:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 >= r1) goto L44
            java.lang.String r0 = com.tkay.china.b.d.a(r3)
            goto L48
        L44:
            java.lang.String r0 = com.tkay.china.b.d.a()
        L48:
            com.tkay.china.b.a.a = r0
            java.lang.String r0 = d(r3)
            com.tkay.china.b.a.b = r0
            java.lang.String r0 = com.tkay.china.b.b.a()
            com.tkay.china.b.a.d = r0
            java.lang.String[] r3 = com.tkay.china.b.b.c(r3)
            if (r3 == 0) goto L6a
            int r0 = r3.length
            r1 = 2
            if (r0 != r1) goto L6a
            r0 = 0
            r0 = r3[r0]
            com.tkay.china.b.a.e = r0
            r0 = 1
            r3 = r3[r0]
            com.tkay.china.b.a.f = r3
        L6a:
            java.lang.String r3 = com.tkay.china.b.b.b()
            com.tkay.china.b.a.g = r3
            java.lang.String r3 = com.tkay.china.b.b.c()
            com.tkay.china.b.a.h = r3
            java.lang.String r3 = com.tkay.china.b.b.d()
            com.tkay.china.b.a.i = r3
            return
    }

    static boolean a(java.lang.String r1) {
            java.lang.String r0 = "^[0-]+$"
            boolean r1 = java.util.regex.Pattern.matches(r0, r1)
            return r1
    }

    public static java.lang.String b() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "oaid"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            java.lang.String r0 = com.tkay.china.b.a.c
            return r0
    }

    public static java.lang.String b(android.content.Context r1) {
            d(r1)
            java.lang.String r0 = com.tkay.china.b.a.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Le
            java.lang.String r1 = com.tkay.china.b.a.b
            return r1
        Le:
            java.lang.String r1 = c(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L19
            return r1
        L19:
            java.lang.String r1 = ""
            return r1
    }

    static java.lang.String b(java.lang.String r0) {
            com.tkay.china.b.a.c = r0
            return r0
    }

    public static java.lang.String c() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "wifi_name"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = ""
            return r0
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r0 = com.tkay.china.b.b.b(r0)
            return r0
    }

    public static java.lang.String c(android.content.Context r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "oaid"
            boolean r0 = r0.c(r1)
            if (r0 != 0) goto L56
            java.lang.String r0 = com.tkay.china.b.a.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            java.lang.String r4 = com.tkay.china.b.a.c
            return r4
        L17:
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "oaid"
            java.lang.String r2 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r4, r0, r1, r2)
            com.tkay.china.b.a.c = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2c
            java.lang.String r4 = com.tkay.china.b.a.c
            return r4
        L2c:
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1 = 1
            boolean[] r1 = new boolean[r1]
            r2 = 0
            r1[r2] = r2
            com.tkay.china.b.a$2 r3 = new com.tkay.china.b.a$2
            r3.<init>(r4, r0, r1)
            com.tkay.china.a.b.a(r4, r3)
            boolean r4 = r1[r2]
            if (r4 != 0) goto L4e
            monitor-enter(r0)     // Catch: java.lang.Exception -> L4e
            r1 = 1500(0x5dc, double:7.41E-321)
            r0.wait(r1)     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4b
            goto L4e
        L4b:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Exception -> L4e
            throw r4     // Catch: java.lang.Exception -> L4e
        L4e:
            java.lang.String r4 = com.tkay.china.b.a.c
            if (r4 == 0) goto L53
            return r4
        L53:
            java.lang.String r4 = ""
            return r4
        L56:
            java.lang.String r4 = ""
            return r4
    }

    private static boolean c(java.lang.String r1) {
            java.lang.String r0 = "^[0-]+$"
            boolean r1 = java.util.regex.Pattern.matches(r0, r1)
            return r1
    }

    public static java.lang.String d() {
            java.lang.String r0 = com.tkay.china.b.a.d
            return r0
    }

    public static synchronized java.lang.String d(android.content.Context r3) {
            java.lang.Class<com.tkay.china.b.a> r0 = com.tkay.china.b.a.class
            monitor-enter(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "imei"
            boolean r1 = r1.c(r2)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L13
            java.lang.String r3 = ""
            monitor-exit(r0)
            return r3
        L13:
            boolean r1 = com.tkay.china.b.a.j     // Catch: java.lang.Throwable -> L34
            if (r1 != 0) goto L30
            java.lang.String r1 = com.tkay.china.b.a.b     // Catch: java.lang.Throwable -> L34
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L30
            java.lang.String r1 = "android.permission.READ_PHONE_STATE"
            boolean r1 = com.tkay.china.common.d.a(r3, r1)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L30
            java.lang.String r3 = com.tkay.china.b.c.a(r3)     // Catch: java.lang.Throwable -> L34
            com.tkay.china.b.a.b = r3     // Catch: java.lang.Throwable -> L34
            r3 = 1
            com.tkay.china.b.a.j = r3     // Catch: java.lang.Throwable -> L34
        L30:
            java.lang.String r3 = com.tkay.china.b.a.b     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)
            return r3
        L34:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static java.lang.String e() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r0 = com.tkay.china.b.b.a(r0)
            return r0
    }

    public static java.lang.String f() {
            java.lang.String r0 = com.tkay.china.b.a.e
            return r0
    }

    public static java.lang.String g() {
            java.lang.String r0 = com.tkay.china.b.a.f
            return r0
    }

    public static java.lang.String h() {
            java.lang.String r0 = com.tkay.china.b.a.g
            return r0
    }

    public static java.lang.String i() {
            java.lang.String r0 = com.tkay.china.b.a.h
            return r0
    }

    public static java.lang.String j() {
            java.lang.String r0 = com.tkay.china.b.a.i
            return r0
    }
}
