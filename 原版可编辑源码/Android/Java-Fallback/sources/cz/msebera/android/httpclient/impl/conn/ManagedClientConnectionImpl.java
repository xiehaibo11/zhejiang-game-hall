package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
class ManagedClientConnectionImpl implements cz.msebera.android.httpclient.conn.ManagedClientConnection {
    private volatile long duration;
    private final cz.msebera.android.httpclient.conn.ClientConnectionManager manager;
    private final cz.msebera.android.httpclient.conn.ClientConnectionOperator operator;
    private volatile cz.msebera.android.httpclient.impl.conn.HttpPoolEntry poolEntry;
    private volatile boolean reusable;

    ManagedClientConnectionImpl(cz.msebera.android.httpclient.conn.ClientConnectionManager r2, cz.msebera.android.httpclient.conn.ClientConnectionOperator r3, cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Connection manager"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Connection operator"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP pool entry"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r1.manager = r2
            r1.operator = r3
            r1.poolEntry = r4
            r2 = 0
            r1.reusable = r2
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r1.duration = r2
            return
    }

    private cz.msebera.android.httpclient.conn.OperatedClientConnection ensureConnection() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.poolEntry
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.getConnection()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0
            return r0
        Lb:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r0 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException
            r0.<init>()
            throw r0
    }

    private cz.msebera.android.httpclient.impl.conn.HttpPoolEntry ensurePoolEntry() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.poolEntry
            if (r0 == 0) goto L5
            return r0
        L5:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r0 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException
            r0.<init>()
            throw r0
    }

    private cz.msebera.android.httpclient.conn.OperatedClientConnection getConnection() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.poolEntry
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.getConnection()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0
            return r0
    }

    @Override
    public void abortConnection() {
            r4 = this;
            monitor-enter(r4)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r4.poolEntry     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L7
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L23
            return
        L7:
            r0 = 0
            r4.reusable = r0     // Catch: java.lang.Throwable -> L23
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r4.poolEntry     // Catch: java.lang.Throwable -> L23
            java.lang.Object r0 = r0.getConnection()     // Catch: java.lang.Throwable -> L23
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0     // Catch: java.lang.Throwable -> L23
            r0.shutdown()     // Catch: java.io.IOException -> L15 java.lang.Throwable -> L23
        L15:
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r4.manager     // Catch: java.lang.Throwable -> L23
            long r1 = r4.duration     // Catch: java.lang.Throwable -> L23
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L23
            r0.releaseConnection(r4, r1, r3)     // Catch: java.lang.Throwable -> L23
            r0 = 0
            r4.poolEntry = r0     // Catch: java.lang.Throwable -> L23
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L23
            throw r0
    }

    @Override
    public void bind(java.net.Socket r1) throws java.io.IOException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r2.poolEntry
            if (r0 == 0) goto L14
            java.lang.Object r1 = r0.getConnection()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r1
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()
            r0.reset()
            r1.close()
        L14:
            return
    }

    cz.msebera.android.httpclient.impl.conn.HttpPoolEntry detach() {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r2.poolEntry
            r1 = 0
            r2.poolEntry = r1
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            r0.flush()
            return
    }

    public java.lang.Object getAttribute(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.ensureConnection()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto Lf
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            java.lang.Object r3 = r0.getAttribute(r3)
            return r3
        Lf:
            r3 = 0
            return r3
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.net.InetAddress getLocalAddress() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            java.net.InetAddress r0 = r0.getLocalAddress()
            return r0
    }

    @Override
    public int getLocalPort() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            int r0 = r0.getLocalPort()
            return r0
    }

    public cz.msebera.android.httpclient.conn.ClientConnectionManager getManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r1.manager
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnectionMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            cz.msebera.android.httpclient.HttpConnectionMetrics r0 = r0.getMetrics()
            return r0
    }

    cz.msebera.android.httpclient.impl.conn.HttpPoolEntry getPoolEntry() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.poolEntry
            return r0
    }

    @Override
    public java.net.InetAddress getRemoteAddress() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            java.net.InetAddress r0 = r0.getRemoteAddress()
            return r0
    }

    @Override
    public int getRemotePort() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            int r0 = r0.getRemotePort()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.ensurePoolEntry()
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r0.getEffectiveRoute()
            return r0
    }

    @Override
    public javax.net.ssl.SSLSession getSSLSession() {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.ensureConnection()
            java.net.Socket r0 = r0.getSocket()
            boolean r1 = r0 instanceof javax.net.ssl.SSLSocket
            if (r1 == 0) goto L13
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            javax.net.ssl.SSLSession r0 = r0.getSession()
            goto L14
        L13:
            r0 = 0
        L14:
            return r0
    }

    @Override
    public java.net.Socket getSocket() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            java.net.Socket r0 = r0.getSocket()
            return r0
    }

    @Override
    public int getSocketTimeout() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            int r0 = r0.getSocketTimeout()
            return r0
    }

    @Override
    public java.lang.Object getState() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.ensurePoolEntry()
            java.lang.Object r0 = r0.getState()
            return r0
    }

    @Override
    public boolean isMarkedReusable() {
            r1 = this;
            boolean r0 = r1.reusable
            return r0
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getConnection()
            if (r0 == 0) goto Lb
            boolean r0 = r0.isOpen()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public boolean isResponseAvailable(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            boolean r2 = r0.isResponseAvailable(r2)
            return r2
    }

    @Override
    public boolean isSecure() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            boolean r0 = r0.isSecure()
            return r0
    }

    @Override
    public boolean isStale() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getConnection()
            if (r0 == 0) goto Lb
            boolean r0 = r0.isStale()
            return r0
        Lb:
            r0 = 1
            return r0
    }

    @Override
    public void layerProtocol(cz.msebera.android.httpclient.protocol.HttpContext r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r3.poolEntry     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L64
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r3.poolEntry     // Catch: java.lang.Throwable -> L6a
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)     // Catch: java.lang.Throwable -> L6a
            boolean r1 = r0.isConnected()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = "Connection not open"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r2)     // Catch: java.lang.Throwable -> L6a
            boolean r1 = r0.isTunnelled()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = "Protocol layering without a tunnel not supported"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r2)     // Catch: java.lang.Throwable -> L6a
            boolean r1 = r0.isLayered()     // Catch: java.lang.Throwable -> L6a
            if (r1 != 0) goto L2f
            r1 = 1
            goto L30
        L2f:
            r1 = 0
        L30:
            java.lang.String r2 = "Multiple protocol layering not supported"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r2)     // Catch: java.lang.Throwable -> L6a
            cz.msebera.android.httpclient.HttpHost r0 = r0.getTargetHost()     // Catch: java.lang.Throwable -> L6a
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r1 = r3.poolEntry     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r1 = r1.getConnection()     // Catch: java.lang.Throwable -> L6a
            cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r1     // Catch: java.lang.Throwable -> L6a
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L6a
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r2 = r3.operator
            r2.updateSecureConnection(r1, r0, r4, r5)
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r4 = r3.poolEntry     // Catch: java.lang.Throwable -> L61
            if (r4 == 0) goto L5b
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r4 = r3.poolEntry     // Catch: java.lang.Throwable -> L61
            cz.msebera.android.httpclient.conn.routing.RouteTracker r4 = r4.getTracker()     // Catch: java.lang.Throwable -> L61
            boolean r5 = r1.isSecure()     // Catch: java.lang.Throwable -> L61
            r4.layerProtocol(r5)     // Catch: java.lang.Throwable -> L61
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L61
            return
        L5b:
            java.io.InterruptedIOException r4 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L61
            r4.<init>()     // Catch: java.lang.Throwable -> L61
            throw r4     // Catch: java.lang.Throwable -> L61
        L61:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L61
            throw r4
        L64:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r4 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException     // Catch: java.lang.Throwable -> L6a
            r4.<init>()     // Catch: java.lang.Throwable -> L6a
            throw r4     // Catch: java.lang.Throwable -> L6a
        L6a:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L6a
            throw r4
    }

    @Override
    public void markReusable() {
            r1 = this;
            r0 = 1
            r1.reusable = r0
            return
    }

    @Override
    public void open(cz.msebera.android.httpclient.conn.routing.HttpRoute r9, cz.msebera.android.httpclient.protocol.HttpContext r10, cz.msebera.android.httpclient.params.HttpParams r11) throws java.io.IOException {
            r8 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            monitor-enter(r8)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r8.poolEntry     // Catch: java.lang.Throwable -> L77
            if (r0 == 0) goto L71
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r8.poolEntry     // Catch: java.lang.Throwable -> L77
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()     // Catch: java.lang.Throwable -> L77
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)     // Catch: java.lang.Throwable -> L77
            boolean r0 = r0.isConnected()     // Catch: java.lang.Throwable -> L77
            if (r0 != 0) goto L22
            r0 = 1
            goto L23
        L22:
            r0 = 0
        L23:
            java.lang.String r1 = "Connection already open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)     // Catch: java.lang.Throwable -> L77
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r8.poolEntry     // Catch: java.lang.Throwable -> L77
            java.lang.Object r0 = r0.getConnection()     // Catch: java.lang.Throwable -> L77
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0     // Catch: java.lang.Throwable -> L77
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L77
            cz.msebera.android.httpclient.HttpHost r7 = r9.getProxyHost()
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r1 = r8.operator
            if (r7 == 0) goto L3b
            r3 = r7
            goto L40
        L3b:
            cz.msebera.android.httpclient.HttpHost r2 = r9.getTargetHost()
            r3 = r2
        L40:
            java.net.InetAddress r4 = r9.getLocalAddress()
            r2 = r0
            r5 = r10
            r6 = r11
            r1.openConnection(r2, r3, r4, r5, r6)
            monitor-enter(r8)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r9 = r8.poolEntry     // Catch: java.lang.Throwable -> L6e
            if (r9 == 0) goto L68
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r9 = r8.poolEntry     // Catch: java.lang.Throwable -> L6e
            cz.msebera.android.httpclient.conn.routing.RouteTracker r9 = r9.getTracker()     // Catch: java.lang.Throwable -> L6e
            if (r7 != 0) goto L5f
            boolean r10 = r0.isSecure()     // Catch: java.lang.Throwable -> L6e
            r9.connectTarget(r10)     // Catch: java.lang.Throwable -> L6e
            goto L66
        L5f:
            boolean r10 = r0.isSecure()     // Catch: java.lang.Throwable -> L6e
            r9.connectProxy(r7, r10)     // Catch: java.lang.Throwable -> L6e
        L66:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L6e
            return
        L68:
            java.io.InterruptedIOException r9 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L6e
            r9.<init>()     // Catch: java.lang.Throwable -> L6e
            throw r9     // Catch: java.lang.Throwable -> L6e
        L6e:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L6e
            throw r9
        L71:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r9 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException     // Catch: java.lang.Throwable -> L77
            r9.<init>()     // Catch: java.lang.Throwable -> L77
            throw r9     // Catch: java.lang.Throwable -> L77
        L77:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L77
            throw r9
    }

    @Override
    public void receiveResponseEntity(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            r0.receiveResponseEntity(r2)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse receiveResponseHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            cz.msebera.android.httpclient.HttpResponse r0 = r0.receiveResponseHeader()
            return r0
    }

    @Override
    public void releaseConnection() {
            r4 = this;
            monitor-enter(r4)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r4.poolEntry     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L7
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L15
            return
        L7:
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r4.manager     // Catch: java.lang.Throwable -> L15
            long r1 = r4.duration     // Catch: java.lang.Throwable -> L15
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L15
            r0.releaseConnection(r4, r1, r3)     // Catch: java.lang.Throwable -> L15
            r0 = 0
            r4.poolEntry = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L15
            throw r0
    }

    public java.lang.Object removeAttribute(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.ensureConnection()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto Lf
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            java.lang.Object r3 = r0.removeAttribute(r3)
            return r3
        Lf:
            r3 = 0
            return r3
    }

    @Override
    public void sendRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            r0.sendRequestEntity(r2)
            return
    }

    @Override
    public void sendRequestHeader(cz.msebera.android.httpclient.HttpRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            r0.sendRequestHeader(r2)
            return
    }

    public void setAttribute(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.ensureConnection()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto Ld
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            r0.setAttribute(r3, r4)
        Ld:
            return
    }

    @Override
    public void setIdleDuration(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto Ld
            long r4 = r6.toMillis(r4)
            r3.duration = r4
            goto L11
        Ld:
            r4 = -1
            r3.duration = r4
        L11:
            return
    }

    @Override
    public void setSocketTimeout(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.ensureConnection()
            r0.setSocketTimeout(r2)
            return
    }

    @Override
    public void setState(java.lang.Object r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r1.ensurePoolEntry()
            r0.setState(r2)
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r2.poolEntry
            if (r0 == 0) goto L14
            java.lang.Object r1 = r0.getConnection()
            cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r1
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()
            r0.reset()
            r1.shutdown()
        L14:
            return
    }

    @Override
    public void tunnelProxy(cz.msebera.android.httpclient.HttpHost r3, boolean r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "Next proxy"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            monitor-enter(r2)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r2.poolEntry     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L49
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r2.poolEntry     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)     // Catch: java.lang.Throwable -> L4f
            boolean r0 = r0.isConnected()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = "Connection not open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r2.poolEntry     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r0 = r0.getConnection()     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r0     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4f
            r1 = 0
            r0.update(r1, r3, r4, r5)
            monitor-enter(r2)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r5 = r2.poolEntry     // Catch: java.lang.Throwable -> L46
            if (r5 == 0) goto L40
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r5 = r2.poolEntry     // Catch: java.lang.Throwable -> L46
            cz.msebera.android.httpclient.conn.routing.RouteTracker r5 = r5.getTracker()     // Catch: java.lang.Throwable -> L46
            r5.tunnelProxy(r3, r4)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L46
            return
        L40:
            java.io.InterruptedIOException r3 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L46
            r3.<init>()     // Catch: java.lang.Throwable -> L46
            throw r3     // Catch: java.lang.Throwable -> L46
        L46:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L46
            throw r3
        L49:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r3 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException     // Catch: java.lang.Throwable -> L4f
            r3.<init>()     // Catch: java.lang.Throwable -> L4f
            throw r3     // Catch: java.lang.Throwable -> L4f
        L4f:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4f
            throw r3
    }

    @Override
    public void tunnelTarget(boolean r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r3.poolEntry     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L56
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r0 = r3.poolEntry     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r0.getTracker()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)     // Catch: java.lang.Throwable -> L5c
            boolean r1 = r0.isConnected()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "Connection not open"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r2)     // Catch: java.lang.Throwable -> L5c
            boolean r1 = r0.isTunnelled()     // Catch: java.lang.Throwable -> L5c
            if (r1 != 0) goto L26
            r1 = 1
            goto L27
        L26:
            r1 = 0
        L27:
            java.lang.String r2 = "Connection is already tunnelled"
            cz.msebera.android.httpclient.util.Asserts.check(r1, r2)     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.HttpHost r0 = r0.getTargetHost()     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r1 = r3.poolEntry     // Catch: java.lang.Throwable -> L5c
            java.lang.Object r1 = r1.getConnection()     // Catch: java.lang.Throwable -> L5c
            cz.msebera.android.httpclient.conn.OperatedClientConnection r1 = (cz.msebera.android.httpclient.conn.OperatedClientConnection) r1     // Catch: java.lang.Throwable -> L5c
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5c
            r2 = 0
            r1.update(r2, r0, r4, r5)
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r5 = r3.poolEntry     // Catch: java.lang.Throwable -> L53
            if (r5 == 0) goto L4d
            cz.msebera.android.httpclient.impl.conn.HttpPoolEntry r5 = r3.poolEntry     // Catch: java.lang.Throwable -> L53
            cz.msebera.android.httpclient.conn.routing.RouteTracker r5 = r5.getTracker()     // Catch: java.lang.Throwable -> L53
            r5.tunnelTarget(r4)     // Catch: java.lang.Throwable -> L53
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L53
            return
        L4d:
            java.io.InterruptedIOException r4 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L53
            r4.<init>()     // Catch: java.lang.Throwable -> L53
            throw r4     // Catch: java.lang.Throwable -> L53
        L53:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L53
            throw r4
        L56:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r4 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException     // Catch: java.lang.Throwable -> L5c
            r4.<init>()     // Catch: java.lang.Throwable -> L5c
            throw r4     // Catch: java.lang.Throwable -> L5c
        L5c:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5c
            throw r4
    }

    @Override
    public void unmarkReusable() {
            r1 = this;
            r0 = 0
            r1.reusable = r0
            return
    }
}
