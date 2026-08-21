package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class DefaultClientConnection extends cz.msebera.android.httpclient.impl.SocketHttpClientConnection implements cz.msebera.android.httpclient.conn.OperatedClientConnection, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection, cz.msebera.android.httpclient.protocol.HttpContext {
    private final java.util.Map<java.lang.String, java.lang.Object> attributes;
    private boolean connSecure;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog headerLog;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private volatile boolean shutdown;
    private volatile java.net.Socket socket;
    private cz.msebera.android.httpclient.HttpHost targetHost;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog wireLog;

    public DefaultClientConnection() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.String r1 = "cz.msebera.android.httpclient.headers"
            r0.<init>(r1)
            r2.headerLog = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.String r1 = "cz.msebera.android.httpclient.wire"
            r0.<init>(r1)
            r2.wireLog = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.attributes = r0
            return
    }

    @Override
    public void bind(java.net.Socket r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.params.BasicHttpParams r0 = new cz.msebera.android.httpclient.params.BasicHttpParams
            r0.<init>()
            r1.bind(r2, r0)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r3 = this;
            super.close()     // Catch: java.io.IOException -> L27
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log     // Catch: java.io.IOException -> L27
            boolean r0 = r0.isDebugEnabled()     // Catch: java.io.IOException -> L27
            if (r0 == 0) goto L2f
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log     // Catch: java.io.IOException -> L27
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L27
            r1.<init>()     // Catch: java.io.IOException -> L27
            java.lang.String r2 = "Connection "
            r1.append(r2)     // Catch: java.io.IOException -> L27
            r1.append(r3)     // Catch: java.io.IOException -> L27
            java.lang.String r2 = " closed"
            r1.append(r2)     // Catch: java.io.IOException -> L27
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L27
            r0.debug(r1)     // Catch: java.io.IOException -> L27
            goto L2f
        L27:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O error closing connection"
            r1.debug(r2, r0)
        L2f:
            return
    }

    @Override
    protected cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpResponse> createResponseParser(cz.msebera.android.httpclient.io.SessionInputBuffer r3, cz.msebera.android.httpclient.HttpResponseFactory r4, cz.msebera.android.httpclient.params.HttpParams r5) {
            r2 = this;
            cz.msebera.android.httpclient.impl.conn.DefaultHttpResponseParser r0 = new cz.msebera.android.httpclient.impl.conn.DefaultHttpResponseParser
            r1 = 0
            r0.<init>(r3, r1, r4, r5)
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.io.SessionInputBuffer createSessionInputBuffer(java.net.Socket r3, int r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r2 = this;
            if (r4 <= 0) goto L3
            goto L5
        L3:
            r4 = 8192(0x2000, float:1.148E-41)
        L5:
            cz.msebera.android.httpclient.io.SessionInputBuffer r3 = super.createSessionInputBuffer(r3, r4, r5)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.wireLog
            boolean r4 = r4.isDebugEnabled()
            if (r4 == 0) goto L22
            cz.msebera.android.httpclient.impl.conn.LoggingSessionInputBuffer r4 = new cz.msebera.android.httpclient.impl.conn.LoggingSessionInputBuffer
            cz.msebera.android.httpclient.impl.conn.Wire r0 = new cz.msebera.android.httpclient.impl.conn.Wire
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r2.wireLog
            r0.<init>(r1)
            java.lang.String r5 = cz.msebera.android.httpclient.params.HttpProtocolParams.getHttpElementCharset(r5)
            r4.<init>(r3, r0, r5)
            r3 = r4
        L22:
            return r3
    }

    @Override
    protected cz.msebera.android.httpclient.io.SessionOutputBuffer createSessionOutputBuffer(java.net.Socket r3, int r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r2 = this;
            if (r4 <= 0) goto L3
            goto L5
        L3:
            r4 = 8192(0x2000, float:1.148E-41)
        L5:
            cz.msebera.android.httpclient.io.SessionOutputBuffer r3 = super.createSessionOutputBuffer(r3, r4, r5)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.wireLog
            boolean r4 = r4.isDebugEnabled()
            if (r4 == 0) goto L22
            cz.msebera.android.httpclient.impl.conn.LoggingSessionOutputBuffer r4 = new cz.msebera.android.httpclient.impl.conn.LoggingSessionOutputBuffer
            cz.msebera.android.httpclient.impl.conn.Wire r0 = new cz.msebera.android.httpclient.impl.conn.Wire
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r2.wireLog
            r0.<init>(r1)
            java.lang.String r5 = cz.msebera.android.httpclient.params.HttpProtocolParams.getHttpElementCharset(r5)
            r4.<init>(r3, r0, r5)
            r3 = r4
        L22:
            return r3
    }

    @Override
    public java.lang.Object getAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.attributes
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public javax.net.ssl.SSLSession getSSLSession() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            boolean r0 = r0 instanceof javax.net.ssl.SSLSocket
            if (r0 == 0) goto Lf
            java.net.Socket r0 = r1.socket
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            javax.net.ssl.SSLSession r0 = r0.getSession()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public final java.net.Socket getSocket() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            return r0
    }

    @Override
    public final cz.msebera.android.httpclient.HttpHost getTargetHost() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.targetHost
            return r0
    }

    @Override
    public final boolean isSecure() {
            r1 = this;
            boolean r0 = r1.connSecure
            return r0
    }

    @Override
    public void openCompleted(boolean r2, cz.msebera.android.httpclient.params.HttpParams r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.assertNotOpen()
            r1.connSecure = r2
            java.net.Socket r2 = r1.socket
            r1.bind(r2, r3)
            return
    }

    @Override
    public void opening(java.net.Socket r1, cz.msebera.android.httpclient.HttpHost r2) throws java.io.IOException {
            r0 = this;
            r0.assertNotOpen()
            r0.socket = r1
            r0.targetHost = r2
            boolean r2 = r0.shutdown
            if (r2 != 0) goto Lc
            return
        Lc:
            r1.close()
            java.io.InterruptedIOException r1 = new java.io.InterruptedIOException
            java.lang.String r2 = "Connection already shutdown"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse receiveResponseHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r8 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = super.receiveResponseHeader()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L26
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Receiving response: "
            r2.append(r3)
            cz.msebera.android.httpclient.StatusLine r3 = r0.getStatusLine()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
        L26:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.headerLog
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L71
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r8.headerLog
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "<< "
            r2.append(r3)
            cz.msebera.android.httpclient.StatusLine r4 = r0.getStatusLine()
            java.lang.String r4 = r4.toString()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
            cz.msebera.android.httpclient.Header[] r1 = r0.getAllHeaders()
            int r2 = r1.length
            r4 = 0
        L52:
            if (r4 >= r2) goto L71
            r5 = r1[r4]
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r8.headerLog
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r5 = r5.toString()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.debug(r5)
            int r4 = r4 + 1
            goto L52
        L71:
            return r0
    }

    @Override
    public java.lang.Object removeAttribute(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.attributes
            java.lang.Object r2 = r0.remove(r2)
            return r2
    }

    @Override
    public void sendRequestHeader(cz.msebera.android.httpclient.HttpRequest r7) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r6 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Sending request: "
            r1.append(r2)
            cz.msebera.android.httpclient.RequestLine r2 = r7.getRequestLine()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L22:
            super.sendRequestHeader(r7)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.headerLog
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L70
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r6.headerLog
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ">> "
            r1.append(r2)
            cz.msebera.android.httpclient.RequestLine r3 = r7.getRequestLine()
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
            cz.msebera.android.httpclient.Header[] r7 = r7.getAllHeaders()
            int r0 = r7.length
            r1 = 0
        L51:
            if (r1 >= r0) goto L70
            r3 = r7[r1]
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r6.headerLog
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r3 = r3.toString()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.debug(r3)
            int r1 = r1 + 1
            goto L51
        L70:
            return
    }

    @Override
    public void setAttribute(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.attributes
            r0.put(r2, r3)
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r3 = this;
            r0 = 1
            r3.shutdown = r0
            super.shutdown()     // Catch: java.io.IOException -> L31
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log     // Catch: java.io.IOException -> L31
            boolean r0 = r0.isDebugEnabled()     // Catch: java.io.IOException -> L31
            if (r0 == 0) goto L29
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log     // Catch: java.io.IOException -> L31
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L31
            r1.<init>()     // Catch: java.io.IOException -> L31
            java.lang.String r2 = "Connection "
            r1.append(r2)     // Catch: java.io.IOException -> L31
            r1.append(r3)     // Catch: java.io.IOException -> L31
            java.lang.String r2 = " shut down"
            r1.append(r2)     // Catch: java.io.IOException -> L31
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L31
            r0.debug(r1)     // Catch: java.io.IOException -> L31
        L29:
            java.net.Socket r0 = r3.socket     // Catch: java.io.IOException -> L31
            if (r0 == 0) goto L39
            r0.close()     // Catch: java.io.IOException -> L31
            goto L39
        L31:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "I/O error shutting down connection"
            r1.debug(r2, r0)
        L39:
            return
    }

    @Override
    public void update(java.net.Socket r2, cz.msebera.android.httpclient.HttpHost r3, boolean r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r1 = this;
            r1.assertOpen()
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            if (r2 == 0) goto L14
            r1.socket = r2
            r1.bind(r2, r5)
        L14:
            r1.targetHost = r3
            r1.connSecure = r4
            return
    }
}
