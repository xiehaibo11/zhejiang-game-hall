package com.huawei.updatesdk.b.g;

public class c {
    public static final java.util.concurrent.ThreadPoolExecutor a = null;
    public static final java.util.concurrent.ThreadPoolExecutor b = null;

    private static class a implements java.util.concurrent.ThreadFactory {
        private final java.util.concurrent.atomic.AtomicInteger a;
        private java.lang.String b;

        public a(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r0.<init>()
                r1.a = r0
                r1.b = r2
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r4) {
                r3 = this;
                java.lang.Thread r0 = new java.lang.Thread
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = r3.b
                r1.append(r2)
                java.lang.String r2 = "#"
                r1.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r3.a
                int r2 = r2.incrementAndGet()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r4, r1)
                return r0
        }
    }

    static {
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            com.huawei.updatesdk.b.g.c$a r7 = new com.huawei.updatesdk.b.g.c$a
            java.lang.String r0 = "UpdateSDK-ServerTask"
            r7.<init>(r0)
            r1 = 2
            r2 = 2
            r3 = 10
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            com.huawei.updatesdk.b.g.c.a = r8
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r14 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r15 = new java.util.concurrent.LinkedBlockingQueue
            r15.<init>()
            com.huawei.updatesdk.b.g.c$a r1 = new com.huawei.updatesdk.b.g.c$a
            java.lang.String r2 = "UpdateSDK-CheckTask"
            r1.<init>(r2)
            r10 = 0
            r11 = 2
            r12 = 5
            r9 = r0
            r16 = r1
            r9.<init>(r10, r11, r12, r14, r15, r16)
            com.huawei.updatesdk.b.g.c.b = r0
            return
    }
}
