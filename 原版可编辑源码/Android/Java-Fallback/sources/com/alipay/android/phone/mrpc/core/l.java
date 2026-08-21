package com.alipay.android.phone.mrpc.core;

public final class l implements com.alipay.android.phone.mrpc.core.ab {
    public static com.alipay.android.phone.mrpc.core.l b;
    public static final java.util.concurrent.ThreadFactory i = null;
    public android.content.Context a;
    public java.util.concurrent.ThreadPoolExecutor c;
    public com.alipay.android.phone.mrpc.core.b d;
    public long e;
    public long f;
    public long g;
    public int h;

    static {
            com.alipay.android.phone.mrpc.core.n r0 = new com.alipay.android.phone.mrpc.core.n
            r0.<init>()
            com.alipay.android.phone.mrpc.core.l.i = r0
            return
    }

    public l(android.content.Context r10) {
            r9 = this;
            r9.<init>()
            r9.a = r10
            java.lang.String r10 = "android"
            com.alipay.android.phone.mrpc.core.b r10 = com.alipay.android.phone.mrpc.core.b.a(r10)
            r9.d = r10
            java.util.concurrent.ThreadPoolExecutor r10 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.ArrayBlockingQueue r6 = new java.util.concurrent.ArrayBlockingQueue
            r0 = 20
            r6.<init>(r0)
            java.util.concurrent.ThreadFactory r7 = com.alipay.android.phone.mrpc.core.l.i
            java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy
            r8.<init>()
            r1 = 10
            r2 = 11
            r3 = 3
            r0 = r10
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            r9.c = r10
            r0 = 1
            r10.allowCoreThreadTimeOut(r0)     // Catch: java.lang.Exception -> L2f
        L2f:
            android.content.Context r10 = r9.a
            android.webkit.CookieSyncManager.createInstance(r10)
            android.webkit.CookieManager r10 = android.webkit.CookieManager.getInstance()
            r10.setAcceptCookie(r0)
            return
    }

    public static final com.alipay.android.phone.mrpc.core.l a(android.content.Context r1) {
            com.alipay.android.phone.mrpc.core.l r0 = com.alipay.android.phone.mrpc.core.l.b
            if (r0 == 0) goto L5
            return r0
        L5:
            com.alipay.android.phone.mrpc.core.l r1 = b(r1)
            return r1
    }

    public static final synchronized com.alipay.android.phone.mrpc.core.l b(android.content.Context r2) {
            java.lang.Class<com.alipay.android.phone.mrpc.core.l> r0 = com.alipay.android.phone.mrpc.core.l.class
            monitor-enter(r0)
            com.alipay.android.phone.mrpc.core.l r1 = com.alipay.android.phone.mrpc.core.l.b     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return r1
        L9:
            com.alipay.android.phone.mrpc.core.l r1 = new com.alipay.android.phone.mrpc.core.l     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.alipay.android.phone.mrpc.core.l.b = r1     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public final com.alipay.android.phone.mrpc.core.b a() {
            r1 = this;
            com.alipay.android.phone.mrpc.core.b r0 = r1.d
            return r0
    }

    @Override
    public final java.util.concurrent.Future<com.alipay.android.phone.mrpc.core.u> a(com.alipay.android.phone.mrpc.core.t r12) {
            r11 = this;
            android.content.Context r0 = r11.a
            boolean r0 = com.alipay.android.phone.mrpc.core.s.a(r0)
            if (r0 == 0) goto L9f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "HttpManager"
            r0.<init>(r1)
            int r1 = r11.hashCode()
            r0.append(r1)
            java.lang.String r1 = ": Active Task = %d, Completed Task = %d, All Task = %d,Avarage Speed = %d KB/S, Connetct Time = %d ms, All data size = %d bytes, All enqueueConnect time = %d ms, All socket time = %d ms, All request times = %d times"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 9
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.util.concurrent.ThreadPoolExecutor r2 = r11.c
            int r2 = r2.getActiveCount()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            java.util.concurrent.ThreadPoolExecutor r2 = r11.c
            long r2 = r2.getCompletedTaskCount()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            java.util.concurrent.ThreadPoolExecutor r2 = r11.c
            long r2 = r2.getTaskCount()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 2
            r1[r3] = r2
            r2 = 3
            long r3 = r11.g
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 != 0) goto L55
            r3 = r5
            goto L60
        L55:
            long r7 = r11.e
            r9 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r9
            long r7 = r7 / r3
            r3 = 10
            long r3 = r7 >> r3
        L60:
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r1[r2] = r3
            r2 = 4
            int r3 = r11.h
            if (r3 != 0) goto L6c
            goto L71
        L6c:
            long r4 = r11.f
            long r6 = (long) r3
            long r5 = r4 / r6
        L71:
            java.lang.Long r3 = java.lang.Long.valueOf(r5)
            r1[r2] = r3
            long r2 = r11.e
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 5
            r1[r3] = r2
            long r2 = r11.f
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 6
            r1[r3] = r2
            long r2 = r11.g
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 7
            r1[r3] = r2
            int r2 = r11.h
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 8
            r1[r3] = r2
            java.lang.String.format(r0, r1)
        L9f:
            com.alipay.android.phone.mrpc.core.o r12 = (com.alipay.android.phone.mrpc.core.o) r12
            com.alipay.android.phone.mrpc.core.q r0 = new com.alipay.android.phone.mrpc.core.q
            r0.<init>(r11, r12)
            com.alipay.android.phone.mrpc.core.m r12 = new com.alipay.android.phone.mrpc.core.m
            r12.<init>(r11, r0, r0)
            java.util.concurrent.ThreadPoolExecutor r0 = r11.c
            r0.execute(r12)
            return r12
    }

    public final void a(long r3) {
            r2 = this;
            long r0 = r2.e
            long r0 = r0 + r3
            r2.e = r0
            return
    }

    public final void b(long r3) {
            r2 = this;
            long r0 = r2.f
            long r0 = r0 + r3
            r2.f = r0
            int r3 = r2.h
            int r3 = r3 + 1
            r2.h = r3
            return
    }

    public final void c(long r3) {
            r2 = this;
            long r0 = r2.g
            long r0 = r0 + r3
            r2.g = r0
            return
    }
}
