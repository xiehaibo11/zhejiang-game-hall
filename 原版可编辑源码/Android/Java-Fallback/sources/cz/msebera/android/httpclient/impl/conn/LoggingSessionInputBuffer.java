package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class LoggingSessionInputBuffer implements cz.msebera.android.httpclient.io.SessionInputBuffer, cz.msebera.android.httpclient.io.EofSensor {
    private final java.lang.String charset;
    private final cz.msebera.android.httpclient.io.EofSensor eofSensor;
    private final cz.msebera.android.httpclient.io.SessionInputBuffer in;
    private final cz.msebera.android.httpclient.impl.conn.Wire wire;

    public LoggingSessionInputBuffer(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.impl.conn.Wire r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public LoggingSessionInputBuffer(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.impl.conn.Wire r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r1.in = r2
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.io.EofSensor
            if (r0 == 0) goto Lc
            cz.msebera.android.httpclient.io.EofSensor r2 = (cz.msebera.android.httpclient.io.EofSensor) r2
            goto Ld
        Lc:
            r2 = 0
        Ld:
            r1.eofSensor = r2
            r1.wire = r3
            if (r4 == 0) goto L14
            goto L1a
        L14:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.ASCII
            java.lang.String r4 = r2.name()
        L1a:
            r1.charset = r4
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r1.in
            cz.msebera.android.httpclient.io.HttpTransportMetrics r0 = r0.getMetrics()
            return r0
    }

    @Override
    public boolean isDataAvailable(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r1.in
            boolean r2 = r0.isDataAvailable(r2)
            return r2
    }

    @Override
    public boolean isEof() {
            r1 = this;
            cz.msebera.android.httpclient.io.EofSensor r0 = r1.eofSensor
            if (r0 == 0) goto L9
            boolean r0 = r0.isEof()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r2.in
            int r0 = r0.read()
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r2.wire
            boolean r1 = r1.enabled()
            if (r1 == 0) goto L16
            r1 = -1
            if (r0 == r1) goto L16
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r2.wire
            r1.input(r0)
        L16:
            return r0
    }

    @Override
    public int read(byte[] r4) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r3.in
            int r0 = r0.read(r4)
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r3.wire
            boolean r1 = r1.enabled()
            if (r1 == 0) goto L16
            if (r0 <= 0) goto L16
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r3.wire
            r2 = 0
            r1.input(r4, r2, r0)
        L16:
            return r0
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r1.in
            int r4 = r0.read(r2, r3, r4)
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            boolean r0 = r0.enabled()
            if (r0 == 0) goto L15
            if (r4 <= 0) goto L15
            cz.msebera.android.httpclient.impl.conn.Wire r0 = r1.wire
            r0.input(r2, r3, r4)
        L15:
            return r4
    }

    @Override
    public int readLine(cz.msebera.android.httpclient.util.CharArrayBuffer r4) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r3.in
            int r0 = r0.readLine(r4)
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r3.wire
            boolean r1 = r1.enabled()
            if (r1 == 0) goto L3a
            if (r0 < 0) goto L3a
            int r1 = r4.length()
            int r1 = r1 - r0
            java.lang.String r2 = new java.lang.String
            char[] r4 = r4.buffer()
            r2.<init>(r4, r1, r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r1 = "\r\n"
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r3.wire
            java.lang.String r2 = r3.charset
            byte[] r4 = r4.getBytes(r2)
            r1.input(r4)
        L3a:
            return r0
    }

    @Override
    public java.lang.String readLine() throws java.io.IOException {
            r4 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r4.in
            java.lang.String r0 = r0.readLine()
            cz.msebera.android.httpclient.impl.conn.Wire r1 = r4.wire
            boolean r1 = r1.enabled()
            if (r1 == 0) goto L2c
            if (r0 == 0) goto L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r2 = "\r\n"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            cz.msebera.android.httpclient.impl.conn.Wire r2 = r4.wire
            java.lang.String r3 = r4.charset
            byte[] r1 = r1.getBytes(r3)
            r2.input(r1)
        L2c:
            return r0
    }
}
