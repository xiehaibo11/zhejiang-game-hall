package cz.msebera.android.httpclient.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class EofSensorInputStream extends java.io.InputStream implements cz.msebera.android.httpclient.conn.ConnectionReleaseTrigger {
    private final cz.msebera.android.httpclient.conn.EofSensorWatcher eofWatcher;
    private boolean selfClosed;
    protected java.io.InputStream wrappedStream;

    public EofSensorInputStream(java.io.InputStream r2, cz.msebera.android.httpclient.conn.EofSensorWatcher r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Wrapped stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.wrappedStream = r2
            r2 = 0
            r1.selfClosed = r2
            r1.eofWatcher = r3
            return
    }

    @Override
    public void abortConnection() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.selfClosed = r0
            r1.checkAbort()
            return
    }

    @Override
    public int available() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.isReadAllowed()
            if (r0 == 0) goto L12
            java.io.InputStream r0 = r1.wrappedStream     // Catch: java.io.IOException -> Ld
            int r0 = r0.available()     // Catch: java.io.IOException -> Ld
            goto L13
        Ld:
            r0 = move-exception
            r1.checkAbort()
            throw r0
        L12:
            r0 = 0
        L13:
            return r0
    }

    protected void checkAbort() throws java.io.IOException {
            r4 = this;
            java.io.InputStream r0 = r4.wrappedStream
            if (r0 == 0) goto L1e
            r1 = 1
            r2 = 0
            cz.msebera.android.httpclient.conn.EofSensorWatcher r3 = r4.eofWatcher     // Catch: java.lang.Throwable -> L1a
            if (r3 == 0) goto L10
            cz.msebera.android.httpclient.conn.EofSensorWatcher r1 = r4.eofWatcher     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.streamAbort(r0)     // Catch: java.lang.Throwable -> L1a
        L10:
            if (r1 == 0) goto L17
            java.io.InputStream r0 = r4.wrappedStream     // Catch: java.lang.Throwable -> L1a
            r0.close()     // Catch: java.lang.Throwable -> L1a
        L17:
            r4.wrappedStream = r2
            goto L1e
        L1a:
            r0 = move-exception
            r4.wrappedStream = r2
            throw r0
        L1e:
            return
    }

    protected void checkClose() throws java.io.IOException {
            r4 = this;
            java.io.InputStream r0 = r4.wrappedStream
            if (r0 == 0) goto L1e
            r1 = 1
            r2 = 0
            cz.msebera.android.httpclient.conn.EofSensorWatcher r3 = r4.eofWatcher     // Catch: java.lang.Throwable -> L1a
            if (r3 == 0) goto L10
            cz.msebera.android.httpclient.conn.EofSensorWatcher r1 = r4.eofWatcher     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.streamClosed(r0)     // Catch: java.lang.Throwable -> L1a
        L10:
            if (r1 == 0) goto L17
            java.io.InputStream r0 = r4.wrappedStream     // Catch: java.lang.Throwable -> L1a
            r0.close()     // Catch: java.lang.Throwable -> L1a
        L17:
            r4.wrappedStream = r2
            goto L1e
        L1a:
            r0 = move-exception
            r4.wrappedStream = r2
            throw r0
        L1e:
            return
    }

    protected void checkEOF(int r4) throws java.io.IOException {
            r3 = this;
            java.io.InputStream r0 = r3.wrappedStream
            if (r0 == 0) goto L20
            if (r4 >= 0) goto L20
            r4 = 1
            r1 = 0
            cz.msebera.android.httpclient.conn.EofSensorWatcher r2 = r3.eofWatcher     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L12
            cz.msebera.android.httpclient.conn.EofSensorWatcher r4 = r3.eofWatcher     // Catch: java.lang.Throwable -> L1c
            boolean r4 = r4.eofDetected(r0)     // Catch: java.lang.Throwable -> L1c
        L12:
            if (r4 == 0) goto L19
            java.io.InputStream r4 = r3.wrappedStream     // Catch: java.lang.Throwable -> L1c
            r4.close()     // Catch: java.lang.Throwable -> L1c
        L19:
            r3.wrappedStream = r1
            goto L20
        L1c:
            r4 = move-exception
            r3.wrappedStream = r1
            throw r4
        L20:
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.selfClosed = r0
            r1.checkClose()
            return
    }

    java.io.InputStream getWrappedStream() {
            r1 = this;
            java.io.InputStream r0 = r1.wrappedStream
            return r0
    }

    protected boolean isReadAllowed() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.selfClosed
            if (r0 != 0) goto Lc
            java.io.InputStream r0 = r2.wrappedStream
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
        Lc:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Attempted read on closed stream."
            r0.<init>(r1)
            throw r0
    }

    boolean isSelfClosed() {
            r1 = this;
            boolean r0 = r1.selfClosed
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.isReadAllowed()
            if (r0 == 0) goto L15
            java.io.InputStream r0 = r1.wrappedStream     // Catch: java.io.IOException -> L10
            int r0 = r0.read()     // Catch: java.io.IOException -> L10
            r1.checkEOF(r0)     // Catch: java.io.IOException -> L10
            goto L16
        L10:
            r0 = move-exception
            r1.checkAbort()
            throw r0
        L15:
            r0 = -1
        L16:
            return r0
    }

    @Override
    public int read(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.isReadAllowed()
            if (r0 == 0) goto L15
            java.io.InputStream r0 = r1.wrappedStream     // Catch: java.io.IOException -> L10
            int r2 = r0.read(r2, r3, r4)     // Catch: java.io.IOException -> L10
            r1.checkEOF(r2)     // Catch: java.io.IOException -> L10
            goto L16
        L10:
            r2 = move-exception
            r1.checkAbort()
            throw r2
        L15:
            r2 = -1
        L16:
            return r2
    }

    @Override
    public void releaseConnection() throws java.io.IOException {
            r0 = this;
            r0.close()
            return
    }
}
