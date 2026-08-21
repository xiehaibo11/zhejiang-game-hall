package com.huawei.hms.framework.common;

import java.util.Collection;
import java.util.List;
import java.util.concurrent.AbstractExecutorService;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Future;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.TimeUnit;

public class ExecutorsEnhance {

    private static class DelegatedExecutorService extends AbstractExecutorService {
        private final ExecutorService e;

        DelegatedExecutorService(ExecutorService executorService) {
            this.e = executorService;
        }

        @Override
        public boolean awaitTermination(long j, TimeUnit timeUnit) {
            return this.e.awaitTermination(j, timeUnit);
        }

        @Override
        public void execute(Runnable runnable) {
            this.e.execute(runnable);
        }

        @Override
        public <T> List<Future<T>> invokeAll(Collection<? extends Callable<T>> collection) {
            return this.e.invokeAll(collection);
        }

        @Override
        public <T> List<Future<T>> invokeAll(Collection<? extends Callable<T>> collection, long j, TimeUnit timeUnit) {
            return this.e.invokeAll(collection, j, timeUnit);
        }

        @Override
        public <T> T invokeAny(Collection<? extends Callable<T>> collection) {
            return (T) this.e.invokeAny(collection);
        }

        @Override
        public <T> T invokeAny(Collection<? extends Callable<T>> collection, long j, TimeUnit timeUnit) {
            return (T) this.e.invokeAny(collection, j, timeUnit);
        }

        @Override
        public boolean isShutdown() {
            return this.e.isShutdown();
        }

        @Override
        public boolean isTerminated() {
            return this.e.isTerminated();
        }

        @Override
        public void shutdown() {
            this.e.shutdown();
        }

        @Override
        public List<Runnable> shutdownNow() {
            return this.e.shutdownNow();
        }

        @Override
        public Future<?> submit(Runnable runnable) {
            return this.e.submit(runnable);
        }

        @Override
        public <T> Future<T> submit(Runnable runnable, T t) {
            return this.e.submit(runnable, t);
        }

        @Override
        public <T> Future<T> submit(Callable<T> callable) {
            return this.e.submit(callable);
        }
    }

    private static class FinalizableDelegatedExecutorService extends DelegatedExecutorService {
        FinalizableDelegatedExecutorService(ExecutorService executorService) {
            super(executorService);
        }

        protected void finalize() {
            super.shutdown();
        }
    }

    public static ExecutorService newSingleThreadExecutor(ThreadFactory threadFactory) {
        return new FinalizableDelegatedExecutorService(new ThreadPoolExcutorEnhance(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(), threadFactory));
    }
}
