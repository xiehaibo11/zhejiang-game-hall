package com.huawei.hms.framework.network.grs;

public class d {
    private static final java.lang.String a = "d";
    private static java.util.concurrent.ExecutorService b;
    private com.huawei.hms.framework.network.grs.GrsBaseInfo c;
    private boolean d;
    private final java.lang.Object e;
    private android.content.Context f;
    private com.huawei.hms.framework.network.grs.c.m g;
    private com.huawei.hms.framework.network.grs.a.a h;
    private com.huawei.hms.framework.network.grs.a.c i;
    private com.huawei.hms.framework.network.grs.a.c j;
    private com.huawei.hms.framework.network.grs.a k;
    private java.util.concurrent.Future<java.lang.Boolean> l;

    static {
            java.lang.String r0 = "GRS_GrsClient-Init"
            java.util.concurrent.ExecutorService r0 = com.huawei.hms.framework.common.ExecutorsUtils.newCachedThreadPool(r0)
            com.huawei.hms.framework.network.grs.d.b = r0
            return
    }

    d(android.content.Context r5, com.huawei.hms.framework.network.grs.GrsBaseInfo r6) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.d = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r4.e = r0
            android.content.Context r0 = r5.getApplicationContext()
            r4.f = r0
            r4.a(r6)
            boolean r6 = r4.d
            if (r6 != 0) goto L37
            java.lang.Object r6 = r4.e
            monitor-enter(r6)
            boolean r0 = r4.d     // Catch: java.lang.Throwable -> L34
            if (r0 != 0) goto L32
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r4.c     // Catch: java.lang.Throwable -> L34
            android.content.Context r1 = r4.f     // Catch: java.lang.Throwable -> L34
            java.util.concurrent.ExecutorService r2 = com.huawei.hms.framework.network.grs.d.b     // Catch: java.lang.Throwable -> L34
            com.huawei.hms.framework.network.grs.c r3 = new com.huawei.hms.framework.network.grs.c     // Catch: java.lang.Throwable -> L34
            r3.<init>(r4, r1, r0, r5)     // Catch: java.lang.Throwable -> L34
            java.util.concurrent.Future r5 = r2.submit(r3)     // Catch: java.lang.Throwable -> L34
            r4.l = r5     // Catch: java.lang.Throwable -> L34
        L32:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L34
            goto L37
        L34:
            r5 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L34
            throw r5
        L37:
            return
    }

    d(com.huawei.hms.framework.network.grs.GrsBaseInfo r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.e = r0
            r1.a(r2)
            return
    }

    static com.huawei.hms.framework.network.grs.a.a a(com.huawei.hms.framework.network.grs.d r0, com.huawei.hms.framework.network.grs.a.a r1) {
            r0.h = r1
            return r1
    }

    static com.huawei.hms.framework.network.grs.a.c a(com.huawei.hms.framework.network.grs.d r0, com.huawei.hms.framework.network.grs.a.c r1) {
            r0.i = r1
            return r1
    }

    static com.huawei.hms.framework.network.grs.a a(com.huawei.hms.framework.network.grs.d r0, com.huawei.hms.framework.network.grs.a r1) {
            r0.k = r1
            return r1
    }

    static com.huawei.hms.framework.network.grs.c.m a(com.huawei.hms.framework.network.grs.d r0) {
            com.huawei.hms.framework.network.grs.c.m r0 = r0.g
            return r0
    }

    static com.huawei.hms.framework.network.grs.c.m a(com.huawei.hms.framework.network.grs.d r0, com.huawei.hms.framework.network.grs.c.m r1) {
            r0.g = r1
            return r1
    }

    static java.lang.String a() {
            java.lang.String r0 = com.huawei.hms.framework.network.grs.d.a
            return r0
    }

    private void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r4) {
            r3 = this;
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r4.clone()     // Catch: java.lang.CloneNotSupportedException -> L7
            r3.c = r0     // Catch: java.lang.CloneNotSupportedException -> L7
            goto L15
        L7:
            r0 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r2 = "GrsClient catch CloneNotSupportedException"
            com.huawei.hms.framework.common.Logger.w(r1, r2, r0)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r4 = r4.copy()
            r3.c = r4
        L15:
            return
    }

    static void a(com.huawei.hms.framework.network.grs.d r0, java.util.Map r1) {
            r0.a(r1)
            return
    }

    private void a(java.util.Map<java.lang.String, ?> r7) {
            r6 = this;
            if (r7 == 0) goto L6e
            boolean r0 = r7.isEmpty()
            if (r0 == 0) goto L9
            goto L6e
        L9:
            java.util.Set r7 = r7.keySet()
            java.util.Iterator r7 = r7.iterator()
        L11:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L6d
            java.lang.Object r0 = r7.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "time"
            boolean r1 = r0.endsWith(r1)
            if (r1 == 0) goto L11
            com.huawei.hms.framework.network.grs.a.c r1 = r6.i
            java.lang.String r2 = ""
            java.lang.String r1 = r1.a(r0, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            r3 = 0
            if (r2 != 0) goto L4a
            java.lang.String r2 = "\\d+"
            boolean r2 = r1.matches(r2)
            if (r2 == 0) goto L4a
            long r3 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L42
            goto L4a
        L42:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r5 = "convert expire time from String to Long catch NumberFormatException."
            com.huawei.hms.framework.common.Logger.w(r2, r5, r1)
        L4a:
            boolean r1 = r6.a(r3)
            if (r1 != 0) goto L11
            java.lang.String r1 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r2 = "init interface auto clear some invalid sp's data."
            com.huawei.hms.framework.common.Logger.i(r1, r2)
            int r1 = r0.length()
            int r1 = r1 + (-4)
            r2 = 0
            java.lang.String r1 = r0.substring(r2, r1)
            com.huawei.hms.framework.network.grs.a.c r2 = r6.i
            r2.a(r1)
            com.huawei.hms.framework.network.grs.a.c r1 = r6.i
            r1.a(r0)
            goto L11
        L6d:
            return
        L6e:
            java.lang.String r7 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r0 = "sp's content is empty."
            com.huawei.hms.framework.common.Logger.v(r7, r0)
            return
    }

    private boolean a(long r3) {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r3
            r3 = 604800000(0x240c8400, double:2.988109026E-315)
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 > 0) goto Le
            r3 = 1
            goto Lf
        Le:
            r3 = 0
        Lf:
            return r3
    }

    static boolean a(com.huawei.hms.framework.network.grs.d r0, boolean r1) {
            r0.d = r1
            return r1
    }

    static com.huawei.hms.framework.network.grs.a.c b(com.huawei.hms.framework.network.grs.d r0) {
            com.huawei.hms.framework.network.grs.a.c r0 = r0.i
            return r0
    }

    static com.huawei.hms.framework.network.grs.a.c b(com.huawei.hms.framework.network.grs.d r0, com.huawei.hms.framework.network.grs.a.c r1) {
            r0.j = r1
            return r1
    }

    static com.huawei.hms.framework.network.grs.a.c c(com.huawei.hms.framework.network.grs.d r0) {
            com.huawei.hms.framework.network.grs.a.c r0 = r0.j
            return r0
    }

    static com.huawei.hms.framework.network.grs.a.a d(com.huawei.hms.framework.network.grs.d r0) {
            com.huawei.hms.framework.network.grs.a.a r0 = r0.h
            return r0
    }

    private boolean d() {
            r5 = this;
            r0 = 0
            java.util.concurrent.Future<java.lang.Boolean> r1 = r5.l     // Catch: java.lang.Exception -> L16 java.util.concurrent.TimeoutException -> L1f java.lang.InterruptedException -> L27 java.util.concurrent.ExecutionException -> L30 java.util.concurrent.CancellationException -> L39
            if (r1 == 0) goto L15
            java.util.concurrent.Future<java.lang.Boolean> r1 = r5.l     // Catch: java.lang.Exception -> L16 java.util.concurrent.TimeoutException -> L1f java.lang.InterruptedException -> L27 java.util.concurrent.ExecutionException -> L30 java.util.concurrent.CancellationException -> L39
            r2 = 10
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Exception -> L16 java.util.concurrent.TimeoutException -> L1f java.lang.InterruptedException -> L27 java.util.concurrent.ExecutionException -> L30 java.util.concurrent.CancellationException -> L39
            java.lang.Object r1 = r1.get(r2, r4)     // Catch: java.lang.Exception -> L16 java.util.concurrent.TimeoutException -> L1f java.lang.InterruptedException -> L27 java.util.concurrent.ExecutionException -> L30 java.util.concurrent.CancellationException -> L39
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Exception -> L16 java.util.concurrent.TimeoutException -> L1f java.lang.InterruptedException -> L27 java.util.concurrent.ExecutionException -> L30 java.util.concurrent.CancellationException -> L39
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Exception -> L16 java.util.concurrent.TimeoutException -> L1f java.lang.InterruptedException -> L27 java.util.concurrent.ExecutionException -> L30 java.util.concurrent.CancellationException -> L39
        L15:
            return r0
        L16:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r3 = "init compute task occur unknown Exception"
            com.huawei.hms.framework.common.Logger.w(r2, r3, r1)
            return r0
        L1f:
            java.lang.String r1 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r2 = "init compute task timed out"
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            return r0
        L27:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r3 = "init compute task interrupted."
            com.huawei.hms.framework.common.Logger.w(r2, r3, r1)
            return r0
        L30:
            r1 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r3 = "init compute task failed."
            com.huawei.hms.framework.common.Logger.w(r2, r3, r1)
            return r0
        L39:
            java.lang.String r1 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r2 = "init compute task canceled."
            com.huawei.hms.framework.common.Logger.i(r1, r2)
            return r0
    }

    static com.huawei.hms.framework.network.grs.GrsBaseInfo e(com.huawei.hms.framework.network.grs.d r0) {
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r0.c
            return r0
    }

    java.lang.String a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r2.c
            r1 = 0
            if (r0 == 0) goto L1a
            if (r3 == 0) goto L1a
            if (r4 != 0) goto La
            goto L1a
        La:
            boolean r0 = r2.d()
            if (r0 == 0) goto L19
            com.huawei.hms.framework.network.grs.a r0 = r2.k
            android.content.Context r1 = r2.f
            java.lang.String r3 = r0.a(r3, r4, r1)
            return r3
        L19:
            return r1
        L1a:
            java.lang.String r3 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r4 = "invalid para!"
            com.huawei.hms.framework.common.Logger.w(r3, r4)
            return r1
    }

    java.util.Map<java.lang.String, java.lang.String> a(java.lang.String r3) {
            r2 = this;
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r2.c
            if (r0 == 0) goto L1c
            if (r3 != 0) goto L7
            goto L1c
        L7:
            boolean r0 = r2.d()
            if (r0 == 0) goto L16
            com.huawei.hms.framework.network.grs.a r0 = r2.k
            android.content.Context r1 = r2.f
            java.util.Map r3 = r0.a(r3, r1)
            return r3
        L16:
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            return r3
        L1c:
            java.lang.String r3 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r0 = "invalid para!"
            com.huawei.hms.framework.common.Logger.w(r3, r0)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            return r3
    }

    void a(java.lang.String r3, com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r4) {
            r2 = this;
            if (r4 != 0) goto La
            java.lang.String r3 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r4 = "IQueryUrlsCallBack is must not null for process continue."
            com.huawei.hms.framework.common.Logger.w(r3, r4)
            return
        La:
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r2.c
            if (r0 == 0) goto L1f
            if (r3 != 0) goto L11
            goto L1f
        L11:
            boolean r0 = r2.d()
            if (r0 == 0) goto L1e
            com.huawei.hms.framework.network.grs.a r0 = r2.k
            android.content.Context r1 = r2.f
            r0.a(r3, r4, r1)
        L1e:
            return
        L1f:
            r3 = -6
            r4.onCallBackFail(r3)
            return
    }

    void a(java.lang.String r3, java.lang.String r4, com.huawei.hms.framework.network.grs.IQueryUrlCallBack r5) {
            r2 = this;
            if (r5 != 0) goto La
            java.lang.String r3 = com.huawei.hms.framework.network.grs.d.a
            java.lang.String r4 = "IQueryUrlCallBack is must not null for process continue."
            com.huawei.hms.framework.common.Logger.w(r3, r4)
            return
        La:
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r2.c
            if (r0 == 0) goto L21
            if (r3 == 0) goto L21
            if (r4 != 0) goto L13
            goto L21
        L13:
            boolean r0 = r2.d()
            if (r0 == 0) goto L20
            com.huawei.hms.framework.network.grs.a r0 = r2.k
            android.content.Context r1 = r2.f
            r0.a(r3, r4, r5, r1)
        L20:
            return
        L21:
            r3 = -6
            r5.onCallBackFail(r3)
            return
    }

    boolean a(java.lang.Object r4) {
            r3 = this;
            if (r3 != r4) goto L4
            r4 = 1
            return r4
        L4:
            r0 = 0
            if (r4 == 0) goto L1f
            java.lang.Class r1 = r4.getClass()
            java.lang.Class<com.huawei.hms.framework.network.grs.d> r2 = com.huawei.hms.framework.network.grs.d.class
            if (r2 == r1) goto L10
            goto L1f
        L10:
            boolean r1 = r4 instanceof com.huawei.hms.framework.network.grs.d
            if (r1 == 0) goto L1f
            com.huawei.hms.framework.network.grs.d r4 = (com.huawei.hms.framework.network.grs.d) r4
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r3.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r4 = r4.c
            boolean r4 = r0.compare(r4)
            return r4
        L1f:
            return r0
    }

    void b() {
            r4 = this;
            boolean r0 = r4.d()
            if (r0 != 0) goto L7
            return
        L7:
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r4.c
            android.content.Context r1 = r4.f
            r2 = 0
            r3 = 1
            java.lang.String r0 = r0.getGrsParasKey(r2, r3, r1)
            com.huawei.hms.framework.network.grs.a.c r1 = r4.i
            r1.a(r0)
            com.huawei.hms.framework.network.grs.a.c r1 = r4.i
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = "time"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.a(r2)
            com.huawei.hms.framework.network.grs.c.m r1 = r4.g
            r1.a(r0)
            return
    }

    boolean c() {
            r3 = this;
            boolean r0 = r3.d()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r3.c
            if (r0 == 0) goto L18
            android.content.Context r2 = r3.f
            if (r2 != 0) goto L11
            goto L18
        L11:
            com.huawei.hms.framework.network.grs.a.a r1 = r3.h
            r1.a(r0, r2)
            r0 = 1
            return r0
        L18:
            return r1
    }
}
