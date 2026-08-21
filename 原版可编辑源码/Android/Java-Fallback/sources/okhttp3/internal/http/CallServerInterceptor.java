package okhttp3.internal.http;

@kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0010\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lokhttp3/internal/http/CallServerInterceptor;", "Lokhttp3/Interceptor;", "forWebSocket", "", "(Z)V", "intercept", "Lokhttp3/Response;", "chain", "Lokhttp3/Interceptor$Chain;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class CallServerInterceptor implements okhttp3.Interceptor {
    private final boolean forWebSocket;

    static final class CountingSink extends okio.ForwardingSink {
        long successfulCount;

        CountingSink(okio.Sink r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void write(okio.Buffer r3, long r4) throws java.io.IOException {
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
    public okhttp3.Response intercept(okhttp3.Interceptor.Chain r12) throws java.io.IOException {
            r11 = this;
            java.lang.String r0 = "chain"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            okhttp3.internal.http.RealInterceptorChain r12 = (okhttp3.internal.http.RealInterceptorChain) r12
            okhttp3.internal.connection.Exchange r0 = r12.getExchange$okhttp()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okhttp3.Request r12 = r12.getRequest$okhttp()
            okhttp3.RequestBody r1 = r12.body()
            long r2 = java.lang.System.currentTimeMillis()
            r0.writeRequestHeaders(r12)
            java.lang.String r4 = r12.method()
            boolean r4 = okhttp3.internal.http.HttpMethod.permitsRequestBody(r4)
            r5 = 0
            r6 = 0
            r7 = 1
            if (r4 == 0) goto L7f
            if (r1 == 0) goto L7f
            java.lang.String r4 = "Expect"
            java.lang.String r4 = r12.header(r4)
            java.lang.String r8 = "100-continue"
            boolean r4 = kotlin.text.StringsKt.equals(r8, r4, r7)
            if (r4 == 0) goto L46
            r0.flushRequest()
            okhttp3.Response$Builder r4 = r0.readResponseHeaders(r7)
            r0.responseHeadersStart()
            r8 = r6
            goto L48
        L46:
            r4 = r5
            r8 = r7
        L48:
            if (r4 != 0) goto L6e
            boolean r9 = r1.isDuplex()
            if (r9 == 0) goto L5f
            r0.flushRequest()
            okio.Sink r9 = r0.createRequestBody(r12, r7)
            okio.BufferedSink r9 = okio.Okio.buffer(r9)
            r1.writeTo(r9)
            goto L84
        L5f:
            okio.Sink r9 = r0.createRequestBody(r12, r6)
            okio.BufferedSink r9 = okio.Okio.buffer(r9)
            r1.writeTo(r9)
            r9.close()
            goto L84
        L6e:
            r0.noRequestBody()
            okhttp3.internal.connection.RealConnection r9 = r0.getConnection$okhttp()
            boolean r9 = r9.isMultiplexed$okhttp()
            if (r9 != 0) goto L84
            r0.noNewExchangesOnConnection()
            goto L84
        L7f:
            r0.noRequestBody()
            r4 = r5
            r8 = r7
        L84:
            if (r1 == 0) goto L8c
            boolean r1 = r1.isDuplex()
            if (r1 != 0) goto L8f
        L8c:
            r0.finishRequest()
        L8f:
            if (r4 != 0) goto L9e
            okhttp3.Response$Builder r4 = r0.readResponseHeaders(r6)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            if (r8 == 0) goto L9e
            r0.responseHeadersStart()
            r8 = r6
        L9e:
            okhttp3.Response$Builder r1 = r4.request(r12)
            okhttp3.internal.connection.RealConnection r4 = r0.getConnection$okhttp()
            okhttp3.Handshake r4 = r4.handshake()
            okhttp3.Response$Builder r1 = r1.handshake(r4)
            okhttp3.Response$Builder r1 = r1.sentRequestAtMillis(r2)
            long r9 = java.lang.System.currentTimeMillis()
            okhttp3.Response$Builder r1 = r1.receivedResponseAtMillis(r9)
            okhttp3.Response r1 = r1.build()
            int r4 = r1.code()
            r9 = 100
            if (r4 != r9) goto Lf6
            okhttp3.Response$Builder r1 = r0.readResponseHeaders(r6)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            if (r8 == 0) goto Ld2
            r0.responseHeadersStart()
        Ld2:
            okhttp3.Response$Builder r12 = r1.request(r12)
            okhttp3.internal.connection.RealConnection r1 = r0.getConnection$okhttp()
            okhttp3.Handshake r1 = r1.handshake()
            okhttp3.Response$Builder r12 = r12.handshake(r1)
            okhttp3.Response$Builder r12 = r12.sentRequestAtMillis(r2)
            long r1 = java.lang.System.currentTimeMillis()
            okhttp3.Response$Builder r12 = r12.receivedResponseAtMillis(r1)
            okhttp3.Response r1 = r12.build()
            int r4 = r1.code()
        Lf6:
            r0.responseHeadersEnd(r1)
            boolean r12 = r11.forWebSocket
            if (r12 == 0) goto L110
            r12 = 101(0x65, float:1.42E-43)
            if (r4 != r12) goto L110
            okhttp3.Response$Builder r12 = r1.newBuilder()
            okhttp3.ResponseBody r1 = okhttp3.internal.Util.EMPTY_RESPONSE
            okhttp3.Response$Builder r12 = r12.body(r1)
            okhttp3.Response r12 = r12.build()
            goto L120
        L110:
            okhttp3.Response$Builder r12 = r1.newBuilder()
            okhttp3.ResponseBody r1 = r0.openResponseBody(r1)
            okhttp3.Response$Builder r12 = r12.body(r1)
            okhttp3.Response r12 = r12.build()
        L120:
            okhttp3.Request r1 = r12.request()
            java.lang.String r2 = "Connection"
            java.lang.String r1 = r1.header(r2)
            java.lang.String r3 = "close"
            boolean r1 = kotlin.text.StringsKt.equals(r3, r1, r7)
            if (r1 != 0) goto L13d
            r1 = 2
            java.lang.String r1 = okhttp3.Response.header$default(r12, r2, r5, r1, r5)
            boolean r1 = kotlin.text.StringsKt.equals(r3, r1, r7)
            if (r1 == 0) goto L140
        L13d:
            r0.noNewExchangesOnConnection()
        L140:
            r0 = 204(0xcc, float:2.86E-43)
            if (r4 == r0) goto L148
            r0 = 205(0xcd, float:2.87E-43)
            if (r4 != r0) goto L189
        L148:
            okhttp3.ResponseBody r0 = r12.body()
            if (r0 != 0) goto L151
            r0 = -1
            goto L155
        L151:
            long r0 = r0.contentLength()
        L155:
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L189
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "HTTP "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " had non-zero Content-Length: "
            r1.append(r2)
            okhttp3.ResponseBody r12 = r12.body()
            if (r12 != 0) goto L176
            goto L17e
        L176:
            long r2 = r12.contentLength()
            java.lang.Long r5 = java.lang.Long.valueOf(r2)
        L17e:
            r1.append(r5)
            java.lang.String r12 = r1.toString()
            r0.<init>(r12)
            throw r0
        L189:
            return r12
    }
}
