package cz.msebera.android.httpclient.impl.client;

public final class FutureRequestExecutionMetrics {
    private final java.util.concurrent.atomic.AtomicLong activeConnections;
    private final cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter failedConnections;
    private final cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter requests;
    private final java.util.concurrent.atomic.AtomicLong scheduledConnections;
    private final cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter successfulConnections;
    private final cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter tasks;

    static class DurationCounter {
        private final java.util.concurrent.atomic.AtomicLong count;
        private final java.util.concurrent.atomic.AtomicLong cumulativeDuration;

        DurationCounter() {
                r3 = this;
                r3.<init>()
                java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
                r1 = 0
                r0.<init>(r1)
                r3.count = r0
                java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
                r0.<init>(r1)
                r3.cumulativeDuration = r0
                return
        }

        public long averageDuration() {
                r5 = this;
                java.util.concurrent.atomic.AtomicLong r0 = r5.count
                long r0 = r0.get()
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L13
                java.util.concurrent.atomic.AtomicLong r2 = r5.cumulativeDuration
                long r2 = r2.get()
                long r2 = r2 / r0
            L13:
                return r2
        }

        public long count() {
                r2 = this;
                java.util.concurrent.atomic.AtomicLong r0 = r2.count
                long r0 = r0.get()
                return r0
        }

        public void increment(long r4) {
                r3 = this;
                java.util.concurrent.atomic.AtomicLong r0 = r3.count
                r0.incrementAndGet()
                java.util.concurrent.atomic.AtomicLong r0 = r3.cumulativeDuration
                long r1 = java.lang.System.currentTimeMillis()
                long r1 = r1 - r4
                r0.addAndGet(r1)
                return
        }

        public java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "[count="
                r0.append(r1)
                long r1 = r3.count()
                r0.append(r1)
                java.lang.String r1 = ", averageDuration="
                r0.append(r1)
                long r1 = r3.averageDuration()
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    FutureRequestExecutionMetrics() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r1.activeConnections = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            r1.scheduledConnections = r0
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = new cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter
            r0.<init>()
            r1.successfulConnections = r0
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = new cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter
            r0.<init>()
            r1.failedConnections = r0
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = new cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter
            r0.<init>()
            r1.requests = r0
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = new cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter
            r0.<init>()
            r1.tasks = r0
            return
    }

    public long getActiveConnectionCount() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.activeConnections
            long r0 = r0.get()
            return r0
    }

    java.util.concurrent.atomic.AtomicLong getActiveConnections() {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.activeConnections
            return r0
    }

    public long getFailedConnectionAverageDuration() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.failedConnections
            long r0 = r0.averageDuration()
            return r0
    }

    public long getFailedConnectionCount() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.failedConnections
            long r0 = r0.count()
            return r0
    }

    cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter getFailedConnections() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r1.failedConnections
            return r0
    }

    public long getRequestAverageDuration() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.requests
            long r0 = r0.averageDuration()
            return r0
    }

    public long getRequestCount() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.requests
            long r0 = r0.count()
            return r0
    }

    cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter getRequests() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r1.requests
            return r0
    }

    public long getScheduledConnectionCount() {
            r2 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r2.scheduledConnections
            long r0 = r0.get()
            return r0
    }

    java.util.concurrent.atomic.AtomicLong getScheduledConnections() {
            r1 = this;
            java.util.concurrent.atomic.AtomicLong r0 = r1.scheduledConnections
            return r0
    }

    public long getSuccessfulConnectionAverageDuration() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.successfulConnections
            long r0 = r0.averageDuration()
            return r0
    }

    public long getSuccessfulConnectionCount() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.successfulConnections
            long r0 = r0.count()
            return r0
    }

    cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter getSuccessfulConnections() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r1.successfulConnections
            return r0
    }

    public long getTaskAverageDuration() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.tasks
            long r0 = r0.averageDuration()
            return r0
    }

    public long getTaskCount() {
            r2 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r2.tasks
            long r0 = r0.count()
            return r0
    }

    cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics.DurationCounter getTasks() {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r0 = r1.tasks
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[activeConnections="
            r0.append(r1)
            java.util.concurrent.atomic.AtomicLong r1 = r2.activeConnections
            r0.append(r1)
            java.lang.String r1 = ", scheduledConnections="
            r0.append(r1)
            java.util.concurrent.atomic.AtomicLong r1 = r2.scheduledConnections
            r0.append(r1)
            java.lang.String r1 = ", successfulConnections="
            r0.append(r1)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r2.successfulConnections
            r0.append(r1)
            java.lang.String r1 = ", failedConnections="
            r0.append(r1)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r2.failedConnections
            r0.append(r1)
            java.lang.String r1 = ", requests="
            r0.append(r1)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r2.requests
            r0.append(r1)
            java.lang.String r1 = ", tasks="
            r0.append(r1)
            cz.msebera.android.httpclient.impl.client.FutureRequestExecutionMetrics$DurationCounter r1 = r2.tasks
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
