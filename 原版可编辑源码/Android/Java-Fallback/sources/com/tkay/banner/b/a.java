package com.tkay.banner.b;

public class a {
    java.lang.String a;
    java.lang.ref.WeakReference<com.tkay.banner.a.d> b;
    java.util.Timer c;
    private boolean d;

    final class 1 extends java.util.TimerTask {
        final com.tkay.banner.b.a a;

        1(com.tkay.banner.b.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.banner.b.a r0 = r1.a
                com.tkay.banner.b.a.a(r0)
                return
        }
    }

    public a(com.tkay.banner.a.d r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.b = r0
            return
    }

    static void a(com.tkay.banner.b.a r1) {
            java.lang.ref.WeakReference<com.tkay.banner.a.d> r0 = r1.b
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.d r0 = (com.tkay.banner.a.d) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L12
            r0.timeUpRefreshView()
            return
        L12:
            r1.d()
            return
    }

    private java.util.TimerTask e() {
            r1 = this;
            com.tkay.banner.b.a$1 r0 = new com.tkay.banner.b.a$1
            r0.<init>(r1)
            return r0
    }

    private void f() {
            r1 = this;
            java.lang.ref.WeakReference<com.tkay.banner.a.d> r0 = r1.b
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.tkay.banner.a.d r0 = (com.tkay.banner.a.d) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L12
            r0.timeUpRefreshView()
            return
        L12:
            r1.d()
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public final synchronized void b() {
            r7 = this;
            monitor-enter(r7)
            java.lang.String r0 = r7.a     // Catch: java.lang.Throwable -> L54
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto Lb
            monitor-exit(r7)
            return
        Lb:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L54
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L54
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = r7.a     // Catch: java.lang.Throwable -> L54
            com.tkay.core.c.d r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L54
            java.util.Timer r1 = r7.c     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L26
            java.util.Timer r1 = r7.c     // Catch: java.lang.Throwable -> L54
            r1.cancel()     // Catch: java.lang.Throwable -> L54
        L26:
            if (r0 == 0) goto L52
            int r1 = r0.W()     // Catch: java.lang.Throwable -> L54
            r2 = 1
            if (r1 != r2) goto L52
            r7.d = r2     // Catch: java.lang.Throwable -> L54
            java.util.Timer r1 = new java.util.Timer     // Catch: java.lang.Throwable -> L54
            r1.<init>()     // Catch: java.lang.Throwable -> L54
            r7.c = r1     // Catch: java.lang.Throwable -> L54
            long r1 = r0.X()     // Catch: java.lang.Throwable -> L54
            r3 = 5000(0x1388, double:2.4703E-320)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L46
            long r3 = r0.X()     // Catch: java.lang.Throwable -> L54
        L46:
            r5 = r3
            java.util.Timer r1 = r7.c     // Catch: java.lang.Throwable -> L54
            com.tkay.banner.b.a$1 r2 = new com.tkay.banner.b.a$1     // Catch: java.lang.Throwable -> L54
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L54
            r3 = r5
            r1.schedule(r2, r3, r5)     // Catch: java.lang.Throwable -> L54
        L52:
            monitor-exit(r7)
            return
        L54:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final boolean c() {
            r1 = this;
            java.util.Timer r0 = r1.c
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final synchronized void d() {
            r1 = this;
            monitor-enter(r1)
            java.util.Timer r0 = r1.c     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto La
            java.util.Timer r0 = r1.c     // Catch: java.lang.Throwable -> Lf
            r0.cancel()     // Catch: java.lang.Throwable -> Lf
        La:
            r0 = 0
            r1.c = r0     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
