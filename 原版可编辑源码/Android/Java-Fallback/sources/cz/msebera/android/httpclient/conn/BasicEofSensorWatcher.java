package cz.msebera.android.httpclient.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class BasicEofSensorWatcher implements cz.msebera.android.httpclient.conn.EofSensorWatcher {
    protected final boolean attemptReuse;
    protected final cz.msebera.android.httpclient.conn.ManagedClientConnection managedConn;

    public BasicEofSensorWatcher(cz.msebera.android.httpclient.conn.ManagedClientConnection r2, boolean r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.managedConn = r2
            r1.attemptReuse = r3
            return
    }

    @Override
    public boolean eofDetected(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.attemptReuse     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto Lc
            r2.close()     // Catch: java.lang.Throwable -> L13
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn     // Catch: java.lang.Throwable -> L13
            r2.markReusable()     // Catch: java.lang.Throwable -> L13
        Lc:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn
            r2.releaseConnection()
            r2 = 0
            return r2
        L13:
            r2 = move-exception
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r1.managedConn
            r0.releaseConnection()
            throw r2
    }

    @Override
    public boolean streamAbort(java.io.InputStream r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r1 = r0.managedConn
            r1.abortConnection()
            r1 = 0
            return r1
    }

    @Override
    public boolean streamClosed(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.attemptReuse     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto Lc
            r2.close()     // Catch: java.lang.Throwable -> L13
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn     // Catch: java.lang.Throwable -> L13
            r2.markReusable()     // Catch: java.lang.Throwable -> L13
        Lc:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn
            r2.releaseConnection()
            r2 = 0
            return r2
        L13:
            r2 = move-exception
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r1.managedConn
            r0.releaseConnection()
            throw r2
    }
}
