package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class ChunkedInputStream extends java.io.InputStream {
    private static final int BUFFER_SIZE = 2048;
    private static final int CHUNK_CRLF = 3;
    private static final int CHUNK_DATA = 2;
    private static final int CHUNK_INVALID = Integer.MAX_VALUE;
    private static final int CHUNK_LEN = 1;
    private final cz.msebera.android.httpclient.util.CharArrayBuffer buffer;
    private int chunkSize;
    private boolean closed;
    private final cz.msebera.android.httpclient.config.MessageConstraints constraints;
    private boolean eof;
    private cz.msebera.android.httpclient.Header[] footers;
    private final cz.msebera.android.httpclient.io.SessionInputBuffer in;
    private int pos;
    private int state;

    public ChunkedInputStream(cz.msebera.android.httpclient.io.SessionInputBuffer r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ChunkedInputStream(cz.msebera.android.httpclient.io.SessionInputBuffer r3, cz.msebera.android.httpclient.config.MessageConstraints r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.eof = r0
            r2.closed = r0
            cz.msebera.android.httpclient.Header[] r1 = new cz.msebera.android.httpclient.Header[r0]
            r2.footers = r1
            java.lang.String r1 = "Session input buffer"
            java.lang.Object r3 = cz.msebera.android.httpclient.util.Args.notNull(r3, r1)
            cz.msebera.android.httpclient.io.SessionInputBuffer r3 = (cz.msebera.android.httpclient.io.SessionInputBuffer) r3
            r2.in = r3
            r2.pos = r0
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r0 = 16
            r3.<init>(r0)
            r2.buffer = r3
            if (r4 == 0) goto L24
            goto L26
        L24:
            cz.msebera.android.httpclient.config.MessageConstraints r4 = cz.msebera.android.httpclient.config.MessageConstraints.DEFAULT
        L26:
            r2.constraints = r4
            r3 = 1
            r2.state = r3
            return
    }

    private int getChunkSize() throws java.io.IOException {
            r4 = this;
            int r0 = r4.state
            r1 = -1
            r2 = 1
            if (r0 == r2) goto L3b
            r3 = 3
            if (r0 != r3) goto L33
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.buffer
            r0.clear()
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r4.in
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = r4.buffer
            int r0 = r0.readLine(r3)
            if (r0 == r1) goto L2b
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.buffer
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L23
            r4.state = r2
            goto L3b
        L23:
            cz.msebera.android.httpclient.MalformedChunkCodingException r0 = new cz.msebera.android.httpclient.MalformedChunkCodingException
            java.lang.String r1 = "Unexpected content at the end of chunk"
            r0.<init>(r1)
            throw r0
        L2b:
            cz.msebera.android.httpclient.MalformedChunkCodingException r0 = new cz.msebera.android.httpclient.MalformedChunkCodingException
            java.lang.String r1 = "CRLF expected at end of chunk"
            r0.<init>(r1)
            throw r0
        L33:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Inconsistent codec state"
            r0.<init>(r1)
            throw r0
        L3b:
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.buffer
            r0.clear()
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r4.in
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r4.buffer
            int r0 = r0.readLine(r2)
            if (r0 == r1) goto L70
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.buffer
            r1 = 59
            int r0 = r0.indexOf(r1)
            if (r0 >= 0) goto L5a
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.buffer
            int r0 = r0.length()
        L5a:
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r4.buffer     // Catch: java.lang.NumberFormatException -> L68
            r2 = 0
            java.lang.String r0 = r1.substringTrimmed(r2, r0)     // Catch: java.lang.NumberFormatException -> L68
            r1 = 16
            int r0 = java.lang.Integer.parseInt(r0, r1)     // Catch: java.lang.NumberFormatException -> L68
            return r0
        L68:
            cz.msebera.android.httpclient.MalformedChunkCodingException r0 = new cz.msebera.android.httpclient.MalformedChunkCodingException
            java.lang.String r1 = "Bad chunk header"
            r0.<init>(r1)
            throw r0
        L70:
            cz.msebera.android.httpclient.ConnectionClosedException r0 = new cz.msebera.android.httpclient.ConnectionClosedException
            java.lang.String r1 = "Premature end of chunk coded message body: closing chunk expected"
            r0.<init>(r1)
            throw r0
    }

    private void nextChunk() throws java.io.IOException {
            r3 = this;
            int r0 = r3.state
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 == r1) goto L2e
            int r0 = r3.getChunkSize()     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            r3.chunkSize = r0     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            int r0 = r3.chunkSize     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            if (r0 < 0) goto L22
            r0 = 2
            r3.state = r0     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            r0 = 0
            r3.pos = r0     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            int r0 = r3.chunkSize     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            if (r0 != 0) goto L21
            r0 = 1
            r3.eof = r0     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            r3.parseTrailerHeaders()     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
        L21:
            return
        L22:
            cz.msebera.android.httpclient.MalformedChunkCodingException r0 = new cz.msebera.android.httpclient.MalformedChunkCodingException     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            java.lang.String r2 = "Negative chunk size"
            r0.<init>(r2)     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
            throw r0     // Catch: cz.msebera.android.httpclient.MalformedChunkCodingException -> L2a
        L2a:
            r0 = move-exception
            r3.state = r1
            throw r0
        L2e:
            cz.msebera.android.httpclient.MalformedChunkCodingException r0 = new cz.msebera.android.httpclient.MalformedChunkCodingException
            java.lang.String r1 = "Corrupt data stream"
            r0.<init>(r1)
            throw r0
    }

    private void parseTrailerHeaders() throws java.io.IOException {
            r4 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r4.in     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            cz.msebera.android.httpclient.config.MessageConstraints r1 = r4.constraints     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            int r1 = r1.getMaxHeaderCount()     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            cz.msebera.android.httpclient.config.MessageConstraints r2 = r4.constraints     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            int r2 = r2.getMaxLineLength()     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            r3 = 0
            cz.msebera.android.httpclient.Header[] r0 = cz.msebera.android.httpclient.impl.io.AbstractMessageParser.parseHeaders(r0, r1, r2, r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            r4.footers = r0     // Catch: cz.msebera.android.httpclient.HttpException -> L16
            return
        L16:
            r0 = move-exception
            cz.msebera.android.httpclient.MalformedChunkCodingException r1 = new cz.msebera.android.httpclient.MalformedChunkCodingException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Invalid footer: "
            r2.append(r3)
            java.lang.String r3 = r0.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            r1.initCause(r0)
            throw r1
    }

    @Override
    public int available() throws java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r3.in
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.io.BufferInfo
            if (r1 == 0) goto L16
            cz.msebera.android.httpclient.io.BufferInfo r0 = (cz.msebera.android.httpclient.io.BufferInfo) r0
            int r0 = r0.length()
            int r1 = r3.chunkSize
            int r2 = r3.pos
            int r1 = r1 - r2
            int r0 = java.lang.Math.min(r0, r1)
            return r0
        L16:
            r0 = 0
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.closed
            if (r0 != 0) goto L26
            r0 = 1
            boolean r1 = r3.eof     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L1b
            int r1 = r3.state     // Catch: java.lang.Throwable -> L20
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r1 == r2) goto L1b
            r1 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L20
        L14:
            int r2 = r3.read(r1)     // Catch: java.lang.Throwable -> L20
            if (r2 < 0) goto L1b
            goto L14
        L1b:
            r3.eof = r0
            r3.closed = r0
            goto L26
        L20:
            r1 = move-exception
            r3.eof = r0
            r3.closed = r0
            throw r1
        L26:
            return
    }

    public cz.msebera.android.httpclient.Header[] getFooters() {
            r1 = this;
            cz.msebera.android.httpclient.Header[] r0 = r1.footers
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.Header[] r0 = (cz.msebera.android.httpclient.Header[]) r0
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.closed
            if (r0 != 0) goto L2f
            boolean r0 = r3.eof
            r1 = -1
            if (r0 == 0) goto La
            return r1
        La:
            int r0 = r3.state
            r2 = 2
            if (r0 == r2) goto L17
            r3.nextChunk()
            boolean r0 = r3.eof
            if (r0 == 0) goto L17
            return r1
        L17:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r3.in
            int r0 = r0.read()
            if (r0 == r1) goto L2e
            int r1 = r3.pos
            int r1 = r1 + 1
            r3.pos = r1
            int r1 = r3.pos
            int r2 = r3.chunkSize
            if (r1 < r2) goto L2e
            r1 = 3
            r3.state = r1
        L2e:
            return r0
        L2f:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Attempted read from closed stream."
            r0.<init>(r1)
            throw r0
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
    public int read(byte[] r5, int r6, int r7) throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.closed
            if (r0 != 0) goto L62
            boolean r0 = r4.eof
            r1 = -1
            if (r0 == 0) goto La
            return r1
        La:
            int r0 = r4.state
            r2 = 2
            if (r0 == r2) goto L17
            r4.nextChunk()
            boolean r0 = r4.eof
            if (r0 == 0) goto L17
            return r1
        L17:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r4.in
            int r2 = r4.chunkSize
            int r3 = r4.pos
            int r2 = r2 - r3
            int r7 = java.lang.Math.min(r7, r2)
            int r5 = r0.read(r5, r6, r7)
            if (r5 == r1) goto L37
            int r6 = r4.pos
            int r6 = r6 + r5
            r4.pos = r6
            int r6 = r4.pos
            int r7 = r4.chunkSize
            if (r6 < r7) goto L36
            r6 = 3
            r4.state = r6
        L36:
            return r5
        L37:
            r5 = 1
            r4.eof = r5
            cz.msebera.android.httpclient.TruncatedChunkException r5 = new cz.msebera.android.httpclient.TruncatedChunkException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Truncated chunk ( expected size: "
            r6.append(r7)
            int r7 = r4.chunkSize
            r6.append(r7)
            java.lang.String r7 = "; actual size: "
            r6.append(r7)
            int r7 = r4.pos
            r6.append(r7)
            java.lang.String r7 = ")"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        L62:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r6 = "Attempted read from closed stream."
            r5.<init>(r6)
            throw r5
    }
}
