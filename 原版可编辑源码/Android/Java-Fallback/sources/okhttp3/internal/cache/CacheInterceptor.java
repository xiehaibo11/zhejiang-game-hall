package okhttp3.internal.cache;

@kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u000f2\u00020\u0001:\u0001\u000fB\u000f\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0002\u0010\u0004J\u001a\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\n2\u0006\u0010\u000b\u001a\u00020\bH\u0002J\u0010\u0010\f\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u000eH\u0016R\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0010"}, d2 = {"Lokhttp3/internal/cache/CacheInterceptor;", "Lokhttp3/Interceptor;", "cache", "Lokhttp3/Cache;", "(Lokhttp3/Cache;)V", "getCache$okhttp", "()Lokhttp3/Cache;", "cacheWritingResponse", "Lokhttp3/Response;", "cacheRequest", "Lokhttp3/internal/cache/CacheRequest;", "response", "intercept", "chain", "Lokhttp3/Interceptor$Chain;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class CacheInterceptor implements okhttp3.Interceptor {
    public static final okhttp3.internal.cache.CacheInterceptor.Companion Companion = null;
    private final okhttp3.Cache cache;

    class 1 implements okio.Source {
        boolean cacheRequestClosed;
        final okhttp3.internal.cache.CacheInterceptor this$0;
        final okio.BufferedSink val$cacheBody;
        final okhttp3.internal.cache.CacheRequest val$cacheRequest;
        final okio.BufferedSource val$source;

        1(okhttp3.internal.cache.CacheInterceptor r1, okio.BufferedSource r2, okhttp3.internal.cache.CacheRequest r3, okio.BufferedSink r4) {
                r0 = this;
                r0.this$0 = r1
                r0.val$source = r2
                r0.val$cacheRequest = r3
                r0.val$cacheBody = r4
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.cacheRequestClosed
                if (r0 != 0) goto L16
                r0 = 100
                java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
                boolean r0 = okhttp3.internal.Util.discard(r2, r0, r1)
                if (r0 != 0) goto L16
                r0 = 1
                r2.cacheRequestClosed = r0
                okhttp3.internal.cache.CacheRequest r0 = r2.val$cacheRequest
                r0.abort()
            L16:
                okio.BufferedSource r0 = r2.val$source
                r0.close()
                return
        }

        @Override
        public long read(okio.Buffer r9, long r10) throws java.io.IOException {
                r8 = this;
                r0 = 1
                okio.BufferedSource r1 = r8.val$source     // Catch: java.io.IOException -> L30
                long r10 = r1.read(r9, r10)     // Catch: java.io.IOException -> L30
                r1 = -1
                int r3 = (r10 > r1 ? 1 : (r10 == r1 ? 0 : -1))
                if (r3 != 0) goto L19
                boolean r9 = r8.cacheRequestClosed
                if (r9 != 0) goto L18
                r8.cacheRequestClosed = r0
                okio.BufferedSink r9 = r8.val$cacheBody
                r9.close()
            L18:
                return r1
            L19:
                okio.BufferedSink r0 = r8.val$cacheBody
                okio.Buffer r3 = r0.buffer()
                long r0 = r9.size()
                long r4 = r0 - r10
                r2 = r9
                r6 = r10
                r2.copyTo(r3, r4, r6)
                okio.BufferedSink r9 = r8.val$cacheBody
                r9.emitCompleteSegments()
                return r10
            L30:
                r9 = move-exception
                boolean r10 = r8.cacheRequestClosed
                if (r10 != 0) goto L3c
                r8.cacheRequestClosed = r0
                okhttp3.internal.cache.CacheRequest r10 = r8.val$cacheRequest
                r10.abort()
            L3c:
                throw r9
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.BufferedSource r0 = r1.val$source
                okio.Timeout r0 = r0.timeout()
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0006\u001a\u00020\u0004H\u0002J\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0002J\u0010\u0010\u000b\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0002J\u0014\u0010\f\u001a\u0004\u0018\u00010\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\rH\u0002¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/cache/CacheInterceptor$Companion;", "", "()V", "combine", "Lokhttp3/Headers;", "cachedHeaders", "networkHeaders", "isContentSpecificHeader", "", "fieldName", "", "isEndToEnd", "stripBody", "Lokhttp3/Response;", "response", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public static final okhttp3.Headers access$combine(okhttp3.internal.cache.CacheInterceptor.Companion r0, okhttp3.Headers r1, okhttp3.Headers r2) {
                okhttp3.Headers r0 = r0.combine(r1, r2)
                return r0
        }

        public static final okhttp3.Response access$stripBody(okhttp3.internal.cache.CacheInterceptor.Companion r0, okhttp3.Response r1) {
                okhttp3.Response r0 = r0.stripBody(r1)
                return r0
        }

        private final okhttp3.Headers combine(okhttp3.Headers r10, okhttp3.Headers r11) {
                r9 = this;
                okhttp3.Headers$Builder r0 = new okhttp3.Headers$Builder
                r0.<init>()
                int r1 = r10.size()
                r2 = 0
                r3 = r2
            Lb:
                if (r3 >= r1) goto L42
                int r4 = r3 + 1
                java.lang.String r5 = r10.name(r3)
                java.lang.String r3 = r10.value(r3)
                r6 = 1
                java.lang.String r7 = "Warning"
                boolean r6 = kotlin.text.StringsKt.equals(r7, r5, r6)
                if (r6 == 0) goto L2b
                r6 = 2
                r7 = 0
                java.lang.String r8 = "1"
                boolean r6 = kotlin.text.StringsKt.startsWith$default(r3, r8, r2, r6, r7)
                if (r6 == 0) goto L2b
                goto L40
            L2b:
                boolean r6 = r9.isContentSpecificHeader(r5)
                if (r6 != 0) goto L3d
                boolean r6 = r9.isEndToEnd(r5)
                if (r6 == 0) goto L3d
                java.lang.String r6 = r11.get(r5)
                if (r6 != 0) goto L40
            L3d:
                r0.addLenient$okhttp(r5, r3)
            L40:
                r3 = r4
                goto Lb
            L42:
                int r10 = r11.size()
            L46:
                if (r2 >= r10) goto L63
                int r1 = r2 + 1
                java.lang.String r3 = r11.name(r2)
                boolean r4 = r9.isContentSpecificHeader(r3)
                if (r4 != 0) goto L61
                boolean r4 = r9.isEndToEnd(r3)
                if (r4 == 0) goto L61
                java.lang.String r2 = r11.value(r2)
                r0.addLenient$okhttp(r3, r2)
            L61:
                r2 = r1
                goto L46
            L63:
                okhttp3.Headers r10 = r0.build()
                return r10
        }

        private final boolean isContentSpecificHeader(java.lang.String r3) {
                r2 = this;
                r0 = 1
                java.lang.String r1 = "Content-Length"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L1b
                java.lang.String r1 = "Content-Encoding"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L1b
                java.lang.String r1 = "Content-Type"
                boolean r3 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r3 == 0) goto L1a
                goto L1b
            L1a:
                r0 = 0
            L1b:
                return r0
        }

        private final boolean isEndToEnd(java.lang.String r3) {
                r2 = this;
                r0 = 1
                java.lang.String r1 = "Connection"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "Keep-Alive"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "Proxy-Authenticate"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "Proxy-Authorization"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "TE"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "Trailers"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "Transfer-Encoding"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r1 != 0) goto L42
                java.lang.String r1 = "Upgrade"
                boolean r3 = kotlin.text.StringsKt.equals(r1, r3, r0)
                if (r3 != 0) goto L42
                goto L43
            L42:
                r0 = 0
            L43:
                return r0
        }

        private final okhttp3.Response stripBody(okhttp3.Response r3) {
                r2 = this;
                r0 = 0
                if (r3 != 0) goto L5
                r1 = r0
                goto L9
            L5:
                okhttp3.ResponseBody r1 = r3.body()
            L9:
                if (r1 == 0) goto L17
                okhttp3.Response$Builder r3 = r3.newBuilder()
                okhttp3.Response$Builder r3 = r3.body(r0)
                okhttp3.Response r3 = r3.build()
            L17:
                return r3
        }
    }

    static {
            okhttp3.internal.cache.CacheInterceptor$Companion r0 = new okhttp3.internal.cache.CacheInterceptor$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.cache.CacheInterceptor.Companion = r0
            return
    }

    public CacheInterceptor(okhttp3.Cache r1) {
            r0 = this;
            r0.<init>()
            r0.cache = r1
            return
    }

    private final okhttp3.Response cacheWritingResponse(okhttp3.internal.cache.CacheRequest r5, okhttp3.Response r6) throws java.io.IOException {
            r4 = this;
            if (r5 != 0) goto L3
            return r6
        L3:
            okio.Sink r0 = r5.body()
            okhttp3.ResponseBody r1 = r6.body()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okio.BufferedSource r1 = r1.source()
            okio.BufferedSink r0 = okio.Okio.buffer(r0)
            okhttp3.internal.cache.CacheInterceptor$cacheWritingResponse$cacheWritingSource$1 r2 = new okhttp3.internal.cache.CacheInterceptor$cacheWritingResponse$cacheWritingSource$1
            r2.<init>(r1, r5, r0)
            r5 = 2
            r0 = 0
            java.lang.String r1 = "Content-Type"
            java.lang.String r5 = okhttp3.Response.header$default(r6, r1, r0, r5, r0)
            okhttp3.ResponseBody r0 = r6.body()
            long r0 = r0.contentLength()
            okhttp3.Response$Builder r6 = r6.newBuilder()
            okhttp3.internal.http.RealResponseBody r3 = new okhttp3.internal.http.RealResponseBody
            okio.Source r2 = (okio.Source) r2
            okio.BufferedSource r2 = okio.Okio.buffer(r2)
            r3.<init>(r5, r0, r2)
            okhttp3.ResponseBody r3 = (okhttp3.ResponseBody) r3
            okhttp3.Response$Builder r5 = r6.body(r3)
            okhttp3.Response r5 = r5.build()
            return r5
    }

    public final okhttp3.Cache getCache$okhttp() {
            r1 = this;
            okhttp3.Cache r0 = r1.cache
            return r0
    }

    @Override
    public okhttp3.Response intercept(okhttp3.Interceptor.Chain r8) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "chain"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            okhttp3.Call r0 = r8.call()
            okhttp3.Cache r1 = r7.cache
            r2 = 0
            if (r1 != 0) goto L10
            r1 = r2
            goto L18
        L10:
            okhttp3.Request r3 = r8.request()
            okhttp3.Response r1 = r1.get$okhttp(r3)
        L18:
            long r3 = java.lang.System.currentTimeMillis()
            okhttp3.internal.cache.CacheStrategy$Factory r5 = new okhttp3.internal.cache.CacheStrategy$Factory
            okhttp3.Request r6 = r8.request()
            r5.<init>(r3, r6, r1)
            okhttp3.internal.cache.CacheStrategy r3 = r5.compute()
            okhttp3.Request r4 = r3.getNetworkRequest()
            okhttp3.Response r5 = r3.getCacheResponse()
            okhttp3.Cache r6 = r7.cache
            if (r6 != 0) goto L36
            goto L39
        L36:
            r6.trackResponse$okhttp(r3)
        L39:
            boolean r3 = r0 instanceof okhttp3.internal.connection.RealCall
            if (r3 == 0) goto L41
            r3 = r0
            okhttp3.internal.connection.RealCall r3 = (okhttp3.internal.connection.RealCall) r3
            goto L42
        L41:
            r3 = r2
        L42:
            if (r3 != 0) goto L45
            goto L49
        L45:
            okhttp3.EventListener r2 = r3.getEventListener$okhttp()
        L49:
            if (r2 != 0) goto L4d
            okhttp3.EventListener r2 = okhttp3.EventListener.NONE
        L4d:
            if (r1 == 0) goto L5d
            if (r5 != 0) goto L5d
            okhttp3.ResponseBody r3 = r1.body()
            if (r3 != 0) goto L58
            goto L5d
        L58:
            java.io.Closeable r3 = (java.io.Closeable) r3
            okhttp3.internal.Util.closeQuietly(r3)
        L5d:
            if (r4 != 0) goto L9c
            if (r5 != 0) goto L9c
            okhttp3.Response$Builder r1 = new okhttp3.Response$Builder
            r1.<init>()
            okhttp3.Request r8 = r8.request()
            okhttp3.Response$Builder r8 = r1.request(r8)
            okhttp3.Protocol r1 = okhttp3.Protocol.HTTP_1_1
            okhttp3.Response$Builder r8 = r8.protocol(r1)
            r1 = 504(0x1f8, float:7.06E-43)
            okhttp3.Response$Builder r8 = r8.code(r1)
            java.lang.String r1 = "Unsatisfiable Request (only-if-cached)"
            okhttp3.Response$Builder r8 = r8.message(r1)
            okhttp3.ResponseBody r1 = okhttp3.internal.Util.EMPTY_RESPONSE
            okhttp3.Response$Builder r8 = r8.body(r1)
            r3 = -1
            okhttp3.Response$Builder r8 = r8.sentRequestAtMillis(r3)
            long r3 = java.lang.System.currentTimeMillis()
            okhttp3.Response$Builder r8 = r8.receivedResponseAtMillis(r3)
            okhttp3.Response r8 = r8.build()
            r2.satisfactionFailure(r0, r8)
            return r8
        L9c:
            if (r4 != 0) goto Lb7
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            okhttp3.Response$Builder r8 = r5.newBuilder()
            okhttp3.internal.cache.CacheInterceptor$Companion r1 = okhttp3.internal.cache.CacheInterceptor.Companion
            okhttp3.Response r1 = okhttp3.internal.cache.CacheInterceptor.Companion.access$stripBody(r1, r5)
            okhttp3.Response$Builder r8 = r8.cacheResponse(r1)
            okhttp3.Response r8 = r8.build()
            r2.cacheHit(r0, r8)
            return r8
        Lb7:
            if (r5 == 0) goto Lbd
            r2.cacheConditionalHit(r0, r5)
            goto Lc4
        Lbd:
            okhttp3.Cache r3 = r7.cache
            if (r3 == 0) goto Lc4
            r2.cacheMiss(r0)
        Lc4:
            okhttp3.Response r8 = r8.proceed(r4)     // Catch: java.lang.Throwable -> L1a1
            if (r8 != 0) goto Ld8
            if (r1 == 0) goto Ld8
            okhttp3.ResponseBody r1 = r1.body()
            if (r1 != 0) goto Ld3
            goto Ld8
        Ld3:
            java.io.Closeable r1 = (java.io.Closeable) r1
            okhttp3.internal.Util.closeQuietly(r1)
        Ld8:
            if (r5 == 0) goto L14e
            r1 = 0
            if (r8 != 0) goto Lde
            goto Le7
        Lde:
            int r3 = r8.code()
            r6 = 304(0x130, float:4.26E-43)
            if (r3 != r6) goto Le7
            r1 = 1
        Le7:
            if (r1 == 0) goto L142
            okhttp3.Response$Builder r1 = r5.newBuilder()
            okhttp3.internal.cache.CacheInterceptor$Companion r3 = okhttp3.internal.cache.CacheInterceptor.Companion
            okhttp3.Headers r4 = r5.headers()
            okhttp3.Headers r6 = r8.headers()
            okhttp3.Headers r3 = okhttp3.internal.cache.CacheInterceptor.Companion.access$combine(r3, r4, r6)
            okhttp3.Response$Builder r1 = r1.headers(r3)
            long r3 = r8.sentRequestAtMillis()
            okhttp3.Response$Builder r1 = r1.sentRequestAtMillis(r3)
            long r3 = r8.receivedResponseAtMillis()
            okhttp3.Response$Builder r1 = r1.receivedResponseAtMillis(r3)
            okhttp3.internal.cache.CacheInterceptor$Companion r3 = okhttp3.internal.cache.CacheInterceptor.Companion
            okhttp3.Response r3 = okhttp3.internal.cache.CacheInterceptor.Companion.access$stripBody(r3, r5)
            okhttp3.Response$Builder r1 = r1.cacheResponse(r3)
            okhttp3.internal.cache.CacheInterceptor$Companion r3 = okhttp3.internal.cache.CacheInterceptor.Companion
            okhttp3.Response r3 = okhttp3.internal.cache.CacheInterceptor.Companion.access$stripBody(r3, r8)
            okhttp3.Response$Builder r1 = r1.networkResponse(r3)
            okhttp3.Response r1 = r1.build()
            okhttp3.ResponseBody r8 = r8.body()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r8)
            r8.close()
            okhttp3.Cache r8 = r7.cache
            kotlin.jvm.internal.Intrinsics.checkNotNull(r8)
            r8.trackConditionalCacheHit$okhttp()
            okhttp3.Cache r8 = r7.cache
            r8.update$okhttp(r5, r1)
            r2.cacheHit(r0, r1)
            return r1
        L142:
            okhttp3.ResponseBody r1 = r5.body()
            if (r1 != 0) goto L149
            goto L14e
        L149:
            java.io.Closeable r1 = (java.io.Closeable) r1
            okhttp3.internal.Util.closeQuietly(r1)
        L14e:
            kotlin.jvm.internal.Intrinsics.checkNotNull(r8)
            okhttp3.Response$Builder r1 = r8.newBuilder()
            okhttp3.internal.cache.CacheInterceptor$Companion r3 = okhttp3.internal.cache.CacheInterceptor.Companion
            okhttp3.Response r3 = okhttp3.internal.cache.CacheInterceptor.Companion.access$stripBody(r3, r5)
            okhttp3.Response$Builder r1 = r1.cacheResponse(r3)
            okhttp3.internal.cache.CacheInterceptor$Companion r3 = okhttp3.internal.cache.CacheInterceptor.Companion
            okhttp3.Response r8 = okhttp3.internal.cache.CacheInterceptor.Companion.access$stripBody(r3, r8)
            okhttp3.Response$Builder r8 = r1.networkResponse(r8)
            okhttp3.Response r8 = r8.build()
            okhttp3.Cache r1 = r7.cache
            if (r1 == 0) goto L1a0
            boolean r1 = okhttp3.internal.http.HttpHeaders.promisesBody(r8)
            if (r1 == 0) goto L18f
            okhttp3.internal.cache.CacheStrategy$Companion r1 = okhttp3.internal.cache.CacheStrategy.Companion
            boolean r1 = r1.isCacheable(r8, r4)
            if (r1 == 0) goto L18f
            okhttp3.Cache r1 = r7.cache
            okhttp3.internal.cache.CacheRequest r1 = r1.put$okhttp(r8)
            okhttp3.Response r8 = r7.cacheWritingResponse(r1, r8)
            if (r5 == 0) goto L18e
            r2.cacheMiss(r0)
        L18e:
            return r8
        L18f:
            okhttp3.internal.http.HttpMethod r0 = okhttp3.internal.http.HttpMethod.INSTANCE
            java.lang.String r1 = r4.method()
            boolean r0 = r0.invalidatesCache(r1)
            if (r0 == 0) goto L1a0
            okhttp3.Cache r0 = r7.cache     // Catch: java.io.IOException -> L1a0
            r0.remove$okhttp(r4)     // Catch: java.io.IOException -> L1a0
        L1a0:
            return r8
        L1a1:
            r8 = move-exception
            if (r1 == 0) goto L1b0
            okhttp3.ResponseBody r0 = r1.body()
            if (r0 != 0) goto L1ab
            goto L1b0
        L1ab:
            java.io.Closeable r0 = (java.io.Closeable) r0
            okhttp3.internal.Util.closeQuietly(r0)
        L1b0:
            throw r8
    }
}
