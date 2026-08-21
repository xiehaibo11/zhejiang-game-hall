package org.cocos2dx.okhttp3.internal.http2;

public final class Http2Codec implements org.cocos2dx.okhttp3.internal.http.HttpCodec {
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
    private final org.cocos2dx.okhttp3.Interceptor.Chain chain;
    private final org.cocos2dx.okhttp3.internal.http2.Http2Connection connection;
    private final org.cocos2dx.okhttp3.Protocol protocol;
    private org.cocos2dx.okhttp3.internal.http2.Http2Stream stream;
    final org.cocos2dx.okhttp3.internal.connection.StreamAllocation streamAllocation;

    class StreamFinishingSource extends org.cocos2dx.okio.ForwardingSource {
        long bytesRead;
        boolean completed;
        final org.cocos2dx.okhttp3.internal.http2.Http2Codec this$0;

        StreamFinishingSource(org.cocos2dx.okhttp3.internal.http2.Http2Codec r1, org.cocos2dx.okio.Source r2) {
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
                org.cocos2dx.okhttp3.internal.http2.Http2Codec r0 = r7.this$0
                org.cocos2dx.okhttp3.internal.connection.StreamAllocation r1 = r0.streamAllocation
                r2 = 0
                org.cocos2dx.okhttp3.internal.http2.Http2Codec r3 = r7.this$0
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
        public long read(org.cocos2dx.okio.Buffer r3, long r4) throws java.io.IOException {
                r2 = this;
                org.cocos2dx.okio.Source r0 = r2.delegate()     // Catch: java.io.IOException -> L14
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
            java.util.List r0 = org.cocos2dx.okhttp3.internal.Util.immutableList(r0)
            org.cocos2dx.okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_REQUEST_HEADERS = r0
            java.lang.String r1 = "connection"
            java.lang.String r2 = "host"
            java.lang.String r3 = "keep-alive"
            java.lang.String r4 = "proxy-connection"
            java.lang.String r5 = "te"
            java.lang.String r6 = "transfer-encoding"
            java.lang.String r7 = "encoding"
            java.lang.String r8 = "upgrade"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8}
            java.util.List r0 = org.cocos2dx.okhttp3.internal.Util.immutableList(r0)
            org.cocos2dx.okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_RESPONSE_HEADERS = r0
            return
    }

    public Http2Codec(org.cocos2dx.okhttp3.OkHttpClient r1, org.cocos2dx.okhttp3.Interceptor.Chain r2, org.cocos2dx.okhttp3.internal.connection.StreamAllocation r3, org.cocos2dx.okhttp3.internal.http2.Http2Connection r4) {
            r0 = this;
            r0.<init>()
            r0.chain = r2
            r0.streamAllocation = r3
            r0.connection = r4
            java.util.List r1 = r1.protocols()
            org.cocos2dx.okhttp3.Protocol r2 = org.cocos2dx.okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L18
            org.cocos2dx.okhttp3.Protocol r1 = org.cocos2dx.okhttp3.Protocol.H2_PRIOR_KNOWLEDGE
            goto L1a
        L18:
            org.cocos2dx.okhttp3.Protocol r1 = org.cocos2dx.okhttp3.Protocol.HTTP_2
        L1a:
            r0.protocol = r1
            return
    }

    public static java.util.List<org.cocos2dx.okhttp3.internal.http2.Header> http2HeadersList(org.cocos2dx.okhttp3.Request r6) {
            org.cocos2dx.okhttp3.Headers r0 = r6.headers()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.size()
            int r2 = r2 + 4
            r1.<init>(r2)
            org.cocos2dx.okhttp3.internal.http2.Header r2 = new org.cocos2dx.okhttp3.internal.http2.Header
            org.cocos2dx.okio.ByteString r3 = org.cocos2dx.okhttp3.internal.http2.Header.TARGET_METHOD
            java.lang.String r4 = r6.method()
            r2.<init>(r3, r4)
            r1.add(r2)
            org.cocos2dx.okhttp3.internal.http2.Header r2 = new org.cocos2dx.okhttp3.internal.http2.Header
            org.cocos2dx.okio.ByteString r3 = org.cocos2dx.okhttp3.internal.http2.Header.TARGET_PATH
            org.cocos2dx.okhttp3.HttpUrl r4 = r6.url()
            java.lang.String r4 = org.cocos2dx.okhttp3.internal.http.RequestLine.requestPath(r4)
            r2.<init>(r3, r4)
            r1.add(r2)
            java.lang.String r2 = "Host"
            java.lang.String r2 = r6.header(r2)
            if (r2 == 0) goto L41
            org.cocos2dx.okhttp3.internal.http2.Header r3 = new org.cocos2dx.okhttp3.internal.http2.Header
            org.cocos2dx.okio.ByteString r4 = org.cocos2dx.okhttp3.internal.http2.Header.TARGET_AUTHORITY
            r3.<init>(r4, r2)
            r1.add(r3)
        L41:
            org.cocos2dx.okhttp3.internal.http2.Header r2 = new org.cocos2dx.okhttp3.internal.http2.Header
            org.cocos2dx.okio.ByteString r3 = org.cocos2dx.okhttp3.internal.http2.Header.TARGET_SCHEME
            org.cocos2dx.okhttp3.HttpUrl r6 = r6.url()
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
            org.cocos2dx.okio.ByteString r3 = org.cocos2dx.okio.ByteString.encodeUtf8(r3)
            java.util.List<java.lang.String> r4 = org.cocos2dx.okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_REQUEST_HEADERS
            java.lang.String r5 = r3.utf8()
            boolean r4 = r4.contains(r5)
            if (r4 != 0) goto L80
            org.cocos2dx.okhttp3.internal.http2.Header r4 = new org.cocos2dx.okhttp3.internal.http2.Header
            java.lang.String r5 = r0.value(r6)
            r4.<init>(r3, r5)
            r1.add(r4)
        L80:
            int r6 = r6 + 1
            goto L58
        L83:
            return r1
    }

    public static org.cocos2dx.okhttp3.Response.Builder readHttp2HeadersList(org.cocos2dx.okhttp3.Headers r7, org.cocos2dx.okhttp3.Protocol r8) throws java.io.IOException {
            org.cocos2dx.okhttp3.Headers$Builder r0 = new org.cocos2dx.okhttp3.Headers$Builder
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
            org.cocos2dx.okhttp3.internal.http.StatusLine r2 = org.cocos2dx.okhttp3.internal.http.StatusLine.parse(r2)
            goto L40
        L33:
            java.util.List<java.lang.String> r6 = org.cocos2dx.okhttp3.internal.http2.Http2Codec.HTTP_2_SKIPPED_RESPONSE_HEADERS
            boolean r6 = r6.contains(r4)
            if (r6 != 0) goto L40
            org.cocos2dx.okhttp3.internal.Internal r6 = org.cocos2dx.okhttp3.internal.Internal.instance
            r6.addLenient(r0, r4, r5)
        L40:
            int r3 = r3 + 1
            goto Lb
        L43:
            if (r2 == 0) goto L63
            org.cocos2dx.okhttp3.Response$Builder r7 = new org.cocos2dx.okhttp3.Response$Builder
            r7.<init>()
            org.cocos2dx.okhttp3.Response$Builder r7 = r7.protocol(r8)
            int r8 = r2.code
            org.cocos2dx.okhttp3.Response$Builder r7 = r7.code(r8)
            java.lang.String r8 = r2.message
            org.cocos2dx.okhttp3.Response$Builder r7 = r7.message(r8)
            org.cocos2dx.okhttp3.Headers r8 = r0.build()
            org.cocos2dx.okhttp3.Response$Builder r7 = r7.headers(r8)
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
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r0 = r2.stream
            if (r0 == 0) goto L9
            org.cocos2dx.okhttp3.internal.http2.ErrorCode r1 = org.cocos2dx.okhttp3.internal.http2.ErrorCode.CANCEL
            r0.closeLater(r1)
        L9:
            return
    }

    @Override
    public org.cocos2dx.okio.Sink createRequestBody(org.cocos2dx.okhttp3.Request r1, long r2) {
            r0 = this;
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r1 = r0.stream
            org.cocos2dx.okio.Sink r1 = r1.getSink()
            return r1
    }

    @Override
    public void finishRequest() throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r0 = r1.stream
            org.cocos2dx.okio.Sink r0 = r0.getSink()
            r0.close()
            return
    }

    @Override
    public void flushRequest() throws java.io.IOException {
            r1 = this;
            org.cocos2dx.okhttp3.internal.http2.Http2Connection r0 = r1.connection
            r0.flush()
            return
    }

    @Override
    public org.cocos2dx.okhttp3.ResponseBody openResponseBody(org.cocos2dx.okhttp3.Response r5) throws java.io.IOException {
            r4 = this;
            org.cocos2dx.okhttp3.internal.connection.StreamAllocation r0 = r4.streamAllocation
            org.cocos2dx.okhttp3.EventListener r0 = r0.eventListener
            org.cocos2dx.okhttp3.internal.connection.StreamAllocation r1 = r4.streamAllocation
            org.cocos2dx.okhttp3.Call r1 = r1.call
            r0.responseBodyStart(r1)
            java.lang.String r0 = "Content-Type"
            java.lang.String r0 = r5.header(r0)
            long r1 = org.cocos2dx.okhttp3.internal.http.HttpHeaders.contentLength(r5)
            org.cocos2dx.okhttp3.internal.http2.Http2Codec$StreamFinishingSource r5 = new org.cocos2dx.okhttp3.internal.http2.Http2Codec$StreamFinishingSource
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r3 = r4.stream
            org.cocos2dx.okio.Source r3 = r3.getSource()
            r5.<init>(r4, r3)
            org.cocos2dx.okhttp3.internal.http.RealResponseBody r3 = new org.cocos2dx.okhttp3.internal.http.RealResponseBody
            org.cocos2dx.okio.BufferedSource r5 = org.cocos2dx.okio.Okio.buffer(r5)
            r3.<init>(r0, r1, r5)
            return r3
    }

    @Override
    public org.cocos2dx.okhttp3.Response.Builder readResponseHeaders(boolean r3) throws java.io.IOException {
            r2 = this;
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r0 = r2.stream
            org.cocos2dx.okhttp3.Headers r0 = r0.takeHeaders()
            org.cocos2dx.okhttp3.Protocol r1 = r2.protocol
            org.cocos2dx.okhttp3.Response$Builder r0 = readHttp2HeadersList(r0, r1)
            if (r3 == 0) goto L1a
            org.cocos2dx.okhttp3.internal.Internal r3 = org.cocos2dx.okhttp3.internal.Internal.instance
            int r3 = r3.code(r0)
            r1 = 100
            if (r3 != r1) goto L1a
            r3 = 0
            return r3
        L1a:
            return r0
    }

    @Override
    public void writeRequestHeaders(org.cocos2dx.okhttp3.Request r4) throws java.io.IOException {
            r3 = this;
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r0 = r3.stream
            if (r0 == 0) goto L5
            return
        L5:
            org.cocos2dx.okhttp3.RequestBody r0 = r4.body()
            if (r0 == 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            java.util.List r4 = http2HeadersList(r4)
            org.cocos2dx.okhttp3.internal.http2.Http2Connection r1 = r3.connection
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r4 = r1.newStream(r4, r0)
            r3.stream = r4
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r4 = r3.stream
            org.cocos2dx.okio.Timeout r4 = r4.readTimeout()
            org.cocos2dx.okhttp3.Interceptor$Chain r0 = r3.chain
            int r0 = r0.readTimeoutMillis()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r2)
            org.cocos2dx.okhttp3.internal.http2.Http2Stream r4 = r3.stream
            org.cocos2dx.okio.Timeout r4 = r4.writeTimeout()
            org.cocos2dx.okhttp3.Interceptor$Chain r0 = r3.chain
            int r0 = r0.writeTimeoutMillis()
            long r0 = (long) r0
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.MILLISECONDS
            r4.timeout(r0, r2)
            return
    }
}
