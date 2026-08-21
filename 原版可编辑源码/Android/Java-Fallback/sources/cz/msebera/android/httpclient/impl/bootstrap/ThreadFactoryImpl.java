package cz.msebera.android.httpclient.impl.bootstrap;

class ThreadFactoryImpl implements java.util.concurrent.ThreadFactory {
    private final java.util.concurrent.atomic.AtomicLong count;
    private final java.lang.ThreadGroup group;
    private final java.lang.String namePrefix;

    ThreadFactoryImpl(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    ThreadFactoryImpl(java.lang.String r1, java.lang.ThreadGroup r2) {
            r0 = this;
            r0.<init>()
            r0.namePrefix = r1
            r0.group = r2
            java.util.concurrent.atomic.AtomicLong r1 = new java.util.concurrent.atomic.AtomicLong
            r1.<init>()
            r0.count = r1
            return
    }

    @Override
    public java.lang.Thread newThread(java.lang.Runnable r6) {
            r5 = this;
            java.lang.Thread r0 = new java.lang.Thread
            java.lang.ThreadGroup r1 = r5.group
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.namePrefix
            r2.append(r3)
            java.lang.String r3 = "-"
            r2.append(r3)
            java.util.concurrent.atomic.AtomicLong r3 = r5.count
            long r3 = r3.incrementAndGet()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r6, r2)
            return r0
    }
}
