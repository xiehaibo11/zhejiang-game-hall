package cz.msebera.android.httpclient.impl.client;

public final class IdleConnectionEvictor {
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionManager connectionManager;
    private volatile java.lang.Exception exception;
    private final long maxIdleTimeMs;
    private final long sleepTimeMs;
    private final java.lang.Thread thread;
    private final java.util.concurrent.ThreadFactory threadFactory;


    static class DefaultThreadFactory implements java.util.concurrent.ThreadFactory {
        DefaultThreadFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r3) {
                r2 = this;
                java.lang.Thread r0 = new java.lang.Thread
                java.lang.String r1 = "Connection evictor"
                r0.<init>(r3, r1)
                r3 = 1
                r0.setDaemon(r3)
                return r0
        }
    }

    public IdleConnectionEvictor(cz.msebera.android.httpclient.conn.HttpClientConnectionManager r12, long r13, java.util.concurrent.TimeUnit r15) {
            r11 = this;
            r0 = 0
            int r2 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r2 <= 0) goto L8
            r5 = r13
            goto Lb
        L8:
            r0 = 5
            r5 = r0
        Lb:
            if (r15 == 0) goto Lf
            r7 = r15
            goto L12
        Lf:
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r7 = r0
        L12:
            r4 = 0
            r2 = r11
            r3 = r12
            r8 = r13
            r10 = r15
            r2.<init>(r3, r4, r5, r7, r8, r10)
            return
    }

    public IdleConnectionEvictor(cz.msebera.android.httpclient.conn.HttpClientConnectionManager r10, long r11, java.util.concurrent.TimeUnit r13, long r14, java.util.concurrent.TimeUnit r16) {
            r9 = this;
            r2 = 0
            r0 = r9
            r1 = r10
            r3 = r11
            r5 = r13
            r6 = r14
            r8 = r16
            r0.<init>(r1, r2, r3, r5, r6, r8)
            return
    }

    public IdleConnectionEvictor(cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2, java.util.concurrent.ThreadFactory r3, long r4, java.util.concurrent.TimeUnit r6, long r7, java.util.concurrent.TimeUnit r9) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Connection manager"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r0 = (cz.msebera.android.httpclient.conn.HttpClientConnectionManager) r0
            r1.connectionManager = r0
            if (r3 == 0) goto L10
            goto L15
        L10:
            cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor$DefaultThreadFactory r3 = new cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor$DefaultThreadFactory
            r3.<init>()
        L15:
            r1.threadFactory = r3
            if (r6 == 0) goto L1d
            long r4 = r6.toMillis(r4)
        L1d:
            r1.sleepTimeMs = r4
            if (r9 == 0) goto L25
            long r7 = r9.toMillis(r7)
        L25:
            r1.maxIdleTimeMs = r7
            java.util.concurrent.ThreadFactory r3 = r1.threadFactory
            cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor$1 r4 = new cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor$1
            r4.<init>(r1, r2)
            java.lang.Thread r2 = r3.newThread(r4)
            r1.thread = r2
            return
    }

    static long access$000(cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor r2) {
            long r0 = r2.sleepTimeMs
            return r0
    }

    static long access$100(cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor r2) {
            long r0 = r2.maxIdleTimeMs
            return r0
    }

    static java.lang.Exception access$202(cz.msebera.android.httpclient.impl.client.IdleConnectionEvictor r0, java.lang.Exception r1) {
            r0.exception = r1
            return r1
    }

    public void awaitTermination(long r2, java.util.concurrent.TimeUnit r4) throws java.lang.InterruptedException {
            r1 = this;
            java.lang.Thread r0 = r1.thread
            if (r4 == 0) goto L5
            goto L7
        L5:
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
        L7:
            long r2 = r4.toMillis(r2)
            r0.join(r2)
            return
    }

    public boolean isRunning() {
            r1 = this;
            java.lang.Thread r0 = r1.thread
            boolean r0 = r0.isAlive()
            return r0
    }

    public void shutdown() {
            r1 = this;
            java.lang.Thread r0 = r1.thread
            r0.interrupt()
            return
    }

    public void start() {
            r1 = this;
            java.lang.Thread r0 = r1.thread
            r0.start()
            return
    }
}
