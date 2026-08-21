package com.loc;

public final class cr extends com.loc.ct {
    private static com.loc.cr c;

    static {
            com.loc.cr r0 = new com.loc.cr
            com.loc.cq$a r1 = new com.loc.cq$a
            r1.<init>()
            java.lang.String r2 = "amap-global-threadPool"
            com.loc.cq$a r1 = r1.a(r2)
            com.loc.cq r1 = r1.a()
            r0.<init>(r1)
            com.loc.cr.c = r0
            return
    }

    private cr(com.loc.cq r10) {
            r9 = this;
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L26
            int r1 = r10.a()     // Catch: java.lang.Throwable -> L26
            int r2 = r10.b()     // Catch: java.lang.Throwable -> L26
            int r0 = r10.d()     // Catch: java.lang.Throwable -> L26
            long r3 = (long) r0     // Catch: java.lang.Throwable -> L26
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L26
            java.util.concurrent.BlockingQueue r6 = r10.c()     // Catch: java.lang.Throwable -> L26
            r0 = r8
            r7 = r10
            r0.<init>(r1, r2, r3, r5, r6, r7)     // Catch: java.lang.Throwable -> L26
            r9.a = r8     // Catch: java.lang.Throwable -> L26
            java.util.concurrent.ThreadPoolExecutor r10 = r9.a     // Catch: java.lang.Throwable -> L26
            r0 = 1
            r10.allowCoreThreadTimeOut(r0)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r10 = move-exception
            java.lang.String r0 = "TPool"
            java.lang.String r1 = "ThreadPool"
            com.loc.av.b(r10, r0, r1)
            r10.printStackTrace()
            return
    }

    public static com.loc.cr a() {
            com.loc.cr r0 = com.loc.cr.c
            return r0
    }
}
