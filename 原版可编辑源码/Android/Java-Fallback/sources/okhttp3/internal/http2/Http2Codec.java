package okhttp3.internal.http2;

public final class Http2Codec implements okhttp3.internal.http.HttpCodec {
    private static final okio.ByteString CONNECTION = null;
    private static final okio.ByteString ENCODING = null;
    private static final okio.ByteString HOST = null;
    private static final java.util.List<okio.ByteString> HTTP_2_SKIPPED_REQUEST_HEADERS = null;
    private static final java.util.List<okio.ByteString> HTTP_2_SKIPPED_RESPONSE_HEADERS = null;
    private static final okio.ByteString KEEP_ALIVE = null;
    private static final okio.ByteString PROXY_CONNECTION = null;
    private static final okio.ByteString TE = null;
    private static final okio.ByteString TRANSFER_ENCODING = null;
    private static final okio.ByteString UPGRADE = null;
    private final okhttp3.Interceptor.Chain chain;
    private final okhttp3.internal.http2.Http2Connection connection;
    private final okhttp3.Protocol protocol;
    private okhttp3.internal.http2.Http2Stream stream;
    final okhttp3.internal.connection.StreamAllocation streamAllocation;

    class StreamFinishingSource extends okio.ForwardingSource {
        long bytesRead;
        boolean completed;
        final okhttp3.internal.http2.Http2Codec this$0;

        StreamFinishingSource(okhttp3.internal.http2.Http2Codec r1, okio.Source r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                r1 = 0
                r0.completed = r1
                r1 = 0
                r0.bytesRead = r1
                return
        }

        private void endOfInput(java.io.IOException r8) {
                r7 = this;
                boolean r0 = r7.completed
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r7.completed = r0
                okhttp3.internal.http2.Http2Codec r0 = r7.this$0
                okhttp3.internal.connection.StreamAllocation r1 = r0.streamAllocation
                r2 = 0
                okhttp3.internal.http2.Http2Codec r3 = r7.this$0
                long r4 = r7.bytesRead
                r6 = r8
                r1.streamFinished(r2, r3, r4, r6)
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                super.close()
                r0 = 0
                r1.endOfInput(r0)
                return
        }

        @Override
        public long read(okio.Buffer r3, long r4) throws java.io.IOException {
                r2 = this;
                okio.Source r0 = r2.delegate()     // Catch: java.io.IOException -> L14
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
                r2.endOfInput(r3)
                throw r3
        }
    }

    static {
            java.lang.String r0 = "connection"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.CONNECTION = r0
            java.lang.String r0 = "host"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.HOST = r0
            java.lang.String r0 = "keep-alive"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.KEEP_ALIVE = r0
            java.lang.String r0 = "proxy-connection"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.PROXY_CONNECTION = r0
            java.lang.String r0 = "transfer-encoding"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.TRANSFER_ENCODING = r0
            java.lang.String r0 = "te"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.TE = r0
            java.lang.String r0 = "encoding"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.ENCODING = r0
            java.lang.String r0 = "upgrade"
            okio.ByteString r0 = okio.ByteString.encodeUtf8(r0)
            okhttp3.internal.http2.Http2Codec.UPGRADE = r0
            r1 = 12
            okio.ByteString[] r1 = new okio.ByteString[r1]
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.CONNECTION
            r3 = 0
            r1[r3] = r2
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.HOST
            r4 = 1
            r1[r4] = r2
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.KEEP_ALIVE
            r5 = 2
            r1[r5] = r2
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.PROXY_CONNECTION
            r6 = 3
            r1[r6] = r2
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.TE
            r7 = 4
            r1[r7] = r2
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.TRANSFER_ENCODING
            r8 = 5
            r1[r8] = r2
            okio.ByteString r2 = okhttp3.internal.http2.Http2Codec.ENCODING
            r9 = 6
            r1[r9] = r2
            r2 = 7
            r1[r2] = r0
            okio.ByteString r0 = okhttp3.internal.http2.Header.TARGET_METHOD
            r10 = 8
            r1[r10] = r0
            okio.ByteString r0 = okhttp3.internal.http2.Header.TARGET_PATH
            r11 = 9
            r1[r11] = r0
            okio.ByteString r0 = okhttp3.internal.http2.Header.TARGET_SCHEME
            r11 = 10
            r1[r11] = r0
            okio.ByteString r0 = okhttp3.internal.http2.Header.TARGET_AUTHORITY
            r11 = 11
            r1[r11] = r0
            java.util.List r0 = okhttp3.internal.Util.immutableList(r1)
            okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_REQUEST_HEADERS = r0
            okio.ByteString[] r0 = new okio.ByteString[r10]
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.CONNECTION
            r0[r3] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.HOST
            r0[r4] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.KEEP_ALIVE
            r0[r5] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.PROXY_CONNECTION
            r0[r6] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.TE
            r0[r7] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.TRANSFER_ENCODING
            r0[r8] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.ENCODING
            r0[r9] = r1
            okio.ByteString r1 = okhttp3.internal.http2.Http2Codec.UPGRADE
            r0[r2] = r1
            java.util.List r0 = okhttp3.internal.Util.immutableList(r0)
            okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_RESPONSE_HEADERS = r0
            return
    }

    public Http2Codec(okhttp3.OkHttpClient r1, okhttp3.Interceptor.Chain r2, okhttp3.internal.connection.StreamAllocation r3, okhttp3.internal.http2.Http2Connection r4) {
            r0 = this;
            r0.<init>()
            r0.chain = r2
            r0.streamAllocation = r3
            r0.connection = r4
            java.util.List r1 = r1.protocols()
            okhttp3.Protocol r2 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L18
            okhttp3.Protocol r1 = okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            goto L1a
        L18:
            okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_2
        L1a:
            r0.protocol = r1
            return
    }

    public static java.util.List<okhttp3.internal.http2.Header> http2HeadersList(okhttp3.Request r6) {
            okhttp3.Headers r0 = r6.headers()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.size()
            int r2 = r2 + 4
            r1.<init>(r2)
            okhttp3.internal.http2.Header r2 = new okhttp3.internal.http2.Header
            okio.ByteString r3 = okhttp3.internal.http2.Header.TARGET_METHOD
            java.lang.String r4 = r6.method()
            r2.<init>(r3, r4)
            r1.add(r2)
            okhttp3.internal.http2.Header r2 = new okhttp3.internal.http2.Header
            okio.ByteString r3 = okhttp3.internal.http2.Header.TARGET_PATH
            okhttp3.HttpUrl r4 = r6.url()
            java.lang.String r4 = okhttp3.internal.http.RequestLine.requestPath(r4)
            r2.<init>(r3, r4)
            r1.add(r2)
            java.lang.String r2 = "Host"
            java.lang.String r2 = r6.header(r2)
            if (r2 == 0) goto L41
            okhttp3.internal.http2.Header r3 = new okhttp3.internal.http2.Header
            okio.ByteString r4 = okhttp3.internal.http2.Header.TARGET_AUTHORITY
            r3.<init>(r4, r2)
            r1.add(r3)
        L41:
            okhttp3.internal.http2.Header r2 = new okhttp3.internal.http2.Header
            okio.ByteString r3 = okhttp3.internal.http2.Header.TARGET_SCHEME
            okhttp3.HttpUrl r6 = r6.url()
            java.lang.String r6 = r6.scheme()
            r2.<init>(r3, r6)
            r1.add(r2)
            r6 = 0
            int r2 = r0.size()
        L58:
            if (r6 >= r2) goto L7f
            java.lang.String r3 = r0.name(r6)
            java.util.Locale r4 = java.util.Locale.US
            java.lang.String r3 = r3.toLowerCase(r4)
            okio.ByteString r3 = okio.ByteString.encodeUtf8(r3)
            java.util.List<okio.ByteString> r4 = okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_REQUEST_HEADERS
            boolean r4 = r4.contains(r3)
            if (r4 != 0) goto L7c
            okhttp3.internal.http2.Header r4 = new okhttp3.internal.http2.Header
            java.lang.String r5 = r0.value(r6)
            r4.<init>(r3, r5)
            r1.add(r4)
        L7c:
            int r6 = r6 + 1
            goto L58
        L7f:
            return r1
    }

    public static okhttp3.Response.Builder readHttp2HeadersList(java.util.List<okhttp3.internal.http2.Header> r8, okhttp3.Protocol r9) throws java.io.IOException {
            okhttp3.Headers$Builder r0 = new okhttp3.Headers$Builder
            r0.<init>()
            int r1 = r8.size()
            r2 = 0
            r3 = 0
            r4 = r2
        Lc:
            if (r3 >= r1) goto L5f
            java.lang.Object r5 = r8.get(r3)
            okhttp3.internal.http2.Header r5 = (okhttp3.internal.http2.Header) r5
            if (r5 != 0) goto L25
            if (r4 == 0) goto L5c
            int r5 = r4.code
            r6 = 100
            if (r5 != r6) goto L5c
            okhttp3.Headers$Builder r0 = new okhttp3.Headers$Builder
            r0.<init>()
            r4 = r2
            goto L5c
        L25:
            okio.ByteString r6 = r5.name
            okio.ByteString r5 = r5.value
            java.lang.String r5 = r5.utf8()
            okio.ByteString r7 = okhttp3.internal.http2.Header.RESPONSE_STATUS
            boolean r7 = r6.equals(r7)
            if (r7 == 0) goto L4b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "HTTP/1.1 "
            r4.append(r6)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            okhttp3.internal.http.StatusLine r4 = okhttp3.internal.http.StatusLine.parse(r4)
            goto L5c
        L4b:
            java.util.List<okio.ByteString> r7 = okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_RESPONSE_HEADERS
            boolean r7 = r7.contains(r6)
            if (r7 != 0) goto L5c
            okhttp3.internal.Internal r7 = okhttp3.internal.Internal.instance
            java.lang.String r6 = r6.utf8()
            r7.addLenient(r0, r6, r5)
        L5c:
            int r3 = r3 + 1
            goto Lc
        L5f:
            if (r4 == 0) goto L7f
            okhttp3.Response$Builder r8 = new okhttp3.Response$Builder
            r8.<init>()
            okhttp3.Response$Builder r8 = r8.protocol(r9)
            int r9 = r4.code
            okhttp3.Response$Builder r8 = r8.code(r9)
            java.lang.String r9 = r4.message
            okhttp3.Response$Builder r8 = r8.message(r9)
            okhttp3.Headers r9 = r0.build()
            okhttp3.Response$Builder r8 = r8.headers(r9)
            return r8
        L7f:
            java.net.ProtocolException r8 = new java.net.ProtocolException
            java.lang.String r9 = "Expected ':status' header not present"
            r8.<init>(r9)
            goto L88
        L87:
            throw r8
        L88:
            goto L87
    }

    @Override
    public void cancel() {
            r2 = this;
            okhttp3.internal.http2.Http2Stream r0 = r2.stream
            if (r0 == 0) goto L9
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.CANCEL
            r0.closeLater(r1)
        L9:
            return
    }

    @Override
    public okio.Sink createRequestBody(okhttp3.Request r1, long r2) {
            r0 = this;
            okhttp3.internal.http2.Http2Stream r1 = r0.stream
            okio.Sink r1 = r1.getSink()
            return r1
    }

    @Override
    public void finishRequest() throws java.io.IOException {
            r1 = this;
            okhttp3.internal.http2.Http2Stream r0 = r1.stream
            okio.Sink r0 = r0.getSink()
            r0.close()
            return
    }

    @Override
    public void flushRequest() throws java.io.IOException {
            r1 = this;
            okhttp3.internal.http2.Http2Connection r0 = r1.connection
            r0.flush()
            return
    }

    @Override
    public okhttp3.ResponseBody openResponseBody(okhttp3.Response r5) throws java.io.IOException {
            r4 = this;
            okhttp3.internal.connection.StreamAllocation r0 = r4.streamAllocation
            okhttp3.EventListener r0 = r0.eventListener
            okhttp3.internal.connection.StreamAllocation r1 = r4.streamAllocation
            okhttp3.Call r1 = r1.call
            r0.responseBodyStart(r1)
            java.lang.String r0 = "Content-Type"
            java.lang.String r0 = r5.header(r0)
            long r1 = okhttp3.internal.http.HttpHeaders.contentLength(r5)
            okhttp3.internal.http2.Http2Codec$StreamFinishingSource r5 = new okhttp3.internal.http2.Http2Codec$StreamFinishingSource
            okhttp3.internal.http2.Http2Stream r3 = r4.stream
            okio.Source r3 = r3.getSource()
            r5.<init>(r4, r3)
            okhttp3.internal.http.RealResponseBody r3 = new okhttp3.internal.http.RealResponseBody
            okio.BufferedSource r5 = okio.Okio.buffer(r5)
            r3.<init>(r0, r1, r5)
            return r3
    }

    @Override
    public okhttp3.Response.Builder readResponseHeaders(boolean r3) throws java.io.IOException {
            r2 = this;
            okhttp3.internal.http2.Http2Stream r0 = r2.stream
            java.util.List r0 = r0.takeResponseHeaders()
            okhttp3.Protocol r1 = r2.protocol
            okhttp3.Response$Builder r0 = readHttp2HeadersList(r0, r1)
            if (r3 == 0) goto L1a
            okhttp3.internal.Internal r3 = okhttp3.internal.Internal.instance
            int r3 = r3.code(r0)
            r1 = 100
            if (r3 != r1) goto L1a
            r3 = 0
            return r3
        L1a:
            return r0
    }

    @Override
    public void writeRequestHeaders(okhttp3.Request r4) throws java.io.IOException {
            r3 = this;
            okhttp3.internal.http2.Http2Stream r0 = r3.stream
            if (r0 == 0) goto L5
            return
        L5:
            okhttp3.RequestBody r0 = r4.body()
            if (r0 == 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            java.util.List r4 = http2HeadersList(r4)
            okhttp3.internal.http2.Http2Connection r1 = r3.connection
            okhttp3.internal.http2.Http2Stream r4 = r1.newStream(r4, r0)
            r3.stream = r4
            okio.Timeout r4 = r4.readTimeout()
            okhttp3.Interceptor$Chain r0 = r3.chain
            int r0 = r0.readTimeoutMillis()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r2)
            okhttp3.internal.http2.Http2Stream r4 = r3.stream
            okio.Timeout r4 = r4.writeTimeout()
            okhttp3.Interceptor$Chain r0 = r3.chain
            int r0 = r0.writeTimeoutMillis()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r2)
            return
    }
}
