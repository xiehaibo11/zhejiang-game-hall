package com.huawei.hms.framework.network.grs.c;

public class m {
    private java.util.concurrent.ExecutorService a;
    private java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.c.b.b> b;
    private final java.lang.Object c;
    private com.huawei.hms.framework.network.grs.a.a d;

    public m() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "GRS_RequestController-Task"
            java.util.concurrent.ExecutorService r0 = com.huawei.hms.framework.common.ExecutorsUtils.newCachedThreadPool(r0)
            r2.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r2.b = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.c = r0
            return
    }

    static java.util.concurrent.ExecutorService a(com.huawei.hms.framework.network.grs.c.m r0) {
            java.util.concurrent.ExecutorService r0 = r0.a
            return r0
    }

    private void a(com.huawei.hms.framework.network.grs.c.f r3, com.huawei.hms.framework.network.grs.b r4) {
            r2 = this;
            if (r4 == 0) goto L17
            java.lang.String r0 = "RequestController"
            if (r3 != 0) goto Lf
            java.lang.String r3 = "GrsResponse is null"
            com.huawei.hms.framework.common.Logger.v(r0, r3)
            r4.a()
            goto L17
        Lf:
            java.lang.String r1 = "GrsResponse is not null"
            com.huawei.hms.framework.common.Logger.v(r0, r1)
            r4.a(r3)
        L17:
            return
    }

    static void a(com.huawei.hms.framework.network.grs.c.m r0, com.huawei.hms.framework.network.grs.c.f r1, com.huawei.hms.framework.network.grs.b r2) {
            r0.a(r1, r2)
            return
    }

    static com.huawei.hms.framework.network.grs.a.a b(com.huawei.hms.framework.network.grs.c.m r0) {
            com.huawei.hms.framework.network.grs.a.a r0 = r0.d
            return r0
    }

    public com.huawei.hms.framework.network.grs.c.f a(com.huawei.hms.framework.network.grs.c.b.c r7, java.lang.String r8, com.huawei.hms.framework.network.grs.a.c r9) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "request to server with service name is: "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RequestController"
            com.huawei.hms.framework.common.Logger.d(r1, r0)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = r7.b()
            android.content.Context r1 = r7.a()
            r2 = 0
            r3 = 1
            java.lang.String r0 = r0.getGrsParasTag(r2, r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "request spUrlKey: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "RequestController"
            com.huawei.hms.framework.common.Logger.v(r2, r1)
            java.lang.Object r1 = r6.c
            monitor-enter(r1)
            android.content.Context r2 = r7.a()     // Catch: java.lang.Throwable -> La8
            boolean r2 = com.huawei.hms.framework.common.NetworkUtil.isNetworkAvailable(r2)     // Catch: java.lang.Throwable -> La8
            r3 = 0
            if (r2 != 0) goto L4a
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La8
            return r3
        L4a:
            com.huawei.hms.framework.network.grs.d.d$a r2 = com.huawei.hms.framework.network.grs.d.d.a(r0)     // Catch: java.lang.Throwable -> La8
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.c.b.b> r4 = r6.b     // Catch: java.lang.Throwable -> La8
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> La8
            com.huawei.hms.framework.network.grs.c.b.b r4 = (com.huawei.hms.framework.network.grs.c.b.b) r4     // Catch: java.lang.Throwable -> La8
            if (r4 == 0) goto L64
            boolean r5 = r4.b()     // Catch: java.lang.Throwable -> La8
            if (r5 != 0) goto L5f
            goto L64
        L5f:
            java.util.concurrent.Future r7 = r4.a()     // Catch: java.lang.Throwable -> La8
            goto L8b
        L64:
            if (r2 == 0) goto L6f
            boolean r2 = r2.a()     // Catch: java.lang.Throwable -> La8
            if (r2 != 0) goto L6d
            goto L6f
        L6d:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La8
            return r3
        L6f:
            java.lang.String r2 = "RequestController"
            java.lang.String r4 = "hitGrsRequestBean == null or request block is released."
            com.huawei.hms.framework.common.Logger.d(r2, r4)     // Catch: java.lang.Throwable -> La8
            java.util.concurrent.ExecutorService r2 = r6.a     // Catch: java.lang.Throwable -> La8
            com.huawei.hms.framework.network.grs.c.k r4 = new com.huawei.hms.framework.network.grs.c.k     // Catch: java.lang.Throwable -> La8
            r4.<init>(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La8
            java.util.concurrent.Future r7 = r2.submit(r4)     // Catch: java.lang.Throwable -> La8
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.c.b.b> r8 = r6.b     // Catch: java.lang.Throwable -> La8
            com.huawei.hms.framework.network.grs.c.b.b r9 = new com.huawei.hms.framework.network.grs.c.b.b     // Catch: java.lang.Throwable -> La8
            r9.<init>(r7)     // Catch: java.lang.Throwable -> La8
            r8.put(r0, r9)     // Catch: java.lang.Throwable -> La8
        L8b:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La8
            java.lang.Object r7 = r7.get()     // Catch: java.lang.InterruptedException -> L93 java.util.concurrent.ExecutionException -> L99 java.util.concurrent.CancellationException -> L9f
            com.huawei.hms.framework.network.grs.c.f r7 = (com.huawei.hms.framework.network.grs.c.f) r7     // Catch: java.lang.InterruptedException -> L93 java.util.concurrent.ExecutionException -> L99 java.util.concurrent.CancellationException -> L9f
            return r7
        L93:
            r7 = move-exception
            java.lang.String r8 = "RequestController"
            java.lang.String r9 = "when check result, find InterruptedException, check others"
            goto La4
        L99:
            r7 = move-exception
            java.lang.String r8 = "RequestController"
            java.lang.String r9 = "when check result, find ExecutionException, check others"
            goto La4
        L9f:
            r7 = move-exception
            java.lang.String r8 = "RequestController"
            java.lang.String r9 = "when check result, find CancellationException, check others"
        La4:
            com.huawei.hms.framework.common.Logger.w(r8, r9, r7)
            return r3
        La8:
            r7 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La8
            throw r7
    }

    public void a(com.huawei.hms.framework.network.grs.a.a r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(com.huawei.hms.framework.network.grs.c.b.c r9, com.huawei.hms.framework.network.grs.b r10, java.lang.String r11, com.huawei.hms.framework.network.grs.a.c r12) {
            r8 = this;
            java.util.concurrent.ExecutorService r0 = r8.a
            com.huawei.hms.framework.network.grs.c.l r7 = new com.huawei.hms.framework.network.grs.c.l
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r11
            r5 = r12
            r6 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            r0.execute(r7)
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.Object r0 = r2.c
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.c.b.b> r1 = r2.b     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }
}
