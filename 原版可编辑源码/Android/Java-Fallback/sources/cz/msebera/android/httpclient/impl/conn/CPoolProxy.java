package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class CPoolProxy implements cz.msebera.android.httpclient.conn.ManagedHttpClientConnection, cz.msebera.android.httpclient.protocol.HttpContext {
    private volatile cz.msebera.android.httpclient.impl.conn.CPoolEntry poolEntry;

    CPoolProxy(cz.msebera.android.httpclient.impl.conn.CPoolEntry r1) {
            r0 = this;
            r0.<init>()
            r0.poolEntry = r1
            return
    }

    public static cz.msebera.android.httpclient.impl.conn.CPoolEntry detach(cz.msebera.android.httpclient.HttpClientConnection r0) {
            cz.msebera.android.httpclient.impl.conn.CPoolProxy r0 = getProxy(r0)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r0.detach()
            return r0
    }

    public static cz.msebera.android.httpclient.impl.conn.CPoolEntry getPoolEntry(cz.msebera.android.httpclient.HttpClientConnection r0) {
            cz.msebera.android.httpclient.impl.conn.CPoolProxy r0 = getProxy(r0)
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r0.getPoolEntry()
            if (r0 == 0) goto Lb
            return r0
        Lb:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r0 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException
            r0.<init>()
            throw r0
    }

    private static cz.msebera.android.httpclient.impl.conn.CPoolProxy getProxy(cz.msebera.android.httpclient.HttpClientConnection r3) {
            java.lang.Class<cz.msebera.android.httpclient.impl.conn.CPoolProxy> r0 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.class
            boolean r0 = r0.isInstance(r3)
            if (r0 == 0) goto L11
            java.lang.Class<cz.msebera.android.httpclient.impl.conn.CPoolProxy> r0 = cz.msebera.android.httpclient.impl.conn.CPoolProxy.class
            java.lang.Object r3 = r0.cast(r3)
            cz.msebera.android.httpclient.impl.conn.CPoolProxy r3 = (cz.msebera.android.httpclient.impl.conn.CPoolProxy) r3
            return r3
        L11:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected connection proxy class: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static cz.msebera.android.httpclient.HttpClientConnection newProxy(cz.msebera.android.httpclient.impl.conn.CPoolEntry r1) {
            cz.msebera.android.httpclient.impl.conn.CPoolProxy r0 = new cz.msebera.android.httpclient.impl.conn.CPoolProxy
            r0.<init>(r1)
            return r0
    }

    @Override
    public void bind(java.net.Socket r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            r0.bind(r2)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r1.poolEntry
            if (r0 == 0) goto L7
            r0.closeConnection()
        L7:
            return
    }

    cz.msebera.android.httpclient.impl.conn.CPoolEntry detach() {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r2.poolEntry
            r1 = 0
            r2.poolEntry = r1
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            r0.flush()
            return
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r2.getValidConnection()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto Lf
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            java.lang.Object r3 = r0.getAttribute(r3)
            return r3
        Lf:
            r3 = 0
            return r3
    }

    cz.msebera.android.httpclient.conn.ManagedHttpClientConnection getConnection() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r1.poolEntry
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.getConnection()
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = (cz.msebera.android.httpclient.conn.ManagedHttpClientConnection) r0
            return r0
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            java.lang.String r0 = r0.getId()
            return r0
    }

    @Override
    public java.net.InetAddress getLocalAddress() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            java.net.InetAddress r0 = r0.getLocalAddress()
            return r0
    }

    @Override
    public int getLocalPort() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            int r0 = r0.getLocalPort()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnectionMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            cz.msebera.android.httpclient.HttpConnectionMetrics r0 = r0.getMetrics()
            return r0
    }

    cz.msebera.android.httpclient.impl.conn.CPoolEntry getPoolEntry() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r1.poolEntry
            return r0
    }

    @Override
    public java.net.InetAddress getRemoteAddress() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            java.net.InetAddress r0 = r0.getRemoteAddress()
            return r0
    }

    @Override
    public int getRemotePort() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            int r0 = r0.getRemotePort()
            return r0
    }

    @Override
    public javax.net.ssl.SSLSession getSSLSession() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            javax.net.ssl.SSLSession r0 = r0.getSSLSession()
            return r0
    }

    @Override
    public java.net.Socket getSocket() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            java.net.Socket r0 = r0.getSocket()
            return r0
    }

    @Override
    public int getSocketTimeout() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            int r0 = r0.getSocketTimeout()
            return r0
    }

    cz.msebera.android.httpclient.conn.ManagedHttpClientConnection getValidConnection() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getConnection()
            if (r0 == 0) goto L7
            return r0
        L7:
            cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException r0 = new cz.msebera.android.httpclient.impl.conn.ConnectionShutdownException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r1.poolEntry
            if (r0 == 0) goto Lb
            boolean r0 = r0.isClosed()
            r0 = r0 ^ 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public boolean isResponseAvailable(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            boolean r2 = r0.isResponseAvailable(r2)
            return r2
    }

    @Override
    public boolean isStale() {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getConnection()
            if (r0 == 0) goto Lb
            boolean r0 = r0.isStale()
            return r0
        Lb:
            r0 = 1
            return r0
    }

    @Override
    public void receiveResponseEntity(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            r0.receiveResponseEntity(r2)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse receiveResponseHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            cz.msebera.android.httpclient.HttpResponse r0 = r0.receiveResponseHeader()
            return r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r2.getValidConnection()
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
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            r0.sendRequestEntity(r2)
            return
    }

    @Override
    public void sendRequestHeader(cz.msebera.android.httpclient.HttpRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            r0.sendRequestHeader(r2)
            return
    }

    @Override
    public void setAttribute(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r2.getValidConnection()
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.protocol.HttpContext
            if (r1 == 0) goto Ld
            cz.msebera.android.httpclient.protocol.HttpContext r0 = (cz.msebera.android.httpclient.protocol.HttpContext) r0
            r0.setAttribute(r3, r4)
        Ld:
            return
    }

    @Override
    public void setSocketTimeout(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r0 = r1.getValidConnection()
            r0.setSocketTimeout(r2)
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.CPoolEntry r0 = r1.poolEntry
            if (r0 == 0) goto L7
            r0.shutdownConnection()
        L7:
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "CPoolProxy{"
            r0.<init>(r1)
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1 = r2.getConnection()
            if (r1 == 0) goto L11
            r0.append(r1)
            goto L16
        L11:
            java.lang.String r1 = "detached"
            r0.append(r1)
        L16:
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
