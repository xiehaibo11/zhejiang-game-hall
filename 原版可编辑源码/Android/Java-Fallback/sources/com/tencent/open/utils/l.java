package com.tencent.open.utils;

public final class l {
    public static final java.util.concurrent.Executor a = null;
    private static java.lang.Object b;
    private static android.os.Handler c;
    private static android.os.HandlerThread d;

    static class 1 {
    }

    private static class a implements java.util.concurrent.Executor {
        final java.util.Queue<java.lang.Runnable> a;
        java.lang.Runnable b;


        private a() {
                r1 = this;
                r1.<init>()
                java.util.LinkedList r0 = new java.util.LinkedList
                r0.<init>()
                r1.a = r0
                return
        }

        a(com.tencent.open.utils.l.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        protected synchronized void a() {
                r2 = this;
                monitor-enter(r2)
                java.util.Queue<java.lang.Runnable> r0 = r2.a     // Catch: java.lang.Throwable -> L16
                java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> L16
                java.lang.Runnable r0 = (java.lang.Runnable) r0     // Catch: java.lang.Throwable -> L16
                r2.b = r0     // Catch: java.lang.Throwable -> L16
                if (r0 == 0) goto L14
                java.util.concurrent.Executor r0 = com.tencent.open.utils.l.a     // Catch: java.lang.Throwable -> L16
                java.lang.Runnable r1 = r2.b     // Catch: java.lang.Throwable -> L16
                r0.execute(r1)     // Catch: java.lang.Throwable -> L16
            L14:
                monitor-exit(r2)
                return
            L16:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
        }

        @Override
        public synchronized void execute(java.lang.Runnable r3) {
                r2 = this;
                monitor-enter(r2)
                java.util.Queue<java.lang.Runnable> r0 = r2.a     // Catch: java.lang.Throwable -> L14
                com.tencent.open.utils.l$a$1 r1 = new com.tencent.open.utils.l$a$1     // Catch: java.lang.Throwable -> L14
                r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L14
                r0.offer(r1)     // Catch: java.lang.Throwable -> L14
                java.lang.Runnable r3 = r2.b     // Catch: java.lang.Throwable -> L14
                if (r3 != 0) goto L12
                r2.a()     // Catch: java.lang.Throwable -> L14
            L12:
                monitor-exit(r2)
                return
            L14:
                r3 = move-exception
                monitor-exit(r2)
                throw r3
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.tencent.open.utils.l.b = r0
            java.util.concurrent.Executor r0 = c()
            com.tencent.open.utils.l.a = r0
            return
    }

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.os.Handler a() {
            android.os.Handler r0 = com.tencent.open.utils.l.c
            if (r0 != 0) goto L25
            java.lang.Class<com.tencent.open.utils.l> r0 = com.tencent.open.utils.l.class
            monitor-enter(r0)
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "SDK_SUB"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            com.tencent.open.utils.l.d = r1     // Catch: java.lang.Throwable -> L22
            r1.start()     // Catch: java.lang.Throwable -> L22
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L22
            android.os.HandlerThread r2 = com.tencent.open.utils.l.d     // Catch: java.lang.Throwable -> L22
            android.os.Looper r2 = r2.getLooper()     // Catch: java.lang.Throwable -> L22
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            com.tencent.open.utils.l.c = r1     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            goto L25
        L22:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r1
        L25:
            android.os.Handler r0 = com.tencent.open.utils.l.c
            return r0
    }

    public static void a(java.lang.Runnable r1) {
            java.util.concurrent.Executor r0 = com.tencent.open.utils.l.a     // Catch: java.util.concurrent.RejectedExecutionException -> L5
            r0.execute(r1)     // Catch: java.util.concurrent.RejectedExecutionException -> L5
        L5:
            return
    }

    public static java.util.concurrent.Executor b() {
            com.tencent.open.utils.l$a r0 = new com.tencent.open.utils.l$a
            r1 = 0
            r0.<init>(r1)
            return r0
    }

    public static void b(java.lang.Runnable r1) {
            android.os.Handler r0 = a()
            r0.post(r1)
            return
    }

    private static java.util.concurrent.Executor c() {
            java.util.concurrent.ThreadPoolExecutor r7 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            r1 = 0
            r2 = 3
            r3 = 10
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            return r7
    }
}
