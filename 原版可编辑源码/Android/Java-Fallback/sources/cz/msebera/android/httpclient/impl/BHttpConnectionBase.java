package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BHttpConnectionBase implements cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.HttpInetConnection {
    private final cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl connMetrics;
    private final cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl inbuffer;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy incomingContentStrategy;
    private final cz.msebera.android.httpclient.config.MessageConstraints messageConstraints;
    private final cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl outbuffer;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy outgoingContentStrategy;
    private final java.util.concurrent.atomic.AtomicReference<java.net.Socket> socketHolder;

    protected BHttpConnectionBase(int r13, int r14, java.nio.charset.CharsetDecoder r15, java.nio.charset.CharsetEncoder r16, cz.msebera.android.httpclient.config.MessageConstraints r17, cz.msebera.android.httpclient.entity.ContentLengthStrategy r18, cz.msebera.android.httpclient.entity.ContentLengthStrategy r19) {
            r12 = this;
            r0 = r12
            r7 = r13
            r8 = r17
            r12.<init>()
            java.lang.String r1 = "Buffer size"
            cz.msebera.android.httpclient.util.Args.positive(r13, r1)
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r9 = new cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl
            r9.<init>()
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r10 = new cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl
            r10.<init>()
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r11 = new cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl
            if (r8 == 0) goto L1c
            r5 = r8
            goto L1f
        L1c:
            cz.msebera.android.httpclient.config.MessageConstraints r1 = cz.msebera.android.httpclient.config.MessageConstraints.DEFAULT
            r5 = r1
        L1f:
            r4 = -1
            r1 = r11
            r2 = r9
            r3 = r13
            r6 = r15
            r1.<init>(r2, r3, r4, r5, r6)
            r0.inbuffer = r11
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r1 = new cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl
            r2 = r14
            r3 = r16
            r1.<init>(r10, r13, r14, r3)
            r0.outbuffer = r1
            r0.messageConstraints = r8
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r1 = new cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl
            r1.<init>(r9, r10)
            r0.connMetrics = r1
            if (r18 == 0) goto L41
            r1 = r18
            goto L43
        L41:
            cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy r1 = cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy.INSTANCE
        L43:
            r0.incomingContentStrategy = r1
            if (r19 == 0) goto L4a
            r1 = r19
            goto L4c
        L4a:
            cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy r1 = cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy.INSTANCE
        L4c:
            r0.outgoingContentStrategy = r1
            java.util.concurrent.atomic.AtomicReference r1 = new java.util.concurrent.atomic.AtomicReference
            r1.<init>()
            r0.socketHolder = r1
            return
    }

    private int fillInputBuffer(int r3) throws java.io.IOException {
            r2 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r2.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            int r1 = r0.getSoTimeout()
            r0.setSoTimeout(r3)     // Catch: java.lang.Throwable -> L19
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r3 = r2.inbuffer     // Catch: java.lang.Throwable -> L19
            int r3 = r3.fillBuffer()     // Catch: java.lang.Throwable -> L19
            r0.setSoTimeout(r1)
            return r3
        L19:
            r3 = move-exception
            r0.setSoTimeout(r1)
            throw r3
    }

    protected boolean awaitInput(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r0 = r1.inbuffer
            boolean r0 = r0.hasBufferedData()
            if (r0 == 0) goto La
            r2 = 1
            return r2
        La:
            r1.fillInputBuffer(r2)
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r2 = r1.inbuffer
            boolean r2 = r2.hasBufferedData()
            return r2
    }

    protected void bind(java.net.Socket r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            r0.set(r2)
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r2 = r1.inbuffer
            r0 = 0
            r2.bind(r0)
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r2 = r1.outbuffer
            r2.bind(r0)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r2.socketHolder
            r1 = 0
            java.lang.Object r0 = r0.getAndSet(r1)
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto L24
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r1 = r2.inbuffer     // Catch: java.lang.Throwable -> L1f
            r1.clear()     // Catch: java.lang.Throwable -> L1f
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r1 = r2.outbuffer     // Catch: java.lang.Throwable -> L1f
            r1.flush()     // Catch: java.lang.Throwable -> L1f
            r0.shutdownOutput()     // Catch: java.io.IOException -> L18 java.lang.Throwable -> L1b java.lang.Throwable -> L1f
        L18:
            r0.shutdownInput()     // Catch: java.lang.Throwable -> L1b java.lang.Throwable -> L1f
        L1b:
            r0.close()
            goto L24
        L1f:
            r1 = move-exception
            r0.close()
            throw r1
        L24:
            return
    }

    protected java.io.InputStream createInputStream(long r4, cz.msebera.android.httpclient.io.SessionInputBuffer r6) {
            r3 = this;
            r0 = -2
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto Le
            cz.msebera.android.httpclient.impl.io.ChunkedInputStream r4 = new cz.msebera.android.httpclient.impl.io.ChunkedInputStream
            cz.msebera.android.httpclient.config.MessageConstraints r5 = r3.messageConstraints
            r4.<init>(r6, r5)
            return r4
        Le:
            r0 = -1
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto L1a
            cz.msebera.android.httpclient.impl.io.IdentityInputStream r4 = new cz.msebera.android.httpclient.impl.io.IdentityInputStream
            r4.<init>(r6)
            return r4
        L1a:
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto L23
            cz.msebera.android.httpclient.impl.io.EmptyInputStream r4 = cz.msebera.android.httpclient.impl.io.EmptyInputStream.INSTANCE
            return r4
        L23:
            cz.msebera.android.httpclient.impl.io.ContentLengthInputStream r0 = new cz.msebera.android.httpclient.impl.io.ContentLengthInputStream
            r0.<init>(r6, r4)
            return r0
    }

    protected java.io.OutputStream createOutputStream(long r4, cz.msebera.android.httpclient.io.SessionOutputBuffer r6) {
            r3 = this;
            r0 = -2
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto Le
            cz.msebera.android.httpclient.impl.io.ChunkedOutputStream r4 = new cz.msebera.android.httpclient.impl.io.ChunkedOutputStream
            r5 = 2048(0x800, float:2.87E-42)
            r4.<init>(r5, r6)
            return r4
        Le:
            r0 = -1
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto L1a
            cz.msebera.android.httpclient.impl.io.IdentityOutputStream r4 = new cz.msebera.android.httpclient.impl.io.IdentityOutputStream
            r4.<init>(r6)
            return r4
        L1a:
            cz.msebera.android.httpclient.impl.io.ContentLengthOutputStream r0 = new cz.msebera.android.httpclient.impl.io.ContentLengthOutputStream
            r0.<init>(r6, r4)
            return r0
    }

    protected void doFlush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r0 = r1.outbuffer
            r0.flush()
            return
    }

    protected void ensureOpen() throws java.io.IOException {
            r3 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r3.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto L2d
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r1 = r3.inbuffer
            boolean r1 = r1.isBound()
            if (r1 != 0) goto L1b
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r1 = r3.inbuffer
            java.io.InputStream r2 = r3.getSocketInputStream(r0)
            r1.bind(r2)
        L1b:
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r1 = r3.outbuffer
            boolean r1 = r1.isBound()
            if (r1 != 0) goto L2c
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r1 = r3.outbuffer
            java.io.OutputStream r0 = r3.getSocketOutputStream(r0)
            r1.bind(r0)
        L2c:
            return
        L2d:
            cz.msebera.android.httpclient.ConnectionClosedException r0 = new cz.msebera.android.httpclient.ConnectionClosedException
            java.lang.String r1 = "Connection is closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.net.InetAddress getLocalAddress() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto Lf
            java.net.InetAddress r0 = r0.getLocalAddress()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    @Override
    public int getLocalPort() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto Lf
            int r0 = r0.getLocalPort()
            goto L10
        Lf:
            r0 = -1
        L10:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnectionMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r0 = r1.connMetrics
            return r0
    }

    @Override
    public java.net.InetAddress getRemoteAddress() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto Lf
            java.net.InetAddress r0 = r0.getInetAddress()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    @Override
    public int getRemotePort() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto Lf
            int r0 = r0.getPort()
            goto L10
        Lf:
            r0 = -1
        L10:
            return r0
    }

    protected cz.msebera.android.httpclient.io.SessionInputBuffer getSessionInputBuffer() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r0 = r1.inbuffer
            return r0
    }

    protected cz.msebera.android.httpclient.io.SessionOutputBuffer getSessionOutputBuffer() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r0 = r1.outbuffer
            return r0
    }

    protected java.net.Socket getSocket() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            return r0
    }

    protected java.io.InputStream getSocketInputStream(java.net.Socket r1) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = r1.getInputStream()
            return r1
    }

    protected java.io.OutputStream getSocketOutputStream(java.net.Socket r1) throws java.io.IOException {
            r0 = this;
            java.io.OutputStream r1 = r1.getOutputStream()
            return r1
    }

    @Override
    public int getSocketTimeout() {
            r2 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r2.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            r1 = -1
            if (r0 == 0) goto L10
            int r0 = r0.getSoTimeout()     // Catch: java.net.SocketException -> L10
            return r0
        L10:
            return r1
    }

    protected void incrementRequestCount() {
            r1 = this;
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r0 = r1.connMetrics
            r0.incrementRequestCount()
            return
    }

    protected void incrementResponseCount() {
            r1 = this;
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r0 = r1.connMetrics
            r0.incrementResponseCount()
            return
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public boolean isStale() {
            r3 = this;
            boolean r0 = r3.isOpen()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = 0
            int r2 = r3.fillInputBuffer(r1)     // Catch: java.io.IOException -> L11 java.net.SocketTimeoutException -> L12
            if (r2 >= 0) goto L10
            r0 = 1
        L10:
            return r0
        L11:
            return r1
        L12:
            return r0
    }

    protected cz.msebera.android.httpclient.HttpEntity prepareInput(cz.msebera.android.httpclient.HttpMessage r10) throws cz.msebera.android.httpclient.HttpException {
            r9 = this;
            cz.msebera.android.httpclient.entity.BasicHttpEntity r0 = new cz.msebera.android.httpclient.entity.BasicHttpEntity
            r0.<init>()
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r1 = r9.incomingContentStrategy
            long r1 = r1.determineLength(r10)
            cz.msebera.android.httpclient.impl.io.SessionInputBufferImpl r3 = r9.inbuffer
            java.io.InputStream r3 = r9.createInputStream(r1, r3)
            r4 = -1
            r6 = -2
            int r8 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r8 != 0) goto L24
            r1 = 1
            r0.setChunked(r1)
            r0.setContentLength(r4)
            r0.setContent(r3)
            goto L3c
        L24:
            r6 = 0
            int r7 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r7 != 0) goto L33
            r0.setChunked(r6)
            r0.setContentLength(r4)
            r0.setContent(r3)
            goto L3c
        L33:
            r0.setChunked(r6)
            r0.setContentLength(r1)
            r0.setContent(r3)
        L3c:
            java.lang.String r1 = "Content-Type"
            cz.msebera.android.httpclient.Header r1 = r10.getFirstHeader(r1)
            if (r1 == 0) goto L47
            r0.setContentType(r1)
        L47:
            java.lang.String r1 = "Content-Encoding"
            cz.msebera.android.httpclient.Header r10 = r10.getFirstHeader(r1)
            if (r10 == 0) goto L52
            r0.setContentEncoding(r10)
        L52:
            return r0
    }

    protected java.io.OutputStream prepareOutput(cz.msebera.android.httpclient.HttpMessage r3) throws cz.msebera.android.httpclient.HttpException {
            r2 = this;
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r0 = r2.outgoingContentStrategy
            long r0 = r0.determineLength(r3)
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl r3 = r2.outbuffer
            java.io.OutputStream r3 = r2.createOutputStream(r0, r3)
            return r3
    }

    @Override
    public void setSocketTimeout(int r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r1.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto Ld
            r0.setSoTimeout(r2)     // Catch: java.net.SocketException -> Ld
        Ld:
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r3 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r3.socketHolder
            r1 = 0
            java.lang.Object r0 = r0.getAndSet(r1)
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto L19
            r1 = 1
            r2 = 0
            r0.setSoLinger(r1, r2)     // Catch: java.io.IOException -> L10 java.lang.Throwable -> L14
        L10:
            r0.close()
            goto L19
        L14:
            r1 = move-exception
            r0.close()
            throw r1
        L19:
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.util.concurrent.atomic.AtomicReference<java.net.Socket> r0 = r3.socketHolder
            java.lang.Object r0 = r0.get()
            java.net.Socket r0 = (java.net.Socket) r0
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.net.SocketAddress r2 = r0.getRemoteSocketAddress()
            java.net.SocketAddress r0 = r0.getLocalSocketAddress()
            if (r2 == 0) goto L26
            if (r0 == 0) goto L26
            cz.msebera.android.httpclient.util.NetUtils.formatAddress(r1, r0)
            java.lang.String r0 = "<->"
            r1.append(r0)
            cz.msebera.android.httpclient.util.NetUtils.formatAddress(r1, r2)
        L26:
            java.lang.String r0 = r1.toString()
            return r0
        L2b:
            java.lang.String r0 = "[Not bound]"
            return r0
    }
}
