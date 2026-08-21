package com.alipay.sdk.m.u;

public class c {
    public static final java.lang.String a = "00:00:00:00:00:00";
    public static com.alipay.sdk.m.u.c b;

    static {
            return
    }

    public c(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            com.alipay.sdk.m.u.c r2 = b(r2)
            java.lang.String r2 = r2.a()
            r0 = 0
            r1 = 8
            java.lang.String r2 = r2.substring(r0, r1)
            return r2
    }

    public static com.alipay.sdk.m.u.c b(android.content.Context r1) {
            com.alipay.sdk.m.u.c r0 = com.alipay.sdk.m.u.c.b
            if (r0 != 0) goto Lb
            com.alipay.sdk.m.u.c r0 = new com.alipay.sdk.m.u.c
            r0.<init>(r1)
            com.alipay.sdk.m.u.c.b = r0
        Lb:
            com.alipay.sdk.m.u.c r1 = com.alipay.sdk.m.u.c.b
            return r1
    }

    public static java.lang.String c(android.content.Context r1) {
            java.lang.String r0 = ""
            if (r1 != 0) goto L5
            return r0
        L5:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L14
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> L14
            java.util.Locale r1 = r1.locale     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L14
            return r1
        L14:
            return r0
    }

    public static com.alipay.sdk.m.u.g d(android.content.Context r1) {
            r0 = 0
            android.net.NetworkInfo r1 = com.alipay.sdk.m.w.b.a(r0, r1)     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L16
            int r0 = r1.getType()     // Catch: java.lang.Exception -> L25
            if (r0 != 0) goto L16
            int r1 = r1.getSubtype()     // Catch: java.lang.Exception -> L25
            com.alipay.sdk.m.u.g r1 = com.alipay.sdk.m.u.g.a(r1)     // Catch: java.lang.Exception -> L25
            return r1
        L16:
            if (r1 == 0) goto L22
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L25
            r0 = 1
            if (r1 != r0) goto L22
            com.alipay.sdk.m.u.g r1 = com.alipay.sdk.m.u.g.c     // Catch: java.lang.Exception -> L25
            return r1
        L22:
            com.alipay.sdk.m.u.g r1 = com.alipay.sdk.m.u.g.r     // Catch: java.lang.Exception -> L25
            return r1
        L25:
            com.alipay.sdk.m.u.g r1 = com.alipay.sdk.m.u.g.r
            return r1
    }

    public java.lang.String a() {
            r3 = this;
            java.lang.String r0 = r3.b()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "|"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = r3.c()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L31
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "000000000000000"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            goto L40
        L31:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
        L40:
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = "000000000000000"
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = "000000000000000"
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = "00:00:00:00:00:00"
            return r0
    }
}
