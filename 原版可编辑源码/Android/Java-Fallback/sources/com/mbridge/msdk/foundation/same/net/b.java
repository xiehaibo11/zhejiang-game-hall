package com.mbridge.msdk.foundation.same.net;

public final class b implements com.mbridge.msdk.foundation.same.net.l {
    private int a;
    private int b;
    private final int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;

    public b() {
            r2 = this;
            r0 = 30000(0x7530, float:4.2039E-41)
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    private b(int r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.d = r0
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r1.h = r0
            if (r2 > 0) goto L13
            r2 = 30000(0x7530, float:4.2039E-41)
        L13:
            r1.a = r2
            r1.c = r3
            return
    }

    public b(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.d = r0
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r1.h = r0
            int r2 = java.lang.Math.max(r2, r0)
            r1.e = r2
            int r2 = java.lang.Math.max(r3, r0)
            r1.f = r2
            int r2 = java.lang.Math.max(r4, r0)
            r1.g = r2
            int r2 = java.lang.Math.max(r5, r0)
            r1.h = r2
            int r2 = java.lang.Math.max(r6, r0)
            r1.c = r2
            return
    }

    public b(int r2, int r3, int r4, int r5, int r6, int r7) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.d = r0
            r0 = 0
            r1.e = r0
            r1.f = r0
            r1.g = r0
            r1.h = r0
            int r2 = java.lang.Math.max(r2, r0)
            r1.e = r2
            int r2 = java.lang.Math.max(r3, r0)
            r1.f = r2
            int r2 = java.lang.Math.max(r4, r0)
            r1.g = r2
            int r2 = java.lang.Math.max(r5, r0)
            r1.h = r2
            int r2 = java.lang.Math.max(r6, r0)
            r1.c = r2
            r1.d = r7
            return
    }

    @Override
    public final int a() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public final boolean a(com.mbridge.msdk.foundation.same.net.a.a r3) {
            r2 = this;
            int r3 = r2.b
            r0 = 1
            int r3 = r3 + r0
            r2.b = r3
            int r1 = r2.c
            if (r3 <= r1) goto Lc
            r3 = 0
            return r3
        Lc:
            return r0
    }

    @Override
    public final int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    public final int c() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public final int d() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    @Override
    public final int e() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    @Override
    public final int f() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    @Override
    public final int g() {
            r1 = this;
            int r0 = r1.h
            return r0
    }
}
