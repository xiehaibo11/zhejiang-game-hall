package com.tkay.core.common.f;

public class a implements java.lang.Comparable<com.tkay.core.common.f.a> {
    private int a;
    private long b;
    private com.tkay.core.api.TYBaseAdAdapter c;
    private com.tkay.core.api.BaseAd d;
    private int e;
    private boolean f;
    private long g;
    private java.lang.String h;
    private int i;
    private long j;
    private boolean k;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.api.TYBaseAdAdapter a(com.tkay.core.common.f.a r0) {
            com.tkay.core.api.TYBaseAdAdapter r0 = r0.c
            return r0
    }

    private int b(com.tkay.core.common.f.a r5) {
            r4 = this;
            com.tkay.core.api.TYBaseAdAdapter r0 = r4.c
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()
            com.tkay.core.api.TYBaseAdAdapter r5 = r5.c
            com.tkay.core.common.f.aj r5 = r5.getUnitGroupInfo()
            double r0 = com.tkay.core.common.l.g.a(r0)
            double r2 = com.tkay.core.common.l.g.a(r5)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L1a
            r5 = -1
            return r5
        L1a:
            r5 = 1
            return r5
    }

    private long l() {
            r2 = this;
            long r0 = r2.g
            return r0
    }

    private int m() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    private long n() {
            r2 = this;
            long r0 = r2.b
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.e = r1
            if (r1 <= 0) goto L7
            r1 = 0
            r0.i = r1
        L7:
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void a(com.tkay.core.api.BaseAd r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(com.tkay.core.api.TYBaseAdAdapter r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final boolean a() {
            r6 = this;
            int r0 = r6.i
            r1 = 1
            if (r0 != r1) goto L13
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.b
            long r2 = r2 - r4
            long r4 = r6.j
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 >= 0) goto L13
            return r1
        L13:
            r0 = 0
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void b(long r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void c(long r2) {
            r1 = this;
            r0 = 1
            r1.i = r0
            r1.b = r2
            return
    }

    public final boolean c() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    @Override
    public int compareTo(com.tkay.core.common.f.a r5) {
            r4 = this;
            com.tkay.core.common.f.a r5 = (com.tkay.core.common.f.a) r5
            com.tkay.core.api.TYBaseAdAdapter r0 = r4.c
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()
            com.tkay.core.api.TYBaseAdAdapter r5 = r5.c
            com.tkay.core.common.f.aj r5 = r5.getUnitGroupInfo()
            double r0 = com.tkay.core.common.l.g.a(r0)
            double r2 = com.tkay.core.common.l.g.a(r5)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L1c
            r5 = -1
            return r5
        L1c:
            r5 = 1
            return r5
    }

    public final int d() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public final com.tkay.core.api.TYBaseAdAdapter e() {
            r1 = this;
            com.tkay.core.api.TYBaseAdAdapter r0 = r1.c
            return r0
    }

    public final com.tkay.core.api.BaseAd f() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.d
            return r0
    }

    public final boolean g() {
            r3 = this;
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.c     // Catch: java.lang.Exception -> L15
            if (r0 == 0) goto La
            com.tkay.core.api.BaseAd r0 = r3.d     // Catch: java.lang.Exception -> L15
            if (r0 == 0) goto La
            r0 = 1
            return r0
        La:
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.c     // Catch: java.lang.Exception -> L15
            if (r0 == 0) goto L2d
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.c     // Catch: java.lang.Exception -> L15
            boolean r0 = r0.isAdReady()     // Catch: java.lang.Exception -> L15
            return r0
        L15:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "isNetworkAdReady()  >>> "
            r1.<init>(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AdCacheInfo"
            android.util.Log.e(r1, r0)
        L2d:
            r0 = 0
            return r0
    }

    public final com.tkay.core.common.f.d h() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.d
            if (r0 == 0) goto L9
            com.tkay.core.common.f.d r0 = r0.getDetail()
            return r0
        L9:
            com.tkay.core.api.TYBaseAdAdapter r0 = r1.c
            com.tkay.core.common.f.d r0 = r0.getTrackingInfo()
            return r0
    }

    public final boolean i() {
            r4 = this;
            long r0 = r4.b
            long r2 = r4.g
            long r0 = r0 + r2
            long r2 = java.lang.System.currentTimeMillis()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public final boolean j() {
            r1 = this;
            boolean r0 = r1.i()
            if (r0 == 0) goto Le
            boolean r0 = r1.g()
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public final synchronized void k() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.k     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            r0 = 1
            r2.k = r0     // Catch: java.lang.Throwable -> L18
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L18
            com.tkay.core.common.f.a$1 r1 = new com.tkay.core.common.f.a$1     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            r0.a(r1)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r2)
            return
        L18:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
