package com.meizu.cloud.pushsdk.platform.a;

public class b {
    private static com.meizu.cloud.pushsdk.platform.a.b a;
    private java.util.concurrent.ScheduledExecutorService b;
    private final android.content.Context c;
    private final com.meizu.cloud.pushsdk.platform.a.a d;
    private final com.meizu.cloud.pushsdk.platform.b.b e;
    private final com.meizu.cloud.pushsdk.platform.b.g f;
    private final com.meizu.cloud.pushsdk.platform.b.f g;
    private final com.meizu.cloud.pushsdk.platform.b.e h;
    private final com.meizu.cloud.pushsdk.platform.b.d i;
    private final boolean j;

    public b(android.content.Context r2, boolean r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r3, r0)
            return
    }

    public b(android.content.Context r3, boolean r4, boolean r5) {
            r2 = this;
            r2.<init>()
            android.content.Context r3 = r3.getApplicationContext()
            r2.c = r3
            com.meizu.cloud.pushsdk.platform.a.a r3 = new com.meizu.cloud.pushsdk.platform.a.a
            android.content.Context r0 = r2.c
            r3.<init>(r0)
            r2.d = r3
            if (r4 == 0) goto L1c
            java.util.concurrent.ExecutorService r3 = com.meizu.cloud.pushsdk.d.b.a.b.a()
            java.util.concurrent.ScheduledExecutorService r3 = (java.util.concurrent.ScheduledExecutorService) r3
            r2.b = r3
        L1c:
            r2.j = r5
            com.meizu.cloud.pushsdk.platform.b.b r3 = new com.meizu.cloud.pushsdk.platform.b.b
            android.content.Context r4 = r2.c
            com.meizu.cloud.pushsdk.platform.a.a r0 = r2.d
            java.util.concurrent.ScheduledExecutorService r1 = r2.b
            r3.<init>(r4, r0, r1, r5)
            r2.e = r3
            com.meizu.cloud.pushsdk.platform.b.g r3 = new com.meizu.cloud.pushsdk.platform.b.g
            android.content.Context r4 = r2.c
            com.meizu.cloud.pushsdk.platform.a.a r0 = r2.d
            java.util.concurrent.ScheduledExecutorService r1 = r2.b
            r3.<init>(r4, r0, r1, r5)
            r2.f = r3
            com.meizu.cloud.pushsdk.platform.b.f r3 = new com.meizu.cloud.pushsdk.platform.b.f
            android.content.Context r4 = r2.c
            com.meizu.cloud.pushsdk.platform.a.a r0 = r2.d
            java.util.concurrent.ScheduledExecutorService r1 = r2.b
            r3.<init>(r4, r0, r1, r5)
            r2.g = r3
            com.meizu.cloud.pushsdk.platform.b.e r3 = new com.meizu.cloud.pushsdk.platform.b.e
            android.content.Context r4 = r2.c
            com.meizu.cloud.pushsdk.platform.a.a r0 = r2.d
            java.util.concurrent.ScheduledExecutorService r1 = r2.b
            r3.<init>(r4, r0, r1, r5)
            r2.h = r3
            com.meizu.cloud.pushsdk.platform.b.d r3 = new com.meizu.cloud.pushsdk.platform.b.d
            android.content.Context r4 = r2.c
            com.meizu.cloud.pushsdk.platform.a.a r0 = r2.d
            java.util.concurrent.ScheduledExecutorService r1 = r2.b
            r3.<init>(r4, r0, r1, r5)
            r2.i = r3
            return
    }

    public static com.meizu.cloud.pushsdk.platform.a.b a(android.content.Context r3) {
            com.meizu.cloud.pushsdk.platform.a.b r0 = com.meizu.cloud.pushsdk.platform.a.b.a
            if (r0 != 0) goto L18
            java.lang.Class<com.meizu.cloud.pushsdk.platform.a.b> r0 = com.meizu.cloud.pushsdk.platform.a.b.class
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.platform.a.b r1 = com.meizu.cloud.pushsdk.platform.a.b.a     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.meizu.cloud.pushsdk.platform.a.b r1 = new com.meizu.cloud.pushsdk.platform.a.b     // Catch: java.lang.Throwable -> L15
            r2 = 1
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L15
            com.meizu.cloud.pushsdk.platform.a.b.a = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r3
        L18:
            com.meizu.cloud.pushsdk.platform.a.b r3 = com.meizu.cloud.pushsdk.platform.a.b.a
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c<java.lang.String> a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.io.File r5) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.a.a r0 = r1.d
            com.meizu.cloud.pushsdk.c.a.c r2 = r0.a(r2, r3, r4, r5)
            return r2
    }

    public void a(boolean r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.b r0 = r1.e
            r0.a(r2)
            com.meizu.cloud.pushsdk.platform.b.g r0 = r1.f
            r0.a(r2)
            com.meizu.cloud.pushsdk.platform.b.f r0 = r1.g
            r0.a(r2)
            com.meizu.cloud.pushsdk.platform.b.d r0 = r1.i
            r0.a(r2)
            com.meizu.cloud.pushsdk.platform.b.e r0 = r1.h
            r0.a(r2)
            return
    }

    public boolean a(java.lang.String r5) {
            r4 = this;
            com.meizu.cloud.pushsdk.platform.b.a r0 = new com.meizu.cloud.pushsdk.platform.b.a
            android.content.Context r1 = r4.c
            java.util.concurrent.ScheduledExecutorService r2 = r4.b
            boolean r3 = r4.j
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.a(r1)
            r0.d(r5)
            boolean r5 = r0.m()
            return r5
    }

    public boolean a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.meizu.cloud.pushsdk.platform.b.a r0 = new com.meizu.cloud.pushsdk.platform.b.a
            android.content.Context r1 = r4.c
            java.util.concurrent.ScheduledExecutorService r2 = r4.b
            boolean r3 = r4.j
            r0.<init>(r1, r2, r3)
            r1 = 2
            r0.a(r1)
            r0.a(r6)
            r0.d(r5)
            boolean r5 = r0.m()
            return r5
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.b r0 = r1.e
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.b r2 = r1.e
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.b r2 = r1.e
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.b r2 = r1.e
            boolean r2 = r2.m()
            return r2
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.f r0 = r1.g
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.a(r5)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r3 = 2
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            boolean r2 = r2.m()
            return r2
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, boolean r7) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.f r0 = r1.g
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.a(r5)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.a(r6)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.b(r7)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            boolean r2 = r2.m()
            return r2
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.e r0 = r1.h
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r3 = 0
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.a(r6)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            boolean r2 = r2.m()
            return r2
    }

    public boolean a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.f r0 = r1.g
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.a(r5)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r3 = 3
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            r2.b(r6)
            com.meizu.cloud.pushsdk.platform.b.f r2 = r1.g
            boolean r2 = r2.m()
            return r2
    }

    public boolean a(java.lang.String r5, int... r6) {
            r4 = this;
            com.meizu.cloud.pushsdk.platform.b.a r0 = new com.meizu.cloud.pushsdk.platform.b.a
            android.content.Context r1 = r4.c
            java.util.concurrent.ScheduledExecutorService r2 = r4.b
            boolean r3 = r4.j
            r0.<init>(r1, r2, r3)
            r0.a(r6)
            r0.d(r5)
            r5 = 1
            r0.a(r5)
            boolean r5 = r0.m()
            return r5
    }

    public boolean b(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.g r0 = r1.f
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.g r2 = r1.f
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.g r2 = r1.f
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.g r2 = r1.f
            boolean r2 = r2.m()
            return r2
    }

    public boolean b(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.e r0 = r1.h
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r3 = 2
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            boolean r2 = r2.m()
            return r2
    }

    public boolean b(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.e r0 = r1.h
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r3 = 1
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.a(r6)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            boolean r2 = r2.m()
            return r2
    }

    public boolean c(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.e r0 = r1.h
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            r3 = 3
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.e r2 = r1.h
            boolean r2 = r2.m()
            return r2
    }

    public boolean c(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.d r0 = r1.i
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r3 = 0
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.a(r6)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            boolean r2 = r2.m()
            return r2
    }

    public boolean d(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.d r0 = r1.i
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r3 = 2
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            boolean r2 = r2.m()
            return r2
    }

    public boolean d(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.b.d r0 = r1.i
            r0.b(r2)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.c(r3)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.d(r4)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.e(r5)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r3 = 1
            r2.a(r3)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            r2.a(r6)
            com.meizu.cloud.pushsdk.platform.b.d r2 = r1.i
            boolean r2 = r2.m()
            return r2
    }
}
