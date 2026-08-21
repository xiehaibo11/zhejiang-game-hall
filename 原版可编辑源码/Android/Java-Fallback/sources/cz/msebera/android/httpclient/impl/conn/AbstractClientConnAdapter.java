package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public abstract class AbstractClientConnAdapter implements cz.msebera.android.httpclient.conn.ManagedClientConnection, cz.msebera.android.httpclient.protocol.HttpContext {
    private final cz.msebera.android.httpclient.conn.ClientConnectionManager connManager;
    private volatile long duration;
    private volatile boolean markedReusable;
    private volatile boolean released;
    private volatile cz.msebera.android.httpclient.conn.OperatedClientConnection wrappedConnection;

    protected AbstractClientConnAdapter(cz.msebera.android.httpclient.conn.ClientConnectionManager r1, cz.msebera.android.httpclient.conn.OperatedClientConnection r2) {
            r0 = this;
            r0.<init>()
            r0.connManager = r1
            r0.wrappedConnection = r2
            r1 = 0
            r0.markedReusable = r1
            r0.released = r1
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.duration = r1
            return
    }

    @Override
    public synchronized void abortConnection() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.released     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L7
            monitor-exit(r4)
            return
        L7:
            r0 = 1
            r4.released = r0     // Catch: java.lang.Throwable -> L1b
            r4.unmarkReusable()     // Catch: java.lang.Throwable -> L1b
            r4.shutdown()     // Catch: java.io.IOException -> L10 java.lang.Throwable -> L1b
        L10:
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r4.connManager     // Catch: java.lang.Throwable -> L1b
            long r1 = r4.duration     // Catch: java.lang.Throwable -> L1b
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L1b
            r0.releaseConnection(r4, r1, r3)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r4)
            return
        L1b:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @java.lang.Deprecated
    protected final void assertNotAborted() throws java.io.InterruptedIOException {
            r2 = this;
            boolean r0 = r2.isReleased()
            if (r0 != 0) goto L7
            return
        L7:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "Connection has been shut down"
            r0.<init>(r1)
            throw r0
    }

    protected final void assertValid(cz.msebera.android.httpclient.conn.OperatedClientConnection r2) throws cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException {
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
    public void bind(java.net.Socket r1) throws java.io.IOException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }

    protected synchronized void detach() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            r2.wrappedConnection = r0     // Catch: java.lang.Throwable -> Ld
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.duration = r0     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            r0.flush()
            return
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.getWrappedConnection()
            r2.assertValid(r0)
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto L12
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            java.lang.Object r3 = r0.getAttribute(r3)
            return r3
        L12:
            r3 = 0
            return r3
    }

    @Override
    public java.net.InetAddress getLocalAddress() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            java.net.InetAddress r0 = r0.getLocalAddress()
            return r0
    }

    @Override
    public int getLocalPort() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            int r0 = r0.getLocalPort()
            return r0
    }

    protected cz.msebera.android.httpclient.conn.ClientConnectionManager getManager() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r1.connManager
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnectionMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            cz.msebera.android.httpclient.HttpConnectionMetrics r0 = r0.getMetrics()
            return r0
    }

    @Override
    public java.net.InetAddress getRemoteAddress() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            java.net.InetAddress r0 = r0.getRemoteAddress()
            return r0
    }

    @Override
    public int getRemotePort() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            int r0 = r0.getRemotePort()
            return r0
    }

    @Override
    public javax.net.ssl.SSLSession getSSLSession() {
            r3 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r3.getWrappedConnection()
            r3.assertValid(r0)
            boolean r1 = r3.isOpen()
            r2 = 0
            if (r1 != 0) goto Lf
            return r2
        Lf:
            java.net.Socket r0 = r0.getSocket()
            boolean r1 = r0 instanceof javax.net.ssl.SSLSocket
            if (r1 == 0) goto L1d
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            javax.net.ssl.SSLSession r2 = r0.getSession()
        L1d:
            return r2
    }

    @Override
    public java.net.Socket getSocket() {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.getWrappedConnection()
            r2.assertValid(r0)
            boolean r1 = r2.isOpen()
            if (r1 != 0) goto Lf
            r0 = 0
            return r0
        Lf:
            java.net.Socket r0 = r0.getSocket()
            return r0
    }

    @Override
    public int getSocketTimeout() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            int r0 = r0.getSocketTimeout()
            return r0
    }

    protected cz.msebera.android.httpclient.conn.OperatedClientConnection getWrappedConnection() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.wrappedConnection
            return r0
    }

    @Override
    public boolean isMarkedReusable() {
            r1 = this;
            boolean r0 = r1.markedReusable
            return r0
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            boolean r0 = r0.isOpen()
            return r0
    }

    protected boolean isReleased() {
            r1 = this;
            boolean r0 = r1.released
            return r0
    }

    @Override
    public boolean isResponseAvailable(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            boolean r2 = r0.isResponseAvailable(r2)
            return r2
    }

    @Override
    public boolean isSecure() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            boolean r0 = r0.isSecure()
            return r0
    }

    @Override
    public boolean isStale() {
            r2 = this;
            boolean r0 = r2.isReleased()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.getWrappedConnection()
            if (r0 != 0) goto Lf
            return r1
        Lf:
            boolean r0 = r0.isStale()
            return r0
    }

    @Override
    public void markReusable() {
            r1 = this;
            r0 = 1
            r1.markedReusable = r0
            return
    }

    @Override
    public void receiveResponseEntity(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            r1.unmarkReusable()
            r0.receiveResponseEntity(r2)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse receiveResponseHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            r1.unmarkReusable()
            cz.msebera.android.httpclient.HttpResponse r0 = r0.receiveResponseHeader()
            return r0
    }

    @Override
    public synchronized void releaseConnection() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.released     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L7
            monitor-exit(r4)
            return
        L7:
            r0 = 1
            r4.released = r0     // Catch: java.lang.Throwable -> L15
            cz.msebera.android.httpclient.conn.ClientConnectionManager r0 = r4.connManager     // Catch: java.lang.Throwable -> L15
            long r1 = r4.duration     // Catch: java.lang.Throwable -> L15
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L15
            r0.releaseConnection(r4, r1, r3)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.getWrappedConnection()
            r2.assertValid(r0)
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto L12
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            java.lang.Object r3 = r0.removeAttribute(r3)
            return r3
        L12:
            r3 = 0
            return r3
    }

    @Override
    public void sendRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            r1.unmarkReusable()
            r0.sendRequestEntity(r2)
            return
    }

    @Override
    public void sendRequestHeader(cz.msebera.android.httpclient.HttpRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            r1.unmarkReusable()
            r0.sendRequestHeader(r2)
            return
    }

    @Override
    public void setAttribute(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.getWrappedConnection()
            r2.assertValid(r0)
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto L10
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            r0.setAttribute(r3, r4)
        L10:
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
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.getWrappedConnection()
            r1.assertValid(r0)
            r0.setSocketTimeout(r2)
            return
    }

    @Override
    public void unmarkReusable() {
            r1 = this;
            r0 = 0
            r1.markedReusable = r0
            return
    }
}
