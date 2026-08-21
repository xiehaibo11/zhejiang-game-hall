package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class LoggingSessionOutputBuffer implements cz.msebera.android.httpclient.io.SessionOutputBuffer {
    private final java.lang.String charset;
    private final cz.msebera.android.httpclient.io.SessionOutputBuffer out;
    private final cz.msebera.android.httpclient.impl.conn.Wire wire;

    public LoggingSessionOutputBuffer(cz.msebera.android.httpclient.io.SessionOutputBuffer r2, cz.msebera.android.httpclient.impl.conn.Wire r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public LoggingSessionOutputBuffer(cz.msebera.android.httpclient.io.SessionOutputBuffer r1, cz.msebera.android.httpclient.impl.conn.Wire r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.out = r1
            r0.wire = r2
            if (r3 == 0) goto La
            goto L10
        La:
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ASCII
            java.lang.String r3 = r1.name()
        L10:
            r0.charset = r3
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            cz.msebera.android.httpclient.io.HttpTransportMetrics r0 = r0.getMetrics()
            return r0
    }

    @Override
    public void write(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.write(r2)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L12
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            r0.output(r2)
        L12:
            return
    }

    @Override
    public void write(byte[] r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.write(r2)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L12
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            r0.output(r2)
        L12:
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.write(r2, r3, r4)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L12
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            r0.output(r2, r3, r4)
        L12:
            return
    }

    @Override
    public void writeLine(cz.msebera.android.httpclient.util.CharArrayBuffer r4) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r3.out
            r0.writeLine(r4)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L37
            java.lang.String r0 = new java.lang.String
            char[] r1 = r4.buffer()
            r2 = 0
            int r4 = r4.length()
            r0.<init>(r1, r2, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "\r\n"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r3.wire
            java.lang.String r1 = r3.charset
            byte[] r4 = r4.getBytes(r1)
            r0.output(r4)
        L37:
            return
    }

    @Override
    public void writeLine(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r2.out
            r0.writeLine(r3)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r2.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "\r\n"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r2.wire
            java.lang.String r1 = r2.charset
            byte[] r3 = r3.getBytes(r1)
            r0.output(r3)
        L29:
            return
    }
}
