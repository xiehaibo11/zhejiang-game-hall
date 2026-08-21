package com.meizu.cloud.pushsdk.b.c;

public class a implements java.util.concurrent.Executor {
    private final java.util.concurrent.ThreadPoolExecutor a;

    class 1 {
    }

    class a {
        private static com.meizu.cloud.pushsdk.b.c.a a;

        static {
                com.meizu.cloud.pushsdk.b.c.a r0 = new com.meizu.cloud.pushsdk.b.c.a
                r1 = 0
                r0.<init>(r1)
                com.meizu.cloud.pushsdk.b.c.a.a.a = r0
                return
        }

        static com.meizu.cloud.pushsdk.b.c.a a() {
                com.meizu.cloud.pushsdk.b.c.a r0 = com.meizu.cloud.pushsdk.b.c.a.a.a
                return r0
        }
    }

    private a() {
            r9 = this;
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r6 = new java.util.concurrent.SynchronousQueue
            r6.<init>()
            com.meizu.cloud.pushsdk.b.c.d r0 = new com.meizu.cloud.pushsdk.b.c.d
            r0.<init>()
            java.lang.String r1 = "io-pool-%d"
            com.meizu.cloud.pushsdk.b.c.d r0 = r0.a(r1)
            java.util.concurrent.ThreadFactory r7 = r0.a()
            r1 = 0
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 60
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            r9.a = r8
            return
    }

    a(com.meizu.cloud.pushsdk.b.c.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.meizu.cloud.pushsdk.b.c.a a() {
            com.meizu.cloud.pushsdk.b.c.a r0 = com.meizu.cloud.pushsdk.b.c.a.a.a()
            return r0
    }

    @Override
    public void execute(java.lang.Runnable r2) {
            r1 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = r1.a
            r0.execute(r2)
            return
    }
}
