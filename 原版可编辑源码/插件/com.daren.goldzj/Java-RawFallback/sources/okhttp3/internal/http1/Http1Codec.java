package okhttp3.internal.http1;

public final class Http1Codec implements okhttp3.internal.http.HttpCodec {
    private static final int HEADER_LIMIT = 262144;
    private static final int STATE_CLOSED = 6;
    private static final int STATE_IDLE = 0;
    private static final int STATE_OPEN_REQUEST_BODY = 1;
    private static final int STATE_OPEN_RESPONSE_BODY = 4;
    private static final int STATE_READING_RESPONSE_BODY = 5;
    private static final int STATE_READ_RESPONSE_HEADERS = 3;
    private static final int STATE_WRITING_REQUEST_BODY = 2;
    final okhttp3.OkHttpClient client;
    private long headerLimit;
    final okio.BufferedSink sink;
    final okio.BufferedSource source;
    int state;
    final okhttp3.internal.connection.StreamAllocation streamAllocation;

    static class 1 {
    }

    private abstract class AbstractSource implements okio.Source {
        protected long bytesRead;
        protected boolean closed;
        final okhttp3.internal.http1.Http1Codec this$0;
        protected final okio.ForwardingTimeout timeout;

        private AbstractSource(okhttp3.internal.http1.Http1Codec r3) {
                r2 = this;
                r2.this$0 = r3
                r2.<init>()
                okio.ForwardingTimeout r3 = new okio.ForwardingTimeout
                okhttp3.internal.http1.Http1Codec r0 = r2.this$0
                okio.BufferedSource r0 = r0.source
                okio.Timeout r0 = r0.timeout()
                r3.<init>(r0)
                r2.timeout = r3
                r0 = 0
                r2.bytesRead = r0
                return
        }

        AbstractSource(okhttp3.internal.http1.Http1Codec r1, okhttp3.internal.http1.Http1Codec.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        protected final void endOfInput(boolean r8, java.io.IOException r9) throws java.io.IOException {
                r7 = this;
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                int r0 = r0.state
                r1 = 6
                if (r0 != r1) goto L8
                return
            L8:
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                int r0 = r0.state
                r2 = 5
                if (r0 != r2) goto L2d
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                okio.ForwardingTimeout r2 = r7.timeout
                r0.detachTimeout(r2)
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                r0.state = r1
                okhttp3.internal.connection.StreamAllocation r0 = r0.streamAllocation
                if (r0 == 0) goto L2c
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                okhttp3.internal.connection.StreamAllocation r1 = r0.streamAllocation
                r2 = r8 ^ 1
                okhttp3.internal.http1.Http1Codec r3 = r7.this$0
                long r4 = r7.bytesRead
                r6 = r9
                r1.streamFinished(r2, r3, r4, r6)
            L2c:
                return
            L2d:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                r9.<init>()
                java.lang.String r0 = "state: "
                r9.append(r0)
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                int r0 = r0.state
                r9.append(r0)
                java.lang.String r9 = r9.toString()
                r8.<init>(r9)
                throw r8
        }

        public long read(okio.Buffer r3, long r4) throws java.io.IOException {
                r2 = this;
                okhttp3.internal.http1.Http1Codec r0 = r2.this$0     // Catch: java.io.IOException -> L14
                okio.BufferedSource r0 = r0.source     // Catch: java.io.IOException -> L14
                long r3 = r0.read(r3, r4)     // Catch: java.io.IOException -> L14
                r0 = 0
                int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r5 <= 0) goto L13
                long r0 = r2.bytesRead     // Catch: java.io.IOException -> L14
                long r0 = r0 + r3
                r2.bytesRead = r0     // Catch: java.io.IOException -> L14
            L13:
                return r3
            L14:
                r3 = move-exception
                r4 = 0
                r2.endOfInput(r4, r3)
                throw r3
        }

        public okio.Timeout timeout() {
                r1 = this;
                okio.ForwardingTimeout r0 = r1.timeout
                return r0
        }
    }

    private final class ChunkedSink implements okio.Sink {
        private boolean closed;
        final okhttp3.internal.http1.Http1Codec this$0;
        private final okio.ForwardingTimeout timeout;

        ChunkedSink(okhttp3.internal.http1.Http1Codec r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                okio.ForwardingTimeout r2 = new okio.ForwardingTimeout
                okhttp3.internal.http1.Http1Codec r0 = r1.this$0
                okio.BufferedSink r0 = r0.sink
                okio.Timeout r0 = r0.timeout()
                r2.<init>(r0)
                r1.timeout = r2
                return
        }

        public synchronized void close() throws java.io.IOException {
                r2 = this;
                monitor-enter(r2)
                boolean r0 = r2.closed     // Catch: java.lang.Throwable -> L21
                if (r0 == 0) goto L7
                monitor-exit(r2)
                return
            L7:
                r0 = 1
                r2.closed = r0     // Catch: java.lang.Throwable -> L21
                okhttp3.internal.http1.Http1Codec r0 = r2.this$0     // Catch: java.lang.Throwable -> L21
                okio.BufferedSink r0 = r0.sink     // Catch: java.lang.Throwable -> L21
                java.lang.String r1 = "0\r\n\r\n"
                r0.writeUtf8(r1)     // Catch: java.lang.Throwable -> L21
                okhttp3.internal.http1.Http1Codec r0 = r2.this$0     // Catch: java.lang.Throwable -> L21
                okio.ForwardingTimeout r1 = r2.timeout     // Catch: java.lang.Throwable -> L21
                r0.detachTimeout(r1)     // Catch: java.lang.Throwable -> L21
                okhttp3.internal.http1.Http1Codec r0 = r2.this$0     // Catch: java.lang.Throwable -> L21
                r1 = 3
                r0.state = r1     // Catch: java.lang.Throwable -> L21
                monitor-exit(r2)
                return
            L21:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
        }

        public synchronized void flush() throws java.io.IOException {
                r1 = this;
                monitor-enter(r1)
                boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L10
                if (r0 == 0) goto L7
                monitor-exit(r1)
                return
            L7:
                okhttp3.internal.http1.Http1Codec r0 = r1.this$0     // Catch: java.lang.Throwable -> L10
                okio.BufferedSink r0 = r0.sink     // Catch: java.lang.Throwable -> L10
                r0.flush()     // Catch: java.lang.Throwable -> L10
                monitor-exit(r1)
                return
            L10:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        public okio.Timeout timeout() {
                r1 = this;
                okio.ForwardingTimeout r0 = r1.timeout
                return r0
        }

        public void write(okio.Buffer r4, long r5) throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.closed
                if (r0 != 0) goto L2a
                r0 = 0
                int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r2 != 0) goto Lb
                return
            Lb:
                okhttp3.internal.http1.Http1Codec r0 = r3.this$0
                okio.BufferedSink r0 = r0.sink
                r0.writeHexadecimalUnsignedLong(r5)
                okhttp3.internal.http1.Http1Codec r0 = r3.this$0
                okio.BufferedSink r0 = r0.sink
                java.lang.String r1 = "\r\n"
                r0.writeUtf8(r1)
                okhttp3.internal.http1.Http1Codec r0 = r3.this$0
                okio.BufferedSink r0 = r0.sink
                r0.write(r4, r5)
                okhttp3.internal.http1.Http1Codec r4 = r3.this$0
                okio.BufferedSink r4 = r4.sink
                r4.writeUtf8(r1)
                return
            L2a:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
                java.lang.String r5 = "closed"
                r4.<init>(r5)
                throw r4
        }
    }

    private class ChunkedSource extends okhttp3.internal.http1.Http1Codec.AbstractSource {
        private static final long NO_CHUNK_YET = -1;
        private long bytesRemainingInChunk;
        private boolean hasMoreChunks;
        final okhttp3.internal.http1.Http1Codec this$0;
        private final okhttp3.HttpUrl url;

        ChunkedSource(okhttp3.internal.http1.Http1Codec r3, okhttp3.HttpUrl r4) {
                r2 = this;
                r2.this$0 = r3
                r0 = 0
                r2.<init>(r3, r0)
                r0 = -1
                r2.bytesRemainingInChunk = r0
                r3 = 1
                r2.hasMoreChunks = r3
                r2.url = r4
                return
        }

        private void readChunkSize() throws java.io.IOException {
                r6 = this;
                long r0 = r6.bytesRemainingInChunk
                r2 = -1
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 == 0) goto Lf
                okhttp3.internal.http1.Http1Codec r0 = r6.this$0
                okio.BufferedSource r0 = r0.source
                r0.readUtf8LineStrict()
            Lf:
                okhttp3.internal.http1.Http1Codec r0 = r6.this$0     // Catch: java.lang.NumberFormatException -> L7e
                okio.BufferedSource r0 = r0.source     // Catch: java.lang.NumberFormatException -> L7e
                long r0 = r0.readHexadecimalUnsignedLong()     // Catch: java.lang.NumberFormatException -> L7e
                r6.bytesRemainingInChunk = r0     // Catch: java.lang.NumberFormatException -> L7e
                okhttp3.internal.http1.Http1Codec r0 = r6.this$0     // Catch: java.lang.NumberFormatException -> L7e
                okio.BufferedSource r0 = r0.source     // Catch: java.lang.NumberFormatException -> L7e
                java.lang.String r0 = r0.readUtf8LineStrict()     // Catch: java.lang.NumberFormatException -> L7e
                java.lang.String r0 = r0.trim()     // Catch: java.lang.NumberFormatException -> L7e
                long r1 = r6.bytesRemainingInChunk     // Catch: java.lang.NumberFormatException -> L7e
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 < 0) goto L5d
                boolean r1 = r0.isEmpty()     // Catch: java.lang.NumberFormatException -> L7e
                if (r1 != 0) goto L3b
                java.lang.String r1 = ";"
                boolean r1 = r0.startsWith(r1)     // Catch: java.lang.NumberFormatException -> L7e
                if (r1 == 0) goto L5d
            L3b:
                long r0 = r6.bytesRemainingInChunk
                int r2 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
                if (r2 != 0) goto L5c
                r0 = 0
                r6.hasMoreChunks = r0
                okhttp3.internal.http1.Http1Codec r0 = r6.this$0
                okhttp3.OkHttpClient r0 = r0.client
                okhttp3.CookieJar r0 = r0.cookieJar()
                okhttp3.HttpUrl r1 = r6.url
                okhttp3.internal.http1.Http1Codec r2 = r6.this$0
                okhttp3.Headers r2 = r2.readHeaders()
                okhttp3.internal.http.HttpHeaders.receiveHeaders(r0, r1, r2)
                r0 = 1
                r1 = 0
                r6.endOfInput(r0, r1)
            L5c:
                return
            L5d:
                java.net.ProtocolException r1 = new java.net.ProtocolException     // Catch: java.lang.NumberFormatException -> L7e
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L7e
                r2.<init>()     // Catch: java.lang.NumberFormatException -> L7e
                java.lang.String r3 = "expected chunk size and optional extensions but was \""
                r2.append(r3)     // Catch: java.lang.NumberFormatException -> L7e
                long r3 = r6.bytesRemainingInChunk     // Catch: java.lang.NumberFormatException -> L7e
                r2.append(r3)     // Catch: java.lang.NumberFormatException -> L7e
                r2.append(r0)     // Catch: java.lang.NumberFormatException -> L7e
                java.lang.String r0 = "\""
                r2.append(r0)     // Catch: java.lang.NumberFormatException -> L7e
                java.lang.String r0 = r2.toString()     // Catch: java.lang.NumberFormatException -> L7e
                r1.<init>(r0)     // Catch: java.lang.NumberFormatException -> L7e
                throw r1     // Catch: java.lang.NumberFormatException -> L7e
            L7e:
                r0 = move-exception
                java.net.ProtocolException r1 = new java.net.ProtocolException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        public void close() throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.closed
                if (r0 == 0) goto L5
                return
            L5:
                boolean r0 = r2.hasMoreChunks
                if (r0 == 0) goto L18
                r0 = 100
                java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
                boolean r0 = okhttp3.internal.Util.discard(r2, r0, r1)
                if (r0 != 0) goto L18
                r0 = 0
                r1 = 0
                r2.endOfInput(r0, r1)
            L18:
                r0 = 1
                r2.closed = r0
                return
        }

        @Override
        public long read(okio.Buffer r8, long r9) throws java.io.IOException {
                r7 = this;
                r0 = 0
                int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r2 < 0) goto L4b
                boolean r2 = r7.closed
                if (r2 != 0) goto L43
                boolean r2 = r7.hasMoreChunks
                r3 = -1
                if (r2 != 0) goto L11
                return r3
            L11:
                long r5 = r7.bytesRemainingInChunk
                int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r2 == 0) goto L1b
                int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
                if (r0 != 0) goto L23
            L1b:
                r7.readChunkSize()
                boolean r0 = r7.hasMoreChunks
                if (r0 != 0) goto L23
                return r3
            L23:
                long r0 = r7.bytesRemainingInChunk
                long r9 = java.lang.Math.min(r9, r0)
                long r8 = super.read(r8, r9)
                int r10 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
                if (r10 == 0) goto L37
                long r0 = r7.bytesRemainingInChunk
                long r0 = r0 - r8
                r7.bytesRemainingInChunk = r0
                return r8
            L37:
                java.net.ProtocolException r8 = new java.net.ProtocolException
                java.lang.String r9 = "unexpected end of stream"
                r8.<init>(r9)
                r9 = 0
                r7.endOfInput(r9, r8)
                throw r8
            L43:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r9 = "closed"
                r8.<init>(r9)
                throw r8
            L4b:
                java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "byteCount < 0: "
                r0.append(r1)
                r0.append(r9)
                java.lang.String r9 = r0.toString()
                r8.<init>(r9)
                throw r8
        }
    }

    private final class FixedLengthSink implements okio.Sink {
        private long bytesRemaining;
        private boolean closed;
        final okhttp3.internal.http1.Http1Codec this$0;
        private final okio.ForwardingTimeout timeout;

        FixedLengthSink(okhttp3.internal.http1.Http1Codec r2, long r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                okio.ForwardingTimeout r2 = new okio.ForwardingTimeout
                okhttp3.internal.http1.Http1Codec r0 = r1.this$0
                okio.BufferedSink r0 = r0.sink
                okio.Timeout r0 = r0.timeout()
                r2.<init>(r0)
                r1.timeout = r2
                r1.bytesRemaining = r3
                return
        }

        public void close() throws java.io.IOException {
                r5 = this;
                boolean r0 = r5.closed
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r5.closed = r0
                long r0 = r5.bytesRemaining
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 > 0) goto L1d
                okhttp3.internal.http1.Http1Codec r0 = r5.this$0
                okio.ForwardingTimeout r1 = r5.timeout
                r0.detachTimeout(r1)
                okhttp3.internal.http1.Http1Codec r0 = r5.this$0
                r1 = 3
                r0.state = r1
                return
            L1d:
                java.net.ProtocolException r0 = new java.net.ProtocolException
                java.lang.String r1 = "unexpected end of stream"
                r0.<init>(r1)
                throw r0
        }

        public void flush() throws java.io.IOException {
                r1 = this;
                boolean r0 = r1.closed
                if (r0 == 0) goto L5
                return
            L5:
                okhttp3.internal.http1.Http1Codec r0 = r1.this$0
                okio.BufferedSink r0 = r0.sink
                r0.flush()
                return
        }

        public okio.Timeout timeout() {
                r1 = this;
                okio.ForwardingTimeout r0 = r1.timeout
                return r0
        }

        public void write(okio.Buffer r8, long r9) throws java.io.IOException {
                r7 = this;
                boolean r0 = r7.closed
                if (r0 != 0) goto L42
                long r1 = r8.size()
                r3 = 0
                r5 = r9
                okhttp3.internal.Util.checkOffsetAndCount(r1, r3, r5)
                long r0 = r7.bytesRemaining
                int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r2 > 0) goto L21
                okhttp3.internal.http1.Http1Codec r0 = r7.this$0
                okio.BufferedSink r0 = r0.sink
                r0.write(r8, r9)
                long r0 = r7.bytesRemaining
                long r0 = r0 - r9
                r7.bytesRemaining = r0
                return
            L21:
                java.net.ProtocolException r8 = new java.net.ProtocolException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "expected "
                r0.append(r1)
                long r1 = r7.bytesRemaining
                r0.append(r1)
                java.lang.String r1 = " bytes but received "
                r0.append(r1)
                r0.append(r9)
                java.lang.String r9 = r0.toString()
                r8.<init>(r9)
                throw r8
            L42:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r9 = "closed"
                r8.<init>(r9)
                throw r8
        }
    }

    private class FixedLengthSource extends okhttp3.internal.http1.Http1Codec.AbstractSource {
        private long bytesRemaining;
        final okhttp3.internal.http1.Http1Codec this$0;

        FixedLengthSource(okhttp3.internal.http1.Http1Codec r4, long r5) throws java.io.IOException {
                r3 = this;
                r3.this$0 = r4
                r0 = 0
                r3.<init>(r4, r0)
                r3.bytesRemaining = r5
                long r4 = r3.bytesRemaining
                r1 = 0
                int r6 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
                if (r6 != 0) goto L14
                r4 = 1
                r3.endOfInput(r4, r0)
            L14:
                return
        }

        public void close() throws java.io.IOException {
                r5 = this;
                boolean r0 = r5.closed
                if (r0 == 0) goto L5
                return
            L5:
                long r0 = r5.bytesRemaining
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 == 0) goto L1c
                r0 = 100
                java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
                boolean r0 = okhttp3.internal.Util.discard(r5, r0, r1)
                if (r0 != 0) goto L1c
                r0 = 0
                r1 = 0
                r5.endOfInput(r0, r1)
            L1c:
                r0 = 1
                r5.closed = r0
                return
        }

        @Override
        public long read(okio.Buffer r8, long r9) throws java.io.IOException {
                r7 = this;
                r0 = 0
                int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r2 < 0) goto L44
                boolean r2 = r7.closed
                if (r2 != 0) goto L3c
                long r2 = r7.bytesRemaining
                r4 = -1
                int r6 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r6 != 0) goto L13
                return r4
            L13:
                long r9 = java.lang.Math.min(r2, r9)
                long r8 = super.read(r8, r9)
                int r10 = (r8 > r4 ? 1 : (r8 == r4 ? 0 : -1))
                if (r10 == 0) goto L30
                long r2 = r7.bytesRemaining
                long r2 = r2 - r8
                r7.bytesRemaining = r2
                long r2 = r7.bytesRemaining
                int r10 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r10 != 0) goto L2f
                r10 = 1
                r0 = 0
                r7.endOfInput(r10, r0)
            L2f:
                return r8
            L30:
                java.net.ProtocolException r8 = new java.net.ProtocolException
                java.lang.String r9 = "unexpected end of stream"
                r8.<init>(r9)
                r9 = 0
                r7.endOfInput(r9, r8)
                throw r8
            L3c:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r9 = "closed"
                r8.<init>(r9)
                throw r8
            L44:
                java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "byteCount < 0: "
                r0.append(r1)
                r0.append(r9)
                java.lang.String r9 = r0.toString()
                r8.<init>(r9)
                throw r8
        }
    }

    private class UnknownLengthSource extends okhttp3.internal.http1.Http1Codec.AbstractSource {
        private boolean inputExhausted;
        final okhttp3.internal.http1.Http1Codec this$0;

        UnknownLengthSource(okhttp3.internal.http1.Http1Codec r2) {
                r1 = this;
                r1.this$0 = r2
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        public void close() throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.closed
                if (r0 == 0) goto L5
                return
            L5:
                boolean r0 = r2.inputExhausted
                if (r0 != 0) goto Le
                r0 = 0
                r1 = 0
                r2.endOfInput(r0, r1)
            Le:
                r0 = 1
                r2.closed = r0
                return
        }

        @Override
        public long read(okio.Buffer r4, long r5) throws java.io.IOException {
                r3 = this;
                r0 = 0
                int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r2 < 0) goto L2a
                boolean r0 = r3.closed
                if (r0 != 0) goto L22
                boolean r0 = r3.inputExhausted
                r1 = -1
                if (r0 == 0) goto L11
                return r1
            L11:
                long r4 = super.read(r4, r5)
                int r6 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
                if (r6 != 0) goto L21
                r4 = 1
                r3.inputExhausted = r4
                r5 = 0
                r3.endOfInput(r4, r5)
                return r1
            L21:
                return r4
            L22:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
                java.lang.String r5 = "closed"
                r4.<init>(r5)
                throw r4
            L2a:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "byteCount < 0: "
                r0.append(r1)
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                r4.<init>(r5)
                throw r4
        }
    }

    public Http1Codec(okhttp3.OkHttpClient r3, okhttp3.internal.connection.StreamAllocation r4, okio.BufferedSource r5, okio.BufferedSink r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.state = r0
            r0 = 262144(0x40000, double:1.295163E-318)
            r2.headerLimit = r0
            r2.client = r3
            r2.streamAllocation = r4
            r2.source = r5
            r2.sink = r6
            return
    }

    private java.lang.String readHeaderLine() throws java.io.IOException {
            r5 = this;
            okio.BufferedSource r0 = r5.source
            long r1 = r5.headerLimit
            java.lang.String r0 = r0.readUtf8LineStrict(r1)
            long r1 = r5.headerLimit
            int r3 = r0.length()
            long r3 = (long) r3
            long r1 = r1 - r3
            r5.headerLimit = r1
            return r0
    }

    @Override
    public void cancel() {
            r1 = this;
            okhttp3.internal.connection.StreamAllocation r0 = r1.streamAllocation
            okhttp3.internal.connection.RealConnection r0 = r0.connection()
            if (r0 == 0) goto Lb
            r0.cancel()
        Lb:
            return
    }

    @Override
    public okio.Sink createRequestBody(okhttp3.Request r3, long r4) {
            r2 = this;
            java.lang.String r0 = "Transfer-Encoding"
            java.lang.String r3 = r3.header(r0)
            java.lang.String r0 = "chunked"
            boolean r3 = r0.equalsIgnoreCase(r3)
            if (r3 == 0) goto L13
            okio.Sink r3 = r2.newChunkedSink()
            return r3
        L13:
            r0 = -1
            int r3 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r3 == 0) goto L1e
            okio.Sink r3 = r2.newFixedLengthSink(r4)
            return r3
        L1e:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "Cannot stream a request body without chunked encoding or a known content length!"
            r3.<init>(r4)
            throw r3
    }

    void detachTimeout(okio.ForwardingTimeout r3) {
            r2 = this;
            okio.Timeout r0 = r3.delegate()
            okio.Timeout r1 = okio.Timeout.NONE
            r3.setDelegate(r1)
            r0.clearDeadline()
            r0.clearTimeout()
            return
    }

    @Override
    public void finishRequest() throws java.io.IOException {
            r1 = this;
            okio.BufferedSink r0 = r1.sink
            r0.flush()
            return
    }

    @Override
    public void flushRequest() throws java.io.IOException {
            r1 = this;
            okio.BufferedSink r0 = r1.sink
            r0.flush()
            return
    }

    public boolean isClosed() {
            r2 = this;
            int r0 = r2.state
            r1 = 6
            if (r0 != r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public okio.Sink newChunkedSink() {
            r3 = this;
            int r0 = r3.state
            r1 = 1
            if (r0 != r1) goto Le
            r0 = 2
            r3.state = r0
            okhttp3.internal.http1.Http1Codec$ChunkedSink r0 = new okhttp3.internal.http1.Http1Codec$ChunkedSink
            r0.<init>(r3)
            return r0
        Le:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "state: "
            r1.append(r2)
            int r2 = r3.state
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public okio.Source newChunkedSource(okhttp3.HttpUrl r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.state
            r1 = 4
            if (r0 != r1) goto Le
            r0 = 5
            r2.state = r0
            okhttp3.internal.http1.Http1Codec$ChunkedSource r0 = new okhttp3.internal.http1.Http1Codec$ChunkedSource
            r0.<init>(r2, r3)
            return r0
        Le:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "state: "
            r0.append(r1)
            int r1 = r2.state
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public okio.Sink newFixedLengthSink(long r3) {
            r2 = this;
            int r0 = r2.state
            r1 = 1
            if (r0 != r1) goto Le
            r0 = 2
            r2.state = r0
            okhttp3.internal.http1.Http1Codec$FixedLengthSink r0 = new okhttp3.internal.http1.Http1Codec$FixedLengthSink
            r0.<init>(r2, r3)
            return r0
        Le:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "state: "
            r4.append(r0)
            int r0 = r2.state
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    public okio.Source newFixedLengthSource(long r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.state
            r1 = 4
            if (r0 != r1) goto Le
            r0 = 5
            r2.state = r0
            okhttp3.internal.http1.Http1Codec$FixedLengthSource r0 = new okhttp3.internal.http1.Http1Codec$FixedLengthSource
            r0.<init>(r2, r3)
            return r0
        Le:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "state: "
            r4.append(r0)
            int r0 = r2.state
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    public okio.Source newUnknownLengthSource() throws java.io.IOException {
            r3 = this;
            int r0 = r3.state
            r1 = 4
            if (r0 != r1) goto L1d
            okhttp3.internal.connection.StreamAllocation r0 = r3.streamAllocation
            if (r0 == 0) goto L15
            r1 = 5
            r3.state = r1
            r0.noNewStreams()
            okhttp3.internal.http1.Http1Codec$UnknownLengthSource r0 = new okhttp3.internal.http1.Http1Codec$UnknownLengthSource
            r0.<init>(r3)
            return r0
        L15:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "streamAllocation == null"
            r0.<init>(r1)
            throw r0
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "state: "
            r1.append(r2)
            int r2 = r3.state
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public okhttp3.ResponseBody openResponseBody(okhttp3.Response r7) throws java.io.IOException {
            r6 = this;
            okhttp3.internal.connection.StreamAllocation r0 = r6.streamAllocation
            okhttp3.EventListener r0 = r0.eventListener
            okhttp3.internal.connection.StreamAllocation r1 = r6.streamAllocation
            okhttp3.Call r1 = r1.call
            r0.responseBodyStart(r1)
            java.lang.String r0 = "Content-Type"
            java.lang.String r0 = r7.header(r0)
            boolean r1 = okhttp3.internal.http.HttpHeaders.hasBody(r7)
            if (r1 != 0) goto L27
            r1 = 0
            okio.Source r7 = r6.newFixedLengthSource(r1)
            okhttp3.internal.http.RealResponseBody r3 = new okhttp3.internal.http.RealResponseBody
            okio.BufferedSource r7 = okio.Okio.buffer(r7)
            r3.<init>(r0, r1, r7)
            return r3
        L27:
            java.lang.String r1 = "Transfer-Encoding"
            java.lang.String r1 = r7.header(r1)
            java.lang.String r2 = "chunked"
            boolean r1 = r2.equalsIgnoreCase(r1)
            r2 = -1
            if (r1 == 0) goto L4d
            okhttp3.Request r7 = r7.request()
            okhttp3.HttpUrl r7 = r7.url()
            okio.Source r7 = r6.newChunkedSource(r7)
            okhttp3.internal.http.RealResponseBody r1 = new okhttp3.internal.http.RealResponseBody
            okio.BufferedSource r7 = okio.Okio.buffer(r7)
            r1.<init>(r0, r2, r7)
            return r1
        L4d:
            long r4 = okhttp3.internal.http.HttpHeaders.contentLength(r7)
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 == 0) goto L63
            okio.Source r7 = r6.newFixedLengthSource(r4)
            okhttp3.internal.http.RealResponseBody r1 = new okhttp3.internal.http.RealResponseBody
            okio.BufferedSource r7 = okio.Okio.buffer(r7)
            r1.<init>(r0, r4, r7)
            return r1
        L63:
            okhttp3.internal.http.RealResponseBody r7 = new okhttp3.internal.http.RealResponseBody
            okio.Source r1 = r6.newUnknownLengthSource()
            okio.BufferedSource r1 = okio.Okio.buffer(r1)
            r7.<init>(r0, r2, r1)
            return r7
    }

    public okhttp3.Headers readHeaders() throws java.io.IOException {
            r3 = this;
            okhttp3.Headers$Builder r0 = new okhttp3.Headers$Builder
            r0.<init>()
        L5:
            java.lang.String r1 = r3.readHeaderLine()
            int r2 = r1.length()
            if (r2 == 0) goto L15
            okhttp3.internal.Internal r2 = okhttp3.internal.Internal.instance
            r2.addLenient(r0, r1)
            goto L5
        L15:
            okhttp3.Headers r0 = r0.build()
            return r0
    }

    @Override
    public okhttp3.Response.Builder readResponseHeaders(boolean r5) throws java.io.IOException {
            r4 = this;
            int r0 = r4.state
            r1 = 3
            r2 = 1
            if (r0 == r2) goto L22
            if (r0 != r1) goto L9
            goto L22
        L9:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "state: "
            r0.append(r1)
            int r1 = r4.state
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L22:
            java.lang.String r0 = r4.readHeaderLine()     // Catch: java.io.EOFException -> L5e
            okhttp3.internal.http.StatusLine r0 = okhttp3.internal.http.StatusLine.parse(r0)     // Catch: java.io.EOFException -> L5e
            okhttp3.Response$Builder r2 = new okhttp3.Response$Builder     // Catch: java.io.EOFException -> L5e
            r2.<init>()     // Catch: java.io.EOFException -> L5e
            okhttp3.Protocol r3 = r0.protocol     // Catch: java.io.EOFException -> L5e
            okhttp3.Response$Builder r2 = r2.protocol(r3)     // Catch: java.io.EOFException -> L5e
            int r3 = r0.code     // Catch: java.io.EOFException -> L5e
            okhttp3.Response$Builder r2 = r2.code(r3)     // Catch: java.io.EOFException -> L5e
            java.lang.String r3 = r0.message     // Catch: java.io.EOFException -> L5e
            okhttp3.Response$Builder r2 = r2.message(r3)     // Catch: java.io.EOFException -> L5e
            okhttp3.Headers r3 = r4.readHeaders()     // Catch: java.io.EOFException -> L5e
            okhttp3.Response$Builder r2 = r2.headers(r3)     // Catch: java.io.EOFException -> L5e
            r3 = 100
            if (r5 == 0) goto L53
            int r5 = r0.code     // Catch: java.io.EOFException -> L5e
            if (r5 != r3) goto L53
            r5 = 0
            return r5
        L53:
            int r5 = r0.code     // Catch: java.io.EOFException -> L5e
            if (r5 != r3) goto L5a
            r4.state = r1     // Catch: java.io.EOFException -> L5e
            return r2
        L5a:
            r5 = 4
            r4.state = r5     // Catch: java.io.EOFException -> L5e
            return r2
        L5e:
            r5 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unexpected end of stream on "
            r1.append(r2)
            okhttp3.internal.connection.StreamAllocation r2 = r4.streamAllocation
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r0.initCause(r5)
            throw r0
    }

    public void writeRequest(okhttp3.Headers r5, java.lang.String r6) throws java.io.IOException {
            r4 = this;
            int r0 = r4.state
            if (r0 != 0) goto L3d
            okio.BufferedSink r0 = r4.sink
            okio.BufferedSink r6 = r0.writeUtf8(r6)
            java.lang.String r0 = "\r\n"
            r6.writeUtf8(r0)
            r6 = 0
            int r1 = r5.size()
        L14:
            if (r6 >= r1) goto L34
            okio.BufferedSink r2 = r4.sink
            java.lang.String r3 = r5.name(r6)
            okio.BufferedSink r2 = r2.writeUtf8(r3)
            java.lang.String r3 = ": "
            okio.BufferedSink r2 = r2.writeUtf8(r3)
            java.lang.String r3 = r5.value(r6)
            okio.BufferedSink r2 = r2.writeUtf8(r3)
            r2.writeUtf8(r0)
            int r6 = r6 + 1
            goto L14
        L34:
            okio.BufferedSink r5 = r4.sink
            r5.writeUtf8(r0)
            r5 = 1
            r4.state = r5
            return
        L3d:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "state: "
            r6.append(r0)
            int r0 = r4.state
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }

    @Override
    public void writeRequestHeaders(okhttp3.Request r2) throws java.io.IOException {
            r1 = this;
            okhttp3.internal.connection.StreamAllocation r0 = r1.streamAllocation
            okhttp3.internal.connection.RealConnection r0 = r0.connection()
            okhttp3.Route r0 = r0.route()
            java.net.Proxy r0 = r0.proxy()
            java.net.Proxy$Type r0 = r0.type()
            java.lang.String r0 = okhttp3.internal.http.RequestLine.get(r2, r0)
            okhttp3.Headers r2 = r2.headers()
            r1.writeRequest(r2, r0)
            return
    }
}
