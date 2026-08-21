package com.bianfeng.datafunsdk;

public class k {
    public java.util.concurrent.ThreadPoolExecutor a;
    public java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> b;
    public com.bianfeng.datafunsdk.a c;
    public com.bianfeng.datafunsdk.e d;

    public class a implements java.util.concurrent.RejectedExecutionHandler {
        public final com.bianfeng.datafunsdk.k a;

        public a(com.bianfeng.datafunsdk.k r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void rejectedExecution(java.lang.Runnable r1, java.util.concurrent.ThreadPoolExecutor r2) {
                r0 = this;
                com.bianfeng.datafunsdk.k r2 = r0.a
                java.util.concurrent.LinkedBlockingQueue r2 = com.bianfeng.datafunsdk.k.a(r2)
                r2.add(r1)
                return
        }
    }

    public class b implements java.lang.Runnable {
        public final com.bianfeng.datafunsdk.k a;

        public b(com.bianfeng.datafunsdk.k r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L7
                com.bianfeng.datafunsdk.k.b(r0)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L7
                r0 = 0
                throw r0
            L7:
                r0 = move-exception
                r0.printStackTrace()
                return
        }
    }

    public class c implements com.bianfeng.datafunsdk.e {
        public final com.bianfeng.datafunsdk.k a;

        public c(com.bianfeng.datafunsdk.k r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.b()
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.a(r2)
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.f r2) {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.a(r2)
                return
        }

        @Override
        public void a(java.util.List<com.bianfeng.datafunsdk.bean.DataFunBean> r2) {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.a(r2)
                return
        }

        @Override
        public void b(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.c(r2)
                return
        }

        @Override
        public void c(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                java.lang.String r0 = "onInsertFail 失败"
                com.bianfeng.datafunsdk.x.a(r0)
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.b(r2)
                return
        }

        @Override
        public void d(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.k r0 = r1.a
                com.bianfeng.datafunsdk.a r0 = com.bianfeng.datafunsdk.k.c(r0)
                r0.f(r2)
                return
        }
    }

    public k() {
            r9 = this;
            r9.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r0.<init>()
            r9.b = r0
            com.bianfeng.datafunsdk.k$c r0 = new com.bianfeng.datafunsdk.k$c
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
            com.bianfeng.datafunsdk.k$a r8 = new com.bianfeng.datafunsdk.k$a
            r8.<init>(r9)
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.a = r0
            com.bianfeng.datafunsdk.k$b r1 = new com.bianfeng.datafunsdk.k$b
            r1.<init>(r9)
            r0.execute(r1)
            return
    }

    public static java.util.concurrent.LinkedBlockingQueue a(com.bianfeng.datafunsdk.k r0) {
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r0.b
            return r0
    }

    public static void b(com.bianfeng.datafunsdk.k r0) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r0.d()
            r0 = 0
            throw r0
    }

    public static com.bianfeng.datafunsdk.a c(com.bianfeng.datafunsdk.k r0) {
            com.bianfeng.datafunsdk.a r0 = r0.c
            return r0
    }

    public void a() {
            r2 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r2.b
            com.bianfeng.datafunsdk.h r1 = new com.bianfeng.datafunsdk.h
            r1.<init>()
            r0.add(r1)
            return
    }

    public void a(com.bianfeng.datafunsdk.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(com.bianfeng.datafunsdk.bean.DataFunBean r3) {
            r2 = this;
            java.lang.String r0 = "PostDatalib 开始插入数据--addDbByteData"
            com.bianfeng.datafunsdk.x.a(r0)
            com.bianfeng.datafunsdk.i r0 = new com.bianfeng.datafunsdk.i
            com.bianfeng.datafunsdk.e r1 = r2.d
            r0.<init>(r3, r1)
            r0.run()
            return
    }

    public void a(com.bianfeng.datafunsdk.f r2) {
            r1 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r1.b
            r0.add(r2)
            return
    }

    public void b(com.bianfeng.datafunsdk.bean.DataFunBean r4) {
            r3 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r3.b
            com.bianfeng.datafunsdk.f r1 = new com.bianfeng.datafunsdk.f
            com.bianfeng.datafunsdk.e r2 = r3.d
            r1.<init>(r4, r2)
            r0.add(r1)
            return
    }

    public boolean b() {
            r1 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r1.b
            boolean r0 = r0.isEmpty()
            return r0
    }

    public void c() {
            r3 = this;
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r3.b
            com.bianfeng.datafunsdk.j r1 = new com.bianfeng.datafunsdk.j
            com.bianfeng.datafunsdk.e r2 = r3.d
            r1.<init>(r2)
            r0.add(r1)
            return
    }

    public final void d() throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
        L0:
            java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r2.b     // Catch: java.lang.Exception -> Le
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Exception -> Le
            java.lang.Runnable r0 = (java.lang.Runnable) r0     // Catch: java.lang.Exception -> Le
            java.util.concurrent.ThreadPoolExecutor r1 = r2.a     // Catch: java.lang.Exception -> Le
            r1.execute(r0)     // Catch: java.lang.Exception -> Le
            goto L0
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }
}
