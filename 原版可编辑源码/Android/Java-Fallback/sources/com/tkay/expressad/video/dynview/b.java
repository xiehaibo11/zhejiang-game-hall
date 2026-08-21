package com.tkay.expressad.video.dynview;

public class b {
    private static volatile com.tkay.expressad.video.dynview.b b;
    public java.util.Map<java.lang.String, java.lang.ref.SoftReference<android.view.View>> a;

    private b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.tkay.expressad.video.dynview.b a() {
            com.tkay.expressad.video.dynview.b r0 = com.tkay.expressad.video.dynview.b.b
            if (r0 != 0) goto L19
            java.lang.Class<com.tkay.expressad.video.dynview.b> r0 = com.tkay.expressad.video.dynview.b.class
            monitor-enter(r0)
            com.tkay.expressad.video.dynview.b r1 = com.tkay.expressad.video.dynview.b.b     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.tkay.expressad.video.dynview.b r1 = new com.tkay.expressad.video.dynview.b     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.tkay.expressad.video.dynview.b.b = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.tkay.expressad.video.dynview.b r1 = com.tkay.expressad.video.dynview.b.b     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L19:
            com.tkay.expressad.video.dynview.b r0 = com.tkay.expressad.video.dynview.b.b
            return r0
    }

    public static void a(android.content.Context r1, java.util.List<com.tkay.expressad.foundation.d.c> r2, com.tkay.expressad.video.dynview.f.h r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            com.tkay.expressad.video.dynview.h.a r0 = new com.tkay.expressad.video.dynview.h.a
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public static void a(com.tkay.expressad.video.dynview.c r2, com.tkay.expressad.video.dynview.f.h r3) {
            com.tkay.expressad.video.dynview.h.a r0 = new com.tkay.expressad.video.dynview.h.a
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.<init>(r2, r3, r1)
            return
    }

    public static void a(com.tkay.expressad.video.dynview.c r1, com.tkay.expressad.video.dynview.f.h r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            com.tkay.expressad.video.dynview.h.a r0 = new com.tkay.expressad.video.dynview.h.a
            r0.<init>(r1, r2, r3)
            return
    }

    private static void b() {
            return
    }

    private static void c() {
            com.tkay.expressad.video.dynview.b.b.a()
            com.tkay.expressad.video.dynview.b.b.b()
            com.tkay.expressad.video.dynview.b.a.a()
            com.tkay.expressad.video.dynview.b.a.b()
            return
    }
}
