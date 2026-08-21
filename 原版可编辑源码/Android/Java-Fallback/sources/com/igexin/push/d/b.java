package com.igexin.push.d;

public class b {
    private int a;
    private int b;
    private boolean c;
    private int d;
    private long e;
    private int f;
    private long g;
    private com.igexin.push.d.d h;
    private com.igexin.push.d.i i;

    private b() {
            r1 = this;
            r1.<init>()
            int r0 = com.igexin.push.config.j.l
            r1.a = r0
            int r0 = com.igexin.push.config.j.n
            r1.b = r0
            com.igexin.push.d.f r0 = new com.igexin.push.d.f
            r0.<init>()
            r1.i = r0
            boolean r0 = com.igexin.push.util.a.b()
            if (r0 == 0) goto L1b
            com.igexin.push.d.d r0 = com.igexin.push.d.d.a
            goto L1d
        L1b:
            com.igexin.push.d.d r0 = com.igexin.push.d.d.b
        L1d:
            r1.h = r0
            return
    }

    b(com.igexin.push.d.c r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.d.b a() {
            com.igexin.push.d.b r0 = com.igexin.push.d.e.a()
            return r0
    }

    private void a(int r4) {
            r3 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            if (r0 != 0) goto L5
            return
        L5:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L2a
            r0.<init>()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "com.igexin.sdk.action.polling"
            r0.setAction(r1)     // Catch: java.lang.Throwable -> L2a
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L2a
            r1.<init>()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = "code"
            r1.putInt(r2, r4)     // Catch: java.lang.Throwable -> L2a
            r0.putExtras(r1)     // Catch: java.lang.Throwable -> L2a
            android.content.Context r4 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L2a
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L2a
            r0.setPackage(r4)     // Catch: java.lang.Throwable -> L2a
            android.content.Context r4 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L2a
            r4.sendBroadcast(r0)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    private void h() {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "ConnectModelCoordinator|reset current model = normal"
            com.igexin.b.a.c.b.a(r2, r1)
            com.igexin.push.d.i r1 = r3.i
            if (r1 == 0) goto L17
            boolean r1 = r1 instanceof com.igexin.push.d.f
            if (r1 != 0) goto L17
            com.igexin.push.d.f r1 = new com.igexin.push.d.f
            r1.<init>()
            r3.i = r1
        L17:
            com.igexin.push.f.b.d r1 = com.igexin.push.f.b.d.i()
            r1.k()
            r3.f = r0
            r3.d = r0
            r3.c = r0
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            boolean r1 = r3.c
            r0.b(r1)
            return
    }

    private void i() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    private void j() {
            r1 = this;
            r0 = 1
            r1.a(r0)
            return
    }

    public void a(boolean r3) {
            r2 = this;
            r2.c = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ConnectModelCoordinator|init, current is polling model = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            if (r3 == 0) goto L22
            com.igexin.push.f.b.d r3 = com.igexin.push.f.b.d.i()
            r3.j()
        L22:
            return
    }

    public synchronized void b() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = com.igexin.push.util.a.b()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto La
            com.igexin.push.d.d r0 = com.igexin.push.d.d.a     // Catch: java.lang.Throwable -> L38
            goto Lc
        La:
            com.igexin.push.d.d r0 = com.igexin.push.d.d.b     // Catch: java.lang.Throwable -> L38
        Lc:
            com.igexin.push.d.d r1 = r3.h     // Catch: java.lang.Throwable -> L38
            if (r0 == r1) goto L36
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r1.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "ConnectModelCoordinator|net type changed "
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            com.igexin.push.d.d r2 = r3.h     // Catch: java.lang.Throwable -> L38
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "->"
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            r1.append(r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L38
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L38
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L38
            r3.h()     // Catch: java.lang.Throwable -> L38
            r3.h = r0     // Catch: java.lang.Throwable -> L38
        L36:
            monitor-exit(r3)
            return
        L38:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public com.igexin.push.d.i c() {
            r1 = this;
            com.igexin.push.d.i r0 = r1.i
            return r0
    }

    public synchronized void d() {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.c     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L7
            monitor-exit(r5)
            return
        L7:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6d
            long r2 = r5.e     // Catch: java.lang.Throwable -> L6d
            long r0 = r0 - r2
            r2 = 20000(0x4e20, double:9.8813E-320)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L6b
            r2 = 200000(0x30d40, double:9.8813E-319)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L6b
            int r2 = r5.d     // Catch: java.lang.Throwable -> L6d
            r3 = 1
            int r2 = r2 + r3
            r5.d = r2     // Catch: java.lang.Throwable -> L6d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r2.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = "ConnectModelCoordinator|read len = -1, interval = "
            r2.append(r4)     // Catch: java.lang.Throwable -> L6d
            r2.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = ", disconnect ="
            r2.append(r0)     // Catch: java.lang.Throwable -> L6d
            int r0 = r5.d     // Catch: java.lang.Throwable -> L6d
            r2.append(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L6d
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L6d
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> L6d
            int r0 = r5.d     // Catch: java.lang.Throwable -> L6d
            int r2 = r5.a     // Catch: java.lang.Throwable -> L6d
            if (r0 < r2) goto L6b
            java.lang.String r0 = "ConnectModelCoordinator|enter polling mode ####"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L6d
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L6d
            r5.i()     // Catch: java.lang.Throwable -> L6d
            r5.c = r3     // Catch: java.lang.Throwable -> L6d
            com.igexin.push.d.g r0 = new com.igexin.push.d.g     // Catch: java.lang.Throwable -> L6d
            r0.<init>()     // Catch: java.lang.Throwable -> L6d
            r5.i = r0     // Catch: java.lang.Throwable -> L6d
            com.igexin.push.f.b.d r0 = com.igexin.push.f.b.d.i()     // Catch: java.lang.Throwable -> L6d
            r0.j()     // Catch: java.lang.Throwable -> L6d
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L6d
            boolean r1 = r5.c     // Catch: java.lang.Throwable -> L6d
            r0.b(r1)     // Catch: java.lang.Throwable -> L6d
        L6b:
            monitor-exit(r5)
            return
        L6d:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    public synchronized void e() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.c     // Catch: java.lang.Throwable -> L53
            if (r0 != 0) goto L7
            monitor-exit(r4)
            return
        L7:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L53
            long r2 = r4.g     // Catch: java.lang.Throwable -> L53
            long r0 = r0 - r2
            r2 = 120000(0x1d4c0, double:5.9288E-319)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L4b
            int r0 = r4.f     // Catch: java.lang.Throwable -> L53
            int r0 = r0 + 1
            r4.f = r0     // Catch: java.lang.Throwable -> L53
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53
            r0.<init>()     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "ConnectModelCoordinator|polling mode, cur hearbeat ="
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            int r1 = r4.f     // Catch: java.lang.Throwable -> L53
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L53
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L53
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> L53
            int r0 = r4.f     // Catch: java.lang.Throwable -> L53
            int r2 = r4.b     // Catch: java.lang.Throwable -> L53
            if (r0 < r2) goto L4b
            java.lang.String r0 = "ConnectModelCoordinator|enter normal mode ####"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L53
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L53
            r4.j()     // Catch: java.lang.Throwable -> L53
            r0 = 0
            com.igexin.push.core.d.F = r0     // Catch: java.lang.Throwable -> L53
            r4.h()     // Catch: java.lang.Throwable -> L53
        L4b:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L53
            r4.g = r0     // Catch: java.lang.Throwable -> L53
            monitor-exit(r4)
            return
        L53:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public void f() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.e = r0
            boolean r0 = r2.c
            if (r0 == 0) goto L1b
            com.igexin.push.d.g r0 = new com.igexin.push.d.g
            r0.<init>()
            r2.i = r0
            com.igexin.push.f.b.d r0 = com.igexin.push.f.b.d.i()
            r0.j()
            r0 = 0
            r2.f = r0
        L1b:
            return
    }

    public void g() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 == 0) goto L13
            com.igexin.push.d.i r0 = r1.i
            if (r0 == 0) goto L13
            boolean r0 = r0 instanceof com.igexin.push.d.f
            if (r0 != 0) goto L13
            com.igexin.push.d.f r0 = new com.igexin.push.d.f
            r0.<init>()
            r1.i = r0
        L13:
            return
    }
}
