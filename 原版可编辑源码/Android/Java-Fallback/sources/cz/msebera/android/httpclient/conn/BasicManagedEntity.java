package cz.msebera.android.httpclient.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class BasicManagedEntity extends cz.msebera.android.httpclient.entity.HttpEntityWrapper implements cz.msebera.android.httpclient.conn.ConnectionReleaseTrigger, cz.msebera.android.httpclient.conn.EofSensorWatcher {
    protected final boolean attemptReuse;
    protected cz.msebera.android.httpclient.conn.ManagedClientConnection managedConn;

    public BasicManagedEntity(cz.msebera.android.httpclient.HttpEntity r1, cz.msebera.android.httpclient.conn.ManagedClientConnection r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "Connection"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r1)
            r0.managedConn = r2
            r0.attemptReuse = r3
            return
    }

    private void ensureConsumed() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r2.managedConn
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r2.attemptReuse     // Catch: java.lang.Throwable -> L1b
            if (r1 == 0) goto L14
            cz.msebera.android.httpclient.HttpEntity r0 = r2.wrappedEntity     // Catch: java.lang.Throwable -> L1b
            cz.msebera.android.httpclient.util.EntityUtils.consume(r0)     // Catch: java.lang.Throwable -> L1b
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r2.managedConn     // Catch: java.lang.Throwable -> L1b
            r0.markReusable()     // Catch: java.lang.Throwable -> L1b
            goto L17
        L14:
            r0.unmarkReusable()     // Catch: java.lang.Throwable -> L1b
        L17:
            r2.releaseManagedConnection()
            return
        L1b:
            r0 = move-exception
            r2.releaseManagedConnection()
            throw r0
    }

    @Override
    public void abortConnection() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r2.managedConn
            if (r0 == 0) goto Lf
            r1 = 0
            r0.abortConnection()     // Catch: java.lang.Throwable -> Lb
            r2.managedConn = r1
            goto Lf
        Lb:
            r0 = move-exception
            r2.managedConn = r1
            throw r0
        Lf:
            return
    }

    @Override
    @java.lang.Deprecated
    public void consumeContent() throws java.io.IOException {
            r0 = this;
            r0.ensureConsumed()
            return
    }

    @Override
    public boolean eofDetected(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r1.managedConn     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L16
            boolean r0 = r1.attemptReuse     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L11
            r2.close()     // Catch: java.lang.Throwable -> L1b
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn     // Catch: java.lang.Throwable -> L1b
            r2.markReusable()     // Catch: java.lang.Throwable -> L1b
            goto L16
        L11:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn     // Catch: java.lang.Throwable -> L1b
            r2.unmarkReusable()     // Catch: java.lang.Throwable -> L1b
        L16:
            r1.releaseManagedConnection()
            r2 = 0
            return r2
        L1b:
            r2 = move-exception
            r1.releaseManagedConnection()
            throw r2
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.conn.EofSensorInputStream r0 = new cz.msebera.android.httpclient.conn.EofSensorInputStream
            cz.msebera.android.httpclient.HttpEntity r1 = r2.wrappedEntity
            java.io.InputStream r1 = r1.getContent()
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void releaseConnection() throws java.io.IOException {
            r0 = this;
            r0.ensureConsumed()
            return
    }

    protected void releaseManagedConnection() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r2.managedConn
            if (r0 == 0) goto Lf
            r1 = 0
            r0.releaseConnection()     // Catch: java.lang.Throwable -> Lb
            r2.managedConn = r1
            goto Lf
        Lb:
            r0 = move-exception
            r2.managedConn = r1
            throw r0
        Lf:
            return
    }

    @Override
    public boolean streamAbort(java.io.InputStream r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r1 = r0.managedConn
            if (r1 == 0) goto L7
            r1.abortConnection()
        L7:
            r1 = 0
            return r1
    }

    @Override
    public boolean streamClosed(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r1.managedConn     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L21
            boolean r0 = r1.attemptReuse     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L1c
            cz.msebera.android.httpclient.conn.ManagedClientConnection r0 = r1.managedConn     // Catch: java.lang.Throwable -> L26
            boolean r0 = r0.isOpen()     // Catch: java.lang.Throwable -> L26
            r2.close()     // Catch: java.net.SocketException -> L17 java.lang.Throwable -> L26
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn     // Catch: java.net.SocketException -> L17 java.lang.Throwable -> L26
            r2.markReusable()     // Catch: java.net.SocketException -> L17 java.lang.Throwable -> L26
            goto L21
        L17:
            r2 = move-exception
            if (r0 != 0) goto L1b
            goto L21
        L1b:
            throw r2     // Catch: java.lang.Throwable -> L26
        L1c:
            cz.msebera.android.httpclient.conn.ManagedClientConnection r2 = r1.managedConn     // Catch: java.lang.Throwable -> L26
            r2.unmarkReusable()     // Catch: java.lang.Throwable -> L26
        L21:
            r1.releaseManagedConnection()
            r2 = 0
            return r2
        L26:
            r2 = move-exception
            r1.releaseManagedConnection()
            throw r2
    }

    @Override
    public void writeTo(java.io.OutputStream r1) throws java.io.IOException {
            r0 = this;
            super.writeTo(r1)
            r0.ensureConsumed()
            return
    }
}
