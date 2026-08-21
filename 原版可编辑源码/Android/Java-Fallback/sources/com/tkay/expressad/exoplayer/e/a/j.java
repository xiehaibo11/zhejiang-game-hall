package com.tkay.expressad.exoplayer.e.a;

public final class j {
    public static final int a = 0;
    public static final int b = 1;
    public final int c;
    public final int d;
    public final long e;
    public final long f;
    public final long g;
    public final com.tkay.expressad.exoplayer.m h;
    public final int i;
    public final long[] j;
    public final long[] k;
    public final int l;
    private final com.tkay.expressad.exoplayer.e.a.k[] m;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    public j(int r1, int r2, long r3, long r5, long r7, com.tkay.expressad.exoplayer.m r9, int r10, com.tkay.expressad.exoplayer.e.a.k[] r11, int r12, long[] r13, long[] r14) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r2
            r0.e = r3
            r0.f = r5
            r0.g = r7
            r0.h = r9
            r0.i = r10
            r0.m = r11
            r0.l = r12
            r0.j = r13
            r0.k = r14
            return
    }

    public final com.tkay.expressad.exoplayer.e.a.k a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.e.a.k[] r0 = r1.m
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            r2 = r0[r2]
            return r2
    }
}
