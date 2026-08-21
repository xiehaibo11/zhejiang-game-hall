package com.loc;

public abstract class ct {
    protected java.util.concurrent.ThreadPoolExecutor a;
    protected com.loc.cs.a b;
    private java.util.concurrent.ConcurrentHashMap<com.loc.cs, java.util.concurrent.Future<?>> c;


    public ct() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.c = r0
            com.loc.ct$1 r0 = new com.loc.ct$1
            r0.<init>(r1)
            r1.b = r0
            return
    }

    private synchronized void a(com.loc.cs r2, java.util.concurrent.Future<?> r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<com.loc.cs, java.util.concurrent.Future<?>> r0 = r1.c     // Catch: java.lang.Throwable -> L8
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            java.lang.String r3 = "TPool"
            java.lang.String r0 = "addQueue"
            com.loc.av.b(r2, r3, r0)     // Catch: java.lang.Throwable -> L15
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)
            return
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private synchronized boolean c(com.loc.cs r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentHashMap<com.loc.cs, java.util.concurrent.Future<?>> r0 = r2.c     // Catch: java.lang.Throwable -> L8
            boolean r3 = r0.containsKey(r3)     // Catch: java.lang.Throwable -> L8
            goto L14
        L8:
            r3 = move-exception
            java.lang.String r0 = "TPool"
            java.lang.String r1 = "contain"
            com.loc.av.b(r3, r0, r1)     // Catch: java.lang.Throwable -> L16
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L16
            r3 = 0
        L14:
            monitor-exit(r2)
            return r3
        L16:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    protected final synchronized void a(com.loc.cs r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentHashMap<com.loc.cs, java.util.concurrent.Future<?>> r0 = r2.c     // Catch: java.lang.Throwable -> L8
            r0.remove(r3)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r2)
            return
        L8:
            r3 = move-exception
            java.lang.String r0 = "TPool"
            java.lang.String r1 = "removeQueue"
            com.loc.av.b(r3, r0, r1)     // Catch: java.lang.Throwable -> L15
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r2)
            return
        L15:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final java.util.concurrent.Executor b() {
            r1 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = r1.a
            return r0
    }

    public final void b(com.loc.cs r3) {
            r2 = this;
            boolean r0 = r2.c(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.concurrent.ThreadPoolExecutor r0 = r2.a
            if (r0 == 0) goto L2b
            boolean r0 = r0.isShutdown()
            if (r0 == 0) goto L12
            goto L2b
        L12:
            com.loc.cs$a r0 = r2.b
            r3.e = r0
            java.util.concurrent.ThreadPoolExecutor r0 = r2.a     // Catch: java.util.concurrent.RejectedExecutionException -> L23
            java.util.concurrent.Future r0 = r0.submit(r3)     // Catch: java.util.concurrent.RejectedExecutionException -> L23
            if (r0 != 0) goto L1f
            return
        L1f:
            r2.a(r3, r0)
            return
        L23:
            r3 = move-exception
            java.lang.String r0 = "TPool"
            java.lang.String r1 = "addTask"
            com.loc.av.b(r3, r0, r1)
        L2b:
            return
    }
}
