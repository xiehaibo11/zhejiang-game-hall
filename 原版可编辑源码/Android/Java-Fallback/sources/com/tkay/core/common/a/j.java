package com.tkay.core.common.a;

public class j {
    private static volatile com.tkay.core.common.a.j b;
    final java.lang.String a;
    private com.tkay.core.common.c.m c;
    private java.util.Map<java.lang.String, java.lang.Integer> d;
    private long e;
    private long f;


    final class 2 implements java.lang.Runnable {
        final com.tkay.core.common.a.i a;
        final com.tkay.core.common.a.j b;

        2(com.tkay.core.common.a.j r1, com.tkay.core.common.a.i r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L14
                com.tkay.core.common.a.i r1 = r2.a     // Catch: java.lang.Throwable -> L14
                java.lang.String r1 = r1.b()     // Catch: java.lang.Throwable -> L14
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L14
                boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L14
                if (r1 == 0) goto L14
                r0.delete()     // Catch: java.lang.Throwable -> L14
            L14:
                com.tkay.core.common.a.j r0 = r2.b
                com.tkay.core.common.c.m r0 = com.tkay.core.common.a.j.a(r0)
                com.tkay.core.common.a.i r1 = r2.a
                java.lang.String r1 = r1.a()
                r0.c(r1)
                return
        }
    }


    private j() {
            r2 = this;
            r2.<init>()
            java.lang.Class<com.tkay.core.common.a.j> r0 = com.tkay.core.common.a.j.class
            java.lang.String r0 = r0.getSimpleName()
            r2.a = r0
            r0 = 209715200(0xc800000, double:1.036130757E-315)
            r2.e = r0
            r0 = 0
            r2.f = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)
            com.tkay.core.common.c.m r0 = com.tkay.core.common.c.m.a(r0)
            r2.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r1 = 4
            long r0 = r0.d(r1)
            r2.e = r0
            return
    }

    static long a(com.tkay.core.common.a.j r0, long r1) {
            r0.f = r1
            return r1
    }

    public static com.tkay.core.common.a.j a() {
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.a.j> r0 = com.tkay.core.common.a.j.class
            monitor-enter(r0)
            com.tkay.core.common.a.j r1 = com.tkay.core.common.a.j.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.a.j r1 = new com.tkay.core.common.a.j     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.a.j.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.b
            return r0
    }

    static com.tkay.core.common.c.m a(com.tkay.core.common.a.j r0) {
            com.tkay.core.common.c.m r0 = r0.c
            return r0
    }

    private void a(com.tkay.core.common.a.i r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.a.j$2 r1 = new com.tkay.core.common.a.j$2
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    static long b(com.tkay.core.common.a.j r2) {
            long r0 = r2.f
            return r0
    }

    static long c(com.tkay.core.common.a.j r2) {
            long r0 = r2.e
            return r0
    }

    static java.util.Map d(com.tkay.core.common.a.j r0) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r0.d
            return r0
    }

    public final com.tkay.core.common.a.i a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            com.tkay.core.common.c.m r0 = r1.c
            com.tkay.core.common.a.i r2 = r0.a(r2)
            return r2
    }

    public final void a(java.lang.String r13, java.lang.String r14, long r15, long r17, int r19, boolean r20) {
            r12 = this;
            r9 = r12
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r9.d
            java.lang.Integer r1 = java.lang.Integer.valueOf(r19)
            r2 = r13
            r0.put(r13, r1)
            if (r20 == 0) goto L22
            com.tkay.core.common.l.b.a r10 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.a.j$3 r11 = new com.tkay.core.common.a.j$3
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r6 = r17
            r8 = r19
            r0.<init>(r1, r2, r3, r4, r6, r8)
            r10.a(r11)
        L22:
            return
    }

    public final synchronized boolean a(java.lang.String r1, int r2) {
            r0 = this;
            monitor-enter(r0)
            int r1 = r0.b(r1)     // Catch: java.lang.Throwable -> Lc
            if (r1 < r2) goto La
            r1 = 1
        L8:
            monitor-exit(r0)
            return r1
        La:
            r1 = 0
            goto L8
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized int b(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r6.d     // Catch: java.lang.Throwable -> L73
            boolean r0 = r0.containsKey(r7)     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r6.d     // Catch: java.lang.Throwable -> L73
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r6.d     // Catch: java.lang.Throwable -> L73
            java.lang.Object r7 = r0.get(r7)     // Catch: java.lang.Throwable -> L73
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L73
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L73
            monitor-exit(r6)
            return r7
        L1f:
            com.tkay.core.common.c.m r0 = r6.c     // Catch: java.lang.Throwable -> L73
            com.tkay.core.common.a.i r0 = r0.a(r7)     // Catch: java.lang.Throwable -> L73
            r1 = 0
            if (r0 == 0) goto L71
            int r2 = r0.c()     // Catch: java.lang.Throwable -> L73
            if (r2 <= 0) goto L71
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = r0.b()     // Catch: java.lang.Throwable -> L73
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L73
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L73
            if (r3 == 0) goto L61
            long r2 = r2.length()     // Catch: java.lang.Throwable -> L73
            long r4 = r0.e()     // Catch: java.lang.Throwable -> L73
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L61
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r6.d     // Catch: java.lang.Throwable -> L73
            int r2 = r0.c()     // Catch: java.lang.Throwable -> L73
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L73
            r1.put(r7, r2)     // Catch: java.lang.Throwable -> L73
            com.tkay.core.common.c.m r1 = r6.c     // Catch: java.lang.Throwable -> L73
            r1.b(r7)     // Catch: java.lang.Throwable -> L73
            int r7 = r0.c()     // Catch: java.lang.Throwable -> L73
            monitor-exit(r6)
            return r7
        L61:
            if (r0 == 0) goto L6f
            com.tkay.core.common.l.b.a r7 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L73
            com.tkay.core.common.a.j$2 r2 = new com.tkay.core.common.a.j$2     // Catch: java.lang.Throwable -> L73
            r2.<init>(r6, r0)     // Catch: java.lang.Throwable -> L73
            r7.a(r2)     // Catch: java.lang.Throwable -> L73
        L6f:
            monitor-exit(r6)
            return r1
        L71:
            monitor-exit(r6)
            return r1
        L73:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final void b() {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.a.j$1 r1 = new com.tkay.core.common.a.j$1
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    public final long c() {
            r2 = this;
            long r0 = r2.e
            return r0
    }

    public final long d() {
            r2 = this;
            long r0 = r2.f
            return r0
    }
}
