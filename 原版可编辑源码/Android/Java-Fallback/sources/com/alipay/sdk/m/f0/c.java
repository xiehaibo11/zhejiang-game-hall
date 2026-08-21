package com.alipay.sdk.m.f0;

public class c extends com.alipay.sdk.m.f0.a {
    public static final int l = 1;
    public static final int m = 2;
    public static final int n = 3;
    public static final java.lang.String o = "APPKEY_ERROR";
    public static final java.lang.String p = "SUCCESS";
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;

    public c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.k = r0
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.f
            if (r0 != 0) goto L6
            java.lang.String r0 = "0"
        L6:
            return r0
    }

    public boolean b() {
            r2 = this;
            java.lang.String r0 = r2.e
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public int c() {
            r3 = this;
            boolean r0 = r3.a
            r1 = 2
            if (r0 == 0) goto L10
            java.lang.String r0 = r3.c
            boolean r0 = com.alipay.sdk.m.z.a.a(r0)
            if (r0 == 0) goto Le
            return r1
        Le:
            r0 = 1
            return r0
        L10:
            java.lang.String r0 = r3.b
            java.lang.String r2 = "APPKEY_ERROR"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L1c
            r0 = 3
            return r0
        L1c:
            return r1
    }
}
