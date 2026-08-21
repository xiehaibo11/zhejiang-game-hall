package com.bianfeng.datafunsdk;

public final class t {
    public java.util.concurrent.ThreadPoolExecutor a;
    public java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> b;
    public com.bianfeng.datafunsdk.a c;
    public com.bianfeng.datafunsdk.r d;

    public class a implements java.util.concurrent.RejectedExecutionHandler {
        public final com.bianfeng.datafunsdk.t a;

        public a(com.bianfeng.datafunsdk.t r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void rejectedExecution(java.lang.Runnable r1, java.util.concurrent.ThreadPoolExecutor r2) {
                r0 = this;
                com.bianfeng.datafunsdk.t r2 = r0.a
                java.util.concurrent.LinkedBlockingQueue r2 = com.bianfeng.datafunsdk.t.a(r2)
                r2.add(r1)
                return
        }
    }

    public class b implements java.lang.Runnable {
        public final com.bianfeng.datafunsdk.t a;

        public b(com.bianfeng.datafunsdk.t r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.datafunsdk.t r0 = r1.a
                com.bianfeng.datafunsdk.t.b(r0)
                r0 = 0
                throw r0
        }
    }

    public class c implements com.bianfeng.datafunsdk.r {
        public final com.bianfeng.datafunsdk.t a;

        public c(com.bianfeng.datafunsdk.t r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.t r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.t.c(r0)
                r0.d(r2)
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.o r2) {
                r1 = this;
                com.bianfeng.datafunsdk.t r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.t.c(r0)
                r0.a(r2)
                return
        }

        @Override
        public void b(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.t r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.t.c(r0)
                r0.e(r2)
                return
        }
    }

    public t() {
            r9 = this;
            r9.<init>()
            r0 = 0
            r9.a = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r0.<init>()
            r9.b = r0
            com.bianfeng.datafunsdk.t$c r0 = new com.bianfeng.datafunsdk.t$c
            r0.<init>(r9)
            r9.d = r0
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r2 = r0 + 1
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r0 = r0 * 2
            int r3 = r0 + 1
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            long r4 = (long) r3
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r7 = r9.b
            com.bianfeng.datafunsdk.t$a r8 = new com.bianfeng.datafunsdk.t$a
            r8.<init>(r9)
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.a = r0
            com.bianfeng.datafunsdk.t$b r1 = new com.bianfeng.datafunsdk.t$b
            r1.<init>(r9)
            r0.execute(r1)
            return
    }

    public static java.util.concurrent.LinkedBlockingQueue a(com.bianfeng.datafunsdk.t r0) {
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r0.b
            return r0
    }

    public static void b(com.bianfeng.datafunsdk.t r0) {
            r0.a()
            r0 = 0
            throw r0
    }

    public static com.bianfeng.datafunsdk.a c(com.bianfeng.datafunsdk.t r0) {
            com.bianfeng.datafunsdk.a r0 = r0.c
            return r0
    }

    public final void a() {
            r3 = this;
        L0:
            java.util.concurrent.ThreadPoolExecutor r0 = r3.a     // Catch: java.lang.InterruptedException -> Le
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r1 = r3.b     // Catch: java.lang.InterruptedException -> Le
            java.lang.Object r1 = r1.take()     // Catch: java.lang.InterruptedException -> Le
            java.lang.Runnable r1 = (java.lang.Runnable) r1     // Catch: java.lang.InterruptedException -> Le
            r0.execute(r1)     // Catch: java.lang.InterruptedException -> Le
            goto L0
        Le:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "测试---"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            goto L0
    }

    public void a(com.bianfeng.datafunsdk.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(com.bianfeng.datafunsdk.bean.DataFunBean r4) {
            r3 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r3.b     // Catch: java.lang.Exception -> Ld
            com.bianfeng.datafunsdk.o r1 = new com.bianfeng.datafunsdk.o     // Catch: java.lang.Exception -> Ld
            com.bianfeng.datafunsdk.r r2 = r3.d     // Catch: java.lang.Exception -> Ld
            r1.<init>(r4, r2)     // Catch: java.lang.Exception -> Ld
            r0.add(r1)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r4 = move-exception
            r4.printStackTrace()
        L11:
            return
    }

    public void a(com.bianfeng.datafunsdk.o r2) {
            r1 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r1.b
            r0.add(r2)
            return
    }

    public boolean b() {
            r1 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r1.b
            boolean r0 = r0.isEmpty()
            return r0
    }
}
