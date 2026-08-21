package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public abstract class AbstractSessionInputBuffer implements cz.msebera.android.httpclient.io.SessionInputBuffer, cz.msebera.android.httpclient.io.BufferInfo {
    private boolean ascii;
    private byte[] buffer;
    private int bufferlen;
    private int bufferpos;
    private java.nio.CharBuffer cbuf;
    private java.nio.charset.Charset charset;
    private java.nio.charset.CharsetDecoder decoder;
    private java.io.InputStream instream;
    private cz.msebera.android.httpclient.util.ByteArrayBuffer linebuffer;
    private int maxLineLen;
    private cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl metrics;
    private int minChunkLimit;
    private java.nio.charset.CodingErrorAction onMalformedCharAction;
    private java.nio.charset.CodingErrorAction onUnmappableCharAction;

    public AbstractSessionInputBuffer() {
            r0 = this;
            r0.<init>()
            return
    }

    private int appendDecoded(cz.msebera.android.httpclient.util.CharArrayBuffer r5, java.nio.ByteBuffer r6) throws java.io.IOException {
            r4 = this;
            boolean r0 = r6.hasRemaining()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            if (r0 != 0) goto L22
            java.nio.charset.Charset r0 = r4.charset
            java.nio.charset.CharsetDecoder r0 = r0.newDecoder()
            r4.decoder = r0
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            java.nio.charset.CodingErrorAction r2 = r4.onMalformedCharAction
            r0.onMalformedInput(r2)
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            java.nio.charset.CodingErrorAction r2 = r4.onUnmappableCharAction
            r0.onUnmappableCharacter(r2)
        L22:
            java.nio.CharBuffer r0 = r4.cbuf
            if (r0 != 0) goto L2e
            r0 = 1024(0x400, float:1.435E-42)
            java.nio.CharBuffer r0 = java.nio.CharBuffer.allocate(r0)
            r4.cbuf = r0
        L2e:
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            r0.reset()
        L33:
            boolean r0 = r6.hasRemaining()
            if (r0 == 0) goto L48
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            java.nio.CharBuffer r2 = r4.cbuf
            r3 = 1
            java.nio.charset.CoderResult r0 = r0.decode(r6, r2, r3)
            int r0 = r4.handleDecodingResult(r0, r5, r6)
            int r1 = r1 + r0
            goto L33
        L48:
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            java.nio.CharBuffer r2 = r4.cbuf
            java.nio.charset.CoderResult r0 = r0.flush(r2)
            int r5 = r4.handleDecodingResult(r0, r5, r6)
            int r1 = r1 + r5
            java.nio.CharBuffer r5 = r4.cbuf
            r5.clear()
            return r1
    }

    private int handleDecodingResult(java.nio.charset.CoderResult r1, cz.msebera.android.httpclient.util.CharArrayBuffer r2, java.nio.ByteBuffer r3) throws java.io.IOException {
            r0 = this;
            boolean r3 = r1.isError()
            if (r3 == 0) goto L9
            r1.throwException()
        L9:
            java.nio.CharBuffer r1 = r0.cbuf
            r1.flip()
            java.nio.CharBuffer r1 = r0.cbuf
            int r1 = r1.remaining()
        L14:
            java.nio.CharBuffer r3 = r0.cbuf
            boolean r3 = r3.hasRemaining()
            if (r3 == 0) goto L26
            java.nio.CharBuffer r3 = r0.cbuf
            char r3 = r3.get()
            r2.append(r3)
            goto L14
        L26:
            java.nio.CharBuffer r2 = r0.cbuf
            r2.compact()
            return r1
    }

    private int lineFromLineBuffer(cz.msebera.android.httpclient.util.CharArrayBuffer r4) throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r3.linebuffer
            int r0 = r0.length()
            if (r0 <= 0) goto L26
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r3.linebuffer
            int r2 = r0 + (-1)
            int r1 = r1.byteAt(r2)
            r2 = 10
            if (r1 != r2) goto L16
            int r0 = r0 + (-1)
        L16:
            if (r0 <= 0) goto L26
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r3.linebuffer
            int r2 = r0 + (-1)
            int r1 = r1.byteAt(r2)
            r2 = 13
            if (r1 != r2) goto L26
            int r0 = r0 + (-1)
        L26:
            boolean r1 = r3.ascii
            r2 = 0
            if (r1 == 0) goto L31
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r3.linebuffer
            r4.append(r1, r2, r0)
            goto L3f
        L31:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r3.linebuffer
            byte[] r1 = r1.buffer()
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r1, r2, r0)
            int r0 = r3.appendDecoded(r4, r0)
        L3f:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r4 = r3.linebuffer
            r4.clear()
            return r0
    }

    private int lineFromReadBuffer(cz.msebera.android.httpclient.util.CharArrayBuffer r4, int r5) throws java.io.IOException {
            r3 = this;
            int r0 = r3.bufferpos
            int r1 = r5 + 1
            r3.bufferpos = r1
            if (r5 <= r0) goto L14
            byte[] r1 = r3.buffer
            int r2 = r5 + (-1)
            r1 = r1[r2]
            r2 = 13
            if (r1 != r2) goto L14
            int r5 = r5 + (-1)
        L14:
            int r5 = r5 - r0
            boolean r1 = r3.ascii
            if (r1 == 0) goto L1f
            byte[] r1 = r3.buffer
            r4.append(r1, r0, r5)
            goto L29
        L1f:
            byte[] r1 = r3.buffer
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.wrap(r1, r0, r5)
            int r5 = r3.appendDecoded(r4, r5)
        L29:
            return r5
    }

    private int locateLF() {
            r3 = this;
            int r0 = r3.bufferpos
        L2:
            int r1 = r3.bufferlen
            if (r0 >= r1) goto L12
            byte[] r1 = r3.buffer
            r1 = r1[r0]
            r2 = 10
            if (r1 != r2) goto Lf
            return r0
        Lf:
            int r0 = r0 + 1
            goto L2
        L12:
            r0 = -1
            return r0
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
            byte[] r0 = r1.buffer
            int r0 = r0.length
            return r0
    }

    protected cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl createTransportMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r0 = new cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl
            r0.<init>()
            return r0
    }

    protected int fillBuffer() throws java.io.IOException {
            r4 = this;
            int r0 = r4.bufferpos
            if (r0 <= 0) goto L13
            int r1 = r4.bufferlen
            int r1 = r1 - r0
            r2 = 0
            if (r1 <= 0) goto Lf
            byte[] r3 = r4.buffer
            java.lang.System.arraycopy(r3, r0, r3, r2, r1)
        Lf:
            r4.bufferpos = r2
            r4.bufferlen = r1
        L13:
            int r0 = r4.bufferlen
            byte[] r1 = r4.buffer
            int r2 = r1.length
            int r2 = r2 - r0
            java.io.InputStream r3 = r4.instream
            int r1 = r3.read(r1, r0, r2)
            r2 = -1
            if (r1 != r2) goto L23
            return r2
        L23:
            int r0 = r0 + r1
            r4.bufferlen = r0
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r0 = r4.metrics
            long r2 = (long) r1
            r0.incrementBytesTransferred(r2)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r0 = r1.metrics
            return r0
    }

    protected boolean hasBufferedData() {
            r2 = this;
            int r0 = r2.bufferpos
            int r1 = r2.bufferlen
            if (r0 >= r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    protected void init(java.io.InputStream r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r1 = this;
            java.lang.String r0 = "Input stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Buffer size"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r1.instream = r2
            byte[] r2 = new byte[r3]
            r1.buffer = r2
            r2 = 0
            r1.bufferpos = r2
            r1.bufferlen = r2
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = new cz.msebera.android.httpclient.util.ByteArrayBuffer
            r2.<init>(r3)
            r1.linebuffer = r2
            java.lang.String r2 = "http.protocol.element-charset"
            java.lang.Object r2 = r4.getParameter(r2)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L30
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            goto L32
        L30:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.ASCII
        L32:
            r1.charset = r2
            java.nio.charset.Charset r2 = r1.charset
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.ASCII
            boolean r2 = r2.equals(r3)
            r1.ascii = r2
            r2 = 0
            r1.decoder = r2
            r2 = -1
            java.lang.String r3 = "http.connection.max-line-length"
            int r2 = r4.getIntParameter(r3, r2)
            r1.maxLineLen = r2
            r2 = 512(0x200, float:7.17E-43)
            java.lang.String r3 = "http.connection.min-chunk-limit"
            int r2 = r4.getIntParameter(r3, r2)
            r1.minChunkLimit = r2
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r2 = r1.createTransportMetrics()
            r1.metrics = r2
            java.lang.String r2 = "http.malformed.input.action"
            java.lang.Object r2 = r4.getParameter(r2)
            java.nio.charset.CodingErrorAction r2 = (java.nio.charset.CodingErrorAction) r2
            if (r2 == 0) goto L65
            goto L67
        L65:
            java.nio.charset.CodingErrorAction r2 = java.nio.charset.CodingErrorAction.REPORT
        L67:
            r1.onMalformedCharAction = r2
            java.lang.String r2 = "http.unmappable.input.action"
            java.lang.Object r2 = r4.getParameter(r2)
            java.nio.charset.CodingErrorAction r2 = (java.nio.charset.CodingErrorAction) r2
            if (r2 == 0) goto L74
            goto L76
        L74:
            java.nio.charset.CodingErrorAction r2 = java.nio.charset.CodingErrorAction.REPORT
        L76:
            r1.onUnmappableCharAction = r2
            return
    }

    @Override
    public int length() {
            r2 = this;
            int r0 = r2.bufferlen
            int r1 = r2.bufferpos
            int r0 = r0 - r1
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
        L0:
            boolean r0 = r3.hasBufferedData()
            if (r0 != 0) goto Le
            int r0 = r3.fillBuffer()
            r1 = -1
            if (r0 != r1) goto L0
            return r1
        Le:
            byte[] r0 = r3.buffer
            int r1 = r3.bufferpos
            int r2 = r1 + 1
            r3.bufferpos = r2
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    @Override
    public int read(byte[] r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = r3.length
            int r3 = r2.read(r3, r0, r1)
            return r3
    }

    @Override
    public int read(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            boolean r0 = r2.hasBufferedData()
            if (r0 == 0) goto L20
            int r0 = r2.bufferlen
            int r1 = r2.bufferpos
            int r0 = r0 - r1
            int r5 = java.lang.Math.min(r5, r0)
            byte[] r0 = r2.buffer
            int r1 = r2.bufferpos
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.bufferpos
            int r3 = r3 + r5
            r2.bufferpos = r3
            return r5
        L20:
            int r0 = r2.minChunkLimit
            if (r5 <= r0) goto L33
            java.io.InputStream r0 = r2.instream
            int r3 = r0.read(r3, r4, r5)
            if (r3 <= 0) goto L32
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r4 = r2.metrics
            long r0 = (long) r3
            r4.incrementBytesTransferred(r0)
        L32:
            return r3
        L33:
            boolean r0 = r2.hasBufferedData()
            if (r0 != 0) goto L41
            int r0 = r2.fillBuffer()
            r1 = -1
            if (r0 != r1) goto L33
            return r1
        L41:
            int r0 = r2.bufferlen
            int r1 = r2.bufferpos
            int r0 = r0 - r1
            int r5 = java.lang.Math.min(r5, r0)
            byte[] r0 = r2.buffer
            int r1 = r2.bufferpos
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.bufferpos
            int r3 = r3 + r5
            r2.bufferpos = r3
            return r5
    }

    @Override
    public int readLine(cz.msebera.android.httpclient.util.CharArrayBuffer r8) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            r0 = 1
            r1 = 0
            r2 = 0
        L8:
            r3 = -1
            if (r0 == 0) goto L63
            int r4 = r7.locateLF()
            if (r4 == r3) goto L2f
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r7.linebuffer
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L1e
            int r8 = r7.lineFromReadBuffer(r8, r4)
            return r8
        L1e:
            int r4 = r4 + 1
            int r0 = r7.bufferpos
            int r3 = r4 - r0
            cz.msebera.android.httpclient.util.ByteArrayBuffer r5 = r7.linebuffer
            byte[] r6 = r7.buffer
            r5.append(r6, r0, r3)
            r7.bufferpos = r4
        L2d:
            r0 = 0
            goto L4c
        L2f:
            boolean r2 = r7.hasBufferedData()
            if (r2 == 0) goto L45
            int r2 = r7.bufferlen
            int r4 = r7.bufferpos
            int r2 = r2 - r4
            cz.msebera.android.httpclient.util.ByteArrayBuffer r5 = r7.linebuffer
            byte[] r6 = r7.buffer
            r5.append(r6, r4, r2)
            int r2 = r7.bufferlen
            r7.bufferpos = r2
        L45:
            int r2 = r7.fillBuffer()
            if (r2 != r3) goto L4c
            goto L2d
        L4c:
            int r3 = r7.maxLineLen
            if (r3 <= 0) goto L8
            cz.msebera.android.httpclient.util.ByteArrayBuffer r3 = r7.linebuffer
            int r3 = r3.length()
            int r4 = r7.maxLineLen
            if (r3 >= r4) goto L5b
            goto L8
        L5b:
            java.io.IOException r8 = new java.io.IOException
            java.lang.String r0 = "Maximum line length limit exceeded"
            r8.<init>(r0)
            throw r8
        L63:
            if (r2 != r3) goto L6e
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r7.linebuffer
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L6e
            return r3
        L6e:
            int r8 = r7.lineFromLineBuffer(r8)
            return r8
    }

    @Override
    public java.lang.String readLine() throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r1 = 64
            r0.<init>(r1)
            int r1 = r3.readLine(r0)
            r2 = -1
            if (r1 == r2) goto L13
            java.lang.String r0 = r0.toString()
            return r0
        L13:
            r0 = 0
            return r0
    }
}
