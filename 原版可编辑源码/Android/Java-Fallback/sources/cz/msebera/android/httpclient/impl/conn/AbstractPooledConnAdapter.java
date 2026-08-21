package cz.msebera.android.httpclient.impl.conn;

@java.lang.Deprecated
public abstract class AbstractPooledConnAdapter extends cz.msebera.android.httpclient.impl.conn.AbstractClientConnAdapter {
    protected volatile cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry poolEntry;

    protected AbstractPooledConnAdapter(cz.msebera.android.httpclient.conn.ClientConnectionManager r2, cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r3) {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r3.connection
            r1.<init>(r2, r0)
            r1.poolEntry = r3
            return
    }

    @java.lang.Deprecated
    protected final void assertAttached() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.poolEntry
            if (r0 == 0) goto L5
            return
        L5:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r0 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException
            r0.<init>()
            throw r0
    }

    protected void assertValid(cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r2) {
            r1 = this;
            boolean r0 = r1.isReleased()
            if (r0 != 0) goto L9
            if (r2 == 0) goto L9
            return
        L9:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r2 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException
            r2.<init>()
            throw r2
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            if (r0 == 0) goto L9
            r0.shutdownEntry()
        L9:
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            if (r0 == 0) goto L12
            r0.close()
        L12:
            return
    }

    @Override
    protected synchronized void detach() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.poolEntry = r0     // Catch: java.lang.Throwable -> L9
            super.detach()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    protected cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry getPoolEntry() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.poolEntry
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute() {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r2.getPoolEntry()
            r2.assertValid(r0)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r1 = r0.tracker
            if (r1 != 0) goto Ld
            r0 = 0
            goto L13
        Ld:
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.tracker
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r0.toRoute()
        L13:
            return r0
    }

    @Override
    public java.lang.Object getState() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            r1.assertValid(r0)
            java.lang.Object r0 = r0.getState()
            return r0
    }

    @Override
    public void layerProtocol(cz.msebera.android.httpclient.protocol.HttpContext r2, cz.msebera.android.httpclient.params.HttpParams r3) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            r1.assertValid(r0)
            r0.layerProtocol(r2, r3)
            return
    }

    @Override
    public void open(cz.msebera.android.httpclient.conn.routing.HttpRoute r2, cz.msebera.android.httpclient.protocol.HttpContext r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            r1.assertValid(r0)
            r0.open(r2, r3, r4)
            return
    }

    @Override
    public void setState(java.lang.Object r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            r1.assertValid(r0)
            r0.setState(r2)
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            if (r0 == 0) goto L9
            r0.shutdownEntry()
        L9:
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            if (r0 == 0) goto L12
            r0.shutdown()
        L12:
            return
    }

    @Override
    public void tunnelProxy(cz.msebera.android.httpclient.HttpHost r2, boolean r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            r1.assertValid(r0)
            r0.tunnelProxy(r2, r3, r4)
            return
    }

    @Override
    public void tunnelTarget(boolean r2, cz.msebera.android.httpclient.params.HttpParams r3) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry r0 = r1.getPoolEntry()
            r1.assertValid(r0)
            r0.tunnelTarget(r2, r3)
            return
    }
}
