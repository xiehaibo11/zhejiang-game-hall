package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class SocketHttpClientConnection extends cz.msebera.android.httpclient.impl.AbstractHttpClientConnection implements cz.msebera.android.httpclient.HttpInetConnection {
    private volatile boolean open;
    private volatile java.net.Socket socket;

    public SocketHttpClientConnection() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.socket = r0
            return
    }

    private static void formatAddress(java.lang.StringBuilder r1, java.net.SocketAddress r2) {
            boolean r0 = r2 instanceof java.net.InetSocketAddress
            if (r0 == 0) goto L29
            java.net.InetSocketAddress r2 = (java.net.InetSocketAddress) r2
            java.net.InetAddress r0 = r2.getAddress()
            if (r0 == 0) goto L15
            java.net.InetAddress r0 = r2.getAddress()
            java.lang.String r0 = r0.getHostAddress()
            goto L19
        L15:
            java.net.InetAddress r0 = r2.getAddress()
        L19:
            r1.append(r0)
            r0 = 58
            r1.append(r0)
            int r2 = r2.getPort()
            r1.append(r2)
            goto L2c
        L29:
            r1.append(r2)
        L2c:
            return
    }

    protected void assertNotOpen() {
            r2 = this;
            boolean r0 = r2.open
            r0 = r0 ^ 1
            java.lang.String r1 = "Connection is already open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            return
    }

    @Override
    protected void assertOpen() {
            r2 = this;
            boolean r0 = r2.open
            java.lang.String r1 = "Connection is not open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            return
    }

    protected void bind(java.net.Socket r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.socket = r3
            java.lang.String r0 = "http.socket.buffer-size"
            r1 = -1
            int r0 = r4.getIntParameter(r0, r1)
            cz.msebera.android.httpclient.io.SessionInputBuffer r1 = r2.createSessionInputBuffer(r3, r0, r4)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r3 = r2.createSessionOutputBuffer(r3, r0, r4)
            r2.init(r1, r3, r4)
            r3 = 1
            r2.open = r3
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.open
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r2.open = r0
            java.net.Socket r0 = r2.socket
            r2.doFlush()     // Catch: java.lang.Throwable -> L17
            r0.shutdownOutput()     // Catch: java.io.IOException -> L10 java.lang.Throwable -> L13 java.lang.Throwable -> L17
        L10:
            r0.shutdownInput()     // Catch: java.lang.Throwable -> L13 java.lang.Throwable -> L17
        L13:
            r0.close()
            return
        L17:
            r1 = move-exception
            r0.close()
            throw r1
    }

    protected cz.msebera.android.httpclient.io.SessionInputBuffer createSessionInputBuffer(java.net.Socket r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.SocketInputBuffer r0 = new cz.msebera.android.httpclient.impl.io.SocketInputBuffer
            r0.<init>(r2, r3, r4)
            return r0
    }

    protected cz.msebera.android.httpclient.io.SessionOutputBuffer createSessionOutputBuffer(java.net.Socket r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.SocketOutputBuffer r0 = new cz.msebera.android.httpclient.impl.io.SocketOutputBuffer
            r0.<init>(r2, r3, r4)
            return r0
    }

    @Override
    public java.net.InetAddress getLocalAddress() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            if (r0 == 0) goto Lb
            java.net.Socket r0 = r1.socket
            java.net.InetAddress r0 = r0.getLocalAddress()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public int getLocalPort() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            if (r0 == 0) goto Lb
            java.net.Socket r0 = r1.socket
            int r0 = r0.getLocalPort()
            return r0
        Lb:
            r0 = -1
            return r0
    }

    @Override
    public java.net.InetAddress getRemoteAddress() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            if (r0 == 0) goto Lb
            java.net.Socket r0 = r1.socket
            java.net.InetAddress r0 = r0.getInetAddress()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public int getRemotePort() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            if (r0 == 0) goto Lb
            java.net.Socket r0 = r1.socket
            int r0 = r0.getPort()
            return r0
        Lb:
            r0 = -1
            return r0
    }

    protected java.net.Socket getSocket() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            return r0
    }

    @Override
    public int getSocketTimeout() {
            r2 = this;
            java.net.Socket r0 = r2.socket
            r1 = -1
            if (r0 == 0) goto Lc
            java.net.Socket r0 = r2.socket     // Catch: java.net.SocketException -> Lc
            int r0 = r0.getSoTimeout()     // Catch: java.net.SocketException -> Lc
            return r0
        Lc:
            return r1
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            boolean r0 = r1.open
            return r0
    }

    @Override
    public void setSocketTimeout(int r2) {
            r1 = this;
            r1.assertOpen()
            java.net.Socket r0 = r1.socket
            if (r0 == 0) goto Lc
            java.net.Socket r0 = r1.socket     // Catch: java.net.SocketException -> Lc
            r0.setSoTimeout(r2)     // Catch: java.net.SocketException -> Lc
        Lc:
            return
    }

    @Override
    public void shutdown() throws java.io.IOException {
            r1 = this;
            r0 = 0
            r1.open = r0
            java.net.Socket r0 = r1.socket
            if (r0 == 0) goto La
            r0.close()
        La:
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.net.Socket r0 = r3.socket
            if (r0 == 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.net.Socket r1 = r3.socket
            java.net.SocketAddress r1 = r1.getRemoteSocketAddress()
            java.net.Socket r2 = r3.socket
            java.net.SocketAddress r2 = r2.getLocalSocketAddress()
            if (r1 == 0) goto L24
            if (r2 == 0) goto L24
            formatAddress(r0, r2)
            java.lang.String r2 = "<->"
            r0.append(r2)
            formatAddress(r0, r1)
        L24:
            java.lang.String r0 = r0.toString()
            return r0
        L29:
            java.lang.String r0 = super.toString()
            return r0
    }
}
