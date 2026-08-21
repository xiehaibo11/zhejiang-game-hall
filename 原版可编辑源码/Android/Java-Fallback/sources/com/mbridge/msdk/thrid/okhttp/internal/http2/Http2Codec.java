package com.mbridge.msdk.thrid.okhttp.internal.http2;

public final class Http2Codec implements com.mbridge.msdk.thrid.okhttp.internal.http.HttpCodec {
    private static final java.lang.String CONNECTION = "connection";
    private static final java.lang.String ENCODING = "encoding";
    private static final java.lang.String HOST = "host";
    private static final java.util.List<java.lang.String> HTTP_2_SKIPPED_REQUEST_HEADERS = null;
    private static final java.util.List<java.lang.String> HTTP_2_SKIPPED_RESPONSE_HEADERS = null;
    private static final java.lang.String KEEP_ALIVE = "keep-alive";
    private static final java.lang.String PROXY_CONNECTION = "proxy-connection";
    private static final java.lang.String TE = "te";
    private static final java.lang.String TRANSFER_ENCODING = "transfer-encoding";
    private static final java.lang.String UPGRADE = "upgrade";
    private final com.mbridge.msdk.thrid.okhttp.Interceptor.Chain chain;
    private final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection connection;
    private final com.mbridge.msdk.thrid.okhttp.Protocol protocol;
    private com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream stream;
    final com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation streamAllocation;

    class StreamFinishingSource extends com.mbridge.msdk.thrid.okio.ForwardingSource {
        long bytesRead;
        boolean completed;
        final com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec this$0;

        StreamFinishingSource(com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec r1, com.mbridge.msdk.thrid.okio.Source r2) {
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
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec r0 = r7.this$0
                com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r1 = r0.streamAllocation
                r2 = 0
                com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec r3 = r7.this$0
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
        public long read(com.mbridge.msdk.thrid.okio.Buffer r3, long r4) throws java.io.IOException {
                r2 = this;
                com.mbridge.msdk.thrid.okio.Source r0 = r2.delegate()     // Catch: java.io.IOException -> L14
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
            java.lang.String r1 = "host"
            java.lang.String r2 = "keep-alive"
            java.lang.String r3 = "proxy-connection"
            java.lang.String r4 = "te"
            java.lang.String r5 = "transfer-encoding"
            java.lang.String r6 = "encoding"
            java.lang.String r7 = "upgrade"
            java.lang.String r8 = ":method"
            java.lang.String r9 = ":path"
            java.lang.String r10 = ":scheme"
            java.lang.String r11 = ":authority"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11}
            java.util.List r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.immutableList(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec.HTTP_2_SKIPPED_REQUEST_HEADERS = r0
            java.lang.String r1 = "connection"
            java.lang.String r2 = "host"
            java.lang.String r3 = "keep-alive"
            java.lang.String r4 = "proxy-connection"
            java.lang.String r5 = "te"
            java.lang.String r6 = "transfer-encoding"
            java.lang.String r7 = "encoding"
            java.lang.String r8 = "upgrade"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8}
            java.util.List r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.immutableList(r0)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec.HTTP_2_SKIPPED_RESPONSE_HEADERS = r0
            return
    }

    public Http2Codec(com.mbridge.msdk.thrid.okhttp.OkHttpClient r1, com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r2, com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r3, com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r4) {
            r0 = this;
            r0.<init>()
            r0.chain = r2
            r0.streamAllocation = r3
            r0.connection = r4
            java.util.List r1 = r1.protocols()
            com.mbridge.msdk.thrid.okhttp.Protocol r2 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L18
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            goto L1a
        L18:
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2
        L1a:
            r0.protocol = r1
            return
    }

    public static java.util.List<com.mbridge.msdk.thrid.okhttp.internal.http2.Header> http2HeadersList(com.mbridge.msdk.thrid.okhttp.Request r6) {
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r6.headers()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.size()
            int r2 = r2 + 4
            r1.<init>(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header r2 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Header
            com.mbridge.msdk.thrid.okio.ByteString r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_METHOD
            java.lang.String r4 = r6.method()
            r2.<init>(r3, r4)
            r1.add(r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header r2 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Header
            com.mbridge.msdk.thrid.okio.ByteString r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_PATH
            com.mbridge.msdk.thrid.okhttp.HttpUrl r4 = r6.url()
            java.lang.String r4 = com.mbridge.msdk.thrid.okhttp.internal.http.RequestLine.requestPath(r4)
            r2.<init>(r3, r4)
            r1.add(r2)
            java.lang.String r2 = "Host"
            java.lang.String r2 = r6.header(r2)
            if (r2 == 0) goto L41
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header r3 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Header
            com.mbridge.msdk.thrid.okio.ByteString r4 = com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_AUTHORITY
            r3.<init>(r4, r2)
            r1.add(r3)
        L41:
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header r2 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Header
            com.mbridge.msdk.thrid.okio.ByteString r3 = com.mbridge.msdk.thrid.okhttp.internal.http2.Header.TARGET_SCHEME
            com.mbridge.msdk.thrid.okhttp.HttpUrl r6 = r6.url()
            java.lang.String r6 = r6.scheme()
            r2.<init>(r3, r6)
            r1.add(r2)
            r6 = 0
            int r2 = r0.size()
        L58:
            if (r6 >= r2) goto L83
            java.lang.String r3 = r0.name(r6)
            java.util.Locale r4 = java.util.Locale.US
            java.lang.String r3 = r3.toLowerCase(r4)
            com.mbridge.msdk.thrid.okio.ByteString r3 = com.mbridge.msdk.thrid.okio.ByteString.encodeUtf8(r3)
            java.util.List<java.lang.String> r4 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec.HTTP_2_SKIPPED_REQUEST_HEADERS
            java.lang.String r5 = r3.utf8()
            boolean r4 = r4.contains(r5)
            if (r4 != 0) goto L80
            com.mbridge.msdk.thrid.okhttp.internal.http2.Header r4 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Header
            java.lang.String r5 = r0.value(r6)
            r4.<init>(r3, r5)
            r1.add(r4)
        L80:
            int r6 = r6 + 1
            goto L58
        L83:
            return r1
    }

    public static com.mbridge.msdk.thrid.okhttp.Response.Builder readHttp2HeadersList(com.mbridge.msdk.thrid.okhttp.Headers r7, com.mbridge.msdk.thrid.okhttp.Protocol r8) throws java.io.IOException {
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Headers$Builder
            r0.<init>()
            int r1 = r7.size()
            r2 = 0
            r3 = 0
        Lb:
            if (r3 >= r1) goto L43
            java.lang.String r4 = r7.name(r3)
            java.lang.String r5 = r7.value(r3)
            java.lang.String r6 = ":status"
            boolean r6 = r4.equals(r6)
            if (r6 == 0) goto L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "HTTP/1.1 "
            r2.append(r4)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.thrid.okhttp.internal.http.StatusLine r2 = com.mbridge.msdk.thrid.okhttp.internal.http.StatusLine.parse(r2)
            goto L40
        L33:
            java.util.List<java.lang.String> r6 = com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec.HTTP_2_SKIPPED_RESPONSE_HEADERS
            boolean r6 = r6.contains(r4)
            if (r6 != 0) goto L40
            com.mbridge.msdk.thrid.okhttp.internal.Internal r6 = com.mbridge.msdk.thrid.okhttp.internal.Internal.instance
            r6.addLenient(r0, r4, r5)
        L40:
            int r3 = r3 + 1
            goto Lb
        L43:
            if (r2 == 0) goto L63
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = new com.mbridge.msdk.thrid.okhttp.Response$Builder
            r7.<init>()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = r7.protocol(r8)
            int r8 = r2.code
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = r7.code(r8)
            java.lang.String r8 = r2.message
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = r7.message(r8)
            com.mbridge.msdk.thrid.okhttp.Headers r8 = r0.build()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = r7.headers(r8)
            return r7
        L63:
            java.net.ProtocolException r7 = new java.net.ProtocolException
            java.lang.String r8 = "Expected ':status' header not present"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public void cancel() {
            r2 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r2.stream
            if (r0 == 0) goto L9
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CANCEL
            r0.closeLater(r1)
        L9:
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Sink createRequestBody(com.mbridge.msdk.thrid.okhttp.Request r1, long r2) {
            r0 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r1 = r0.stream
            com.mbridge.msdk.thrid.okio.Sink r1 = r1.getSink()
            return r1
    }

    @Override
    public void finishRequest() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r1.stream
            com.mbridge.msdk.thrid.okio.Sink r0 = r0.getSink()
            r0.close()
            return
    }

    @Override
    public void flushRequest() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r0 = r1.connection
            r0.flush()
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.ResponseBody openResponseBody(com.mbridge.msdk.thrid.okhttp.Response r5) throws java.io.IOException {
            r4 = this;
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r0 = r4.streamAllocation
            com.mbridge.msdk.thrid.okhttp.EventListener r0 = r0.eventListener
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r1 = r4.streamAllocation
            com.mbridge.msdk.thrid.okhttp.Call r1 = r1.call
            r0.responseBodyStart(r1)
            java.lang.String r0 = "Content-Type"
            java.lang.String r0 = r5.header(r0)
            long r1 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.contentLength(r5)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec$StreamFinishingSource r5 = new com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Codec$StreamFinishingSource
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r3 = r4.stream
            com.mbridge.msdk.thrid.okio.Source r3 = r3.getSource()
            r5.<init>(r4, r3)
            com.mbridge.msdk.thrid.okhttp.internal.http.RealResponseBody r3 = new com.mbridge.msdk.thrid.okhttp.internal.http.RealResponseBody
            com.mbridge.msdk.thrid.okio.BufferedSource r5 = com.mbridge.msdk.thrid.okio.Okio.buffer(r5)
            r3.<init>(r0, r1, r5)
            return r3
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Response.Builder readResponseHeaders(boolean r3) throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r2.stream
            com.mbridge.msdk.thrid.okhttp.Headers r0 = r0.takeHeaders()
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = r2.protocol
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = readHttp2HeadersList(r0, r1)
            if (r3 == 0) goto L1a
            com.mbridge.msdk.thrid.okhttp.internal.Internal r3 = com.mbridge.msdk.thrid.okhttp.internal.Internal.instance
            int r3 = r3.code(r0)
            r1 = 100
            if (r3 != r1) goto L1a
            r3 = 0
            return r3
        L1a:
            return r0
    }

    @Override
    public void writeRequestHeaders(com.mbridge.msdk.thrid.okhttp.Request r4) throws java.io.IOException {
            r3 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r0 = r3.stream
            if (r0 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.thrid.okhttp.RequestBody r0 = r4.body()
            if (r0 == 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            java.util.List r4 = http2HeadersList(r4)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Connection r1 = r3.connection
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r4 = r1.newStream(r4, r0)
            r3.stream = r4
            com.mbridge.msdk.thrid.okio.Timeout r4 = r4.readTimeout()
            com.mbridge.msdk.thrid.okhttp.Interceptor$Chain r0 = r3.chain
            int r0 = r0.readTimeoutMillis()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.Http2Stream r4 = r3.stream
            com.mbridge.msdk.thrid.okio.Timeout r4 = r4.writeTimeout()
            com.mbridge.msdk.thrid.okhttp.Interceptor$Chain r0 = r3.chain
            int r0 = r0.writeTimeoutMillis()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r2)
            return
    }
}
