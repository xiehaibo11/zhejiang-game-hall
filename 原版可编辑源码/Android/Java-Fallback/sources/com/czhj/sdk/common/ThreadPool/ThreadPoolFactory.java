package com.czhj.sdk.common.ThreadPool;

public class ThreadPoolFactory {
    private static final int a = 0;
    private static final java.util.concurrent.TimeUnit b = null;
    private static android.os.Handler c;

    public static class BackgroundThreadPool {
        private static com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool d;
        final int a;
        final java.util.concurrent.BlockingQueue<java.lang.Runnable> b;
        final java.util.concurrent.ExecutorService c;

        static {
                return
        }

        BackgroundThreadPool() {
                r10 = this;
                r10.<init>()
                r0 = 2
                r10.a = r0
                java.util.concurrent.LinkedBlockingQueue r1 = new java.util.concurrent.LinkedBlockingQueue
                r1.<init>()
                r10.b = r1
                java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
                int r2 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.a()
                int r4 = r2 * 2
                java.util.concurrent.TimeUnit r7 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.b()
                java.util.concurrent.BlockingQueue<java.lang.Runnable> r8 = r10.b
                com.czhj.sdk.common.ThreadPool.BackgroundThreadFactory r9 = new com.czhj.sdk.common.ThreadPool.BackgroundThreadFactory
                r9.<init>()
                r3 = 2
                r5 = 2
                r2 = r1
                r2.<init>(r3, r4, r5, r7, r8, r9)
                r10.c = r1
                return
        }

        public static com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool getInstance() {
                com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.d
                if (r0 != 0) goto L17
                java.lang.Class<com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool> r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.class
                monitor-enter(r0)
                com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r1 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.d     // Catch: java.lang.Throwable -> L14
                if (r1 != 0) goto L12
                com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r1 = new com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool     // Catch: java.lang.Throwable -> L14
                r1.<init>()     // Catch: java.lang.Throwable -> L14
                com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.d = r1     // Catch: java.lang.Throwable -> L14
            L12:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                goto L17
            L14:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                throw r1
            L17:
                com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.d
                return r0
        }

        public java.util.concurrent.ExecutorService getExecutorService() {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.c
                return r0
        }

        public void submit(java.lang.Runnable r2) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.c     // Catch: java.lang.Throwable -> L5
                r0.submit(r2)     // Catch: java.lang.Throwable -> L5
            L5:
                return
        }
    }

    static {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.a = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.b = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.c = r0
            return
    }

    public ThreadPoolFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void MainThreadRun(java.lang.Runnable r1) {
            android.os.Handler r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.c
            r0.post(r1)
            return
    }

    static int a() {
            int r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.a
            return r0
    }

    static java.util.concurrent.TimeUnit b() {
            java.util.concurrent.TimeUnit r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.b
            return r0
    }
}
