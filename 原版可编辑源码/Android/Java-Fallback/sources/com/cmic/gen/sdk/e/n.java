package com.cmic.gen.sdk.e;

public class n {
    private static final java.util.concurrent.ExecutorService a = null;

    public static abstract class a implements java.lang.Runnable {
        private final java.lang.Thread.UncaughtExceptionHandler a;



        protected a() {
                r1 = this;
                r1.<init>()
                com.cmic.gen.sdk.e.n$a$1 r0 = new com.cmic.gen.sdk.e.n$a$1
                r0.<init>(r1)
                r1.a = r0
                return
        }

        protected a(android.content.Context r2, com.cmic.gen.sdk.a r3) {
                r1 = this;
                r1.<init>()
                com.cmic.gen.sdk.e.n$a$2 r0 = new com.cmic.gen.sdk.e.n$a$2
                r0.<init>(r1, r3, r2)
                r1.a = r0
                return
        }

        static java.lang.Thread.UncaughtExceptionHandler a(com.cmic.gen.sdk.e.n.a r0) {
                java.lang.Thread$UncaughtExceptionHandler r0 = r0.a
                return r0
        }

        protected abstract void a();

        @Override
        public void run() {
                r2 = this;
                java.lang.Thread r0 = java.lang.Thread.currentThread()
                java.lang.Thread$UncaughtExceptionHandler r1 = r2.a
                r0.setUncaughtExceptionHandler(r1)
                r2.a()
                java.lang.Thread r0 = java.lang.Thread.currentThread()
                r1 = 0
                r0.setUncaughtExceptionHandler(r1)
                return
        }
    }

    static {
            java.util.concurrent.ThreadPoolExecutor r7 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r6 = new java.util.concurrent.SynchronousQueue
            r6.<init>()
            r1 = 0
            r2 = 30
            r3 = 60
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            com.cmic.gen.sdk.e.n.a = r7
            return
    }

    public static void a(com.cmic.gen.sdk.e.n.a r2) {
            java.util.concurrent.ExecutorService r0 = com.cmic.gen.sdk.e.n.a     // Catch: java.lang.Exception -> L6
            r0.execute(r2)     // Catch: java.lang.Exception -> L6
            goto L12
        L6:
            r0 = move-exception
            java.lang.Thread$UncaughtExceptionHandler r2 = com.cmic.gen.sdk.e.n.a.a(r2)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r2.uncaughtException(r1, r0)
        L12:
            return
    }
}
