package com.bumptech.glide.load.engine.executor;

public class FifoPriorityThreadPoolExecutor extends java.util.concurrent.ThreadPoolExecutor {
    private static final java.lang.String TAG = "PriorityExecutor";
    private final java.util.concurrent.atomic.AtomicInteger ordering;
    private final com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy uncaughtThrowableStrategy;

    static class 1 {
    }

    public static class DefaultThreadFactory implements java.util.concurrent.ThreadFactory {
        int threadNum;


        public DefaultThreadFactory() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.threadNum = r0
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r4) {
                r3 = this;
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$DefaultThreadFactory$1 r0 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$DefaultThreadFactory$1
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "fifo-pool-thread-"
                r1.append(r2)
                int r2 = r3.threadNum
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r3, r4, r1)
                int r4 = r3.threadNum
                int r4 = r4 + 1
                r3.threadNum = r4
                return r0
        }
    }

    static class LoadTask<T> extends java.util.concurrent.FutureTask<T> implements java.lang.Comparable<com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.LoadTask<?>> {
        private final int order;
        private final int priority;

        public LoadTask(java.lang.Runnable r1, T r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                boolean r2 = r1 instanceof com.bumptech.glide.load.engine.executor.Prioritized
                if (r2 == 0) goto L12
                com.bumptech.glide.load.engine.executor.Prioritized r1 = (com.bumptech.glide.load.engine.executor.Prioritized) r1
                int r1 = r1.getPriority()
                r0.priority = r1
                r0.order = r3
                return
            L12:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "FifoPriorityThreadPoolExecutor must be given Runnables that implement Prioritized"
                r1.<init>(r2)
                throw r1
        }

        public int compareTo(com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.LoadTask<?> r3) {
                r2 = this;
                int r0 = r2.priority
                int r1 = r3.priority
                int r0 = r0 - r1
                if (r0 != 0) goto Lc
                int r0 = r2.order
                int r3 = r3.order
                int r0 = r0 - r3
            Lc:
                return r0
        }

        @Override
        public int compareTo(com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.LoadTask<?> r1) {
                r0 = this;
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$LoadTask r1 = (com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.LoadTask) r1
                int r1 = r0.compareTo(r1)
                return r1
        }

        public boolean equals(java.lang.Object r4) {
                r3 = this;
                boolean r0 = r4 instanceof com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.LoadTask
                r1 = 0
                if (r0 == 0) goto L14
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$LoadTask r4 = (com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.LoadTask) r4
                int r0 = r3.order
                int r2 = r4.order
                if (r0 != r2) goto L14
                int r0 = r3.priority
                int r4 = r4.priority
                if (r0 != r4) goto L14
                r1 = 1
            L14:
                return r1
        }

        public int hashCode() {
                r2 = this;
                int r0 = r2.priority
                int r0 = r0 * 31
                int r1 = r2.order
                int r0 = r0 + r1
                return r0
        }
    }

    public enum UncaughtThrowableStrategy extends java.lang.Enum<com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy> {
        private static final com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy[] $VALUES = null;
        public static final com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy IGNORE = null;
        public static final com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy LOG = null;
        public static final com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy THROW = null;



        static {
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r0 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy
                java.lang.String r1 = "IGNORE"
                r2 = 0
                r0.<init>(r1, r2)
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.IGNORE = r0
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy$1 r0 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy$1
                java.lang.String r1 = "LOG"
                r3 = 1
                r0.<init>(r1, r3)
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.LOG = r0
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy$2 r0 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy$2
                java.lang.String r1 = "THROW"
                r4 = 2
                r0.<init>(r1, r4)
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.THROW = r0
                r1 = 3
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy[] r1 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy[r1]
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r5 = com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.IGNORE
                r1[r2] = r5
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r2 = com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.LOG
                r1[r3] = r2
                r1[r4] = r0
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.$VALUES = r1
                return
        }

        UncaughtThrowableStrategy(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        UncaughtThrowableStrategy(java.lang.String r1, int r2, com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy valueOf(java.lang.String r1) {
                java.lang.Class<com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy> r0 = com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r1 = (com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy) r1
                return r1
        }

        public static com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy[] values() {
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy[] r0 = com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy[] r0 = (com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy[]) r0
                return r0
        }

        protected void handle(java.lang.Throwable r1) {
                r0 = this;
                return
        }
    }

    public FifoPriorityThreadPoolExecutor(int r2) {
            r1 = this;
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r0 = com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy.LOG
            r1.<init>(r2, r0)
            return
    }

    public FifoPriorityThreadPoolExecutor(int r9, int r10, long r11, java.util.concurrent.TimeUnit r13, java.util.concurrent.ThreadFactory r14, com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy r15) {
            r8 = this;
            java.util.concurrent.PriorityBlockingQueue r6 = new java.util.concurrent.PriorityBlockingQueue
            r6.<init>()
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r5 = r13
            r7 = r14
            r0.<init>(r1, r2, r3, r5, r6, r7)
            java.util.concurrent.atomic.AtomicInteger r9 = new java.util.concurrent.atomic.AtomicInteger
            r9.<init>()
            r8.ordering = r9
            r8.uncaughtThrowableStrategy = r15
            return
    }

    public FifoPriorityThreadPoolExecutor(int r9, com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor.UncaughtThrowableStrategy r10) {
            r8 = this;
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$DefaultThreadFactory r6 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$DefaultThreadFactory
            r6.<init>()
            r3 = 0
            r0 = r8
            r1 = r9
            r2 = r9
            r7 = r10
            r0.<init>(r1, r2, r3, r5, r6, r7)
            return
    }

    @Override
    protected void afterExecute(java.lang.Runnable r1, java.lang.Throwable r2) {
            r0 = this;
            super.afterExecute(r1, r2)
            if (r2 != 0) goto L28
            boolean r2 = r1 instanceof java.util.concurrent.Future
            if (r2 == 0) goto L28
            java.util.concurrent.Future r1 = (java.util.concurrent.Future) r1
            boolean r2 = r1.isDone()
            if (r2 == 0) goto L28
            boolean r2 = r1.isCancelled()
            if (r2 != 0) goto L28
            r1.get()     // Catch: java.util.concurrent.ExecutionException -> L1b java.lang.InterruptedException -> L22
            goto L28
        L1b:
            r1 = move-exception
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r2 = r0.uncaughtThrowableStrategy
            r2.handle(r1)
            goto L28
        L22:
            r1 = move-exception
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$UncaughtThrowableStrategy r2 = r0.uncaughtThrowableStrategy
            r2.handle(r1)
        L28:
            return
    }

    @Override
    protected <T> java.util.concurrent.RunnableFuture<T> newTaskFor(java.lang.Runnable r3, T r4) {
            r2 = this;
            com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$LoadTask r0 = new com.bumptech.glide.load.engine.executor.FifoPriorityThreadPoolExecutor$LoadTask
            java.util.concurrent.atomic.AtomicInteger r1 = r2.ordering
            int r1 = r1.getAndIncrement()
            r0.<init>(r3, r4, r1)
            return r0
    }
}
