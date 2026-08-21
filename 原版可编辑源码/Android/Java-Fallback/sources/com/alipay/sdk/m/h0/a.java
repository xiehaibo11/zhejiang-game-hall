package com.alipay.sdk.m.h0;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            boolean r0 = com.alipay.sdk.m.a.a.b.a
            if (r0 == 0) goto L11
            com.alipay.sdk.m.a.a$c r0 = com.alipay.sdk.m.a.a.c.b.a
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r1 = "AUID"
            java.lang.String r2 = r0.a(r2, r1)
            return r2
        L11:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "SDK Need Init First!"
            r2.<init>(r0)
            throw r2
    }

    public static boolean a() {
            boolean r0 = com.alipay.sdk.m.a.a.b.a
            if (r0 == 0) goto L7
            boolean r0 = com.alipay.sdk.m.a.a.b.b
            return r0
        L7:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "SDK Need Init First!"
            r0.<init>(r1)
            throw r0
    }

    public static java.lang.String b(android.content.Context r2) {
            boolean r0 = com.alipay.sdk.m.a.a.b.a
            if (r0 == 0) goto L11
            com.alipay.sdk.m.a.a$c r0 = com.alipay.sdk.m.a.a.c.b.a
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r1 = "OUID"
            java.lang.String r2 = r0.a(r2, r1)
            return r2
        L11:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "SDK Need Init First!"
            r2.<init>(r0)
            throw r2
    }

    public static java.lang.String c(android.content.Context r2) {
            boolean r0 = com.alipay.sdk.m.a.a.b.a
            if (r0 == 0) goto L11
            com.alipay.sdk.m.a.a$c r0 = com.alipay.sdk.m.a.a.c.b.a
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r1 = "GUID"
            java.lang.String r2 = r0.a(r2, r1)
            return r2
        L11:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "SDK Need Init First!"
            r2.<init>(r0)
            throw r2
    }

    public static java.lang.String d(android.content.Context r2) {
            boolean r0 = com.alipay.sdk.m.a.a.b.a
            if (r0 == 0) goto L11
            com.alipay.sdk.m.a.a$c r0 = com.alipay.sdk.m.a.a.c.b.a
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r1 = "DUID"
            java.lang.String r2 = r0.a(r2, r1)
            return r2
        L11:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "SDK Need Init First!"
            r2.<init>(r0)
            throw r2
    }

    public static void e(android.content.Context r1) {
            com.alipay.sdk.m.a.a$c r0 = com.alipay.sdk.m.a.a.c.b.a
            android.content.Context r1 = r1.getApplicationContext()
            boolean r1 = r0.a(r1)
            com.alipay.sdk.m.a.a.b.b = r1
            r1 = 1
            com.alipay.sdk.m.a.a.b.a = r1
            return
    }
}
