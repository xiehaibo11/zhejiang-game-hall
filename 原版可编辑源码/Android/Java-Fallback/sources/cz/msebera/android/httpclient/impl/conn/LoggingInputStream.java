package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class LoggingInputStream extends java.io.InputStream {
    private final java.io.InputStream in;
    private final cz.msebera.android.httpclient.impl.conn.Wire wire;

    public LoggingInputStream(java.io.InputStream r1, cz.msebera.android.httpclient.impl.conn.Wire r2) {
            r0 = this;
            r0.<init>()
            r0.in = r1
            r0.wire = r2
            return
    }

    @Override
    public int available() throws java.io.IOException {
            r4 = this;
            java.io.InputStream r0 = r4.in     // Catch: java.io.IOException -> L7
            int r0 = r0.available()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[available] I/O error : "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.input(r2)
            throw r0
    }

    @Override
    public void close() throws java.io.IOException {
            r4 = this;
            java.io.InputStream r0 = r4.in     // Catch: java.io.IOException -> L6
            r0.close()     // Catch: java.io.IOException -> L6
            return
        L6:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[close] I/O error: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.input(r2)
            throw r0
    }

    @Override
    public void mark(int r1) {
            r0 = this;
            super.mark(r1)
            return
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r4 = this;
            java.io.InputStream r0 = r4.in     // Catch: java.io.IOException -> L17
            int r0 = r0.read()     // Catch: java.io.IOException -> L17
            r1 = -1
            if (r0 != r1) goto L11
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire     // Catch: java.io.IOException -> L17
            java.lang.String r2 = "end of stream"
            r1.input(r2)     // Catch: java.io.IOException -> L17
            goto L16
        L11:
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire     // Catch: java.io.IOException -> L17
            r1.input(r0)     // Catch: java.io.IOException -> L17
        L16:
            return r0
        L17:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[read] I/O error: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.input(r2)
            throw r0
    }

    @Override
    public int read(byte[] r4) throws java.io.IOException {
            r3 = this;
            java.io.InputStream r0 = r3.in     // Catch: java.io.IOException -> L1a
            int r0 = r0.read(r4)     // Catch: java.io.IOException -> L1a
            r1 = -1
            if (r0 != r1) goto L11
            cz.msebera.android.httpclient.impl.conn.Wire r4 = r3.wire     // Catch: java.io.IOException -> L1a
            java.lang.String r1 = "end of stream"
            r4.input(r1)     // Catch: java.io.IOException -> L1a
            goto L19
        L11:
            if (r0 <= 0) goto L19
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r3.wire     // Catch: java.io.IOException -> L1a
            r2 = 0
            r1.input(r4, r2, r0)     // Catch: java.io.IOException -> L1a
        L19:
            return r0
        L1a:
            r4 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[read] I/O error: "
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.input(r1)
            throw r4
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.in     // Catch: java.io.IOException -> L19
            int r4 = r0.read(r2, r3, r4)     // Catch: java.io.IOException -> L19
            r0 = -1
            if (r4 != r0) goto L11
            cz.msebera.android.httpclient.impl.conn.Wire r2 = r1.wire     // Catch: java.io.IOException -> L19
            java.lang.String r3 = "end of stream"
            r2.input(r3)     // Catch: java.io.IOException -> L19
            goto L18
        L11:
            if (r4 <= 0) goto L18
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire     // Catch: java.io.IOException -> L19
            r0.input(r2, r3, r4)     // Catch: java.io.IOException -> L19
        L18:
            return r4
        L19:
            r2 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r3 = r1.wire
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "[read] I/O error: "
            r4.append(r0)
            java.lang.String r0 = r2.getMessage()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.input(r4)
            throw r2
    }

    @Override
    public void reset() throws java.io.IOException {
            r0 = this;
            super.reset()
            return
    }

    @Override
    public long skip(long r3) throws java.io.IOException {
            r2 = this;
            long r3 = super.skip(r3)     // Catch: java.io.IOException -> L5
            return r3
        L5:
            r3 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r4 = r2.wire
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[skip] I/O error: "
            r0.append(r1)
            java.lang.String r1 = r3.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.input(r0)
            throw r3
    }
}
