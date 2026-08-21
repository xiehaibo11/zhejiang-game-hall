package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class SessionInputBufferImpl implements cz.msebera.android.httpclient.io.SessionInputBuffer, cz.msebera.android.httpclient.io.BufferInfo {
    private final byte[] buffer;
    private int bufferlen;
    private int bufferpos;
    private java.nio.CharBuffer cbuf;
    private final cz.msebera.android.httpclient.config.MessageConstraints constraints;
    private final java.nio.charset.CharsetDecoder decoder;
    private java.io.InputStream instream;
    private final cz.msebera.android.httpclient.util.ByteArrayBuffer linebuffer;
    private final cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl metrics;
    private final int minChunkLimit;

    public SessionInputBufferImpl(cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r7, int r8) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public SessionInputBufferImpl(cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r2, int r3, int r4, cz.msebera.android.httpclient.config.MessageConstraints r5, java.nio.charset.CharsetDecoder r6) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP transport metrcis"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Buffer size"
            cz.msebera.android.httpclient.util.Args.positive(r3, r0)
            r1.metrics = r2
            byte[] r2 = new byte[r3]
            r1.buffer = r2
            r2 = 0
            r1.bufferpos = r2
            r1.bufferlen = r2
            if (r4 < 0) goto L1b
            goto L1d
        L1b:
            r4 = 512(0x200, float:7.17E-43)
        L1d:
            r1.minChunkLimit = r4
            if (r5 == 0) goto L22
            goto L24
        L22:
            cz.msebera.android.httpclient.config.MessageConstraints r5 = cz.msebera.android.httpclient.config.MessageConstraints.DEFAULT
        L24:
            r1.constraints = r5
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = new cz.msebera.android.httpclient.util.ByteArrayBuffer
            r2.<init>(r3)
            r1.linebuffer = r2
            r1.decoder = r6
            return
    }

    private int appendDecoded(cz.msebera.android.httpclient.util.CharArrayBuffer r5, java.nio.ByteBuffer r6) throws java.io.IOException {
            r4 = this;
            boolean r0 = r6.hasRemaining()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.nio.CharBuffer r0 = r4.cbuf
            if (r0 != 0) goto L14
            r0 = 1024(0x400, float:1.435E-42)
            java.nio.CharBuffer r0 = java.nio.CharBuffer.allocate(r0)
            r4.cbuf = r0
        L14:
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            r0.reset()
        L19:
            boolean r0 = r6.hasRemaining()
            if (r0 == 0) goto L2e
            java.nio.charset.CharsetDecoder r0 = r4.decoder
            java.nio.CharBuffer r2 = r4.cbuf
            r3 = 1
            java.nio.charset.CoderResult r0 = r0.decode(r6, r2, r3)
            int r0 = r4.handleDecodingResult(r0, r5, r6)
            int r1 = r1 + r0
            goto L19
        L2e:
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
            java.nio.charset.CharsetDecoder r1 = r3.decoder
            r2 = 0
            if (r1 != 0) goto L31
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
            java.nio.charset.CharsetDecoder r1 = r3.decoder
            if (r1 != 0) goto L1f
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

    private int streamRead(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            java.io.InputStream r0 = r2.instream
            java.lang.String r1 = "Input stream"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            java.io.InputStream r0 = r2.instream
            int r3 = r0.read(r3, r4, r5)
            return r3
    }

    @Override
    public int available() {
            r2 = this;
            int r0 = r2.capacity()
            int r1 = r2.length()
            int r0 = r0 - r1
            return r0
    }

    public void bind(java.io.InputStream r1) {
            r0 = this;
            r0.instream = r1
            return
    }

    @Override
    public int capacity() {
            r1 = this;
            byte[] r0 = r1.buffer
            int r0 = r0.length
            return r0
    }

    public void clear() {
            r1 = this;
            r0 = 0
            r1.bufferpos = r0
            r1.bufferlen = r0
            return
    }

    public int fillBuffer() throws java.io.IOException {
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
            int r1 = r4.streamRead(r1, r0, r2)
            r2 = -1
            if (r1 != r2) goto L21
            return r2
        L21:
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

    public boolean hasBufferedData() {
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

    public boolean isBound() {
            r1 = this;
            java.io.InputStream r0 = r1.instream
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public boolean isDataAvailable(int r1) throws java.io.IOException {
            r0 = this;
            boolean r1 = r0.hasBufferedData()
            return r1
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
            if (r5 <= r0) goto L31
            int r3 = r2.streamRead(r3, r4, r5)
            if (r3 <= 0) goto L30
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r4 = r2.metrics
            long r0 = (long) r3
            r4.incrementBytesTransferred(r0)
        L30:
            return r3
        L31:
            boolean r0 = r2.hasBufferedData()
            if (r0 != 0) goto L3f
            int r0 = r2.fillBuffer()
            r1 = -1
            if (r0 != r1) goto L31
            return r1
        L3f:
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
    public int readLine(cz.msebera.android.httpclient.util.CharArrayBuffer r9) throws java.io.IOException {
            r8 = this;
            java.lang.String r0 = "Char array buffer"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            cz.msebera.android.httpclient.config.MessageConstraints r0 = r8.constraints
            int r0 = r0.getMaxLineLength()
            r1 = 1
            r2 = 0
            r3 = 0
        Le:
            r4 = -1
            if (r1 == 0) goto L7e
            int r5 = r8.bufferpos
        L13:
            int r6 = r8.bufferlen
            if (r5 >= r6) goto L23
            byte[] r6 = r8.buffer
            r6 = r6[r5]
            r7 = 10
            if (r6 != r7) goto L20
            goto L24
        L20:
            int r5 = r5 + 1
            goto L13
        L23:
            r5 = -1
        L24:
            if (r0 <= 0) goto L41
            cz.msebera.android.httpclient.util.ByteArrayBuffer r6 = r8.linebuffer
            int r6 = r6.length()
            if (r5 <= 0) goto L30
            r7 = r5
            goto L32
        L30:
            int r7 = r8.bufferlen
        L32:
            int r6 = r6 + r7
            int r7 = r8.bufferpos
            int r6 = r6 - r7
            if (r6 >= r0) goto L39
            goto L41
        L39:
            cz.msebera.android.httpclient.MessageConstraintException r9 = new cz.msebera.android.httpclient.MessageConstraintException
            java.lang.String r0 = "Maximum line length limit exceeded"
            r9.<init>(r0)
            throw r9
        L41:
            if (r5 == r4) goto L61
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r8.linebuffer
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L50
            int r9 = r8.lineFromReadBuffer(r9, r5)
            return r9
        L50:
            int r5 = r5 + 1
            int r1 = r8.bufferpos
            int r4 = r5 - r1
            cz.msebera.android.httpclient.util.ByteArrayBuffer r6 = r8.linebuffer
            byte[] r7 = r8.buffer
            r6.append(r7, r1, r4)
            r8.bufferpos = r5
        L5f:
            r1 = 0
            goto Le
        L61:
            boolean r3 = r8.hasBufferedData()
            if (r3 == 0) goto L77
            int r3 = r8.bufferlen
            int r5 = r8.bufferpos
            int r3 = r3 - r5
            cz.msebera.android.httpclient.util.ByteArrayBuffer r6 = r8.linebuffer
            byte[] r7 = r8.buffer
            r6.append(r7, r5, r3)
            int r3 = r8.bufferlen
            r8.bufferpos = r3
        L77:
            int r3 = r8.fillBuffer()
            if (r3 != r4) goto Le
            goto L5f
        L7e:
            if (r3 != r4) goto L89
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r8.linebuffer
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L89
            return r4
        L89:
            int r9 = r8.lineFromLineBuffer(r9)
            return r9
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
