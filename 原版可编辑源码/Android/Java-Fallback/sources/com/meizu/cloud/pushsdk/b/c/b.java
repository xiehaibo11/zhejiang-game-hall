package com.meizu.cloud.pushsdk.b.c;

public class b implements java.util.concurrent.Executor {
    private final java.util.concurrent.ThreadPoolExecutor a;

    class 1 {
    }

    class a {
        private static com.meizu.cloud.pushsdk.b.c.b a;

        static {
                com.meizu.cloud.pushsdk.b.c.b r0 = new com.meizu.cloud.pushsdk.b.c.b
                r1 = 0
                r0.<init>(r1)
                com.meizu.cloud.pushsdk.b.c.b.a.a = r0
                return
        }

        static com.meizu.cloud.pushsdk.b.c.b a() {
                com.meizu.cloud.pushsdk.b.c.b r0 = com.meizu.cloud.pushsdk.b.c.b.a.a
                return r0
        }
    }

    private b() {
            r9 = this;
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            com.meizu.cloud.pushsdk.b.c.d r0 = new com.meizu.cloud.pushsdk.b.c.d
            r0.<init>()
            r1 = 10
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            com.meizu.cloud.pushsdk.b.c.d r0 = r0.a(r1)
            java.lang.String r1 = "message-pool-%d"
            com.meizu.cloud.pushsdk.b.c.d r0 = r0.a(r1)
            java.util.concurrent.ThreadFactory r7 = r0.a()
            r1 = 1
            r2 = 1
            r3 = 0
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            r9.a = r8
            return
    }

    b(com.meizu.cloud.pushsdk.b.c.b.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.meizu.cloud.pushsdk.b.c.b a() {
            com.meizu.cloud.pushsdk.b.c.b r0 = com.meizu.cloud.pushsdk.b.c.b.a.a()
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
