package com.tkay.core.common.b;

public class p {
    private static volatile com.tkay.core.common.b.p d;
    final int a;
    android.content.Context b;
    int c;
    private java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> e;




    private p(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = -100
            r3.a = r0
            r0 = 2
            r3.c = r0
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r2 = 5
            r1.<init>(r2)
            r3.e = r1
            if (r4 == 0) goto L1a
            android.content.Context r4 = r4.getApplicationContext()
            r3.b = r4
        L1a:
            android.content.Context r4 = r3.b
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "UPLOAD_DATA_LEVEL"
            int r4 = com.tkay.core.common.l.p.b(r4, r1, r2, r0)
            r3.c = r4
            return
    }

    public static com.tkay.core.common.b.p a(android.content.Context r2) {
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.b.p> r0 = com.tkay.core.common.b.p.class
            monitor-enter(r0)
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.b.p r1 = new com.tkay.core.common.b.p     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.b.p.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.b.p r2 = com.tkay.core.common.b.p.d
            return r2
    }

    static java.util.concurrent.ConcurrentHashMap a(com.tkay.core.common.b.p r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r0 = r0.e
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final void a(int r4) {
            r3 = this;
            r3.c = r4
            android.content.Context r0 = r3.b
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "UPLOAD_DATA_LEVEL"
            com.tkay.core.common.l.p.a(r0, r1, r2, r4)
            return
    }

    public final void a(android.content.Context r3, com.tkay.core.api.TYGDPRAuthCallback r4) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.p$1 r1 = new com.tkay.core.common.b.p$1
            r1.<init>(r2, r4, r3)
            r0.a(r1)
            return
    }

    public final void a(com.tkay.core.api.NetTrafficeCallback r5) {
            r4 = this;
            android.content.Context r0 = r4.b
            r1 = -100
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = "EU_INFO"
            int r0 = com.tkay.core.common.l.p.b(r0, r2, r3, r1)
            r2 = 0
            if (r0 != r1) goto L1d
            com.tkay.core.common.h.j r0 = new com.tkay.core.common.h.j
            r0.<init>()
            com.tkay.core.common.b.p$2 r1 = new com.tkay.core.common.b.p$2
            r1.<init>(r4, r5)
            r0.a(r2, r1)
            return
        L1d:
            r1 = 1
            if (r0 != r1) goto L26
            if (r5 == 0) goto L2b
            r5.onResultCallback(r1)
            return
        L26:
            if (r5 == 0) goto L2b
            r5.onResultCallback(r2)
        L2b:
            return
    }

    public final void b(int r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.p$3 r1 = new com.tkay.core.common.b.p$3
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final boolean b() {
            r5 = this;
            android.content.Context r0 = r5.b
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L34
            boolean r3 = r0.G()
            if (r3 == 0) goto L1d
            goto L34
        L1d:
            int r3 = r0.U()
            if (r3 != 0) goto L24
            return r2
        L24:
            int r3 = r5.c
            int r4 = r0.S()
            if (r4 != r2) goto L30
            int r3 = r0.R()
        L30:
            if (r3 != 0) goto L33
            return r2
        L33:
            return r1
        L34:
            int r0 = r5.c
            if (r0 != r2) goto L39
            return r1
        L39:
            return r2
    }

    public final boolean c() {
            r5 = this;
            android.content.Context r0 = r5.b
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L45
            boolean r3 = r0.G()
            if (r3 == 0) goto L1d
            goto L45
        L1d:
            int r3 = r5.c
            r4 = 2
            if (r3 != r4) goto L2a
            int r0 = r0.U()
            if (r0 != 0) goto L29
            return r2
        L29:
            return r1
        L2a:
            int r3 = r0.S()
            if (r3 != r2) goto L38
            int r0 = r0.R()
            if (r0 != 0) goto L37
            return r2
        L37:
            return r1
        L38:
            int r3 = r5.c
            if (r3 != 0) goto L3d
            return r2
        L3d:
            int r0 = r0.U()
            if (r0 != 0) goto L44
            return r2
        L44:
            return r1
        L45:
            int r0 = r5.c
            if (r0 != r2) goto L4a
            return r1
        L4a:
            return r2
    }

    public final boolean c(int r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r0 = r2.e
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L21
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r0 = r2.e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r3 = r0.get(r3)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 != 0) goto L1f
            goto L21
        L1f:
            r3 = 1
            return r3
        L21:
            r3 = 0
            return r3
    }

    public final boolean d() {
            r4 = this;
            android.content.Context r0 = r4.b
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "EU_INFO"
            r3 = -100
            int r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            r1 = 1
            if (r0 != r1) goto L10
            return r1
        L10:
            r0 = 0
            return r0
    }
}
