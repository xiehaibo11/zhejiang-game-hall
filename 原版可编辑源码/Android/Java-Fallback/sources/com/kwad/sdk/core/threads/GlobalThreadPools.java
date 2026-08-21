package com.kwad.sdk.core.threads;

public final class GlobalThreadPools {
    private static java.lang.String TAG;
    private static final int ava = 0;
    private static final int avb = 0;
    private static final int avc = 0;
    private static java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> avd;
    private static java.util.Map<java.lang.String, java.lang.Integer> ave;




    static class 4 {
        static final int[] avf = null;

        static {
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType[] r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.core.threads.GlobalThreadPools.4.avf = r0
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.core.threads.GlobalThreadPools.4.avf     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.sdk.core.threads.GlobalThreadPools.4.avf     // Catch: java.lang.NoSuchFieldError -> L28
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    enum ParamType extends java.lang.Enum<com.kwad.sdk.core.threads.GlobalThreadPools.ParamType> {
        private static final com.kwad.sdk.core.threads.GlobalThreadPools.ParamType[] $VALUES = null;
        public static final com.kwad.sdk.core.threads.GlobalThreadPools.ParamType CORE = null;
        public static final com.kwad.sdk.core.threads.GlobalThreadPools.ParamType KEEP_ALIVE = null;
        public static final com.kwad.sdk.core.threads.GlobalThreadPools.ParamType MAX = null;

        static {
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$ParamType
                r1 = 0
                java.lang.String r2 = "CORE"
                r0.<init>(r2, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE = r0
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$ParamType
                r2 = 1
                java.lang.String r3 = "MAX"
                r0.<init>(r3, r2)
                com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX = r0
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$ParamType
                r3 = 2
                java.lang.String r4 = "KEEP_ALIVE"
                r0.<init>(r4, r3)
                com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE = r0
                r4 = 3
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType[] r4 = new com.kwad.sdk.core.threads.GlobalThreadPools.ParamType[r4]
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r5 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                r4[r1] = r5
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                r4[r2] = r1
                r4[r3] = r0
                com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.$VALUES = r4
                return
        }

        ParamType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.core.threads.GlobalThreadPools.ParamType valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.threads.GlobalThreadPools$ParamType> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = (com.kwad.sdk.core.threads.GlobalThreadPools.ParamType) r1
                return r1
        }

        public static com.kwad.sdk.core.threads.GlobalThreadPools.ParamType[] values() {
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType[] r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType[] r0 = (com.kwad.sdk.core.threads.GlobalThreadPools.ParamType[]) r0
                return r0
        }
    }

    interface a {
        java.util.concurrent.ExecutorService De();
    }

    static class b implements com.kwad.sdk.core.threads.GlobalThreadPools.a {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.concurrent.ExecutorService De() {
                r10 = this;
                com.kwad.sdk.core.threads.GlobalThreadPools$d r7 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
                r0 = 5
                java.lang.String r1 = "diskAndHttp"
                r7.<init>(r0, r1)
                com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                int r1 = com.kwad.sdk.core.threads.GlobalThreadPools.Dc()
                java.lang.String r2 = "httpIO"
                int r1 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                int r3 = com.kwad.sdk.core.threads.GlobalThreadPools.Dd()
                int r3 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r3)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
                r4 = 60
                int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r4)
                long r4 = (long) r0
                java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
                java.util.concurrent.LinkedBlockingQueue r9 = new java.util.concurrent.LinkedBlockingQueue
                r9.<init>()
                r0 = r8
                r2 = r3
                r3 = r4
                r5 = r6
                r6 = r9
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }
    }

    static class c implements com.kwad.sdk.core.threads.GlobalThreadPools.a {
        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.concurrent.ExecutorService De() {
                r11 = this;
                com.kwad.sdk.core.threads.GlobalThreadPools$d r7 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
                r0 = 5
                java.lang.String r1 = "uil-pool-d-"
                r7.<init>(r0, r1)
                java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
                r8.<init>()
                com.kwad.sdk.core.threads.a.b r9 = new com.kwad.sdk.core.threads.a.b
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                java.lang.String r1 = "imageLoaderDistributor"
                r2 = 0
                int r2 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r1, r0, r2)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                r3 = 10
                int r3 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r1, r0, r3)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
                r4 = 60
                int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r1, r0, r4)
                long r4 = (long) r0
                java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
                java.util.concurrent.SynchronousQueue r10 = new java.util.concurrent.SynchronousQueue
                r10.<init>()
                r0 = r9
                r1 = r2
                r2 = r3
                r3 = r4
                r5 = r6
                r6 = r10
                r0.<init>(r1, r2, r3, r5, r6, r7, r8)
                return r9
        }
    }

    public static class d implements java.util.concurrent.ThreadFactory {
        private static final java.util.concurrent.atomic.AtomicInteger poolNumber = null;
        private final java.lang.ThreadGroup group;
        private final java.lang.String namePrefix;
        private final java.util.concurrent.atomic.AtomicInteger threadNumber;
        private final int threadPriority;

        static {
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                com.kwad.sdk.core.threads.GlobalThreadPools.d.poolNumber = r0
                return
        }

        public d(int r3, java.lang.String r4) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.threadNumber = r0
                r2.threadPriority = r3
                java.lang.Thread r3 = java.lang.Thread.currentThread()
                java.lang.ThreadGroup r3 = r3.getThreadGroup()
                r2.group = r3
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                java.lang.String r0 = "ksad-"
                r3.<init>(r0)
                r3.append(r4)
                java.util.concurrent.atomic.AtomicInteger r4 = com.kwad.sdk.core.threads.GlobalThreadPools.d.poolNumber
                int r4 = r4.getAndIncrement()
                r3.append(r4)
                java.lang.String r4 = "-thread-"
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                r2.namePrefix = r3
                return
        }

        @Override
        public final java.lang.Thread newThread(java.lang.Runnable r8) {
                r7 = this;
                java.lang.Thread r6 = new java.lang.Thread
                java.lang.ThreadGroup r1 = r7.group
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r7.namePrefix
                r0.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.threadNumber
                int r2 = r2.getAndIncrement()
                r0.append(r2)
                java.lang.String r3 = r0.toString()
                r4 = 0
                r0 = r6
                r2 = r8
                r0.<init>(r1, r2, r3, r4)
                boolean r8 = r6.isDaemon()
                if (r8 == 0) goto L2c
                r8 = 0
                r6.setDaemon(r8)
            L2c:
                int r8 = r7.threadPriority
                r6.setPriority(r8)
                return r6
        }
    }

    static class e implements com.kwad.sdk.core.threads.GlobalThreadPools.a {
        private e() {
                r0 = this;
                r0.<init>()
                return
        }

        e(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.concurrent.ExecutorService De() {
                r11 = this;
                java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
                r6.<init>()
                com.kwad.sdk.core.threads.GlobalThreadPools$d r7 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
                r0 = 5
                java.lang.String r1 = "uil-pool-"
                r7.<init>(r0, r1)
                com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                r1 = 3
                java.lang.String r2 = "ksImageLoaderTask"
                int r3 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                int r4 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
                r1 = 60
                int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                long r9 = (long) r0
                java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
                r0 = r8
                r1 = r3
                r2 = r4
                r3 = r9
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }
    }

    static class f implements com.kwad.sdk.core.threads.GlobalThreadPools.a {
        private f() {
                r0 = this;
                r0.<init>()
                return
        }

        f(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.concurrent.ExecutorService De() {
                r9 = this;
                com.kwad.sdk.core.threads.GlobalThreadPools$d r7 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
                java.lang.String r0 = "lruDiskCache"
                r1 = 5
                r7.<init>(r1, r0)
                com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                r2 = 0
                int r1 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r0, r1, r2)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r2 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                r3 = 1
                int r2 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r0, r2, r3)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r3 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
                r4 = 60
                int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r0, r3, r4)
                long r3 = (long) r0
                java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
                java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
                r6.<init>()
                r0 = r8
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }
    }

    static class g implements com.kwad.sdk.core.threads.GlobalThreadPools.a {
        private g() {
                r0 = this;
                r0.<init>()
                return
        }

        g(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.concurrent.ExecutorService De() {
                r11 = this;
                com.kwad.sdk.core.threads.GlobalThreadPools$d r7 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
                r0 = 3
                java.lang.String r1 = "report-"
                r7.<init>(r0, r1)
                com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                r1 = 1
                java.lang.String r2 = "report"
                int r3 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                int r4 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
                r1 = 0
                int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r2, r0, r1)
                long r5 = (long) r0
                java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.SECONDS
                java.util.concurrent.LinkedBlockingQueue r10 = new java.util.concurrent.LinkedBlockingQueue
                r10.<init>()
                r0 = r8
                r1 = r3
                r2 = r4
                r3 = r5
                r5 = r9
                r6 = r10
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }
    }

    static class h implements com.kwad.sdk.core.threads.GlobalThreadPools.a {
        private h() {
                r0 = this;
                r0.<init>()
                return
        }

        h(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.concurrent.ExecutorService De() {
                r9 = this;
                com.kwad.sdk.core.threads.GlobalThreadPools$d r7 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
                java.lang.String r0 = "videoCache"
                r1 = 5
                r7.<init>(r1, r0)
                com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
                r2 = 3
                int r1 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r0, r1, r2)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r3 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
                int r2 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r0, r3, r2)
                com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r3 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
                r4 = 60
                int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.b(r0, r3, r4)
                long r3 = (long) r0
                java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
                java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
                r6.<init>()
                r0 = r8
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }
    }

    static {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            com.kwad.sdk.core.threads.GlobalThreadPools.ava = r0
            if (r0 <= 0) goto Lf
            int r0 = r0 + 4
            goto L11
        Lf:
            r0 = 9
        L11:
            com.kwad.sdk.core.threads.GlobalThreadPools.avb = r0
            com.kwad.sdk.core.threads.GlobalThreadPools.avc = r0
            java.lang.String r0 = "GlobalThreadPools"
            com.kwad.sdk.core.threads.GlobalThreadPools.TAG = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.threads.GlobalThreadPools.avd = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.kwad.sdk.core.threads.GlobalThreadPools.ave = r0
            return
    }

    public static void CP() {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L71
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r2 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.lang.Object r2 = r2.get(r1)
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2
            java.lang.Object r2 = r2.get()
            boolean r2 = r2 instanceof java.util.concurrent.ThreadPoolExecutor
            if (r2 == 0) goto La
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r2 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.lang.Object r2 = r2.get(r1)
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2
            java.lang.Object r2 = r2.get()
            java.util.concurrent.ThreadPoolExecutor r2 = (java.util.concurrent.ThreadPoolExecutor) r2
            int r3 = r2.getCorePoolSize()
            int r4 = r2.getMaximumPoolSize()
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            long r5 = r2.getKeepAliveTime(r5)
            int r5 = (int) r5
            com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r6 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
            int r6 = a(r1, r6, r3)
            com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r7 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
            int r7 = a(r1, r7, r4)
            com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r8 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
            int r1 = a(r1, r8, r5)
            long r8 = (long) r1
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
            r2.setKeepAliveTime(r8, r1)
            if (r3 != r6) goto L5f
            if (r4 == r7) goto La
        L5f:
            if (r3 > r7) goto L68
            r2.setMaximumPoolSize(r7)
            r2.setCorePoolSize(r6)
            goto La
        L68:
            if (r6 > r4) goto La
            r2.setCorePoolSize(r6)
            r2.setMaximumPoolSize(r7)
            goto La
        L71:
            return
    }

    public static java.util.concurrent.ExecutorService CQ() {
            com.kwad.sdk.core.threads.GlobalThreadPools$f r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$f
            r1 = 0
            r0.<init>(r1)
            java.lang.String r1 = "lruDiskCache"
            java.util.concurrent.ExecutorService r0 = a(r1, r0)
            return r0
    }

    public static synchronized java.util.concurrent.ExecutorService CR() {
            java.lang.Class<com.kwad.sdk.core.threads.GlobalThreadPools> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.class
            monitor-enter(r0)
            java.lang.String r1 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = "forKsImageLoaderTask"
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "ksImageLoaderTask"
            com.kwad.sdk.core.threads.GlobalThreadPools$e r2 = new com.kwad.sdk.core.threads.GlobalThreadPools$e     // Catch: java.lang.Throwable -> L18
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L18
            java.util.concurrent.ExecutorService r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized java.util.concurrent.ExecutorService CS() {
            java.lang.Class<com.kwad.sdk.core.threads.GlobalThreadPools> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.class
            monitor-enter(r0)
            java.lang.String r1 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = "forKsImageLoaderCachedImages"
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "ksImageLoaderTask"
            com.kwad.sdk.core.threads.GlobalThreadPools$e r2 = new com.kwad.sdk.core.threads.GlobalThreadPools$e     // Catch: java.lang.Throwable -> L18
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L18
            java.util.concurrent.ExecutorService r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.util.concurrent.ExecutorService CT() {
            java.lang.String r0 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG
            java.lang.String r1 = "forKsImageLoaderTaskDistributor"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.threads.GlobalThreadPools$c r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$c
            r1 = 0
            r0.<init>(r1)
            java.lang.String r1 = "imageLoaderDistributor"
            java.util.concurrent.ExecutorService r0 = a(r1, r0)
            return r0
    }

    public static synchronized java.util.concurrent.ExecutorService CU() {
            java.lang.Class<com.kwad.sdk.core.threads.GlobalThreadPools> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.class
            monitor-enter(r0)
            java.lang.String r1 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = "forBaseBatchReporter"
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "report"
            com.kwad.sdk.core.threads.GlobalThreadPools$g r2 = new com.kwad.sdk.core.threads.GlobalThreadPools$g     // Catch: java.lang.Throwable -> L18
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L18
            java.util.concurrent.ExecutorService r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized java.util.concurrent.ExecutorService CV() {
            java.lang.Class<com.kwad.sdk.core.threads.GlobalThreadPools> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.class
            monitor-enter(r0)
            java.lang.String r1 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = "forAdReportManager"
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "report"
            com.kwad.sdk.core.threads.GlobalThreadPools$g r2 = new com.kwad.sdk.core.threads.GlobalThreadPools$g     // Catch: java.lang.Throwable -> L18
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L18
            java.util.concurrent.ExecutorService r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.util.concurrent.ExecutorService CW() {
            java.lang.String r0 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG
            java.lang.String r1 = "forBaseNetwork"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.threads.GlobalThreadPools$b r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$b
            r1 = 0
            r0.<init>(r1)
            java.lang.String r1 = "httpIO"
            java.util.concurrent.ExecutorService r0 = a(r1, r0)
            return r0
    }

    public static java.util.concurrent.ExecutorService CX() {
            java.lang.String r0 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG
            java.lang.String r1 = "forHttpCacheServer"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.threads.GlobalThreadPools$h r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$h
            r1 = 0
            r0.<init>(r1)
            java.lang.String r1 = "videoCache"
            java.util.concurrent.ExecutorService r0 = a(r1, r0)
            return r0
    }

    public static java.util.concurrent.ExecutorService CY() {
            java.lang.String r0 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG
            java.lang.String r1 = "forAppStatusHelper"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.threads.a.b r0 = new com.kwad.sdk.core.threads.a.b
            com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r1 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.CORE
            r2 = 1
            java.lang.String r3 = "lruDiskCache"
            int r1 = a(r3, r1, r2)
            com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r4 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.MAX
            int r4 = a(r3, r4, r2)
            com.kwad.sdk.core.threads.GlobalThreadPools$ParamType r2 = com.kwad.sdk.core.threads.GlobalThreadPools.ParamType.KEEP_ALIVE
            r5 = 0
            int r2 = a(r3, r2, r5)
            long r5 = (long) r2
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue
            r8.<init>()
            com.kwad.sdk.core.threads.GlobalThreadPools$1 r9 = new com.kwad.sdk.core.threads.GlobalThreadPools$1
            r9.<init>()
            r2 = r0
            r3 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)
            return r0
    }

    public static java.util.concurrent.ExecutorService CZ() {
            java.lang.String r0 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG
            java.lang.String r1 = "forAsync"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.threads.GlobalThreadPools$2 r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$2
            r0.<init>()
            java.lang.String r1 = "async"
            java.util.concurrent.ExecutorService r0 = a(r1, r0)
            return r0
    }

    public static java.util.concurrent.ScheduledExecutorService Da() {
            java.lang.String r0 = com.kwad.sdk.core.threads.GlobalThreadPools.TAG
            java.lang.String r1 = "forAsyncSchedule"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.threads.GlobalThreadPools$3 r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$3
            r0.<init>()
            java.lang.String r1 = "async-schedule"
            java.util.concurrent.ExecutorService r0 = a(r1, r0)
            boolean r2 = r0 instanceof java.util.concurrent.ScheduledExecutorService
            if (r2 == 0) goto L19
            java.util.concurrent.ScheduledExecutorService r0 = (java.util.concurrent.ScheduledExecutorService) r0
            return r0
        L19:
            com.kwad.sdk.core.threads.GlobalThreadPools$d r0 = new com.kwad.sdk.core.threads.GlobalThreadPools$d
            r2 = 5
            r0.<init>(r2, r1)
            com.kwad.sdk.core.threads.a.a r1 = new com.kwad.sdk.core.threads.a.a
            r2 = 1
            r1.<init>(r2, r0)
            return r1
    }

    public static java.util.Set<java.lang.String> Db() {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.util.Set r0 = r0.keySet()
            return r0
    }

    static int Dc() {
            int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avb
            return r0
    }

    static int Dd() {
            int r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avc
            return r0
    }

    private static int a(java.lang.String r1, com.kwad.sdk.core.threads.GlobalThreadPools.ParamType r2, int r3) {
            int[] r0 = com.kwad.sdk.core.threads.GlobalThreadPools.4.avf
            int r2 = r2.ordinal()
            r2 = r0[r2]
            r0 = 1
            if (r2 == r0) goto L28
            r0 = 2
            if (r2 == r0) goto L1d
            r0 = 3
            if (r2 == r0) goto L12
            return r3
        L12:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "_keep_alive"
            goto L32
        L1d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "_max"
            goto L32
        L28:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "_core"
        L32:
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.kwad.sdk.core.threads.GlobalThreadPools.ave
            boolean r2 = r2.containsKey(r1)
            if (r2 == 0) goto L56
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.kwad.sdk.core.threads.GlobalThreadPools.ave
            java.lang.Object r2 = r2.get(r1)
            if (r2 == 0) goto L56
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.kwad.sdk.core.threads.GlobalThreadPools.ave
            java.lang.Object r1 = r2.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            return r1
        L56:
            return r3
    }

    private static java.util.concurrent.ExecutorService a(java.lang.String r2, com.kwad.sdk.core.threads.GlobalThreadPools.a r3) {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.lang.Object r0 = r0.get(r2)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            if (r0 == 0) goto L18
            java.lang.Object r1 = r0.get()
            if (r1 != 0) goto L11
            goto L18
        L11:
            java.lang.Object r2 = r0.get()
            java.util.concurrent.ExecutorService r2 = (java.util.concurrent.ExecutorService) r2
            return r2
        L18:
            java.util.concurrent.ExecutorService r3 = r3.De()
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.put(r2, r1)
            return r3
    }

    static int b(java.lang.String r0, com.kwad.sdk.core.threads.GlobalThreadPools.ParamType r1, int r2) {
            int r0 = a(r0, r1, r2)
            return r0
    }

    public static java.util.concurrent.ExecutorService dF(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<java.util.concurrent.ExecutorService>> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.avd
            java.lang.Object r1 = r0.get(r1)
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            java.util.concurrent.ExecutorService r1 = (java.util.concurrent.ExecutorService) r1
            return r1
        L1f:
            r1 = 0
            return r1
    }

    public static void n(java.lang.String r1, int r2) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.core.threads.GlobalThreadPools.ave
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r1, r2)
            return
    }
}
