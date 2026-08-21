package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class ImmediateSchedulingStrategy implements cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy {
    private final java.util.concurrent.ExecutorService executor;

    public ImmediateSchedulingStrategy(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9) {
            r8 = this;
            java.util.concurrent.ThreadPoolExecutor r7 = new java.util.concurrent.ThreadPoolExecutor
            int r1 = r9.getAsynchronousWorkersCore()
            int r2 = r9.getAsynchronousWorkersMax()
            int r0 = r9.getAsynchronousWorkerIdleLifetimeSecs()
            long r3 = (long) r0
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.ArrayBlockingQueue r6 = new java.util.concurrent.ArrayBlockingQueue
            int r9 = r9.getRevalidationQueueSize()
            r6.<init>(r9)
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            r8.<init>(r7)
            return
    }

    ImmediateSchedulingStrategy(java.util.concurrent.ExecutorService r1) {
            r0 = this;
            r0.<init>()
            r0.executor = r1
            return
    }

    void awaitTermination(long r2, java.util.concurrent.TimeUnit r4) throws java.lang.InterruptedException {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.executor
            r0.awaitTermination(r2, r4)
            return
    }

    @Override
    public void close() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.executor
            r0.shutdown()
            return
    }

    @Override
    public void schedule(cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidationRequest r2) {
            r1 = this;
            java.lang.String r0 = "AsynchronousValidationRequest"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ExecutorService r0 = r1.executor
            r0.execute(r2)
            return
    }
}
