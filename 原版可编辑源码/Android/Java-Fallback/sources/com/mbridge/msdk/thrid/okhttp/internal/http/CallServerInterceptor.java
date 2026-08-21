package com.mbridge.msdk.thrid.okhttp.internal.http;

public final class CallServerInterceptor implements com.mbridge.msdk.thrid.okhttp.Interceptor {
    private final boolean forWebSocket;

    static final class CountingSink extends com.mbridge.msdk.thrid.okio.ForwardingSink {
        long successfulCount;

        CountingSink(com.mbridge.msdk.thrid.okio.Sink r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void write(com.mbridge.msdk.thrid.okio.Buffer r3, long r4) throws java.io.IOException {
                r2 = this;
                super.write(r3, r4)
                long r0 = r2.successfulCount
                long r0 = r0 + r4
                r2.successfulCount = r0
                return
        }
    }

    public CallServerInterceptor(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.forWebSocket = r1
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Response intercept(com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r12) throws java.io.IOException {
            r11 = this;
            com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain r12 = (com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain) r12
            com.mbridge.msdk.thrid.okhttp.internal.http.HttpCodec r0 = r12.httpStream()
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r1 = r12.streamAllocation()
            com.mbridge.msdk.thrid.okhttp.Connection r2 = r12.connection()
            com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r2 = (com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection) r2
            com.mbridge.msdk.thrid.okhttp.Request r3 = r12.request()
            long r4 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.thrid.okhttp.EventListener r6 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r7 = r12.call()
            r6.requestHeadersStart(r7)
            r0.writeRequestHeaders(r3)
            com.mbridge.msdk.thrid.okhttp.EventListener r6 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r7 = r12.call()
            r6.requestHeadersEnd(r7, r3)
            java.lang.String r6 = r3.method()
            boolean r6 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpMethod.permitsRequestBody(r6)
            r7 = 0
            if (r6 == 0) goto La6
            com.mbridge.msdk.thrid.okhttp.RequestBody r6 = r3.body()
            if (r6 == 0) goto La6
            java.lang.String r6 = "Expect"
            java.lang.String r6 = r3.header(r6)
            java.lang.String r8 = "100-continue"
            boolean r6 = r8.equalsIgnoreCase(r6)
            if (r6 == 0) goto L63
            r0.flushRequest()
            com.mbridge.msdk.thrid.okhttp.EventListener r6 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r7 = r12.call()
            r6.responseHeadersStart(r7)
            r6 = 1
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = r0.readResponseHeaders(r6)
        L63:
            if (r7 != 0) goto L9d
            com.mbridge.msdk.thrid.okhttp.EventListener r2 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r6 = r12.call()
            r2.requestBodyStart(r6)
            com.mbridge.msdk.thrid.okhttp.RequestBody r2 = r3.body()
            long r8 = r2.contentLength()
            com.mbridge.msdk.thrid.okhttp.internal.http.CallServerInterceptor$CountingSink r2 = new com.mbridge.msdk.thrid.okhttp.internal.http.CallServerInterceptor$CountingSink
            com.mbridge.msdk.thrid.okio.Sink r6 = r0.createRequestBody(r3, r8)
            r2.<init>(r6)
            com.mbridge.msdk.thrid.okio.BufferedSink r6 = com.mbridge.msdk.thrid.okio.Okio.buffer(r2)
            com.mbridge.msdk.thrid.okhttp.RequestBody r8 = r3.body()
            r8.writeTo(r6)
            r6.close()
            com.mbridge.msdk.thrid.okhttp.EventListener r6 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r8 = r12.call()
            long r9 = r2.successfulCount
            r6.requestBodyEnd(r8, r9)
            goto La6
        L9d:
            boolean r2 = r2.isMultiplexed()
            if (r2 != 0) goto La6
            r1.noNewStreams()
        La6:
            r0.finishRequest()
            r2 = 0
            if (r7 != 0) goto Lbb
            com.mbridge.msdk.thrid.okhttp.EventListener r6 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r7 = r12.call()
            r6.responseHeadersStart(r7)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r7 = r0.readResponseHeaders(r2)
        Lbb:
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r7.request(r3)
            com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r7 = r1.connection()
            com.mbridge.msdk.thrid.okhttp.Handshake r7 = r7.handshake()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.handshake(r7)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.sentRequestAtMillis(r4)
            long r7 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.receivedResponseAtMillis(r7)
            com.mbridge.msdk.thrid.okhttp.Response r6 = r6.build()
            int r7 = r6.code()
            r8 = 100
            if (r7 != r8) goto L10b
            com.mbridge.msdk.thrid.okhttp.Response$Builder r2 = r0.readResponseHeaders(r2)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r2 = r2.request(r3)
            com.mbridge.msdk.thrid.okhttp.internal.connection.RealConnection r3 = r1.connection()
            com.mbridge.msdk.thrid.okhttp.Handshake r3 = r3.handshake()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r2 = r2.handshake(r3)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r2 = r2.sentRequestAtMillis(r4)
            long r3 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r2 = r2.receivedResponseAtMillis(r3)
            com.mbridge.msdk.thrid.okhttp.Response r6 = r2.build()
            int r7 = r6.code()
        L10b:
            com.mbridge.msdk.thrid.okhttp.EventListener r2 = r12.eventListener()
            com.mbridge.msdk.thrid.okhttp.Call r12 = r12.call()
            r2.responseHeadersEnd(r12, r6)
            boolean r12 = r11.forWebSocket
            if (r12 == 0) goto L12d
            r12 = 101(0x65, float:1.42E-43)
            if (r7 != r12) goto L12d
            com.mbridge.msdk.thrid.okhttp.Response$Builder r12 = r6.newBuilder()
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.EMPTY_RESPONSE
            com.mbridge.msdk.thrid.okhttp.Response$Builder r12 = r12.body(r0)
            com.mbridge.msdk.thrid.okhttp.Response r12 = r12.build()
            goto L13d
        L12d:
            com.mbridge.msdk.thrid.okhttp.Response$Builder r12 = r6.newBuilder()
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r0.openResponseBody(r6)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r12 = r12.body(r0)
            com.mbridge.msdk.thrid.okhttp.Response r12 = r12.build()
        L13d:
            com.mbridge.msdk.thrid.okhttp.Request r0 = r12.request()
            java.lang.String r2 = "Connection"
            java.lang.String r0 = r0.header(r2)
            java.lang.String r3 = "close"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto L159
            java.lang.String r0 = r12.header(r2)
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L15c
        L159:
            r1.noNewStreams()
        L15c:
            r0 = 204(0xcc, float:2.86E-43)
            if (r7 == r0) goto L164
            r0 = 205(0xcd, float:2.87E-43)
            if (r7 != r0) goto L172
        L164:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r12.body()
            long r0 = r0.contentLength()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L173
        L172:
            return r12
        L173:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "HTTP "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = " had non-zero Content-Length: "
            r1.append(r2)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r12 = r12.body()
            long r2 = r12.contentLength()
            r1.append(r2)
            java.lang.String r12 = r1.toString()
            r0.<init>(r12)
            throw r0
    }
}
