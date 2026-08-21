package com.tkay.expressad.foundation.g.f;

public final class m {
    private static com.tkay.expressad.foundation.g.f.m c;
    private com.tkay.expressad.foundation.g.f.j a;
    private com.tkay.expressad.foundation.g.f.d.b b;

    private m() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.foundation.g.f.d.b a() {
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            if (r0 == 0) goto L19
            com.tkay.expressad.foundation.g.f.d.b r1 = r0.b
            if (r1 == 0) goto L9
            return r1
        L9:
            com.tkay.expressad.foundation.g.f.d.b r1 = new com.tkay.expressad.foundation.g.f.d.b
            com.tkay.expressad.foundation.g.f.j r2 = b()
            r1.<init>(r2)
            r0.b = r1
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            com.tkay.expressad.foundation.g.f.d.b r0 = r0.b
            return r0
        L19:
            com.tkay.expressad.foundation.g.f.m r0 = new com.tkay.expressad.foundation.g.f.m
            r0.<init>()
            com.tkay.expressad.foundation.g.f.m.c = r0
            com.tkay.expressad.foundation.g.f.d.b r1 = r0.b
            if (r1 != 0) goto L2f
            com.tkay.expressad.foundation.g.f.d.b r1 = new com.tkay.expressad.foundation.g.f.d.b
            com.tkay.expressad.foundation.g.f.j r2 = b()
            r1.<init>(r2)
            r0.b = r1
        L2f:
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            com.tkay.expressad.foundation.g.f.d.b r0 = r0.b
            return r0
    }

    public static void a(android.content.Context r2) {
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            if (r0 != 0) goto L23
            com.tkay.expressad.foundation.g.f.m r0 = new com.tkay.expressad.foundation.g.f.m
            r0.<init>()
            com.tkay.expressad.foundation.g.f.m.c = r0
            com.tkay.expressad.foundation.g.f.j r1 = new com.tkay.expressad.foundation.g.f.j
            android.content.Context r2 = r2.getApplicationContext()
            r1.<init>(r2)
            r0.a = r1
            com.tkay.expressad.foundation.g.f.m r2 = com.tkay.expressad.foundation.g.f.m.c
            com.tkay.expressad.foundation.g.f.d.b r0 = new com.tkay.expressad.foundation.g.f.d.b
            com.tkay.expressad.foundation.g.f.j r1 = b()
            r0.<init>(r1)
            r2.b = r0
        L23:
            return
    }

    public static void a(com.tkay.expressad.foundation.g.f.i r1) {
            com.tkay.expressad.foundation.g.f.j r0 = b()
            r0.a(r1)
            return
    }

    private static com.tkay.expressad.foundation.g.f.j b() {
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            if (r0 == 0) goto L1d
            com.tkay.expressad.foundation.g.f.j r1 = r0.a
            if (r1 == 0) goto L9
            return r1
        L9:
            com.tkay.expressad.foundation.g.f.j r1 = new com.tkay.expressad.foundation.g.f.j
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r1.<init>(r2)
            r0.a = r1
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            com.tkay.expressad.foundation.g.f.j r0 = r0.a
            return r0
        L1d:
            com.tkay.expressad.foundation.g.f.m r0 = new com.tkay.expressad.foundation.g.f.m
            r0.<init>()
            com.tkay.expressad.foundation.g.f.m.c = r0
            com.tkay.expressad.foundation.g.f.j r1 = r0.a
            if (r1 != 0) goto L37
            com.tkay.expressad.foundation.g.f.j r1 = new com.tkay.expressad.foundation.g.f.j
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r1.<init>(r2)
            r0.a = r1
        L37:
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            com.tkay.expressad.foundation.g.f.j r0 = r0.a
            return r0
    }

    private static void c() {
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            if (r0 == 0) goto L10
            com.tkay.expressad.foundation.g.f.d.b r0 = r0.b
            if (r0 == 0) goto L10
            r0.a()
            com.tkay.expressad.foundation.g.f.m r0 = com.tkay.expressad.foundation.g.f.m.c
            r1 = 0
            r0.b = r1
        L10:
            return
    }
}
