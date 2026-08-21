package com.mbridge.msdk.thrid.okhttp.internal.http;

public final class RetryAndFollowUpInterceptor implements com.mbridge.msdk.thrid.okhttp.Interceptor {
    private static final int MAX_FOLLOW_UPS = 20;
    private java.lang.Object callStackTrace;
    private volatile boolean canceled;
    private final com.mbridge.msdk.thrid.okhttp.OkHttpClient client;
    private final boolean forWebSocket;
    private volatile com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation streamAllocation;

    public RetryAndFollowUpInterceptor(com.mbridge.msdk.thrid.okhttp.OkHttpClient r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.client = r1
            r0.forWebSocket = r2
            return
    }

    private com.mbridge.msdk.thrid.okhttp.Address createAddress(com.mbridge.msdk.thrid.okhttp.HttpUrl r18) {
            r17 = this;
            r0 = r17
            boolean r1 = r18.isHttps()
            r2 = 0
            if (r1 == 0) goto L1f
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r0.client
            javax.net.ssl.SSLSocketFactory r2 = r1.sslSocketFactory()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r0.client
            javax.net.ssl.HostnameVerifier r1 = r1.hostnameVerifier()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r3 = r0.client
            com.mbridge.msdk.thrid.okhttp.CertificatePinner r3 = r3.certificatePinner()
            r10 = r1
            r9 = r2
            r11 = r3
            goto L22
        L1f:
            r9 = r2
            r10 = r9
            r11 = r10
        L22:
            com.mbridge.msdk.thrid.okhttp.Address r1 = new com.mbridge.msdk.thrid.okhttp.Address
            java.lang.String r5 = r18.host()
            int r6 = r18.port()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            com.mbridge.msdk.thrid.okhttp.Dns r7 = r2.dns()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            javax.net.SocketFactory r8 = r2.socketFactory()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            com.mbridge.msdk.thrid.okhttp.Authenticator r12 = r2.proxyAuthenticator()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            java.net.Proxy r13 = r2.proxy()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            java.util.List r14 = r2.protocols()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            java.util.List r15 = r2.connectionSpecs()
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r2 = r0.client
            java.net.ProxySelector r16 = r2.proxySelector()
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            return r1
    }

    private com.mbridge.msdk.thrid.okhttp.Request followUpRequest(com.mbridge.msdk.thrid.okhttp.Response r7, com.mbridge.msdk.thrid.okhttp.Route r8) throws java.io.IOException {
            r6 = this;
            if (r7 == 0) goto L148
            int r0 = r7.code()
            com.mbridge.msdk.thrid.okhttp.Request r1 = r7.request()
            java.lang.String r1 = r1.method()
            r2 = 307(0x133, float:4.3E-43)
            java.lang.String r3 = "GET"
            r4 = 0
            if (r0 == r2) goto Lab
            r2 = 308(0x134, float:4.32E-43)
            if (r0 == r2) goto Lab
            r2 = 401(0x191, float:5.62E-43)
            if (r0 == r2) goto La0
            r2 = 503(0x1f7, float:7.05E-43)
            if (r0 == r2) goto L80
            r2 = 407(0x197, float:5.7E-43)
            if (r0 == r2) goto L61
            r8 = 408(0x198, float:5.72E-43)
            if (r0 == r8) goto L2d
            switch(r0) {
                case 300: goto Lba;
                case 301: goto Lba;
                case 302: goto Lba;
                case 303: goto Lba;
                default: goto L2c;
            }
        L2c:
            return r4
        L2d:
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r6.client
            boolean r0 = r0.retryOnConnectionFailure()
            if (r0 != 0) goto L36
            return r4
        L36:
            com.mbridge.msdk.thrid.okhttp.Request r0 = r7.request()
            com.mbridge.msdk.thrid.okhttp.RequestBody r0 = r0.body()
            boolean r0 = r0 instanceof com.mbridge.msdk.thrid.okhttp.internal.http.UnrepeatableRequestBody
            if (r0 == 0) goto L43
            return r4
        L43:
            com.mbridge.msdk.thrid.okhttp.Response r0 = r7.priorResponse()
            if (r0 == 0) goto L54
            com.mbridge.msdk.thrid.okhttp.Response r0 = r7.priorResponse()
            int r0 = r0.code()
            if (r0 != r8) goto L54
            return r4
        L54:
            r8 = 0
            int r8 = r6.retryAfter(r7, r8)
            if (r8 <= 0) goto L5c
            return r4
        L5c:
            com.mbridge.msdk.thrid.okhttp.Request r7 = r7.request()
            return r7
        L61:
            java.net.Proxy r0 = r8.proxy()
            java.net.Proxy$Type r0 = r0.type()
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP
            if (r0 != r1) goto L78
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r6.client
            com.mbridge.msdk.thrid.okhttp.Authenticator r0 = r0.proxyAuthenticator()
            com.mbridge.msdk.thrid.okhttp.Request r7 = r0.authenticate(r8, r7)
            return r7
        L78:
            java.net.ProtocolException r7 = new java.net.ProtocolException
            java.lang.String r8 = "Received HTTP_PROXY_AUTH (407) code while not using proxy"
            r7.<init>(r8)
            throw r7
        L80:
            com.mbridge.msdk.thrid.okhttp.Response r8 = r7.priorResponse()
            if (r8 == 0) goto L91
            com.mbridge.msdk.thrid.okhttp.Response r8 = r7.priorResponse()
            int r8 = r8.code()
            if (r8 != r2) goto L91
            return r4
        L91:
            r8 = 2147483647(0x7fffffff, float:NaN)
            int r8 = r6.retryAfter(r7, r8)
            if (r8 != 0) goto L9f
            com.mbridge.msdk.thrid.okhttp.Request r7 = r7.request()
            return r7
        L9f:
            return r4
        La0:
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r6.client
            com.mbridge.msdk.thrid.okhttp.Authenticator r0 = r0.authenticator()
            com.mbridge.msdk.thrid.okhttp.Request r7 = r0.authenticate(r8, r7)
            return r7
        Lab:
            boolean r8 = r1.equals(r3)
            if (r8 != 0) goto Lba
            java.lang.String r8 = "HEAD"
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto Lba
            return r4
        Lba:
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r8 = r6.client
            boolean r8 = r8.followRedirects()
            if (r8 != 0) goto Lc3
            return r4
        Lc3:
            java.lang.String r8 = "Location"
            java.lang.String r8 = r7.header(r8)
            if (r8 != 0) goto Lcc
            return r4
        Lcc:
            com.mbridge.msdk.thrid.okhttp.Request r0 = r7.request()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r0 = r0.url()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r8 = r0.resolve(r8)
            if (r8 != 0) goto Ldb
            return r4
        Ldb:
            java.lang.String r0 = r8.scheme()
            com.mbridge.msdk.thrid.okhttp.Request r2 = r7.request()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r2 = r2.url()
            java.lang.String r2 = r2.scheme()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto Lfa
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r6.client
            boolean r0 = r0.followSslRedirects()
            if (r0 != 0) goto Lfa
            return r4
        Lfa:
            com.mbridge.msdk.thrid.okhttp.Request r0 = r7.request()
            com.mbridge.msdk.thrid.okhttp.Request$Builder r0 = r0.newBuilder()
            boolean r2 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpMethod.permitsRequestBody(r1)
            if (r2 == 0) goto L134
            boolean r2 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpMethod.redirectsWithBody(r1)
            boolean r5 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpMethod.redirectsToGet(r1)
            if (r5 == 0) goto L116
            r0.method(r3, r4)
            goto L123
        L116:
            if (r2 == 0) goto L120
            com.mbridge.msdk.thrid.okhttp.Request r3 = r7.request()
            com.mbridge.msdk.thrid.okhttp.RequestBody r4 = r3.body()
        L120:
            r0.method(r1, r4)
        L123:
            if (r2 != 0) goto L134
            java.lang.String r1 = "Transfer-Encoding"
            r0.removeHeader(r1)
            java.lang.String r1 = "Content-Length"
            r0.removeHeader(r1)
            java.lang.String r1 = "Content-Type"
            r0.removeHeader(r1)
        L134:
            boolean r7 = r6.sameConnection(r7, r8)
            if (r7 != 0) goto L13f
            java.lang.String r7 = "Authorization"
            r0.removeHeader(r7)
        L13f:
            com.mbridge.msdk.thrid.okhttp.Request$Builder r7 = r0.url(r8)
            com.mbridge.msdk.thrid.okhttp.Request r7 = r7.build()
            return r7
        L148:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            r7.<init>()
            throw r7
    }

    private boolean isRecoverable(java.io.IOException r4, boolean r5) {
            r3 = this;
            boolean r0 = r4 instanceof java.net.ProtocolException
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            boolean r0 = r4 instanceof java.io.InterruptedIOException
            r2 = 1
            if (r0 == 0) goto L13
            boolean r4 = r4 instanceof java.net.SocketTimeoutException
            if (r4 == 0) goto L12
            if (r5 != 0) goto L12
            r1 = r2
        L12:
            return r1
        L13:
            boolean r5 = r4 instanceof javax.net.ssl.SSLHandshakeException
            if (r5 == 0) goto L20
            java.lang.Throwable r5 = r4.getCause()
            boolean r5 = r5 instanceof java.security.cert.CertificateException
            if (r5 == 0) goto L20
            return r1
        L20:
            boolean r4 = r4 instanceof javax.net.ssl.SSLPeerUnverifiedException
            if (r4 == 0) goto L25
            return r1
        L25:
            return r2
    }

    private boolean recover(java.io.IOException r3, com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r4, boolean r5, com.mbridge.msdk.thrid.okhttp.Request r6) {
            r2 = this;
            r4.streamFailed(r3)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r2.client
            boolean r0 = r0.retryOnConnectionFailure()
            r1 = 0
            if (r0 != 0) goto Ld
            return r1
        Ld:
            if (r5 == 0) goto L16
            boolean r6 = r2.requestIsUnrepeatable(r3, r6)
            if (r6 == 0) goto L16
            return r1
        L16:
            boolean r3 = r2.isRecoverable(r3, r5)
            if (r3 != 0) goto L1d
            return r1
        L1d:
            boolean r3 = r4.hasMoreRoutes()
            if (r3 != 0) goto L24
            return r1
        L24:
            r3 = 1
            return r3
    }

    private boolean requestIsUnrepeatable(java.io.IOException r1, com.mbridge.msdk.thrid.okhttp.Request r2) {
            r0 = this;
            com.mbridge.msdk.thrid.okhttp.RequestBody r2 = r2.body()
            boolean r2 = r2 instanceof com.mbridge.msdk.thrid.okhttp.internal.http.UnrepeatableRequestBody
            if (r2 != 0) goto Lf
            boolean r1 = r1 instanceof java.io.FileNotFoundException
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            goto L10
        Lf:
            r1 = 1
        L10:
            return r1
    }

    private int retryAfter(com.mbridge.msdk.thrid.okhttp.Response r2, int r3) {
            r1 = this;
            java.lang.String r0 = "Retry-After"
            java.lang.String r2 = r2.header(r0)
            if (r2 != 0) goto L9
            return r3
        L9:
            java.lang.String r3 = "\\d+"
            boolean r3 = r2.matches(r3)
            if (r3 == 0) goto L1a
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r2 = r2.intValue()
            return r2
        L1a:
            r2 = 2147483647(0x7fffffff, float:NaN)
            return r2
    }

    private boolean sameConnection(com.mbridge.msdk.thrid.okhttp.Response r3, com.mbridge.msdk.thrid.okhttp.HttpUrl r4) {
            r2 = this;
            com.mbridge.msdk.thrid.okhttp.Request r3 = r3.request()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r3 = r3.url()
            java.lang.String r0 = r3.host()
            java.lang.String r1 = r4.host()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L30
            int r0 = r3.port()
            int r1 = r4.port()
            if (r0 != r1) goto L30
            java.lang.String r3 = r3.scheme()
            java.lang.String r4 = r4.scheme()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L30
            r3 = 1
            goto L31
        L30:
            r3 = 0
        L31:
            return r3
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.canceled = r0
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r0 = r1.streamAllocation
            if (r0 == 0) goto La
            r0.cancel()
        La:
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Response intercept(com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r15) throws java.io.IOException {
            r14 = this;
            com.mbridge.msdk.thrid.okhttp.Request r0 = r15.request()
            com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain r15 = (com.mbridge.msdk.thrid.okhttp.internal.http.RealInterceptorChain) r15
            com.mbridge.msdk.thrid.okhttp.Call r7 = r15.call()
            com.mbridge.msdk.thrid.okhttp.EventListener r8 = r15.eventListener()
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r9 = new com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r14.client
            com.mbridge.msdk.thrid.okhttp.ConnectionPool r2 = r1.connectionPool()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r0.url()
            com.mbridge.msdk.thrid.okhttp.Address r3 = r14.createAddress(r1)
            java.lang.Object r6 = r14.callStackTrace
            r1 = r9
            r4 = r7
            r5 = r8
            r1.<init>(r2, r3, r4, r5, r6)
            r14.streamAllocation = r9
            r10 = 0
            r11 = 0
            r2 = r10
            r1 = r11
        L2c:
            boolean r3 = r14.canceled
            if (r3 != 0) goto L119
            com.mbridge.msdk.thrid.okhttp.Response r0 = r15.proceed(r0, r9, r11, r11)     // Catch: java.lang.Throwable -> Led java.io.IOException -> Lef com.mbridge.msdk.thrid.okhttp.internal.connection.RouteException -> L100
            if (r1 == 0) goto L4e
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.body(r11)
            com.mbridge.msdk.thrid.okhttp.Response r1 = r1.build()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.priorResponse(r1)
            com.mbridge.msdk.thrid.okhttp.Response r0 = r0.build()
        L4e:
            com.mbridge.msdk.thrid.okhttp.Route r1 = r9.route()     // Catch: java.io.IOException -> Le8
            com.mbridge.msdk.thrid.okhttp.Request r12 = r14.followUpRequest(r0, r1)     // Catch: java.io.IOException -> Le8
            if (r12 != 0) goto L5c
            r9.release()
            return r0
        L5c:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r1 = r0.body()
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
            int r13 = r2 + 1
            r1 = 20
            if (r13 > r1) goto Lce
            com.mbridge.msdk.thrid.okhttp.RequestBody r1 = r12.body()
            boolean r1 = r1 instanceof com.mbridge.msdk.thrid.okhttp.internal.http.UnrepeatableRequestBody
            if (r1 != 0) goto Lbf
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r12.url()
            boolean r1 = r14.sameConnection(r0, r1)
            if (r1 != 0) goto L99
            r9.release()
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r9 = new com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r1 = r14.client
            com.mbridge.msdk.thrid.okhttp.ConnectionPool r2 = r1.connectionPool()
            com.mbridge.msdk.thrid.okhttp.HttpUrl r1 = r12.url()
            com.mbridge.msdk.thrid.okhttp.Address r3 = r14.createAddress(r1)
            java.lang.Object r6 = r14.callStackTrace
            r1 = r9
            r4 = r7
            r5 = r8
            r1.<init>(r2, r3, r4, r5, r6)
            r14.streamAllocation = r9
            goto L9f
        L99:
            com.mbridge.msdk.thrid.okhttp.internal.http.HttpCodec r1 = r9.codec()
            if (r1 != 0) goto La3
        L9f:
            r1 = r0
            r0 = r12
            r2 = r13
            goto L2c
        La3:
            java.lang.IllegalStateException r15 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Closing the body of "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = " didn't close its backing stream. Bad interceptor?"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r15.<init>(r0)
            throw r15
        Lbf:
            r9.release()
            java.net.HttpRetryException r15 = new java.net.HttpRetryException
            int r0 = r0.code()
            java.lang.String r1 = "Cannot retry streamed HTTP body"
            r15.<init>(r1, r0)
            throw r15
        Lce:
            r9.release()
            java.net.ProtocolException r15 = new java.net.ProtocolException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Too many follow-up requests: "
            r0.append(r1)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            r15.<init>(r0)
            throw r15
        Le8:
            r15 = move-exception
            r9.release()
            throw r15
        Led:
            r15 = move-exception
            goto L112
        Lef:
            r3 = move-exception
            boolean r4 = r3 instanceof com.mbridge.msdk.thrid.okhttp.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> Led
            if (r4 != 0) goto Lf6
            r4 = 1
            goto Lf7
        Lf6:
            r4 = r10
        Lf7:
            boolean r4 = r14.recover(r3, r9, r4, r0)     // Catch: java.lang.Throwable -> Led
            if (r4 == 0) goto Lff
            goto L2c
        Lff:
            throw r3     // Catch: java.lang.Throwable -> Led
        L100:
            r3 = move-exception
            java.io.IOException r4 = r3.getLastConnectException()     // Catch: java.lang.Throwable -> Led
            boolean r4 = r14.recover(r4, r9, r10, r0)     // Catch: java.lang.Throwable -> Led
            if (r4 == 0) goto L10d
            goto L2c
        L10d:
            java.io.IOException r15 = r3.getFirstConnectException()     // Catch: java.lang.Throwable -> Led
            throw r15     // Catch: java.lang.Throwable -> Led
        L112:
            r9.streamFailed(r11)
            r9.release()
            throw r15
        L119:
            r9.release()
            java.io.IOException r15 = new java.io.IOException
            java.lang.String r0 = "Canceled"
            r15.<init>(r0)
            throw r15
    }

    public boolean isCanceled() {
            r1 = this;
            boolean r0 = r1.canceled
            return r0
    }

    public void setCallStackTrace(java.lang.Object r1) {
            r0 = this;
            r0.callStackTrace = r1
            return
    }

    public com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation streamAllocation() {
            r1 = this;
            com.mbridge.msdk.thrid.okhttp.internal.connection.StreamAllocation r0 = r1.streamAllocation
            return r0
    }
}
