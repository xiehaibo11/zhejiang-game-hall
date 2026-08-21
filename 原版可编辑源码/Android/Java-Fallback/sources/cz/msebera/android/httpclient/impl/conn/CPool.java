package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class CPool extends cz.msebera.android.httpclient.pool.AbstractConnPool<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection, cz.msebera.android.httpclient.impl.conn.CPoolEntry> {
    private static final java.util.concurrent.atomic.AtomicLong COUNTER = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final long timeToLive;
    private final java.util.concurrent.TimeUnit tunit;

    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.CPool.COUNTER = r0
            return
    }

    public CPool(cz.msebera.android.httpclient.pool.ConnFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> r1, int r2, int r3, long r4, java.util.concurrent.TimeUnit r6) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class<cz.msebera.android.httpclient.impl.conn.CPool> r2 = cz.msebera.android.httpclient.impl.conn.CPool.class
            r1.<init>(r2)
            r0.log = r1
            r0.timeToLive = r4
            r0.tunit = r6
            return
    }

    protected cz.msebera.android.httpclient.impl.conn.CPoolEntry createEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r11, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r12) {
            r10 = this;
            java.util.concurrent.atomic.AtomicLong r0 = cz.msebera.android.httpclient.impl.conn.CPool.COUNTER
            long r0 = r0.getAndIncrement()
            java.lang.String r4 = java.lang.Long.toString(r0)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = new cz.msebera.android.httpclient.impl.conn.CPoolEntry
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r10.log
            long r7 = r10.timeToLive
            java.util.concurrent.TimeUnit r9 = r10.tunit
            r2 = r0
            r5 = r11
            r6 = r12
            r2.<init>(r3, r4, r5, r6, r7, r9)
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.pool.PoolEntry createEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r2) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r2 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r2
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r1 = r0.createEntry(r1, r2)
            return r1
    }

    protected boolean validate(cz.msebera.android.httpclient.impl.conn.CPoolEntry r1) {
            r0 = this;
            java.lang.Object r1 = r1.getConnection()
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r1
            boolean r1 = r1.isStale()
            r1 = r1 ^ 1
            return r1
    }

    @Override
    protected boolean validate(cz.msebera.android.httpclient.pool.PoolEntry r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r1 = (cz.msebera.android.httpclient.impl.conn.CPoolEntry) r1
            boolean r1 = r0.validate(r1)
            return r1
    }
}
