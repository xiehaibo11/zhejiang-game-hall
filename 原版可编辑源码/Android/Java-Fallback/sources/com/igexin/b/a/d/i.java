package com.igexin.b.a.d;

final class i implements java.util.concurrent.ThreadFactory {
    final java.util.concurrent.atomic.AtomicInteger a;
    final com.igexin.b.a.d.g b;

    public i(com.igexin.b.a.d.g r2) {
            r1 = this;
            r1.b = r2
            r1.<init>()
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger
            r0 = 0
            r2.<init>(r0)
            r1.a = r2
            return
    }

    @Override
    public java.lang.Thread newThread(java.lang.Runnable r4) {
            r3 = this;
            java.lang.Thread r0 = new java.lang.Thread
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TS-pool-"
            r1.append(r2)
            java.util.concurrent.atomic.AtomicInteger r2 = r3.a
            int r2 = r2.incrementAndGet()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r4, r1)
            return r0
    }
}
