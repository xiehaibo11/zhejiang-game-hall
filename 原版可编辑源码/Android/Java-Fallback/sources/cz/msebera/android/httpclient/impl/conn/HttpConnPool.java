package cz.msebera.android.httpclient.impl.conn;

@java.lang.Deprecated
class HttpConnPool extends cz.msebera.android.httpclient.pool.AbstractConnPool<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.OperatedClientConnection, cz.msebera.android.httpclient.impl.conn.HttpPoolEntry> {
    private static final java.util.concurrent.atomic.AtomicLong COUNTER = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final long timeToLive;
    private final java.util.concurrent.TimeUnit tunit;

    static class InternalConnFactory implements cz.msebera.android.httpclient.pool.ConnFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.OperatedClientConnection> {
        private final cz.msebera.android.httpclient.conn.ClientConnectionOperator connOperator;

        InternalConnFactory(cz.msebera.android.httpclient.conn.ClientConnectionOperator r1) {
                r0 = this;
                r0.<init>()
                r0.connOperator = r1
                return
        }

        public cz.msebera.android.httpclient.conn.OperatedClientConnection create(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) throws java.io.IOException {
                r0 = this;
                cz.msebera.android.httpclient.conn.ClientConnectionOperator r1 = r0.connOperator
                cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = r1.createConnection()
                return r1
        }

        @Override
        public cz.msebera.android.httpclient.conn.OperatedClientConnection create(cz.msebera.android.httpclient.conn.routing.HttpRoute r1) throws java.io.IOException {
                r0 = this;
                cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
                cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = r0.create(r1)
                return r1
        }
    }

    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.HttpConnPool.COUNTER = r0
            return
    }

    public HttpConnPool(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2, cz.msebera.android.httpclient.conn.ClientConnectionOperator r3, int r4, int r5, long r6, java.util.concurrent.TimeUnit r8) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpConnPool$InternalConnFactory r0 = new cz.msebera.android.httpclient.impl.conn.HttpConnPool$InternalConnFactory
            r0.<init>(r3)
            r1.<init>(r0, r4, r5)
            r1.log = r2
            r1.timeToLive = r6
            r1.tunit = r8
            return
    }

    protected cz.msebera.android.httpclient.impl.conn.HttpPoolEntry createEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r11, cz.msebera.android.httpclient.conn.OperatedClientConnection r12) {
            r10 = this;
            java.util.concurrent.atomic.AtomicLong r0 = cz.msebera.android.httpclient.impl.conn.HttpConnPool.COUNTER
            long r0 = r0.getAndIncrement()
            java.lang.String r4 = java.lang.Long.toString(r0)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = new cz.msebera.android.httpclient.impl.conn.HttpPoolEntry
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
    protected cz.msebera.android.httpclient.pool.PoolEntry createEntry(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, cz.msebera.android.httpclient.conn.OperatedClientConnection r2) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            cz.msebera.android.httpclient.conn.OperatedClientConnection r2 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r2
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r1 = r0.createEntry(r1, r2)
            return r1
    }
}
