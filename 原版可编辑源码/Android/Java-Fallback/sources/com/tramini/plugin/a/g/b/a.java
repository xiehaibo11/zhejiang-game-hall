package com.tramini.plugin.a.g.b;

public final class a {
    private static com.tramini.plugin.a.g.b.a a;
    private java.util.concurrent.ExecutorService b;


    static {
            return
    }

    protected a() {
            r8 = this;
            r8.<init>()
            r0 = 0
            r8.b = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r7 = new java.util.concurrent.SynchronousQueue
            r7.<init>()
            r2 = 0
            r3 = 50
            r4 = 60
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            r8.b = r0
            return
    }

    public static com.tramini.plugin.a.g.b.a a() {
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a
            if (r0 != 0) goto Lb
            com.tramini.plugin.a.g.b.a r0 = new com.tramini.plugin.a.g.b.a
            r0.<init>()
            com.tramini.plugin.a.g.b.a.a = r0
        Lb:
            com.tramini.plugin.a.g.b.a r0 = com.tramini.plugin.a.g.b.a.a
            return r0
    }

    public final void a(com.tramini.plugin.a.g.b.b r2) {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.b
            r0.execute(r2)
            return
    }

    public final void a(java.lang.Runnable r3) {
            r2 = this;
            r0 = 0
            r2.a(r3, r0)
            return
    }

    public final void a(java.lang.Runnable r4, long r5) {
            r3 = this;
            if (r4 == 0) goto L1c
            com.tramini.plugin.a.g.b.a$1 r0 = new com.tramini.plugin.a.g.b.a$1
            r0.<init>(r3, r5, r4)
            long r4 = java.lang.System.currentTimeMillis()
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r1
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            int r4 = r4.intValue()
            r0.a(r4)
            r3.a(r0)
        L1c:
            return
    }
}
