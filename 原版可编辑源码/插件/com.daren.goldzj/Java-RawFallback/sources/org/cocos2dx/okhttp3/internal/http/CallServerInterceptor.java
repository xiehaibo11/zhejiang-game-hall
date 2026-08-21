package org.cocos2dx.okhttp3.internal.http;

public final class CallServerInterceptor implements org.cocos2dx.okhttp3.Interceptor {
    private final boolean forWebSocket;

    static final class CountingSink extends org.cocos2dx.okio.ForwardingSink {
        long successfulCount;

        CountingSink(org.cocos2dx.okio.Sink r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void write(org.cocos2dx.okio.Buffer r3, long r4) throws java.io.IOException {
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
    public org.cocos2dx.okhttp3.Response intercept(org.cocos2dx.okhttp3.Interceptor.Chain r12) throws java.io.IOException {
            r11 = this;
            org.cocos2dx.okhttp3.internal.http.RealInterceptorChain r12 = (org.cocos2dx.okhttp3.internal.http.RealInterceptorChain) r12
            org.cocos2dx.okhttp3.internal.http.HttpCodec r0 = r12.httpStream()
            org.cocos2dx.okhttp3.internal.connection.StreamAllocation r1 = r12.streamAllocation()
            org.cocos2dx.okhttp3.Connection r2 = r12.connection()
            org.cocos2dx.okhttp3.internal.connection.RealConnection r2 = (org.cocos2dx.okhttp3.internal.connection.RealConnection) r2
            org.cocos2dx.okhttp3.Request r3 = r12.request()
            long r4 = java.lang.System.currentTimeMillis()
            org.cocos2dx.okhttp3.EventListener r6 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r7 = r12.call()
            r6.requestHeadersStart(r7)
            r0.writeRequestHeaders(r3)
            org.cocos2dx.okhttp3.EventListener r6 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r7 = r12.call()
            r6.requestHeadersEnd(r7, r3)
            java.lang.String r6 = r3.method()
            boolean r6 = org.cocos2dx.okhttp3.internal.http.HttpMethod.permitsRequestBody(r6)
            r7 = 0
            if (r6 == 0) goto La6
            org.cocos2dx.okhttp3.RequestBody r6 = r3.body()
            if (r6 == 0) goto La6
            java.lang.String r6 = "Expect"
            java.lang.String r6 = r3.header(r6)
            java.lang.String r8 = "100-continue"
            boolean r6 = r8.equalsIgnoreCase(r6)
            if (r6 == 0) goto L63
            r0.flushRequest()
            org.cocos2dx.okhttp3.EventListener r6 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r7 = r12.call()
            r6.responseHeadersStart(r7)
            r6 = 1
            org.cocos2dx.okhttp3.Response$Builder r7 = r0.readResponseHeaders(r6)
        L63:
            if (r7 != 0) goto L9d
            org.cocos2dx.okhttp3.EventListener r2 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r6 = r12.call()
            r2.requestBodyStart(r6)
            org.cocos2dx.okhttp3.RequestBody r2 = r3.body()
            long r8 = r2.contentLength()
            org.cocos2dx.okhttp3.internal.http.CallServerInterceptor$CountingSink r2 = new org.cocos2dx.okhttp3.internal.http.CallServerInterceptor$CountingSink
            org.cocos2dx.okio.Sink r6 = r0.createRequestBody(r3, r8)
            r2.<init>(r6)
            org.cocos2dx.okio.BufferedSink r6 = org.cocos2dx.okio.Okio.buffer(r2)
            org.cocos2dx.okhttp3.RequestBody r8 = r3.body()
            r8.writeTo(r6)
            r6.close()
            org.cocos2dx.okhttp3.EventListener r6 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r8 = r12.call()
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
            org.cocos2dx.okhttp3.EventListener r6 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r7 = r12.call()
            r6.responseHeadersStart(r7)
            org.cocos2dx.okhttp3.Response$Builder r7 = r0.readResponseHeaders(r2)
        Lbb:
            org.cocos2dx.okhttp3.Response$Builder r6 = r7.request(r3)
            org.cocos2dx.okhttp3.internal.connection.RealConnection r7 = r1.connection()
            org.cocos2dx.okhttp3.Handshake r7 = r7.handshake()
            org.cocos2dx.okhttp3.Response$Builder r6 = r6.handshake(r7)
            org.cocos2dx.okhttp3.Response$Builder r6 = r6.sentRequestAtMillis(r4)
            long r7 = java.lang.System.currentTimeMillis()
            org.cocos2dx.okhttp3.Response$Builder r6 = r6.receivedResponseAtMillis(r7)
            org.cocos2dx.okhttp3.Response r6 = r6.build()
            int r7 = r6.code()
            r8 = 100
            if (r7 != r8) goto L10b
            org.cocos2dx.okhttp3.Response$Builder r2 = r0.readResponseHeaders(r2)
            org.cocos2dx.okhttp3.Response$Builder r2 = r2.request(r3)
            org.cocos2dx.okhttp3.internal.connection.RealConnection r3 = r1.connection()
            org.cocos2dx.okhttp3.Handshake r3 = r3.handshake()
            org.cocos2dx.okhttp3.Response$Builder r2 = r2.handshake(r3)
            org.cocos2dx.okhttp3.Response$Builder r2 = r2.sentRequestAtMillis(r4)
            long r3 = java.lang.System.currentTimeMillis()
            org.cocos2dx.okhttp3.Response$Builder r2 = r2.receivedResponseAtMillis(r3)
            org.cocos2dx.okhttp3.Response r6 = r2.build()
            int r7 = r6.code()
        L10b:
            org.cocos2dx.okhttp3.EventListener r2 = r12.eventListener()
            org.cocos2dx.okhttp3.Call r12 = r12.call()
            r2.responseHeadersEnd(r12, r6)
            boolean r12 = r11.forWebSocket
            if (r12 == 0) goto L12d
            r12 = 101(0x65, float:1.42E-43)
            if (r7 != r12) goto L12d
            org.cocos2dx.okhttp3.Response$Builder r12 = r6.newBuilder()
            org.cocos2dx.okhttp3.ResponseBody r0 = org.cocos2dx.okhttp3.internal.Util.EMPTY_RESPONSE
            org.cocos2dx.okhttp3.Response$Builder r12 = r12.body(r0)
            org.cocos2dx.okhttp3.Response r12 = r12.build()
            goto L13d
        L12d:
            org.cocos2dx.okhttp3.Response$Builder r12 = r6.newBuilder()
            org.cocos2dx.okhttp3.ResponseBody r0 = r0.openResponseBody(r6)
            org.cocos2dx.okhttp3.Response$Builder r12 = r12.body(r0)
            org.cocos2dx.okhttp3.Response r12 = r12.build()
        L13d:
            org.cocos2dx.okhttp3.Request r0 = r12.request()
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
            org.cocos2dx.okhttp3.ResponseBody r0 = r12.body()
            long r0 = r0.contentLength()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L173
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
            org.cocos2dx.okhttp3.ResponseBody r12 = r12.body()
            long r2 = r12.contentLength()
            r1.append(r2)
            java.lang.String r12 = r1.toString()
            r0.<init>(r12)
            throw r0
    }
}
