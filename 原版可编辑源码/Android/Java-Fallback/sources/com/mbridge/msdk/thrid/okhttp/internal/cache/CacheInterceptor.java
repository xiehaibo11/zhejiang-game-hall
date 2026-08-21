package com.mbridge.msdk.thrid.okhttp.internal.cache;

public final class CacheInterceptor implements com.mbridge.msdk.thrid.okhttp.Interceptor {
    final com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache cache;


    public CacheInterceptor(com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r1) {
            r0 = this;
            r0.<init>()
            r0.cache = r1
            return
    }

    private com.mbridge.msdk.thrid.okhttp.Response cacheWritingResponse(com.mbridge.msdk.thrid.okhttp.internal.cache.CacheRequest r5, com.mbridge.msdk.thrid.okhttp.Response r6) throws java.io.IOException {
            r4 = this;
            if (r5 != 0) goto L3
            return r6
        L3:
            com.mbridge.msdk.thrid.okio.Sink r0 = r5.body()
            if (r0 != 0) goto La
            return r6
        La:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r1 = r6.body()
            com.mbridge.msdk.thrid.okio.BufferedSource r1 = r1.source()
            com.mbridge.msdk.thrid.okio.BufferedSink r0 = com.mbridge.msdk.thrid.okio.Okio.buffer(r0)
            com.mbridge.msdk.thrid.okhttp.internal.cache.CacheInterceptor$1 r2 = new com.mbridge.msdk.thrid.okhttp.internal.cache.CacheInterceptor$1
            r2.<init>(r4, r1, r5, r0)
            java.lang.String r5 = "Content-Type"
            java.lang.String r5 = r6.header(r5)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r6.body()
            long r0 = r0.contentLength()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.newBuilder()
            com.mbridge.msdk.thrid.okhttp.internal.http.RealResponseBody r3 = new com.mbridge.msdk.thrid.okhttp.internal.http.RealResponseBody
            com.mbridge.msdk.thrid.okio.BufferedSource r2 = com.mbridge.msdk.thrid.okio.Okio.buffer(r2)
            r3.<init>(r5, r0, r2)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r5 = r6.body(r3)
            com.mbridge.msdk.thrid.okhttp.Response r5 = r5.build()
            return r5
    }

    private static com.mbridge.msdk.thrid.okhttp.Headers combine(com.mbridge.msdk.thrid.okhttp.Headers r7, com.mbridge.msdk.thrid.okhttp.Headers r8) {
            com.mbridge.msdk.thrid.okhttp.Headers$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Headers$Builder
            r0.<init>()
            int r1 = r7.size()
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L40
            java.lang.String r4 = r7.name(r3)
            java.lang.String r5 = r7.value(r3)
            java.lang.String r6 = "Warning"
            boolean r6 = r6.equalsIgnoreCase(r4)
            if (r6 == 0) goto L26
            java.lang.String r6 = "1"
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L26
            goto L3d
        L26:
            boolean r6 = isContentSpecificHeader(r4)
            if (r6 != 0) goto L38
            boolean r6 = isEndToEnd(r4)
            if (r6 == 0) goto L38
            java.lang.String r6 = r8.get(r4)
            if (r6 != 0) goto L3d
        L38:
            com.mbridge.msdk.thrid.okhttp.internal.Internal r6 = com.mbridge.msdk.thrid.okhttp.internal.Internal.instance
            r6.addLenient(r0, r4, r5)
        L3d:
            int r3 = r3 + 1
            goto Lb
        L40:
            int r7 = r8.size()
        L44:
            if (r2 >= r7) goto L62
            java.lang.String r1 = r8.name(r2)
            boolean r3 = isContentSpecificHeader(r1)
            if (r3 != 0) goto L5f
            boolean r3 = isEndToEnd(r1)
            if (r3 == 0) goto L5f
            com.mbridge.msdk.thrid.okhttp.internal.Internal r3 = com.mbridge.msdk.thrid.okhttp.internal.Internal.instance
            java.lang.String r4 = r8.value(r2)
            r3.addLenient(r0, r1, r4)
        L5f:
            int r2 = r2 + 1
            goto L44
        L62:
            com.mbridge.msdk.thrid.okhttp.Headers r7 = r0.build()
            return r7
    }

    static boolean isContentSpecificHeader(java.lang.String r1) {
            java.lang.String r0 = "Content-Length"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "Content-Encoding"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "Content-Type"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L19
            goto L1b
        L19:
            r1 = 0
            goto L1c
        L1b:
            r1 = 1
        L1c:
            return r1
    }

    static boolean isEndToEnd(java.lang.String r1) {
            java.lang.String r0 = "Connection"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "Keep-Alive"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "Proxy-Authenticate"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "Proxy-Authorization"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "TE"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "Trailers"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "Transfer-Encoding"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = "Upgrade"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 != 0) goto L42
            r1 = 1
            goto L43
        L42:
            r1 = 0
        L43:
            return r1
    }

    private static com.mbridge.msdk.thrid.okhttp.Response stripBody(com.mbridge.msdk.thrid.okhttp.Response r1) {
            if (r1 == 0) goto L15
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r1.body()
            if (r0 == 0) goto L15
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.newBuilder()
            r0 = 0
            com.mbridge.msdk.thrid.okhttp.Response$Builder r1 = r1.body(r0)
            com.mbridge.msdk.thrid.okhttp.Response r1 = r1.build()
        L15:
            return r1
    }

    @Override
    public com.mbridge.msdk.thrid.okhttp.Response intercept(com.mbridge.msdk.thrid.okhttp.Interceptor.Chain r6) throws java.io.IOException {
            r5 = this;
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r0 = r5.cache
            if (r0 == 0) goto Ld
            com.mbridge.msdk.thrid.okhttp.Request r1 = r6.request()
            com.mbridge.msdk.thrid.okhttp.Response r0 = r0.get(r1)
            goto Le
        Ld:
            r0 = 0
        Le:
            long r1 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.thrid.okhttp.internal.cache.CacheStrategy$Factory r3 = new com.mbridge.msdk.thrid.okhttp.internal.cache.CacheStrategy$Factory
            com.mbridge.msdk.thrid.okhttp.Request r4 = r6.request()
            r3.<init>(r1, r4, r0)
            com.mbridge.msdk.thrid.okhttp.internal.cache.CacheStrategy r1 = r3.get()
            com.mbridge.msdk.thrid.okhttp.Request r2 = r1.networkRequest
            com.mbridge.msdk.thrid.okhttp.Response r3 = r1.cacheResponse
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r4 = r5.cache
            if (r4 == 0) goto L2a
            r4.trackResponse(r1)
        L2a:
            if (r0 == 0) goto L35
            if (r3 != 0) goto L35
            com.mbridge.msdk.thrid.okhttp.ResponseBody r1 = r0.body()
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r1)
        L35:
            if (r2 != 0) goto L71
            if (r3 != 0) goto L71
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = new com.mbridge.msdk.thrid.okhttp.Response$Builder
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.Request r6 = r6.request()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r0.request(r6)
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.protocol(r0)
            r0 = 504(0x1f8, float:7.06E-43)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.code(r0)
            java.lang.String r0 = "Unsatisfiable Request (only-if-cached)"
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.message(r0)
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = com.mbridge.msdk.thrid.okhttp.internal.Util.EMPTY_RESPONSE
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.body(r0)
            r0 = -1
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.sentRequestAtMillis(r0)
            long r0 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.receivedResponseAtMillis(r0)
            com.mbridge.msdk.thrid.okhttp.Response r6 = r6.build()
            return r6
        L71:
            if (r2 != 0) goto L84
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r3.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Response r0 = stripBody(r3)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r6.cacheResponse(r0)
            com.mbridge.msdk.thrid.okhttp.Response r6 = r6.build()
            return r6
        L84:
            com.mbridge.msdk.thrid.okhttp.Response r6 = r6.proceed(r2)     // Catch: java.lang.Throwable -> L131
            if (r6 != 0) goto L93
            if (r0 == 0) goto L93
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r0.body()
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
        L93:
            if (r3 == 0) goto Lee
            int r0 = r6.code()
            r1 = 304(0x130, float:4.26E-43)
            if (r0 != r1) goto Le7
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r3.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Headers r1 = r3.headers()
            com.mbridge.msdk.thrid.okhttp.Headers r2 = r6.headers()
            com.mbridge.msdk.thrid.okhttp.Headers r1 = combine(r1, r2)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.headers(r1)
            long r1 = r6.sentRequestAtMillis()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.sentRequestAtMillis(r1)
            long r1 = r6.receivedResponseAtMillis()
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.receivedResponseAtMillis(r1)
            com.mbridge.msdk.thrid.okhttp.Response r1 = stripBody(r3)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.cacheResponse(r1)
            com.mbridge.msdk.thrid.okhttp.Response r1 = stripBody(r6)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.networkResponse(r1)
            com.mbridge.msdk.thrid.okhttp.Response r0 = r0.build()
            com.mbridge.msdk.thrid.okhttp.ResponseBody r6 = r6.body()
            r6.close()
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r6 = r5.cache
            r6.trackConditionalCacheHit()
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r6 = r5.cache
            r6.update(r3, r0)
            return r0
        Le7:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r3.body()
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
        Lee:
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r6.newBuilder()
            com.mbridge.msdk.thrid.okhttp.Response r1 = stripBody(r3)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r0 = r0.cacheResponse(r1)
            com.mbridge.msdk.thrid.okhttp.Response r6 = stripBody(r6)
            com.mbridge.msdk.thrid.okhttp.Response$Builder r6 = r0.networkResponse(r6)
            com.mbridge.msdk.thrid.okhttp.Response r6 = r6.build()
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r0 = r5.cache
            if (r0 == 0) goto L130
            boolean r0 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpHeaders.hasBody(r6)
            if (r0 == 0) goto L121
            boolean r0 = com.mbridge.msdk.thrid.okhttp.internal.cache.CacheStrategy.isCacheable(r6, r2)
            if (r0 == 0) goto L121
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r0 = r5.cache
            com.mbridge.msdk.thrid.okhttp.internal.cache.CacheRequest r0 = r0.put(r6)
            com.mbridge.msdk.thrid.okhttp.Response r6 = r5.cacheWritingResponse(r0, r6)
            return r6
        L121:
            java.lang.String r0 = r2.method()
            boolean r0 = com.mbridge.msdk.thrid.okhttp.internal.http.HttpMethod.invalidatesCache(r0)
            if (r0 == 0) goto L130
            com.mbridge.msdk.thrid.okhttp.internal.cache.InternalCache r0 = r5.cache     // Catch: java.io.IOException -> L130
            r0.remove(r2)     // Catch: java.io.IOException -> L130
        L130:
            return r6
        L131:
            r6 = move-exception
            if (r0 == 0) goto L13b
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r0.body()
            com.mbridge.msdk.thrid.okhttp.internal.Util.closeQuietly(r0)
        L13b:
            throw r6
    }
}
