package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class LoggingOutputStream extends java.io.OutputStream {
    private final java.io.OutputStream out;
    private final cz.msebera.android.httpclient.impl.conn.Wire wire;

    public LoggingOutputStream(java.io.OutputStream r1, cz.msebera.android.httpclient.impl.conn.Wire r2) {
            r0 = this;
            r0.<init>()
            r0.out = r1
            r0.wire = r2
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r4 = this;
            java.io.OutputStream r0 = r4.out     // Catch: java.io.IOException -> L6
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
            r1.output(r2)
            throw r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r4 = this;
            java.io.OutputStream r0 = r4.out     // Catch: java.io.IOException -> L6
            r0.flush()     // Catch: java.io.IOException -> L6
            return
        L6:
            r0 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[flush] I/O error: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.output(r2)
            throw r0
    }

    @Override
    public void write(int r4) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire     // Catch: java.io.IOException -> L6
            r0.output(r4)     // Catch: java.io.IOException -> L6
            return
        L6:
            r4 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[write] I/O error: "
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.output(r1)
            throw r4
    }

    @Override
    public void write(byte[] r4) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire     // Catch: java.io.IOException -> Lb
            r0.output(r4)     // Catch: java.io.IOException -> Lb
            java.io.OutputStream r0 = r3.out     // Catch: java.io.IOException -> Lb
            r0.write(r4)     // Catch: java.io.IOException -> Lb
            return
        Lb:
            r4 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[write] I/O error: "
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.output(r1)
            throw r4
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire     // Catch: java.io.IOException -> Lb
            r0.output(r2, r3, r4)     // Catch: java.io.IOException -> Lb
            java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> Lb
            r0.write(r2, r3, r4)     // Catch: java.io.IOException -> Lb
            return
        Lb:
            r2 = move-exception
            cz.msebera.android.httpclient.impl.conn.Wire r3 = r1.wire
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "[write] I/O error: "
            r4.append(r0)
            java.lang.String r0 = r2.getMessage()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.output(r4)
            throw r2
    }
}
