package com.tkay.expressad.out;

public class c {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    private int f;
    private int g;

    public c(int r5, int r6) {
            r4 = this;
            r4.<init>()
            r0 = 1
            r1 = 90
            r2 = 320(0x140, float:4.48E-43)
            if (r5 == r0) goto L49
            r0 = 2
            if (r5 == r0) goto L40
            r0 = 3
            r3 = 50
            if (r5 == r0) goto L24
            r0 = 4
            if (r5 == r0) goto L1f
            r0 = 5
            if (r5 == r0) goto L19
            goto L1e
        L19:
            r4.f = r6
            r5 = 0
            r4.g = r5
        L1e:
            return
        L1f:
            r4.f = r3
            r4.g = r2
            return
        L24:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r5.f()
            int r5 = com.tkay.expressad.foundation.h.k.f(r5)
            r6 = 720(0x2d0, float:1.009E-42)
            if (r5 >= r6) goto L39
            r4.f = r3
            r4.g = r2
            return
        L39:
            r4.f = r1
            r5 = 728(0x2d8, float:1.02E-42)
            r4.g = r5
            return
        L40:
            r5 = 250(0xfa, float:3.5E-43)
            r4.f = r5
            r5 = 300(0x12c, float:4.2E-43)
            r4.g = r5
            return
        L49:
            r4.f = r1
            r4.g = r2
            return
    }

    private void c() {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            int r0 = com.tkay.expressad.foundation.h.k.f(r0)
            r1 = 720(0x2d0, float:1.009E-42)
            if (r0 >= r1) goto L19
            r0 = 50
            r2.f = r0
            r0 = 320(0x140, float:4.48E-43)
            r2.g = r0
            return
        L19:
            r0 = 90
            r2.f = r0
            r0 = 728(0x2d8, float:1.02E-42)
            r2.g = r0
            return
    }

    public final int a() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final int b() {
            r1 = this;
            int r0 = r1.g
            return r0
    }
}
