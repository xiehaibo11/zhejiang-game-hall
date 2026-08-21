package com.alipay.apmobilesecuritysdk.b;

public final class a {
    public static com.alipay.apmobilesecuritysdk.b.a b;
    public int a;

    static {
            com.alipay.apmobilesecuritysdk.b.a r0 = new com.alipay.apmobilesecuritysdk.b.a
            r0.<init>()
            com.alipay.apmobilesecuritysdk.b.a.b = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    public static com.alipay.apmobilesecuritysdk.b.a a() {
            com.alipay.apmobilesecuritysdk.b.a r0 = com.alipay.apmobilesecuritysdk.b.a.b
            return r0
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public final void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final java.lang.String c() {
            r3 = this;
            java.lang.String r0 = com.alipay.sdk.m.d0.d.a()
            boolean r1 = com.alipay.sdk.m.z.a.b(r0)
            if (r1 == 0) goto Lb
            return r0
        Lb:
            int r0 = r3.a
            r1 = 1
            java.lang.String r2 = "http"
            if (r0 == r1) goto L2b
            r1 = 2
            if (r0 == r1) goto L28
            r1 = 3
            if (r0 == r1) goto L25
            r1 = 4
            if (r0 == r1) goto L1e
            java.lang.String r0 = "https://mobilegw.alipay.com/mgw.htm"
            return r0
        L1e:
            java.lang.String r0 = "://mobilegw.aaa.alipay.net/mgw.htm"
        L20:
            java.lang.String r0 = a(r2, r0)
            return r0
        L25:
            java.lang.String r0 = "://mobilegw-1-64.test.alipay.net/mgw.htm"
            goto L20
        L28:
            java.lang.String r0 = "https://mobilegwpre.alipay.com/mgw.htm"
            return r0
        L2b:
            java.lang.String r0 = "://mobilegw.stable.alipay.net/mgw.htm"
            goto L20
    }
}
