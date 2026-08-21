package com.tkay.expressad.video.dynview.b;

public class a {
    private static volatile com.tkay.expressad.video.dynview.b.a b;
    public com.tkay.expressad.video.dynview.e.a a;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.video.dynview.b.a a() {
            com.tkay.expressad.video.dynview.b.a r0 = com.tkay.expressad.video.dynview.b.a.b
            if (r0 != 0) goto L19
            java.lang.Class<com.tkay.expressad.video.dynview.b.a> r0 = com.tkay.expressad.video.dynview.b.a.class
            monitor-enter(r0)
            com.tkay.expressad.video.dynview.b.a r1 = com.tkay.expressad.video.dynview.b.a.b     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.tkay.expressad.video.dynview.b.a r1 = new com.tkay.expressad.video.dynview.b.a     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.tkay.expressad.video.dynview.b.a.b = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.tkay.expressad.video.dynview.b.a r1 = com.tkay.expressad.video.dynview.b.a.b     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L19:
            com.tkay.expressad.video.dynview.b.a r0 = com.tkay.expressad.video.dynview.b.a.b
            return r0
    }

    private static void a(com.tkay.expressad.video.dynview.c r1, android.view.View r2, com.tkay.expressad.video.dynview.f.e r3) {
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.tkay.expressad.video.dynview.c r2, android.view.View r3, java.util.Map r4, com.tkay.expressad.video.dynview.f.e r5) {
            r1 = this;
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.a(r2, r3, r4, r5)
            com.tkay.expressad.video.dynview.e.a r2 = r0.b
            r1.a = r2
            return
    }

    public static void b() {
            com.tkay.expressad.video.dynview.b.a r0 = com.tkay.expressad.video.dynview.b.a.b
            if (r0 == 0) goto L7
            r0 = 0
            com.tkay.expressad.video.dynview.b.a.b = r0
        L7:
            return
    }

    private static void b(com.tkay.expressad.video.dynview.c r1, android.view.View r2, java.util.Map r3, com.tkay.expressad.video.dynview.f.e r4) {
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.b(r1, r2, r3, r4)
            return
    }

    private void c() {
            r1 = this;
            com.tkay.expressad.video.dynview.e.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    private static void c(com.tkay.expressad.video.dynview.c r1, android.view.View r2, java.util.Map r3, com.tkay.expressad.video.dynview.f.e r4) {
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.c(r1, r2, r3, r4)
            return
    }

    private static void d() {
            return
    }

    private void e() {
            r1 = this;
            com.tkay.expressad.video.dynview.e.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    public final void a(android.view.View r3, com.tkay.expressad.video.dynview.c r4, java.util.Map r5, com.tkay.expressad.video.dynview.f.e r6) {
            r2 = this;
            int r0 = r4.h()
            r1 = 1
            if (r0 == r1) goto L45
            r1 = 102(0x66, float:1.43E-43)
            if (r0 == r1) goto L3c
            r1 = 202(0xca, float:2.83E-43)
            if (r0 == r1) goto L3c
            r1 = 302(0x12e, float:4.23E-43)
            if (r0 == r1) goto L3c
            r1 = 802(0x322, float:1.124E-42)
            if (r0 == r1) goto L3c
            r1 = 904(0x388, float:1.267E-42)
            if (r0 == r1) goto L3c
            r1 = 4
            if (r0 == r1) goto L33
            r1 = 5
            if (r0 == r1) goto L2a
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r6.a(r3, r4)
            return
        L2a:
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.c(r4, r3, r5, r6)
            return
        L33:
            com.tkay.expressad.video.dynview.j.a r5 = new com.tkay.expressad.video.dynview.j.a
            r5.<init>()
            r5.a(r4, r3, r6)
            return
        L3c:
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.b(r4, r3, r5, r6)
            return
        L45:
            com.tkay.expressad.video.dynview.j.a r0 = new com.tkay.expressad.video.dynview.j.a
            r0.<init>()
            r0.a(r4, r3, r5, r6)
            com.tkay.expressad.video.dynview.e.a r3 = r0.b
            r2.a = r3
            return
    }
}
