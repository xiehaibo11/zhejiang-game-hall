package com.huawei.hms.framework.common;

public class ExecutorsEnhance {

    private static class DelegatedExecutorService extends java.util.concurrent.AbstractExecutorService {
        private final java.util.concurrent.ExecutorService e;

        DelegatedExecutorService(java.util.concurrent.ExecutorService r1) {
                r0 = this;
                r0.<init>()
                r0.e = r1
                return
        }

        @Override
        public boolean awaitTermination(long r2, java.util.concurrent.TimeUnit r4) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                boolean r2 = r0.awaitTermination(r2, r4)
                return r2
        }

        @Override
        public void execute(java.lang.Runnable r2) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                r0.execute(r2)
                return
        }

        @Override
        public <T> java.util.List<java.util.concurrent.Future<T>> invokeAll(java.util.Collection<? extends java.util.concurrent.Callable<T>> r2) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.util.List r2 = r0.invokeAll(r2)
                return r2
        }

        @Override
        public <T> java.util.List<java.util.concurrent.Future<T>> invokeAll(java.util.Collection<? extends java.util.concurrent.Callable<T>> r2, long r3, java.util.concurrent.TimeUnit r5) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.util.List r2 = r0.invokeAll(r2, r3, r5)
                return r2
        }

        @Override
        public <T> T invokeAny(java.util.Collection<? extends java.util.concurrent.Callable<T>> r2) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.lang.Object r2 = r0.invokeAny(r2)
                return r2
        }

        @Override
        public <T> T invokeAny(java.util.Collection<? extends java.util.concurrent.Callable<T>> r2, long r3, java.util.concurrent.TimeUnit r5) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.lang.Object r2 = r0.invokeAny(r2, r3, r5)
                return r2
        }

        @Override
        public boolean isShutdown() {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                boolean r0 = r0.isShutdown()
                return r0
        }

        @Override
        public boolean isTerminated() {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                boolean r0 = r0.isTerminated()
                return r0
        }

        @Override
        public void shutdown() {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                r0.shutdown()
                return
        }

        @Override
        public java.util.List<java.lang.Runnable> shutdownNow() {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.util.List r0 = r0.shutdownNow()
                return r0
        }

        @Override
        public java.util.concurrent.Future<?> submit(java.lang.Runnable r2) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.util.concurrent.Future r2 = r0.submit(r2)
                return r2
        }

        @Override
        public <T> java.util.concurrent.Future<T> submit(java.lang.Runnable r2, T r3) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.util.concurrent.Future r2 = r0.submit(r2, r3)
                return r2
        }

        @Override
        public <T> java.util.concurrent.Future<T> submit(java.util.concurrent.Callable<T> r2) {
                r1 = this;
                java.util.concurrent.ExecutorService r0 = r1.e
                java.util.concurrent.Future r2 = r0.submit(r2)
                return r2
        }
    }

    private static class FinalizableDelegatedExecutorService extends com.huawei.hms.framework.common.ExecutorsEnhance.DelegatedExecutorService {
        FinalizableDelegatedExecutorService(java.util.concurrent.ExecutorService r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        protected void finalize() {
                r0 = this;
                super.shutdown()
                return
        }
    }

    public ExecutorsEnhance() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.concurrent.ExecutorService newSingleThreadExecutor(java.util.concurrent.ThreadFactory r10) {
            com.huawei.hms.framework.common.ExecutorsEnhance$FinalizableDelegatedExecutorService r0 = new com.huawei.hms.framework.common.ExecutorsEnhance$FinalizableDelegatedExecutorService
            com.huawei.hms.framework.common.ThreadPoolExcutorEnhance r9 = new com.huawei.hms.framework.common.ThreadPoolExcutorEnhance
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r2 = 1
            r3 = 1
            r4 = 0
            r1 = r9
            r8 = r10
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r0.<init>(r9)
            return r0
    }
}
