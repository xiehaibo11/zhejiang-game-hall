package com.tkay.expressad.video.dynview.b;

public class b {
    private static volatile com.tkay.expressad.video.dynview.b.b a;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.video.dynview.b.b a() {
            com.tkay.expressad.video.dynview.b.b r0 = com.tkay.expressad.video.dynview.b.b.a
            if (r0 != 0) goto L19
            java.lang.Class<com.tkay.expressad.video.dynview.b.b> r0 = com.tkay.expressad.video.dynview.b.b.class
            monitor-enter(r0)
            com.tkay.expressad.video.dynview.b.b r1 = com.tkay.expressad.video.dynview.b.b.a     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.tkay.expressad.video.dynview.b.b r1 = new com.tkay.expressad.video.dynview.b.b     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.tkay.expressad.video.dynview.b.b.a = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.tkay.expressad.video.dynview.b.b r1 = com.tkay.expressad.video.dynview.b.b.a     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L19:
            com.tkay.expressad.video.dynview.b.b r0 = com.tkay.expressad.video.dynview.b.b.a
            return r0
    }

    private static void a(android.view.View r1) {
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.a(r1)
            return
    }

    public static void a(android.view.View r2, com.tkay.expressad.video.dynview.c r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.h()
            r1 = 1
            if (r0 == r1) goto L49
            r1 = 102(0x66, float:1.43E-43)
            if (r0 == r1) goto L40
            r1 = 202(0xca, float:2.83E-43)
            if (r0 == r1) goto L40
            r1 = 302(0x12e, float:4.23E-43)
            if (r0 == r1) goto L40
            r1 = 802(0x322, float:1.124E-42)
            if (r0 == r1) goto L40
            r1 = 904(0x388, float:1.267E-42)
            if (r0 == r1) goto L40
            r1 = 3
            if (r0 == r1) goto L37
            r1 = 4
            if (r0 == r1) goto L2e
            r2 = 5
            if (r0 == r2) goto L28
            goto L2d
        L28:
            com.tkay.expressad.video.dynview.j.b r2 = new com.tkay.expressad.video.dynview.j.b
            r2.<init>()
        L2d:
            return
        L2e:
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.c(r2, r3)
            return
        L37:
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.b(r2, r3)
            return
        L40:
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.a(r2, r3)
            return
        L49:
            com.tkay.expressad.video.dynview.j.b r3 = new com.tkay.expressad.video.dynview.j.b
            r3.<init>()
            r3.a(r2)
            return
    }

    public static void b() {
            com.tkay.expressad.video.dynview.b.b r0 = com.tkay.expressad.video.dynview.b.b.a
            if (r0 == 0) goto L7
            r0 = 0
            com.tkay.expressad.video.dynview.b.b.a = r0
        L7:
            return
    }

    private static void b(android.view.View r1, com.tkay.expressad.video.dynview.c r2) {
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.a(r1, r2)
            return
    }

    private static void c() {
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            return
    }

    private static void c(android.view.View r1, com.tkay.expressad.video.dynview.c r2) {
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.b(r1, r2)
            return
    }

    private static void d(android.view.View r1, com.tkay.expressad.video.dynview.c r2) {
            com.tkay.expressad.video.dynview.j.b r0 = new com.tkay.expressad.video.dynview.j.b
            r0.<init>()
            r0.c(r1, r2)
            return
    }
}
