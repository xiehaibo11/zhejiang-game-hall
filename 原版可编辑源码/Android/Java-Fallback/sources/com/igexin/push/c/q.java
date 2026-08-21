package com.igexin.push.c;

public class q {
    private static final java.lang.String a = null;
    private static java.util.concurrent.ThreadPoolExecutor b;
    private java.util.concurrent.Future<com.igexin.push.c.j> c;
    private com.igexin.push.c.j d;
    private com.igexin.push.c.p e;
    private boolean f;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DT_"
            r0.append(r1)
            java.lang.Class<com.igexin.push.c.q> r1 = com.igexin.push.c.q.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.c.q.a = r0
            return
    }

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.igexin.push.c.p a(com.igexin.push.c.q r0) {
            com.igexin.push.c.p r0 = r0.e
            return r0
    }

    public static void a() {
            java.lang.String[] r0 = com.igexin.push.config.SDKUrlConfig.getXfrAddress()
            int r0 = r0.length
            r1 = 1
            if (r0 != r1) goto L12
            java.util.concurrent.ThreadPoolExecutor r0 = com.igexin.push.c.q.b
            if (r0 == 0) goto L12
            r0.shutdownNow()     // Catch: java.lang.Throwable -> L12
            r0 = 0
            com.igexin.push.c.q.b = r0     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    static com.igexin.push.c.j b(com.igexin.push.c.q r0) {
            com.igexin.push.c.j r0 = r0.d
            return r0
    }

    static java.lang.String c(com.igexin.push.c.q r0) {
            java.lang.String r0 = r0.h()
            return r0
    }

    static java.lang.String f() {
            java.lang.String r0 = com.igexin.push.c.q.a
            return r0
    }

    private void g() {
            r8 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = com.igexin.push.c.q.b
            if (r0 != 0) goto L18
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r2 = 0
            r3 = 12
            r4 = 60
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r7 = new java.util.concurrent.SynchronousQueue
            r7.<init>()
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            com.igexin.push.c.q.b = r0
        L18:
            java.util.concurrent.ThreadPoolExecutor r0 = com.igexin.push.c.q.b
            com.igexin.push.c.r r1 = new com.igexin.push.c.r
            r1.<init>(r8)
            java.util.concurrent.Future r0 = r0.submit(r1)
            r8.c = r0
            return
    }

    private java.lang.String h() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.igexin.push.c.j r1 = r2.d
            java.lang.String r1 = r1.a()
            r0.append(r1)
            java.lang.String r1 = "|"
            r0.append(r1)
            com.igexin.push.c.j r1 = r2.d
            java.lang.String r1 = r1.c()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private void i() {
            r2 = this;
            java.util.concurrent.Future<com.igexin.push.c.j> r0 = r2.c     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L1d
            java.util.concurrent.Future<com.igexin.push.c.j> r0 = r2.c     // Catch: java.lang.Exception -> L1d
            boolean r0 = r0.isCancelled()     // Catch: java.lang.Exception -> L1d
            if (r0 != 0) goto L1d
            java.util.concurrent.Future<com.igexin.push.c.j> r0 = r2.c     // Catch: java.lang.Exception -> L1d
            boolean r0 = r0.isDone()     // Catch: java.lang.Exception -> L1d
            if (r0 != 0) goto L1d
            java.util.concurrent.Future<com.igexin.push.c.j> r0 = r2.c     // Catch: java.lang.Exception -> L1d
            r1 = 1
            r0.cancel(r1)     // Catch: java.lang.Exception -> L1d
            r0 = 0
            r2.c = r0     // Catch: java.lang.Exception -> L1d
        L1d:
            return
    }

    public void a(com.igexin.push.c.j r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(com.igexin.push.c.p r2) {
            r1 = this;
            java.lang.Class<com.igexin.push.c.p> r0 = com.igexin.push.c.p.class
            monitor-enter(r0)
            r1.e = r2     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r2
    }

    public void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public com.igexin.push.c.j b() {
            r1 = this;
            com.igexin.push.c.j r0 = r1.d
            return r0
    }

    protected void c() {
            r2 = this;
            java.lang.Class<com.igexin.push.c.p> r0 = com.igexin.push.c.p.class
            monitor-enter(r0)
            com.igexin.push.c.p r1 = r2.e     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto La
            r2.g()     // Catch: java.lang.Throwable -> Lc
        La:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r1
    }

    public void d() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.c.q.a
            r0.append(r1)
            java.lang.String r1 = "|stop "
            r0.append(r1)
            java.lang.String r1 = r2.h()
            r0.append(r1)
            java.lang.String r1 = " task"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            r2.i()
            return
    }

    public void e() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            r1.i()
            return
    }
}
