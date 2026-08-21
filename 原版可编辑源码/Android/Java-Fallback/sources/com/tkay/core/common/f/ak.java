package com.tkay.core.common.f;

public final class ak {
    public int a;
    public java.lang.String b;
    private java.util.List<com.tkay.core.common.f.a> c;

    public ak() {
            r0 = this;
            r0.<init>()
            return
    }

    public final synchronized com.tkay.core.common.f.a a() {
            r4 = this;
            monitor-enter(r4)
            java.util.List<com.tkay.core.common.f.a> r0 = r4.c     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L34
            java.util.List<com.tkay.core.common.f.a> r0 = r4.c     // Catch: java.lang.Throwable -> L37
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L37
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto L34
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L37
            com.tkay.core.common.f.a r1 = (com.tkay.core.common.f.a) r1     // Catch: java.lang.Throwable -> L37
            int r2 = r1.d()     // Catch: java.lang.Throwable -> L37
            if (r2 > 0) goto Lb
            java.util.List<com.tkay.core.common.f.a> r0 = r4.c     // Catch: java.lang.Throwable -> L37
            int r0 = r0.indexOf(r1)     // Catch: java.lang.Throwable -> L37
            java.util.List<com.tkay.core.common.f.a> r2 = r4.c     // Catch: java.lang.Throwable -> L37
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L37
            r3 = 1
            int r2 = r2 - r3
            if (r0 < r2) goto L2e
            goto L2f
        L2e:
            r3 = 0
        L2f:
            r1.a(r3)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r4)
            return r1
        L34:
            r0 = 0
            monitor-exit(r4)
            return r0
        L37:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void a(com.tkay.core.common.f.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.a> r0 = r1.c     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L12
            java.util.List<com.tkay.core.common.f.a> r0 = r1.c     // Catch: java.lang.Throwable -> L14
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L14
            if (r0 <= 0) goto L12
            java.util.List<com.tkay.core.common.f.a> r0 = r1.c     // Catch: java.lang.Throwable -> L14
            r0.remove(r2)     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r1)
            return
        L14:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void a(com.tkay.core.common.f.d r7) {
            r6 = this;
            monitor-enter(r6)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L51
            r0.<init>()     // Catch: java.lang.Throwable -> L51
            r1 = -1
            r6.a = r1     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = r7.X()     // Catch: java.lang.Throwable -> L51
            r6.b = r2     // Catch: java.lang.Throwable -> L51
            java.util.List<com.tkay.core.common.f.a> r2 = r6.c     // Catch: java.lang.Throwable -> L51
            if (r2 == 0) goto L4d
            java.util.List<com.tkay.core.common.f.a> r2 = r6.c     // Catch: java.lang.Throwable -> L51
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L51
        L19:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L51
            if (r3 == 0) goto L4d
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L51
            com.tkay.core.common.f.a r3 = (com.tkay.core.common.f.a) r3     // Catch: java.lang.Throwable -> L51
            boolean r4 = r3.j()     // Catch: java.lang.Throwable -> L51
            if (r4 == 0) goto L19
            com.tkay.core.api.TYBaseAdAdapter r4 = r3.e()     // Catch: java.lang.Throwable -> L51
            r4.setTrackingInfo(r7)     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = r4.getNetworkPlacementId()     // Catch: java.lang.Throwable -> L51
            r7.g(r4)     // Catch: java.lang.Throwable -> L51
            r3.b(r1)     // Catch: java.lang.Throwable -> L51
            com.tkay.core.api.BaseAd r4 = r3.f()     // Catch: java.lang.Throwable -> L51
            if (r4 == 0) goto L49
            com.tkay.core.common.f.d r5 = r7.N()     // Catch: java.lang.Throwable -> L51
            r4.setTrackingInfo(r5)     // Catch: java.lang.Throwable -> L51
        L49:
            r0.add(r3)     // Catch: java.lang.Throwable -> L51
            goto L19
        L4d:
            r6.c = r0     // Catch: java.lang.Throwable -> L51
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L51
            return
        L51:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void a(java.util.List<com.tkay.core.common.f.a> r1) {
            r0 = this;
            monitor-enter(r0)
            monitor-enter(r0)     // Catch: java.lang.Throwable -> La
            r0.c = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1     // Catch: java.lang.Throwable -> La
        La:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized java.util.List<com.tkay.core.common.f.a> b() {
            r4 = this;
            monitor-enter(r4)
            java.util.List<com.tkay.core.common.f.a> r0 = r4.c     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            if (r0 == 0) goto L2b
            java.util.List<com.tkay.core.common.f.a> r0 = r4.c     // Catch: java.lang.Throwable -> L2d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2d
        Lc:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L29
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.f.a r2 = (com.tkay.core.common.f.a) r2     // Catch: java.lang.Throwable -> L2d
            int r3 = r2.d()     // Catch: java.lang.Throwable -> L2d
            if (r3 > 0) goto Lc
            if (r1 != 0) goto L25
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2d
            r1.<init>()     // Catch: java.lang.Throwable -> L2d
        L25:
            r1.add(r2)     // Catch: java.lang.Throwable -> L2d
            goto Lc
        L29:
            monitor-exit(r4)
            return r1
        L2b:
            monitor-exit(r4)
            return r1
        L2d:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void c() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.a> r0 = r1.c     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Ld
            java.util.List<com.tkay.core.common.f.a> r0 = r1.c     // Catch: java.lang.Throwable -> Lf
            r0.clear()     // Catch: java.lang.Throwable -> Lf
            r0 = 0
            r1.c = r0     // Catch: java.lang.Throwable -> Lf
        Ld:
            monitor-exit(r1)
            return
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final boolean d() {
            r1 = this;
            java.util.List<com.tkay.core.common.f.a> r0 = r1.c
            if (r0 == 0) goto Lc
            int r0 = r0.size()
            if (r0 <= 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }
}
