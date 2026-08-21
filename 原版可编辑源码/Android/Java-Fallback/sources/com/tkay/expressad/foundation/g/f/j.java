package com.tkay.expressad.foundation.g.f;

public class j {
    private static final java.lang.String a = null;
    private android.content.Context b;
    private com.tkay.expressad.foundation.g.f.c c;
    private java.util.Set<com.tkay.expressad.foundation.g.f.i> d;
    private java.util.concurrent.ExecutorService e;
    private java.util.concurrent.atomic.AtomicInteger f;



    public interface a {
        boolean a(com.tkay.expressad.foundation.g.f.i<?> r1);
    }

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.j> r0 = com.tkay.expressad.foundation.g.f.j.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.j.a = r0
            return
    }

    public j(android.content.Context r9) {
            r8 = this;
            r8.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r8.d = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r7 = new java.util.concurrent.SynchronousQueue
            r7.<init>()
            r2 = 0
            r3 = 2147483647(0x7fffffff, float:NaN)
            r4 = 60
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            r8.e = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r8.f = r0
            android.content.Context r9 = r9.getApplicationContext()
            r8.b = r9
            com.tkay.expressad.foundation.g.f.d r9 = new com.tkay.expressad.foundation.g.f.d
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r9.<init>(r0)
            r8.c = r9
            return
    }

    private int a() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.f
            int r0 = r0.incrementAndGet()
            return r0
    }

    static android.content.Context a(com.tkay.expressad.foundation.g.f.j r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    private void a(com.tkay.expressad.foundation.g.f.j.a r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.Set<com.tkay.expressad.foundation.g.f.i> r0 = r3.d     // Catch: java.lang.Throwable -> L1f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1f
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1f
            com.tkay.expressad.foundation.g.f.i r1 = (com.tkay.expressad.foundation.g.f.i) r1     // Catch: java.lang.Throwable -> L1f
            boolean r2 = r4.a(r1)     // Catch: java.lang.Throwable -> L1f
            if (r2 == 0) goto L7
            r1.e()     // Catch: java.lang.Throwable -> L1f
            goto L7
        L1d:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1f
            return
        L1f:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private void a(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            com.tkay.expressad.foundation.g.f.j$1 r0 = new com.tkay.expressad.foundation.g.f.j$1
            r0.<init>(r1, r2)
            r1.a(r0)
            return
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot cancelAll with a null tag"
            r2.<init>(r0)
            throw r2
    }

    static com.tkay.expressad.foundation.g.f.c b(com.tkay.expressad.foundation.g.f.j r0) {
            com.tkay.expressad.foundation.g.f.c r0 = r0.c
            return r0
    }

    public final void a(com.tkay.expressad.foundation.g.f.i r3) {
            r2 = this;
            r3.a(r2)
            monitor-enter(r2)
            java.util.Set<com.tkay.expressad.foundation.g.f.i> r0 = r2.d     // Catch: java.lang.Throwable -> L1e
            r0.add(r3)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1e
            java.util.concurrent.atomic.AtomicInteger r0 = r2.f
            int r0 = r0.incrementAndGet()
            r3.a(r0)
            java.util.concurrent.ExecutorService r0 = r2.e
            com.tkay.expressad.foundation.g.f.j$2 r1 = new com.tkay.expressad.foundation.g.f.j$2
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
        L1e:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    final void b(com.tkay.expressad.foundation.g.f.i r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Set<com.tkay.expressad.foundation.g.f.i> r0 = r1.d     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
