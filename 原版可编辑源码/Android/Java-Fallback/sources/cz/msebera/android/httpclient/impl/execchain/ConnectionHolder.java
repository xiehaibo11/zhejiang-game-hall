package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.ThreadSafe
class ConnectionHolder implements cz.msebera.android.httpclient.conn.ConnectionReleaseTrigger, cz.msebera.android.httpclient.concurrent.Cancellable, java.io.Closeable {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.HttpClientConnection managedConn;
    private final cz.msebera.android.httpclient.conn.HttpClientConnectionManager manager;
    private volatile boolean released;
    private volatile boolean reusable;
    private volatile java.lang.Object state;
    private volatile java.util.concurrent.TimeUnit tunit;
    private volatile long validDuration;

    public ConnectionHolder(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1, cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2, cz.msebera.android.httpclient.HttpClientConnection r3) {
            r0 = this;
            r0.<init>()
            r0.log = r1
            r0.manager = r2
            r0.managedConn = r3
            return
    }

    @Override
    public void abortConnection() {
            r9 = this;
            cz.msebera.android.httpclient.HttpClientConnection r0 = r9.managedConn
            monitor-enter(r0)
            boolean r1 = r9.released     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            return
        L9:
            r1 = 1
            r9.released = r1     // Catch: java.lang.Throwable -> L54
            cz.msebera.android.httpclient.HttpClientConnection r1 = r9.managedConn     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            r1.shutdown()     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r9.log     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            java.lang.String r2 = "Connection discarded"
            r1.debug(r2)     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L27
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r3 = r9.manager     // Catch: java.lang.Throwable -> L54
            cz.msebera.android.httpclient.HttpClientConnection r4 = r9.managedConn     // Catch: java.lang.Throwable -> L54
            r5 = 0
            r6 = 0
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L54
            r3.releaseConnection(r4, r5, r6, r8)     // Catch: java.lang.Throwable -> L54
            goto L45
        L25:
            r1 = move-exception
            goto L47
        L27:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log     // Catch: java.lang.Throwable -> L25
            boolean r2 = r2.isDebugEnabled()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L39
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log     // Catch: java.lang.Throwable -> L25
            java.lang.String r3 = r1.getMessage()     // Catch: java.lang.Throwable -> L25
            r2.debug(r3, r1)     // Catch: java.lang.Throwable -> L25
        L39:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r9.manager     // Catch: java.lang.Throwable -> L54
            cz.msebera.android.httpclient.HttpClientConnection r3 = r9.managedConn     // Catch: java.lang.Throwable -> L54
            r4 = 0
            r5 = 0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L54
            r2.releaseConnection(r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L54
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            return
        L47:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r9.manager     // Catch: java.lang.Throwable -> L54
            cz.msebera.android.httpclient.HttpClientConnection r3 = r9.managedConn     // Catch: java.lang.Throwable -> L54
            r4 = 0
            r5 = 0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L54
            r2.releaseConnection(r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L54
            throw r1     // Catch: java.lang.Throwable -> L54
        L54:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            throw r1
    }

    @Override
    public boolean cancel() {
            r3 = this;
            boolean r0 = r3.released
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "Cancelling request execution"
            r1.debug(r2)
            r3.abortConnection()
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r0 = this;
            r0.abortConnection()
            return
    }

    public boolean isReleased() {
            r1 = this;
            boolean r0 = r1.released
            return r0
    }

    public boolean isReusable() {
            r1 = this;
            boolean r0 = r1.reusable
            return r0
    }

    public void markNonReusable() {
            r1 = this;
            r0 = 0
            r1.reusable = r0
            return
    }

    public void markReusable() {
            r1 = this;
            r0 = 1
            r1.reusable = r0
            return
    }

    @Override
    public void releaseConnection() {
            r9 = this;
            cz.msebera.android.httpclient.HttpClientConnection r0 = r9.managedConn
            monitor-enter(r0)
            boolean r1 = r9.released     // Catch: java.lang.Throwable -> L66
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L66
            return
        L9:
            r1 = 1
            r9.released = r1     // Catch: java.lang.Throwable -> L66
            boolean r1 = r9.reusable     // Catch: java.lang.Throwable -> L66
            if (r1 == 0) goto L1e
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r9.manager     // Catch: java.lang.Throwable -> L66
            cz.msebera.android.httpclient.HttpClientConnection r3 = r9.managedConn     // Catch: java.lang.Throwable -> L66
            java.lang.Object r4 = r9.state     // Catch: java.lang.Throwable -> L66
            long r5 = r9.validDuration     // Catch: java.lang.Throwable -> L66
            java.util.concurrent.TimeUnit r7 = r9.tunit     // Catch: java.lang.Throwable -> L66
            r2.releaseConnection(r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L66
            goto L57
        L1e:
            cz.msebera.android.httpclient.HttpClientConnection r1 = r9.managedConn     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            r1.close()     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r9.log     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            java.lang.String r2 = "Connection discarded"
            r1.debug(r2)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L39
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r3 = r9.manager     // Catch: java.lang.Throwable -> L66
            cz.msebera.android.httpclient.HttpClientConnection r4 = r9.managedConn     // Catch: java.lang.Throwable -> L66
            r5 = 0
            r6 = 0
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L66
            r3.releaseConnection(r4, r5, r6, r8)     // Catch: java.lang.Throwable -> L66
            goto L57
        L37:
            r1 = move-exception
            goto L59
        L39:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log     // Catch: java.lang.Throwable -> L37
            boolean r2 = r2.isDebugEnabled()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L4b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log     // Catch: java.lang.Throwable -> L37
            java.lang.String r3 = r1.getMessage()     // Catch: java.lang.Throwable -> L37
            r2.debug(r3, r1)     // Catch: java.lang.Throwable -> L37
        L4b:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r9.manager     // Catch: java.lang.Throwable -> L66
            cz.msebera.android.httpclient.HttpClientConnection r3 = r9.managedConn     // Catch: java.lang.Throwable -> L66
            r4 = 0
            r5 = 0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L66
            r2.releaseConnection(r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L66
        L57:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L66
            return
        L59:
            cz.msebera.android.httpclient.conn.HttpClientConnectionManager r2 = r9.manager     // Catch: java.lang.Throwable -> L66
            cz.msebera.android.httpclient.HttpClientConnection r3 = r9.managedConn     // Catch: java.lang.Throwable -> L66
            r4 = 0
            r5 = 0
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L66
            r2.releaseConnection(r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L66
            throw r1     // Catch: java.lang.Throwable -> L66
        L66:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L66
            throw r1
    }

    public void setState(java.lang.Object r1) {
            r0 = this;
            r0.state = r1
            return
    }

    public void setValidFor(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            cz.msebera.android.httpclient.HttpClientConnection r0 = r1.managedConn
            monitor-enter(r0)
            r1.validDuration = r2     // Catch: java.lang.Throwable -> L9
            r1.tunit = r4     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r2
    }
}
