package cz.msebera.android.httpclient.impl.pool;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicConnPool extends cz.msebera.android.httpclient.pool.AbstractConnPool<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.HttpClientConnection, cz.msebera.android.httpclient.impl.pool.BasicPoolEntry> {
    private static final java.util.concurrent.atomic.AtomicLong COUNTER = null;

    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            cz.msebera.android.httpclient.impl.pool.BasicConnPool.COUNTER = r0
            return
    }

    public BasicConnPool() {
            r3 = this;
            cz.msebera.android.httpclient.impl.pool.BasicConnFactory r0 = new cz.msebera.android.httpclient.impl.pool.BasicConnFactory
            cz.msebera.android.httpclient.config.SocketConfig r1 = cz.msebera.android.httpclient.config.SocketConfig.DEFAULT
            cz.msebera.android.httpclient.config.ConnectionConfig r2 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
            r0.<init>(r1, r2)
            r1 = 2
            r2 = 20
            r3.<init>(r0, r1, r2)
            return
    }

    public BasicConnPool(cz.msebera.android.httpclient.config.SocketConfig r2, cz.msebera.android.httpclient.config.ConnectionConfig r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.pool.BasicConnFactory r0 = new cz.msebera.android.httpclient.impl.pool.BasicConnFactory
            r0.<init>(r2, r3)
            r2 = 2
            r3 = 20
            r1.<init>(r0, r2, r3)
            return
    }

    @java.lang.Deprecated
    public BasicConnPool(cz.msebera.android.httpclient.params.HttpParams r3) {
            r2 = this;
            cz.msebera.android.httpclient.impl.pool.BasicConnFactory r0 = new cz.msebera.android.httpclient.impl.pool.BasicConnFactory
            r0.<init>(r3)
            r3 = 2
            r1 = 20
            r2.<init>(r0, r3, r1)
            return
    }

    public BasicConnPool(cz.msebera.android.httpclient.pool.ConnFactory<cz.msebera.android.httpclient.HttpHost, cz.msebera.android.httpclient.HttpClientConnection> r3) {
            r2 = this;
            r0 = 2
            r1 = 20
            r2.<init>(r3, r0, r1)
            return
    }

    protected cz.msebera.android.httpclient.impl.pool.BasicPoolEntry createEntry(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.HttpClientConnection r5) {
            r3 = this;
            cz.msebera.android.httpclient.impl.pool.BasicPoolEntry r0 = new cz.msebera.android.httpclient.impl.pool.BasicPoolEntry
            java.util.concurrent.atomic.AtomicLong r1 = cz.msebera.android.httpclient.impl.pool.BasicConnPool.COUNTER
            long r1 = r1.getAndIncrement()
            java.lang.String r1 = java.lang.Long.toString(r1)
            r0.<init>(r1, r4, r5)
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.pool.PoolEntry createEntry(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpClientConnection r2) {
            r0 = this;
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            cz.msebera.android.httpclient.HttpClientConnection r2 = (cz.msebera.android.httpclient.HttpClientConnection) r2
            cz.msebera.android.httpclient.impl.pool.BasicPoolEntry r1 = r0.createEntry(r1, r2)
            return r1
    }

    protected boolean validate(cz.msebera.android.httpclient.impl.pool.BasicPoolEntry r1) {
            r0 = this;
            java.lang.Object r1 = r1.getConnection()
            cz.msebera.android.httpclient.HttpClientConnection r1 = (cz.msebera.android.httpclient.HttpClientConnection) r1
            boolean r1 = r1.isStale()
            r1 = r1 ^ 1
            return r1
    }

    @Override
    protected boolean validate(cz.msebera.android.httpclient.pool.PoolEntry r1) {
            r0 = this;
            cz.msebera.android.httpclient.impl.pool.BasicPoolEntry r1 = (cz.msebera.android.httpclient.impl.pool.BasicPoolEntry) r1
            boolean r1 = r0.validate(r1)
            return r1
    }
}
