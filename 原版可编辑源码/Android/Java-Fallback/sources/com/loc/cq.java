package com.loc;

public final class cq implements java.util.concurrent.ThreadFactory {
    private static final int k = 0;
    private static final int l = 0;
    private static final int m = 0;
    private final java.util.concurrent.atomic.AtomicLong a;
    private final java.util.concurrent.ThreadFactory b;
    private final java.lang.Thread.UncaughtExceptionHandler c;
    private final java.lang.String d;
    private final java.lang.Integer e;
    private final java.lang.Boolean f;
    private final int g;
    private final int h;
    private final java.util.concurrent.BlockingQueue<java.lang.Runnable> i;
    private final int j;


    public static class a {
        private java.util.concurrent.ThreadFactory a;
        private java.lang.Thread.UncaughtExceptionHandler b;
        private java.lang.String c;
        private java.lang.Integer d;
        private java.lang.Boolean e;
        private int f;
        private int g;
        private int h;
        private java.util.concurrent.BlockingQueue<java.lang.Runnable> i;

        public a() {
                r1 = this;
                r1.<init>()
                int r0 = com.loc.cq.e()
                r1.f = r0
                int r0 = com.loc.cq.f()
                r1.g = r0
                r0 = 30
                r1.h = r0
                return
        }

        static java.util.concurrent.ThreadFactory a(com.loc.cq.a r0) {
                java.util.concurrent.ThreadFactory r0 = r0.a
                return r0
        }

        static int b(com.loc.cq.a r0) {
                int r0 = r0.f
                return r0
        }

        private void b() {
                r1 = this;
                r0 = 0
                r1.a = r0
                r1.b = r0
                r1.c = r0
                r1.d = r0
                r1.e = r0
                return
        }

        static int c(com.loc.cq.a r0) {
                int r0 = r0.h
                return r0
        }

        static java.util.concurrent.BlockingQueue d(com.loc.cq.a r0) {
                java.util.concurrent.BlockingQueue<java.lang.Runnable> r0 = r0.i
                return r0
        }

        static java.lang.String e(com.loc.cq.a r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        static java.lang.Integer f(com.loc.cq.a r0) {
                java.lang.Integer r0 = r0.d
                return r0
        }

        static java.lang.Boolean g(com.loc.cq.a r0) {
                java.lang.Boolean r0 = r0.e
                return r0
        }

        static java.lang.Thread.UncaughtExceptionHandler h(com.loc.cq.a r0) {
                java.lang.Thread$UncaughtExceptionHandler r0 = r0.b
                return r0
        }

        public final com.loc.cq.a a(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public final com.loc.cq a() {
                r2 = this;
                com.loc.cq r0 = new com.loc.cq
                r1 = 0
                r0.<init>(r2, r1)
                r2.b()
                return r0
        }
    }

    static {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            com.loc.cq.k = r0
            int r0 = r0 + (-1)
            r1 = 4
            int r0 = java.lang.Math.min(r0, r1)
            r1 = 2
            int r0 = java.lang.Math.max(r1, r0)
            com.loc.cq.l = r0
            int r0 = com.loc.cq.k
            int r0 = r0 * 2
            int r0 = r0 + 1
            com.loc.cq.m = r0
            return
    }

    private cq(com.loc.cq.a r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ThreadFactory r0 = com.loc.cq.a.a(r3)
            if (r0 != 0) goto Le
            java.util.concurrent.ThreadFactory r0 = java.util.concurrent.Executors.defaultThreadFactory()
            goto L12
        Le:
            java.util.concurrent.ThreadFactory r0 = com.loc.cq.a.a(r3)
        L12:
            r2.b = r0
            int r0 = com.loc.cq.a.b(r3)
            r2.g = r0
            int r1 = com.loc.cq.m
            r2.h = r1
            if (r1 < r0) goto L67
            int r0 = com.loc.cq.a.c(r3)
            r2.j = r0
            java.util.concurrent.BlockingQueue r0 = com.loc.cq.a.d(r3)
            if (r0 != 0) goto L34
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 256(0x100, float:3.59E-43)
            r0.<init>(r1)
            goto L38
        L34:
            java.util.concurrent.BlockingQueue r0 = com.loc.cq.a.d(r3)
        L38:
            r2.i = r0
            java.lang.String r0 = com.loc.cq.a.e(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L47
            java.lang.String r0 = "amap-threadpool"
            goto L4b
        L47:
            java.lang.String r0 = com.loc.cq.a.e(r3)
        L4b:
            r2.d = r0
            java.lang.Integer r0 = com.loc.cq.a.f(r3)
            r2.e = r0
            java.lang.Boolean r0 = com.loc.cq.a.g(r3)
            r2.f = r0
            java.lang.Thread$UncaughtExceptionHandler r3 = com.loc.cq.a.h(r3)
            r2.c = r3
            java.util.concurrent.atomic.AtomicLong r3 = new java.util.concurrent.atomic.AtomicLong
            r3.<init>()
            r2.a = r3
            return
        L67:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r0 = "maxPoolSize must > corePoolSize!"
            r3.<init>(r0)
            throw r3
    }

    cq(com.loc.cq.a r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static int e() {
            int r0 = com.loc.cq.l
            return r0
    }

    static int f() {
            int r0 = com.loc.cq.m
            return r0
    }

    private java.util.concurrent.ThreadFactory g() {
            r1 = this;
            java.util.concurrent.ThreadFactory r0 = r1.b
            return r0
    }

    private java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    private java.lang.Boolean i() {
            r1 = this;
            java.lang.Boolean r0 = r1.f
            return r0
    }

    private java.lang.Integer j() {
            r1 = this;
            java.lang.Integer r0 = r1.e
            return r0
    }

    private java.lang.Thread.UncaughtExceptionHandler k() {
            r1 = this;
            java.lang.Thread$UncaughtExceptionHandler r0 = r1.c
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public final int b() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public final java.util.concurrent.BlockingQueue<java.lang.Runnable> c() {
            r1 = this;
            java.util.concurrent.BlockingQueue<java.lang.Runnable> r0 = r1.i
            return r0
    }

    public final int d() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    @Override
    public final java.lang.Thread newThread(java.lang.Runnable r5) {
            r4 = this;
            com.loc.cq$1 r0 = new com.loc.cq$1
            r0.<init>(r4, r5)
            java.util.concurrent.ThreadFactory r0 = r4.g()
            java.lang.Thread r5 = r0.newThread(r5)
            java.lang.String r0 = r4.h()
            if (r0 == 0) goto L3f
            java.util.concurrent.atomic.AtomicLong r0 = r4.a
            long r0 = r0.incrementAndGet()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.h()
            r1.append(r2)
            java.lang.String r2 = "-%d"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            java.lang.String r0 = java.lang.String.format(r1, r2)
            r5.setName(r0)
        L3f:
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.k()
            if (r0 == 0) goto L4c
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.k()
            r5.setUncaughtExceptionHandler(r0)
        L4c:
            java.lang.Integer r0 = r4.j()
            if (r0 == 0) goto L5d
            java.lang.Integer r0 = r4.j()
            int r0 = r0.intValue()
            r5.setPriority(r0)
        L5d:
            java.lang.Boolean r0 = r4.i()
            if (r0 == 0) goto L6e
            java.lang.Boolean r0 = r4.i()
            boolean r0 = r0.booleanValue()
            r5.setDaemon(r0)
        L6e:
            return r5
    }
}
