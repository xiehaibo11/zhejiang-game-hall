package com.loc;

public final class av extends com.loc.as implements java.lang.Thread.UncaughtExceptionHandler {
    private static java.util.concurrent.ExecutorService e;
    private static java.util.Set<java.lang.Integer> f;
    private static java.lang.ref.WeakReference<android.content.Context> g;
    private static final java.util.concurrent.ThreadFactory h = null;
    private android.content.Context d;



    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Set r0 = java.util.Collections.synchronizedSet(r0)
            com.loc.av.f = r0
            com.loc.av$2 r0 = new com.loc.av$2
            r0.<init>()
            com.loc.av.h = r0
            return
    }

    private av(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r3.d = r4
            java.lang.Thread$UncaughtExceptionHandler r4 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Throwable -> L3f
            r3.b = r4     // Catch: java.lang.Throwable -> L3f
            java.lang.Thread$UncaughtExceptionHandler r4 = r3.b     // Catch: java.lang.Throwable -> L3f
            r0 = 1
            if (r4 != 0) goto L16
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r3)     // Catch: java.lang.Throwable -> L3f
            r3.c = r0     // Catch: java.lang.Throwable -> L3f
            return
        L16:
            java.lang.Thread$UncaughtExceptionHandler r4 = r3.b     // Catch: java.lang.Throwable -> L3f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "com.amap.apis.utils.core.dynamiccore"
            boolean r1 = r4.startsWith(r1)     // Catch: java.lang.Throwable -> L3f
            if (r1 != 0) goto L39
            java.lang.String r1 = "com.amap.api"
            int r1 = r4.indexOf(r1)     // Catch: java.lang.Throwable -> L3f
            r2 = -1
            if (r1 != r2) goto L35
            java.lang.String r1 = "com.loc"
            int r4 = r4.indexOf(r1)     // Catch: java.lang.Throwable -> L3f
            if (r4 == r2) goto L39
        L35:
            r4 = 0
            r3.c = r4     // Catch: java.lang.Throwable -> L3f
            return
        L39:
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r3)     // Catch: java.lang.Throwable -> L3f
            r3.c = r0     // Catch: java.lang.Throwable -> L3f
            return
        L3f:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    static android.content.Context a(com.loc.av r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    public static synchronized com.loc.av a(android.content.Context r3, com.loc.w r4) throws com.loc.k {
            java.lang.Class<com.loc.av> r0 = com.loc.av.class
            monitor-enter(r0)
            if (r4 == 0) goto L5c
            java.lang.String r1 = r4.a()     // Catch: java.lang.Throwable -> L5a
            if (r1 == 0) goto L52
            java.lang.String r1 = ""
            java.lang.String r2 = r4.a()     // Catch: java.lang.Throwable -> L5a
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L5a
            if (r1 != 0) goto L52
            java.util.Set<java.lang.Integer> r1 = com.loc.av.f     // Catch: java.lang.Throwable -> L48
            int r2 = r4.hashCode()     // Catch: java.lang.Throwable -> L48
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L48
            boolean r1 = r1.add(r2)     // Catch: java.lang.Throwable -> L48
            if (r1 != 0) goto L2d
            com.loc.as r3 = com.loc.as.a     // Catch: java.lang.Throwable -> L48
            com.loc.av r3 = (com.loc.av) r3     // Catch: java.lang.Throwable -> L48
            monitor-exit(r0)
            return r3
        L2d:
            com.loc.as r1 = com.loc.as.a     // Catch: java.lang.Throwable -> L48
            if (r1 != 0) goto L39
            com.loc.av r1 = new com.loc.av     // Catch: java.lang.Throwable -> L48
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L48
            com.loc.as.a = r1     // Catch: java.lang.Throwable -> L48
            goto L3e
        L39:
            com.loc.as r3 = com.loc.as.a     // Catch: java.lang.Throwable -> L48
            r1 = 0
            r3.c = r1     // Catch: java.lang.Throwable -> L48
        L3e:
            com.loc.as r3 = com.loc.as.a     // Catch: java.lang.Throwable -> L48
            com.loc.as r1 = com.loc.as.a     // Catch: java.lang.Throwable -> L48
            boolean r1 = r1.c     // Catch: java.lang.Throwable -> L48
            r3.a(r4, r1)     // Catch: java.lang.Throwable -> L48
            goto L4c
        L48:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L5a
        L4c:
            com.loc.as r3 = com.loc.as.a     // Catch: java.lang.Throwable -> L5a
            com.loc.av r3 = (com.loc.av) r3     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r0)
            return r3
        L52:
            com.loc.k r3 = new com.loc.k     // Catch: java.lang.Throwable -> L5a
            java.lang.String r4 = "sdk name is invalid"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L5a
            throw r3     // Catch: java.lang.Throwable -> L5a
        L5a:
            r3 = move-exception
            goto L64
        L5c:
            com.loc.k r3 = new com.loc.k     // Catch: java.lang.Throwable -> L5a
            java.lang.String r4 = "sdk info is null"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L5a
            throw r3     // Catch: java.lang.Throwable -> L5a
        L64:
            monitor-exit(r0)
            throw r3
    }

    public static void a(com.loc.w r6, java.lang.String r7, com.loc.k r8) {
            if (r8 == 0) goto L17
            java.lang.String r2 = r8.c()
            java.lang.String r3 = r8.d()
            java.lang.String r4 = r8.e()
            java.lang.String r5 = r8.b()
            r0 = r6
            r1 = r7
            a(r0, r1, r2, r3, r4, r5)
        L17:
            return
    }

    public static void a(com.loc.w r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r4 = ""
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void a(com.loc.w r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            com.loc.as r0 = com.loc.as.a     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L39
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = "path:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L39
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = ",type:"
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            r0.append(r4)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = ",gsid:"
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            r0.append(r5)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = ",csid:"
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            r0.append(r6)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = ",code:"
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            r0.append(r7)     // Catch: java.lang.Throwable -> L39
            com.loc.as r3 = com.loc.as.a     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L39
            java.lang.String r5 = "networkError"
            r3.a(r2, r4, r5)     // Catch: java.lang.Throwable -> L39
        L39:
            return
    }

    public static synchronized void b() {
            java.lang.Class<com.loc.av> r0 = com.loc.av.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.loc.av.e     // Catch: java.lang.Throwable -> L10
            if (r1 == 0) goto Lc
            java.util.concurrent.ExecutorService r1 = com.loc.av.e     // Catch: java.lang.Throwable -> L10
            r1.shutdown()     // Catch: java.lang.Throwable -> L10
        Lc:
            com.loc.bl.a()     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L38
        L14:
            com.loc.as r1 = com.loc.as.a     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L2d
            java.lang.Thread$UncaughtExceptionHandler r1 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Throwable -> L32
            com.loc.as r2 = com.loc.as.a     // Catch: java.lang.Throwable -> L32
            if (r1 != r2) goto L2d
            com.loc.as r1 = com.loc.as.a     // Catch: java.lang.Throwable -> L32
            java.lang.Thread$UncaughtExceptionHandler r1 = r1.b     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L2d
            com.loc.as r1 = com.loc.as.a     // Catch: java.lang.Throwable -> L32
            java.lang.Thread$UncaughtExceptionHandler r1 = r1.b     // Catch: java.lang.Throwable -> L32
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r1)     // Catch: java.lang.Throwable -> L32
        L2d:
            r1 = 0
            com.loc.as.a = r1     // Catch: java.lang.Throwable -> L32
            monitor-exit(r0)
            return
        L32:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L38
            monitor-exit(r0)
            return
        L38:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void b(com.loc.w r1, java.lang.String r2, java.lang.String r3) {
            com.loc.as r0 = com.loc.as.a     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.loc.as r0 = com.loc.as.a     // Catch: java.lang.Throwable -> L9
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public static void b(java.lang.Throwable r2, java.lang.String r3, java.lang.String r4) {
            com.loc.as r0 = com.loc.as.a     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto La
            com.loc.as r0 = com.loc.as.a     // Catch: java.lang.Throwable -> La
            r1 = 1
            r0.a(r2, r1, r3, r4)     // Catch: java.lang.Throwable -> La
        La:
            return
    }

    public static void c() {
            java.lang.ref.WeakReference<android.content.Context> r0 = com.loc.av.g
            if (r0 == 0) goto L16
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L16
            java.lang.ref.WeakReference<android.content.Context> r0 = com.loc.av.g
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            com.loc.at.a(r0)
            return
        L16:
            com.loc.as r0 = com.loc.as.a
            if (r0 == 0) goto L1f
            com.loc.as r0 = com.loc.as.a
            r0.a()
        L1f:
            return
    }

    @Override
    protected final void a() {
            r1 = this;
            android.content.Context r0 = r1.d
            com.loc.at.a(r0)
            return
    }

    @Override
    protected final void a(com.loc.w r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.content.Context r0 = r1.d
            com.loc.aw.a(r2, r0, r4, r3)
            return
    }

    @Override
    protected final void a(com.loc.w r3, boolean r4) {
            r2 = this;
            com.loc.cr r0 = com.loc.cr.a()     // Catch: java.lang.Throwable -> Ld java.util.concurrent.RejectedExecutionException -> L11
            com.loc.av$1 r1 = new com.loc.av$1     // Catch: java.lang.Throwable -> Ld java.util.concurrent.RejectedExecutionException -> L11
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> Ld java.util.concurrent.RejectedExecutionException -> L11
            r0.b(r1)     // Catch: java.lang.Throwable -> Ld java.util.concurrent.RejectedExecutionException -> L11
            return
        Ld:
            r3 = move-exception
            r3.printStackTrace()
        L11:
            return
    }

    @Override
    protected final void a(java.lang.Throwable r2, int r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            android.content.Context r0 = r1.d
            com.loc.aw.a(r0, r2, r3, r4, r5)
            return
    }

    @Override
    public final void uncaughtException(java.lang.Thread r3, java.lang.Throwable r4) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r0 = 0
            r1 = 0
            r2.a(r4, r0, r1, r1)
            java.lang.Thread$UncaughtExceptionHandler r0 = r2.b
            if (r0 == 0) goto L16
            java.lang.Thread$UncaughtExceptionHandler r0 = r2.b     // Catch: java.lang.Throwable -> L11
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r0)     // Catch: java.lang.Throwable -> L11
        L11:
            java.lang.Thread$UncaughtExceptionHandler r0 = r2.b
            r0.uncaughtException(r3, r4)
        L16:
            return
    }
}
