package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class SessionOutputBufferImpl implements cz.msebera.android.httpclient.io.SessionOutputBuffer, cz.msebera.android.httpclient.io.BufferInfo {
    private static final byte[] CRLF = null;
    private java.nio.ByteBuffer bbuf;
    private final cz.msebera.android.httpclient.util.ByteArrayBuffer buffer;
    private final java.nio.charset.CharsetEncoder encoder;
    private final int fragementSizeHint;
    private final cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl metrics;
    private java.io.OutputStream outstream;

    static {
            r0 = 2
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [13, 10} // fill-array
            cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl.CRLF = r0
            return
    }

    public SessionOutputBufferImpl(cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r3, r0)
            return
    }

    public SessionOutputBufferImpl(cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r2, int r3, int r4, java.nio.charset.CharsetEncoder r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Buffer size"
            cz.msebera.android.httpclient.util.Args.positive(r3, r0)
            java.lang.String r0 = "HTTP transport metrcis"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.metrics = r2
            cz.msebera.android.httpclient.util.ByteArrayBuffer r2 = new cz.msebera.android.httpclient.util.ByteArrayBuffer
            r2.<init>(r3)
            r1.buffer = r2
            if (r4 < 0) goto L19
            goto L1a
        L19:
            r4 = 0
        L1a:
            r1.fragementSizeHint = r4
            r1.encoder = r5
            return
    }

    private void flushBuffer() throws java.io.IOException {
            r4 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r4.buffer
            int r0 = r0.length()
            if (r0 <= 0) goto L1d
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r4.buffer
            byte[] r1 = r1.buffer()
            r2 = 0
            r4.streamWrite(r1, r2, r0)
            cz.msebera.android.httpclient.util.ByteArrayBuffer r1 = r4.buffer
            r1.clear()
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r1 = r4.metrics
            long r2 = (long) r0
            r1.incrementBytesTransferred(r2)
        L1d:
            return
    }

    private void flushStream() throws java.io.IOException {
            r1 = this;
            java.io.OutputStream r0 = r1.outstream
            if (r0 == 0) goto L7
            r0.flush()
        L7:
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

    private void streamWrite(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            java.io.OutputStream r0 = r2.outstream
            java.lang.String r1 = "Output stream"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            java.io.OutputStream r0 = r2.outstream
            r0.write(r3, r4, r5)
            return
    }

    private void writeEncoded(java.nio.CharBuffer r4) throws java.io.IOException {
            r3 = this;
            boolean r0 = r4.hasRemaining()
            if (r0 != 0) goto L7
            return
        L7:
            java.nio.ByteBuffer r0 = r3.bbuf
            if (r0 != 0) goto L13
            r0 = 1024(0x400, float:1.435E-42)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r3.bbuf = r0
        L13:
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            r0.reset()
        L18:
            boolean r0 = r4.hasRemaining()
            if (r0 == 0) goto L2b
            java.nio.charset.CharsetEncoder r0 = r3.encoder
            java.nio.ByteBuffer r1 = r3.bbuf
            r2 = 1
            java.nio.charset.CoderResult r0 = r0.encode(r4, r1, r2)
            r3.handleEncodingResult(r0)
            goto L18
        L2b:
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

    public void bind(java.io.OutputStream r1) {
            r0 = this;
            r0.outstream = r1
            return
    }

    @Override
    public int capacity() {
            r1 = this;
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            int r0 = r0.capacity()
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r0 = this;
            r0.flushBuffer()
            r0.flushStream()
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpTransportMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r0 = r1.metrics
            return r0
    }

    public boolean isBound() {
            r1 = this;
            java.io.OutputStream r0 = r1.outstream
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
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
            int r0 = r1.fragementSizeHint
            if (r0 <= 0) goto L15
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            boolean r0 = r0.isFull()
            if (r0 == 0) goto Lf
            r1.flushBuffer()
        Lf:
            cz.msebera.android.httpclient.util.ByteArrayBuffer r0 = r1.buffer
            r0.append(r2)
            goto L1d
        L15:
            r1.flushBuffer()
            java.io.OutputStream r0 = r1.outstream
            r0.write(r2)
        L1d:
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
            int r0 = r2.fragementSizeHint
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
            goto L34
        L28:
            r2.flushBuffer()
            r2.streamWrite(r3, r4, r5)
            cz.msebera.android.httpclient.impl.io.HttpTransportMetricsImpl r3 = r2.metrics
            long r4 = (long) r5
            r3.incrementBytesTransferred(r4)
        L34:
            return
    }

    @Override
    public void writeLine(cz.msebera.android.httpclient.util.CharArrayBuffer r5) throws java.io.IOException {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.nio.charset.CharsetEncoder r0 = r4.encoder
            r1 = 0
            if (r0 != 0) goto L34
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
            byte[] r5 = cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl.CRLF
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
            java.nio.charset.CharsetEncoder r0 = r2.encoder
            if (r0 != 0) goto L1e
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
            byte[] r3 = cz.msebera.android.httpclient.impl.io.SessionOutputBufferImpl.CRLF
            r2.write(r3)
            return
    }
}
