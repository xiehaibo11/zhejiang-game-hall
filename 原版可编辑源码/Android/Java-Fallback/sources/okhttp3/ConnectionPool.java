package okhttp3;

@kotlin.Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u001f\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bB\u0007\b\u0016¢\u0006\u0002\u0010\tB\u000f\b\u0000\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0002\u0010\fJ\u0006\u0010\u000f\u001a\u00020\u0003J\u0006\u0010\u0010\u001a\u00020\u0011J\u0006\u0010\u0012\u001a\u00020\u0003R\u0014\u0010\n\u001a\u00020\u000bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006\u0013"}, d2 = {"Lokhttp3/ConnectionPool;", "", "maxIdleConnections", "", "keepAliveDuration", "", "timeUnit", "Ljava/util/concurrent/TimeUnit;", "(IJLjava/util/concurrent/TimeUnit;)V", "()V", "delegate", "Lokhttp3/internal/connection/RealConnectionPool;", "(Lokhttp3/internal/connection/RealConnectionPool;)V", "getDelegate$okhttp", "()Lokhttp3/internal/connection/RealConnectionPool;", "connectionCount", "evictAll", "", "idleConnectionCount", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class ConnectionPool {
    private final okhttp3.internal.connection.RealConnectionPool delegate;

    class 1 implements java.lang.Runnable {
        final okhttp3.ConnectionPool this$0;

        1(okhttp3.ConnectionPool r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r6 = this;
            L0:
                okhttp3.ConnectionPool r0 = r6.this$0
                long r1 = java.lang.System.nanoTime()
                long r0 = r0.cleanup(r1)
                r2 = -1
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 != 0) goto L11
                return
            L11:
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L0
                r2 = 1000000(0xf4240, double:4.940656E-318)
                long r4 = r0 / r2
                long r2 = r2 * r4
                long r0 = r0 - r2
                okhttp3.ConnectionPool r2 = r6.this$0
                monitor-enter(r2)
                okhttp3.ConnectionPool r3 = r6.this$0     // Catch: java.lang.Throwable -> L29 java.lang.InterruptedException -> L2b
                int r1 = (int) r0     // Catch: java.lang.Throwable -> L29 java.lang.InterruptedException -> L2b
                r3.wait(r4, r1)     // Catch: java.lang.Throwable -> L29 java.lang.InterruptedException -> L2b
                goto L2b
            L29:
                r0 = move-exception
                goto L2d
            L2b:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L29
                goto L0
            L2d:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L29
                goto L30
            L2f:
                throw r0
            L30:
                goto L2f
        }
    }

    public ConnectionPool() {
            r4 = this;
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MINUTES
            r1 = 5
            r2 = 5
            r4.<init>(r1, r2, r0)
            return
    }

    public ConnectionPool(int r8, long r9, java.util.concurrent.TimeUnit r11) {
            r7 = this;
            java.lang.String r0 = "timeUnit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            okhttp3.internal.connection.RealConnectionPool r0 = new okhttp3.internal.connection.RealConnectionPool
            okhttp3.internal.concurrent.TaskRunner r2 = okhttp3.internal.concurrent.TaskRunner.INSTANCE
            r1 = r0
            r3 = r8
            r4 = r9
            r6 = r11
            r1.<init>(r2, r3, r4, r6)
            r7.<init>(r0)
            return
    }

    public ConnectionPool(okhttp3.internal.connection.RealConnectionPool r2) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.delegate = r2
            return
    }

    public final int connectionCount() {
            r1 = this;
            okhttp3.internal.connection.RealConnectionPool r0 = r1.delegate
            int r0 = r0.connectionCount()
            return r0
    }

    public final void evictAll() {
            r1 = this;
            okhttp3.internal.connection.RealConnectionPool r0 = r1.delegate
            r0.evictAll()
            return
    }

    public final okhttp3.internal.connection.RealConnectionPool getDelegate$okhttp() {
            r1 = this;
            okhttp3.internal.connection.RealConnectionPool r0 = r1.delegate
            return r0
    }

    public final int idleConnectionCount() {
            r1 = this;
            okhttp3.internal.connection.RealConnectionPool r0 = r1.delegate
            int r0 = r0.idleConnectionCount()
            return r0
    }
}
