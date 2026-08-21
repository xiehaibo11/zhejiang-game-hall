package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class ExponentialBackOffSchedulingStrategy implements cz.msebera.android.httpclient.impl.client.cache.SchedulingStrategy {
    public static final long DEFAULT_BACK_OFF_RATE = 10;
    public static final long DEFAULT_INITIAL_EXPIRY_IN_MILLIS = 0;
    public static final long DEFAULT_MAX_EXPIRY_IN_MILLIS = 0;
    private final long backOffRate;
    private final java.util.concurrent.ScheduledExecutorService executor;
    private final long initialExpiryInMillis;
    private final long maxExpiryInMillis;

    static {
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 6
            long r0 = r0.toMillis(r1)
            cz.msebera.android.httpclient.impl.client.cache.ExponentialBackOffSchedulingStrategy.DEFAULT_INITIAL_EXPIRY_IN_MILLIS = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 86400(0x15180, double:4.26873E-319)
            long r0 = r0.toMillis(r1)
            cz.msebera.android.httpclient.impl.client.cache.ExponentialBackOffSchedulingStrategy.DEFAULT_MAX_EXPIRY_IN_MILLIS = r0
            return
    }

    public ExponentialBackOffSchedulingStrategy(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9) {
            r8 = this;
            long r4 = cz.msebera.android.httpclient.impl.client.cache.ExponentialBackOffSchedulingStrategy.DEFAULT_INITIAL_EXPIRY_IN_MILLIS
            long r6 = cz.msebera.android.httpclient.impl.client.cache.ExponentialBackOffSchedulingStrategy.DEFAULT_MAX_EXPIRY_IN_MILLIS
            r2 = 10
            r0 = r8
            r1 = r9
            r0.<init>(r1, r2, r4, r6)
            return
    }

    public ExponentialBackOffSchedulingStrategy(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r9, long r10, long r12, long r14) {
            r8 = this;
            java.util.concurrent.ScheduledThreadPoolExecutor r1 = createThreadPoolFromCacheConfig(r9)
            r0 = r8
            r2 = r10
            r4 = r12
            r6 = r14
            r0.<init>(r1, r2, r4, r6)
            return
    }

    ExponentialBackOffSchedulingStrategy(java.util.concurrent.ScheduledExecutorService r2, long r3, long r5, long r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Executor"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.ScheduledExecutorService r2 = (java.util.concurrent.ScheduledExecutorService) r2
            r1.executor = r2
            java.lang.String r2 = "BackOffRate"
            long r2 = cz.msebera.android.httpclient.util.Args.notNegative(r3, r2)
            r1.backOffRate = r2
            java.lang.String r2 = "InitialExpiryInMillis"
            long r2 = cz.msebera.android.httpclient.util.Args.notNegative(r5, r2)
            r1.initialExpiryInMillis = r2
            java.lang.String r2 = "MaxExpiryInMillis"
            long r2 = cz.msebera.android.httpclient.util.Args.notNegative(r7, r2)
            r1.maxExpiryInMillis = r2
            return
    }

    @java.lang.Deprecated
    protected static long checkNotNegative(java.lang.String r3, long r4) {
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L7
            return r4
        L7:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            java.lang.String r3 = " may not be negative"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
    }

    @java.lang.Deprecated
    protected static <T> T checkNotNull(java.lang.String r1, T r2) {
            if (r2 == 0) goto L3
            return r2
        L3:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " may not be null"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
    }

    private static java.util.concurrent.ScheduledThreadPoolExecutor createThreadPoolFromCacheConfig(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r1) {
            java.util.concurrent.ScheduledThreadPoolExecutor r0 = new java.util.concurrent.ScheduledThreadPoolExecutor
            int r1 = r1.getAsynchronousWorkersMax()
            r0.<init>(r1)
            r1 = 0
            r0.setExecuteExistingDelayedTasksAfterShutdownPolicy(r1)
            return r0
    }

    protected long calculateDelayInMillis(int r7) {
            r6 = this;
            if (r7 <= 0) goto L19
            long r0 = r6.initialExpiryInMillis
            double r0 = (double) r0
            long r2 = r6.backOffRate
            double r2 = (double) r2
            int r7 = r7 + (-1)
            double r4 = (double) r7
            double r2 = java.lang.Math.pow(r2, r4)
            double r0 = r0 * r2
            long r0 = (long) r0
            long r2 = r6.maxExpiryInMillis
            long r0 = java.lang.Math.min(r0, r2)
            return r0
        L19:
            r0 = 0
            return r0
    }

    @Override
    public void close() {
            r1 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r1.executor
            r0.shutdown()
            return
    }

    public long getBackOffRate() {
            r2 = this;
            long r0 = r2.backOffRate
            return r0
    }

    public long getInitialExpiryInMillis() {
            r2 = this;
            long r0 = r2.initialExpiryInMillis
            return r0
    }

    public long getMaxExpiryInMillis() {
            r2 = this;
            long r0 = r2.maxExpiryInMillis
            return r0
    }

    @Override
    public void schedule(cz.msebera.android.httpclient.impl.client.cache.AsynchronousValidationRequest r5) {
            r4 = this;
            java.lang.String r0 = "RevalidationRequest"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            int r0 = r5.getConsecutiveFailedAttempts()
            long r0 = r4.calculateDelayInMillis(r0)
            java.util.concurrent.ScheduledExecutorService r2 = r4.executor
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2.schedule(r5, r0, r3)
            return
    }
}
