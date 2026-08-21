package com.alipay.sdk.m.i0;

public class a {
    public long a;
    public java.lang.String b;
    public java.lang.String c;
    public int d;

    public a(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            return
    }

    public void a(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public boolean a() {
            r5 = this;
            long r0 = r5.a
            long r2 = java.lang.System.currentTimeMillis()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public void b() {
            r2 = this;
            r0 = 0
            r2.a = r0
            return
    }
}
