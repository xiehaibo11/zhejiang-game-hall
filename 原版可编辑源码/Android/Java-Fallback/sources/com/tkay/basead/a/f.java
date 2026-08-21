package com.tkay.basead.a;

public class f {
    public static final java.lang.String a = null;
    private static volatile com.tkay.basead.a.f b;

    static {
            java.lang.Class<com.tkay.basead.a.f> r0 = com.tkay.basead.a.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.a.f.a = r0
            return
    }

    private f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.basead.a.f a() {
            com.tkay.basead.a.f r0 = com.tkay.basead.a.f.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.a.f> r0 = com.tkay.basead.a.f.class
            monitor-enter(r0)
            com.tkay.basead.a.f r1 = com.tkay.basead.a.f.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.a.f r1 = new com.tkay.basead.a.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.a.f.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.basead.a.f r0 = com.tkay.basead.a.f.b
            return r0
    }

    public static java.lang.String a(int r1, java.lang.String r2) {
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            java.lang.String r1 = r0.b(r1, r2)
            return r1
    }

    public static void a(java.lang.String r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, com.tkay.basead.a.b.b.b r4) {
            r0 = 0
            a(r1, r0, r2, r3, r4)
            return
    }

    private static void a(java.lang.String r6, java.util.List<com.tkay.core.common.f.r> r7, com.tkay.core.common.f.t r8) {
            if (r7 != 0) goto L3
            return
        L3:
            int r0 = r7.size()
            r1 = 0
        L8:
            if (r1 >= r0) goto L1f
            com.tkay.core.common.f.i r2 = new com.tkay.core.common.f.i
            r2.<init>()
            r2.m = r8
            java.lang.Object r3 = r7.get(r1)
            com.tkay.core.common.f.h r3 = (com.tkay.core.common.f.h) r3
            r4 = 0
            r5 = 1
            a(r6, r5, r3, r2, r4)
            int r1 = r1 + 1
            goto L8
        L1f:
            return
    }

    public static void a(java.lang.String r1, boolean r2, com.tkay.core.common.f.h r3, com.tkay.core.common.f.i r4, com.tkay.basead.a.b.b.b r5) {
            com.tkay.basead.a.b.b r0 = new com.tkay.basead.a.b.b
            r0.<init>(r1, r2, r3, r4)
            r0.a(r5)
            return
    }

    public static boolean a(com.tkay.core.common.f.r r0, int r1, com.tkay.core.common.f.j r2) {
            boolean r0 = com.tkay.basead.a.b.c.a(r0, r1, r2)
            return r0
    }

    public static boolean a(com.tkay.core.common.f.r r0, com.tkay.core.common.f.i r1) {
            boolean r0 = com.tkay.basead.a.b.c.a(r0, r1)
            return r0
    }

    public static boolean a(java.lang.String r2, java.io.InputStream r3) {
            if (r2 == 0) goto L1b
            if (r3 != 0) goto L5
            goto L1b
        L5:
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            r1 = 1
            boolean r2 = r0.a(r1, r2, r3)
            return r2
        L1b:
            r2 = 0
            return r2
    }

    private static java.io.FileInputStream b(int r1, java.lang.String r2) {
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            java.io.FileInputStream r1 = r0.a(r1, r2)
            return r1
    }
}
