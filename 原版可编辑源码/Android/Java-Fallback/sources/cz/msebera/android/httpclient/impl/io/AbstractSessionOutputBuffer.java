package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public abstract class AbstractSessionOutputBuffer implements cz.msebera.android.httpclient.io.SessionOutputBuffer, cz.msebera.android.httpclient.io.BufferInfo {
    private static final byte[] CRLF = null;
    private boolean ascii;
    private java.nio.ByteBuffer bbuf;
    private cz.msebera.android.httpclient.util.ByteArrayBuffer buffer;
    private java.nio.charset.Charset charset;
    private java.nio.charset.CharsetEncoder encoder;
    private cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl metrics;
    private int minChunkLimit;
    private java.nio.charset.CodingErrorAction onMalformedCharAction;
    private java.nio.charset.CodingErrorAction onUnmappableCharAction;
    private java.io.OutputStream outstream;

    static {
            r0 = 2
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            cz.msebera.android.httpclient.impl.io.AbstractSessionOutputBuffer.CRLF = r0
            return
    }

    public AbstractSessionOutputBuffer() {
            r0 = this;
            r0.<init>()
            return
    }

    protected AbstractSessionOutputBuffer(java.io.OutputStream r2, int r3, java.nio.charset.Charset r4, int r5, java.nio.charset.CodingErrorAction r6, java.nio.charset.CodingErrorAction r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Input stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Buffer size"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            r1.outstream = r2
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = new cz.msebera.android.httpclient.util.ByteArrayBuffer
            r2.<init>(r3)
            r1.buffer = r2
            if (r4 == 0) goto L19
            goto L1b
        L19:
            java.nio.charset.Charset r4 = cz.msebera.android.httpclient.Consts.ASCII
        L1b:
            r1.charset = r4
            java.nio.charset.Charset r2 = r1.charset
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.ASCII
            boolean r2 = r2.equals(r3)
            r1.ascii = r2
            r2 = 0
            r1.encoder = r2
            if (r5 < 0) goto L2d
            goto L2f
        L2d:
            r5 = 512(0x200, float:7.17E-43)
        L2f:
            r1.minChunkLimit = r5
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r2 = r1.createTransportMetrics()
            r1.metrics = r2
            if (r6 == 0) goto L3a
            goto L3c
        L3a:
            java.nio.charset.CodingErrorAction r6 = java.nio.charset.CodingErrorAction.REPORT
        L3c:
            r1.onMalformedCharAction = r6
            if (r7 == 0) goto L41
            goto L43
        L41:
            java.nio.charset.CodingErrorAction r7 = java.nio.charset.CodingErrorAction.REPORT
        L43:
            r1.onUnmappableCharAction = r7
            return
    }

    private void handleEncodingResult(java.nio.charset.CoderResult r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r2.isError()
            if (r0 == 0) goto L9
            r2.throwException()
        L9:
            java.nio.ByteBuffer r2 = r1.bbuf
            r2.flip()
        Le:
            java.nio.ByteBuffer r2 = r1.bbuf
            boolean r2 = r2.hasRemaining()
            if (r2 == 0) goto L20
            java.nio.ByteBuffer r2 = r1.bbuf
            byte r2 = r2.get()
            r1.write(r2)
            goto Le
        L20:
            java.nio.ByteBuffer r2 = r1.bbuf
            r2.compact()
            return
    }

    private void writeEncoded(java.nio.CharBuffer r4) throws java.io.IOException {
            r3 = this;
            boolean r0 = r4.hasRemaining()
            if (r0 != 0) goto L7
            return
        L7:
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            if (r0 != 0) goto L21
            java.nio.charset.Charset r0 = r3.charset
            java.nio.charset.CharsetEncoder r0 = r0.newEncoder()
            r3.encoder = r0
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            java.nio.charset.CodingErrorAction r1 = r3.onMalformedCharAction
            r0.onMalformedInput(r1)
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            java.nio.charset.CodingErrorAction r1 = r3.onUnmappableCharAction
            r0.onUnmappableCharacter(r1)
        L21:
            java.nio.ByteBuffer r0 = r3.bbuf
            if (r0 != 0) goto L2d
            r0 = 1024(0x400, float:1.435E-42)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r3.bbuf = r0
        L2d:
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            r0.reset()
        L32:
            boolean r0 = r4.hasRemaining()
            if (r0 == 0) goto L45
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            java.nio.ByteBuffer r1 = r3.bbuf
            r2 = 1
            java.nio.charset.CoderResult r0 = r0.encode(r4, r1, r2)
            r3.handleEncodingResult(r0)
            goto L32
        L45:
            java.nio.charset.CharsetEncoder r4 = r3.encoder
            java.nio.ByteBuffer r0 = r3.bbuf
            java.nio.charset.CoderResult r4 = r4.flush(r0)
            r3.handleEncodingResult(r4)
            java.nio.ByteBuffer r4 = r3.bbuf
            r4.clear()
            return
    }

    @Override
    public int available() {
            r2 = this;
            int r0 = r2.capacity()
            int r1 = r2.length()
            int r0 = r0 - r1
            return r0
    }

    @Override
    public int capacity() {
            r1 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            int r0 = r0.capacity()
            return r0
    }

    protected cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl createTransportMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r0 = new cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl
            r0.<init>()
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            r1.flushBuffer()
            java.io.OutputStream r0 = r1.outstream
            r0.flush()
            return
    }

    protected void flushBuffer() throws java.io.IOException {
            r4 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r4.buffer
            int r0 = r0.length()
            if (r0 <= 0) goto L1f
            java.io.OutputStream r1 = r4.outstream
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = r4.buffer
            byte[] r2 = r2.buffer()
            r3 = 0
            r1.write(r2, r3, r0)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r4.buffer
            r1.clear()
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r1 = r4.metrics
            long r2 = (long) r0
            r1.incrementBytesTransferred(r2)
        L1f:
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r0 = r1.metrics
            return r0
    }

    protected void init(java.io.OutputStream r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r1 = this;
            java.lang.String r0 = "Input stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Buffer size"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r1.outstream = r2
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = new cz.msebera.android.httpclient.util.ByteArrayBuffer
            r2.<init>(r3)
            r1.buffer = r2
            java.lang.String r2 = "http.protocol.element-charset"
            java.lang.Object r2 = r4.getParameter(r2)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L27
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            goto L29
        L27:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.ASCII
        L29:
            r1.charset = r2
            java.nio.charset.Charset r2 = r1.charset
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.ASCII
            boolean r2 = r2.equals(r3)
            r1.ascii = r2
            r2 = 0
            r1.encoder = r2
            r2 = 512(0x200, float:7.17E-43)
            java.lang.String r3 = "http.connection.min-chunk-limit"
            int r2 = r4.getIntParameter(r3, r2)
            r1.minChunkLimit = r2
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r2 = r1.createTransportMetrics()
            r1.metrics = r2
            java.lang.String r2 = "http.malformed.input.action"
            java.lang.Object r2 = r4.getParameter(r2)
            java.nio.charset.CodingErrorAction r2 = (java.nio.charset.CodingErrorAction) r2
            if (r2 == 0) goto L53
            goto L55
        L53:
            java.nio.charset.CodingErrorAction r2 = java.nio.charset.CodingErrorAction.REPORT
        L55:
            r1.onMalformedCharAction = r2
            java.lang.String r2 = "http.unmappable.input.action"
            java.lang.Object r2 = r4.getParameter(r2)
            java.nio.charset.CodingErrorAction r2 = (java.nio.charset.CodingErrorAction) r2
            if (r2 == 0) goto L62
            goto L64
        L62:
            java.nio.charset.CodingErrorAction r2 = java.nio.charset.CodingErrorAction.REPORT
        L64:
            r1.onUnmappableCharAction = r2
            return
    }

    @Override
    public int length() {
            r1 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            int r0 = r0.length()
            return r0
    }

    @Override
    public void write(int r2) throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            boolean r0 = r0.isFull()
            if (r0 == 0) goto Lb
            r1.flushBuffer()
        Lb:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            r0.append(r2)
            return
    }

    @Override
    public void write(byte[] r3) throws java.io.IOException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r0 = 0
            int r1 = r3.length
            r2.write(r3, r0, r1)
            return
    }

    @Override
    public void write(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r2.minChunkLimit
            if (r5 > r0) goto L28
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r2.buffer
            int r0 = r0.capacity()
            if (r5 <= r0) goto L10
            goto L28
        L10:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r2.buffer
            int r0 = r0.capacity()
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r2.buffer
            int r1 = r1.length()
            int r0 = r0 - r1
            if (r5 <= r0) goto L22
            r2.flushBuffer()
        L22:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r2.buffer
            r0.append(r3, r4, r5)
            goto L36
        L28:
            r2.flushBuffer()
            java.io.OutputStream r0 = r2.outstream
            r0.write(r3, r4, r5)
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r3 = r2.metrics
            long r4 = (long) r5
            r3.incrementBytesTransferred(r4)
        L36:
            return
    }

    @Override
    public void writeLine(cz.msebera.android.httpclient.util.CharArrayBuffer r5) throws java.io.IOException {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            boolean r0 = r4.ascii
            r1 = 0
            if (r0 == 0) goto L34
            int r0 = r5.length()
        Lc:
            if (r0 <= 0) goto L43
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = r4.buffer
            int r2 = r2.capacity()
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = r4.buffer
            int r3 = r3.length()
            int r2 = r2 - r3
            int r2 = java.lang.Math.min(r2, r0)
            if (r2 <= 0) goto L26
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = r4.buffer
            r3.append(r5, r1, r2)
        L26:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = r4.buffer
            boolean r3 = r3.isFull()
            if (r3 == 0) goto L31
            r4.flushBuffer()
        L31:
            int r1 = r1 + r2
            int r0 = r0 - r2
            goto Lc
        L34:
            char[] r0 = r5.buffer()
            int r5 = r5.length()
            java.nio.CharBuffer r5 = java.nio.CharBuffer.wrap(r0, r1, r5)
            r4.writeEncoded(r5)
        L43:
            byte[] r5 = cz.msebera.android.httpclient.impl.io.AbstractSessionOutputBuffer.CRLF
            r4.write(r5)
            return
    }

    @Override
    public void writeLine(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.length()
            if (r0 <= 0) goto L25
            boolean r0 = r2.ascii
            if (r0 == 0) goto L1e
            r0 = 0
        Le:
            int r1 = r3.length()
            if (r0 >= r1) goto L25
            char r1 = r3.charAt(r0)
            r2.write(r1)
            int r0 = r0 + 1
            goto Le
        L1e:
            java.nio.CharBuffer r3 = java.nio.CharBuffer.wrap(r3)
            r2.writeEncoded(r3)
        L25:
            byte[] r3 = cz.msebera.android.httpclient.impl.io.AbstractSessionOutputBuffer.CRLF
            r2.write(r3)
            return
    }
}
