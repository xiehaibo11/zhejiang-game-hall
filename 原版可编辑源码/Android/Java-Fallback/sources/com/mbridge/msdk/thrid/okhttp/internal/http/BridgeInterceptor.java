package com.mbridge.msdk.thrid.okhttp.internal.http;

public final class BridgeInterceptor implements com.mbridge.msdk.thrid.okhttp.Interceptor {
    private final com.mbridge.msdk.thrid.okhttp.CookieJar cookieJar;

    public BridgeInterceptor(com.mbridge.msdk.thrid.okhttp.CookieJar r1) {
            r0 = this;
            r0.<init>()
            r0.cookieJar = r1
            return
    }

    private java.lang.String cookieHeader(java.util.List<com.mbridge.msdk.thrid.okhttp.Cookie> r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r6.size()
            r2 = 0
        La:
            if (r2 >= r1) goto L2f
            if (r2 <= 0) goto L13
            java.lang.String r3 = "; "
            r0.append(r3)
        L13:
            java.lang.Object r3 = r6.get(r2)
            com.mbridge.msdk.thrid.okhttp.Cookie r3 = (com.mbridge.msdk.thrid.okhttp.Cookie) r3
            java.lang.String r4 = r3.name()
            r0.append(r4)
            r4 = 61
            r0.append(r4)
            java.lang.String r3 = r3.value()
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L2f:
            java.lang.String r6 = r0.toString()
            return r6
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Response intercept(com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r11) throws java.io.IOException {
            r10 = this;
            com.mbridge.msdk.thrid.okhttp.Request r0 = r11.request()
            com.mbridge.msdk.thrid.okhttp.Request$Builder r1 = r0.newBuilder()
            com.mbridge.msdk.thrid.okhttp.RequestBody r2 = r0.body()
            java.lang.String r3 = "Content-Type"
            r4 = -1
            java.lang.String r6 = "Content-Length"
            if (r2 == 0) goto L3e
            com.mbridge.msdk.thrid.okhttp.MediaType r7 = r2.contentType()
            if (r7 == 0) goto L21
            java.lang.String r7 = r7.toString()
            r1.header(r3, r7)
        L21:
            long r7 = r2.contentLength()
            int r2 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            java.lang.String r9 = "Transfer-Encoding"
            if (r2 == 0) goto L36
            java.lang.String r2 = java.lang.Long.toString(r7)
            r1.header(r6, r2)
            r1.removeHeader(r9)
            goto L3e
        L36:
            java.lang.String r2 = "chunked"
            r1.header(r9, r2)
            r1.removeHeader(r6)
        L3e:
            java.lang.String r2 = "Host"
            java.lang.String r7 = r0.header(r2)
            r8 = 0
            if (r7 != 0) goto L52
            com.mbridge.msdk.thrid.okhttp.HttpUrl r7 = r0.url()
            java.lang.String r7 = com.mbridge.msdk.thrid.okhttp.internal.Util.hostHeader(r7, r8)
            r1.header(r2, r7)
        L52:
            java.lang.String r2 = "Connection"
            java.lang.String r7 = r0.header(r2)
            if (r7 != 0) goto L5f
            java.lang.String r7 = "Keep-Alive"
            r1.header(r2, r7)
        L5f:
            java.lang.String r2 = "Accept-Encoding"
            java.lang.String r7 = r0.header(r2)
            java.lang.String r9 = "gzip"
            if (r7 != 0) goto L75
            java.lang.String r7 = "Range"
            java.lang.String r7 = r0.header(r7)
            if (r7 != 0) goto L75
            r8 = 1
            r1.header(r2, r9)
        L75:
            com.mbridge.msdk.thrid.okhttp.CookieJar r2 = r10.cookieJar
            com.mbridge.msdk.thrid.okhttp.HttpUrl r7 = r0.url()
            java.util.List r2 = r2.loadForRequest(r7)
            boolean r7 = r2.isEmpty()
            if (r7 != 0) goto L8e
            java.lang.String r2 = r10.cookieHeader(r2)
            java.lang.String r7 = "Cookie"
            r1.header(r7, r2)
        L8e:
            java.lang.String r2 = "User-Agent"
            java.lang.String r7 = r0.header(r2)
            if (r7 != 0) goto L9d
            java.lang.String r7 = com.mbridge.msdk.thrid.okhttp.internal.Version.userAgent()
            r1.header(r2, r7)
        L9d:
            com.mbridge.msdk.thrid.okhttp.Request r1 = r1.build()
            com.mbridge.msdk.thrid.okhttp.Response r11 = r11.proceed(r1)
            com.mbridge.msdk.thrid.okhttp.CookieJar r1 = r10.cookieJar
            com.mbridge.msdk.thrid.okhttp.HttpUrl r2 = r0.url()
            com.mbridge.msdk.thrid.okhttp.Headers r7 = r11.headers()
            com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.receiveHeaders(r1, r2, r7)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r11.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r1.request(r0)
            if (r8 == 0) goto L102
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r2 = r11.header(r1)
            boolean r2 = r9.equalsIgnoreCase(r2)
            if (r2 == 0) goto L102
            boolean r2 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.hasBody(r11)
            if (r2 == 0) goto L102
            com.mbridge.msdk.thrid.okio.GzipSource r2 = new com.mbridge.msdk.thrid.okio.GzipSource
            com.mbridge.msdk.thrid.okhttp.ResponseBody r7 = r11.body()
            com.mbridge.msdk.thrid.okio.BufferedSource r7 = r7.source()
            r2.<init>(r7)
            com.mbridge.msdk.thrid.okhttp.Headers r7 = r11.headers()
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r7 = r7.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r1 = r7.removeAll(r1)
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r1 = r1.removeAll(r6)
            com.mbridge.msdk.thrid.okhttp.Headers r1 = r1.build()
            r0.headers(r1)
            java.lang.String r11 = r11.header(r3)
            com.mbridge.msdk.thrid.okhttp.internal.http.RealResponseBody r1 = new com.mbridge.msdk.thrid.okhttp.internal.http.RealResponseBody
            com.mbridge.msdk.thrid.okio.BufferedSource r2 = com.mbridge.msdk.thrid.okio.Okio.buffer(r2)
            r1.<init>(r11, r4, r2)
            r0.body(r1)
        L102:
            com.mbridge.msdk.thrid.okhttp.Response r11 = r0.build()
            return r11
    }
}
