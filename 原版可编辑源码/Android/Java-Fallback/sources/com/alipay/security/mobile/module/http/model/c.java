package com.alipay.security.mobile.module.http.model;

public class c extends com.alipay.security.mobile.module.http.model.a {
    public static final int c = 1;
    public static final int d = 2;
    public static final int e = 3;
    public static final java.lang.String f = "APPKEY_ERROR";
    public static final java.lang.String g = "SUCCESS";
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public java.lang.String l;
    public java.lang.String m;
    public java.lang.String n;
    public java.lang.String o;
    public java.lang.String p;

    public c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.p = r0
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public int d() {
            r3 = this;
            boolean r0 = r3.a
            r1 = 2
            if (r0 == 0) goto L10
            java.lang.String r0 = r3.h
            boolean r0 = com.alipay.security.mobile.module.a.a.a(r0)
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

    public void d(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public boolean e() {
            r2 = this;
            java.lang.String r0 = r2.j
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.k
            if (r0 != 0) goto L6
            java.lang.String r0 = "0"
        L6:
            return r0
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public void h(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public void i(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public void j(java.lang.String r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }
}
