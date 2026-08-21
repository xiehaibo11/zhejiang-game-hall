package com.tkay.expressad.a;

public class d {
    protected static final int b = 1;
    protected static final int c = 2;
    protected static final int d = 4;
    protected static final int e = 8;
    protected static final int f = 16;
    protected static final int g = 32;
    private int a;
    protected com.tkay.expressad.a.e h;

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            return
    }

    private int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    private void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    private void a(com.tkay.expressad.a.e r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private boolean c() {
            r2 = this;
            int r0 = r2.a
            r1 = 8
            if (r0 == r1) goto Ld
            r1 = 16
            if (r0 != r1) goto Lb
            goto Ld
        Lb:
            r0 = 0
            return r0
        Ld:
            r0 = 1
            return r0
    }

    private boolean d() {
            r2 = this;
            int r0 = r2.a
            r1 = 2
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    private boolean e() {
            r2 = this;
            int r0 = r2.a
            r1 = 32
            if (r0 != r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private boolean f() {
            r2 = this;
            int r0 = r2.a
            r1 = 4
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public void b() {
            r1 = this;
            r0 = 8
            r1.a = r0
            return
    }
}
