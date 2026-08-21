package okhttp3.internal.cache;

@kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\u0018\u0000 \u000b2\u00020\u0001:\u0002\u000b\fB\u001b\b\u0000\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0002\u0010\u0006R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\r"}, d2 = {"Lokhttp3/internal/cache/CacheStrategy;", "", "networkRequest", "Lokhttp3/Request;", "cacheResponse", "Lokhttp3/Response;", "(Lokhttp3/Request;Lokhttp3/Response;)V", "getCacheResponse", "()Lokhttp3/Response;", "getNetworkRequest", "()Lokhttp3/Request;", "Companion", "Factory", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class CacheStrategy {
    public static final okhttp3.internal.cache.CacheStrategy.Companion Companion = null;
    private final okhttp3.Response cacheResponse;
    private final okhttp3.Request networkRequest;

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b¨\u0006\t"}, d2 = {"Lokhttp3/internal/cache/CacheStrategy$Companion;", "", "()V", "isCacheable", "", "response", "Lokhttp3/Response;", "request", "Lokhttp3/Request;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final boolean isCacheable(okhttp3.Response r5, okhttp3.Request r6) {
                r4 = this;
                java.lang.String r0 = "response"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = "request"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                int r0 = r5.code()
                r1 = 200(0xc8, float:2.8E-43)
                r2 = 0
                if (r0 == r1) goto L65
                r1 = 410(0x19a, float:5.75E-43)
                if (r0 == r1) goto L65
                r1 = 414(0x19e, float:5.8E-43)
                if (r0 == r1) goto L65
                r1 = 501(0x1f5, float:7.02E-43)
                if (r0 == r1) goto L65
                r1 = 203(0xcb, float:2.84E-43)
                if (r0 == r1) goto L65
                r1 = 204(0xcc, float:2.86E-43)
                if (r0 == r1) goto L65
                r1 = 307(0x133, float:4.3E-43)
                if (r0 == r1) goto L3b
                r1 = 308(0x134, float:4.32E-43)
                if (r0 == r1) goto L65
                r1 = 404(0x194, float:5.66E-43)
                if (r0 == r1) goto L65
                r1 = 405(0x195, float:5.68E-43)
                if (r0 == r1) goto L65
                switch(r0) {
                    case 300: goto L65;
                    case 301: goto L65;
                    case 302: goto L3b;
                    default: goto L3a;
                }
            L3a:
                return r2
            L3b:
                r0 = 2
                r1 = 0
                java.lang.String r3 = "Expires"
                java.lang.String r0 = okhttp3.Response.header$default(r5, r3, r1, r0, r1)
                if (r0 != 0) goto L65
                okhttp3.CacheControl r0 = r5.cacheControl()
                int r0 = r0.maxAgeSeconds()
                r1 = -1
                if (r0 != r1) goto L65
                okhttp3.CacheControl r0 = r5.cacheControl()
                boolean r0 = r0.isPublic()
                if (r0 != 0) goto L65
                okhttp3.CacheControl r0 = r5.cacheControl()
                boolean r0 = r0.isPrivate()
                if (r0 != 0) goto L65
                return r2
            L65:
                okhttp3.CacheControl r5 = r5.cacheControl()
                boolean r5 = r5.noStore()
                if (r5 != 0) goto L7a
                okhttp3.CacheControl r5 = r6.cacheControl()
                boolean r5 = r5.noStore()
                if (r5 != 0) goto L7a
                r2 = 1
            L7a:
                return r2
        }
    }

    @kotlin.Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0002\u0010\bJ\b\u0010\u0017\u001a\u00020\u0003H\u0002J\u0006\u0010\u0018\u001a\u00020\u0019J\b\u0010\u001a\u001a\u00020\u0019H\u0002J\b\u0010\u001b\u001a\u00020\u0003H\u0002J\u0010\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u0004\u001a\u00020\u0005H\u0002J\b\u0010\u001e\u001a\u00020\u001dH\u0002R\u000e\u0010\t\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000b\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\r\u001a\u0004\u0018\u00010\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u000e\u0010\u0014\u001a\u00020\u0003X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0015\u001a\u0004\u0018\u00010\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0016\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lokhttp3/internal/cache/CacheStrategy$Factory;", "", "nowMillis", "", "request", "Lokhttp3/Request;", "cacheResponse", "Lokhttp3/Response;", "(JLokhttp3/Request;Lokhttp3/Response;)V", "ageSeconds", "", "etag", "", "expires", "Ljava/util/Date;", "lastModified", "lastModifiedString", "receivedResponseMillis", "getRequest$okhttp", "()Lokhttp3/Request;", "sentRequestMillis", "servedDate", "servedDateString", "cacheResponseAge", "compute", "Lokhttp3/internal/cache/CacheStrategy;", "computeCandidate", "computeFreshnessLifetime", "hasConditions", "", "isFreshnessLifetimeHeuristic", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Factory {
        private int ageSeconds;
        private final okhttp3.Response cacheResponse;
        private java.lang.String etag;
        private java.util.Date expires;
        private java.util.Date lastModified;
        private java.lang.String lastModifiedString;
        private final long nowMillis;
        private long receivedResponseMillis;
        private final okhttp3.Request request;
        private long sentRequestMillis;
        private java.util.Date servedDate;
        private java.lang.String servedDateString;

        public Factory(long r5, okhttp3.Request r7, okhttp3.Response r8) {
                r4 = this;
                java.lang.String r0 = "request"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                r4.<init>()
                r4.nowMillis = r5
                r4.request = r7
                r4.cacheResponse = r8
                r5 = -1
                r4.ageSeconds = r5
                if (r8 == 0) goto L85
                long r6 = r8.sentRequestAtMillis()
                r4.sentRequestMillis = r6
                okhttp3.Response r6 = r4.cacheResponse
                long r6 = r6.receivedResponseAtMillis()
                r4.receivedResponseMillis = r6
                okhttp3.Response r6 = r4.cacheResponse
                okhttp3.Headers r6 = r6.headers()
                r7 = 0
                int r8 = r6.size()
            L2c:
                if (r7 >= r8) goto L85
                int r0 = r7 + 1
                java.lang.String r1 = r6.name(r7)
                java.lang.String r7 = r6.value(r7)
                r2 = 1
                java.lang.String r3 = "Date"
                boolean r3 = kotlin.text.StringsKt.equals(r1, r3, r2)
                if (r3 == 0) goto L4a
                java.util.Date r1 = okhttp3.internal.http.DatesKt.toHttpDateOrNull(r7)
                r4.servedDate = r1
                r4.servedDateString = r7
                goto L83
            L4a:
                java.lang.String r3 = "Expires"
                boolean r3 = kotlin.text.StringsKt.equals(r1, r3, r2)
                if (r3 == 0) goto L59
                java.util.Date r7 = okhttp3.internal.http.DatesKt.toHttpDateOrNull(r7)
                r4.expires = r7
                goto L83
            L59:
                java.lang.String r3 = "Last-Modified"
                boolean r3 = kotlin.text.StringsKt.equals(r1, r3, r2)
                if (r3 == 0) goto L6a
                java.util.Date r1 = okhttp3.internal.http.DatesKt.toHttpDateOrNull(r7)
                r4.lastModified = r1
                r4.lastModifiedString = r7
                goto L83
            L6a:
                java.lang.String r3 = "ETag"
                boolean r3 = kotlin.text.StringsKt.equals(r1, r3, r2)
                if (r3 == 0) goto L75
                r4.etag = r7
                goto L83
            L75:
                java.lang.String r3 = "Age"
                boolean r1 = kotlin.text.StringsKt.equals(r1, r3, r2)
                if (r1 == 0) goto L83
                int r7 = okhttp3.internal.Util.toNonNegativeInt(r7, r5)
                r4.ageSeconds = r7
            L83:
                r7 = r0
                goto L2c
            L85:
                return
        }

        private final long cacheResponseAge() {
                r9 = this;
                java.util.Date r0 = r9.servedDate
                r1 = 0
                if (r0 == 0) goto L11
                long r3 = r9.receivedResponseMillis
                long r5 = r0.getTime()
                long r3 = r3 - r5
                long r1 = java.lang.Math.max(r1, r3)
            L11:
                int r0 = r9.ageSeconds
                r3 = -1
                if (r0 == r3) goto L23
                java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
                int r3 = r9.ageSeconds
                long r3 = (long) r3
                long r3 = r0.toMillis(r3)
                long r1 = java.lang.Math.max(r1, r3)
            L23:
                long r3 = r9.receivedResponseMillis
                long r5 = r9.sentRequestMillis
                long r5 = r3 - r5
                long r7 = r9.nowMillis
                long r7 = r7 - r3
                long r1 = r1 + r5
                long r1 = r1 + r7
                return r1
        }

        private final okhttp3.internal.cache.CacheStrategy computeCandidate() {
                r13 = this;
                okhttp3.Response r0 = r13.cacheResponse
                r1 = 0
                if (r0 != 0) goto Ld
                okhttp3.internal.cache.CacheStrategy r0 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Request r2 = r13.request
                r0.<init>(r2, r1)
                return r0
            Ld:
                okhttp3.Request r0 = r13.request
                boolean r0 = r0.isHttps()
                if (r0 == 0) goto L25
                okhttp3.Response r0 = r13.cacheResponse
                okhttp3.Handshake r0 = r0.handshake()
                if (r0 != 0) goto L25
                okhttp3.internal.cache.CacheStrategy r0 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Request r2 = r13.request
                r0.<init>(r2, r1)
                return r0
            L25:
                okhttp3.internal.cache.CacheStrategy$Companion r0 = okhttp3.internal.cache.CacheStrategy.Companion
                okhttp3.Response r2 = r13.cacheResponse
                okhttp3.Request r3 = r13.request
                boolean r0 = r0.isCacheable(r2, r3)
                if (r0 != 0) goto L39
                okhttp3.internal.cache.CacheStrategy r0 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Request r2 = r13.request
                r0.<init>(r2, r1)
                return r0
            L39:
                okhttp3.Request r0 = r13.request
                okhttp3.CacheControl r0 = r0.cacheControl()
                boolean r2 = r0.noCache()
                if (r2 != 0) goto L120
                okhttp3.Request r2 = r13.request
                boolean r2 = r13.hasConditions(r2)
                if (r2 == 0) goto L4f
                goto L120
            L4f:
                okhttp3.Response r2 = r13.cacheResponse
                okhttp3.CacheControl r2 = r2.cacheControl()
                long r3 = r13.cacheResponseAge()
                long r5 = r13.computeFreshnessLifetime()
                int r7 = r0.maxAgeSeconds()
                r8 = -1
                if (r7 == r8) goto L73
                java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
                int r9 = r0.maxAgeSeconds()
                long r9 = (long) r9
                long r9 = r7.toMillis(r9)
                long r5 = java.lang.Math.min(r5, r9)
            L73:
                int r7 = r0.minFreshSeconds()
                r9 = 0
                if (r7 == r8) goto L87
                java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
                int r11 = r0.minFreshSeconds()
                long r11 = (long) r11
                long r11 = r7.toMillis(r11)
                goto L88
            L87:
                r11 = r9
            L88:
                boolean r7 = r2.mustRevalidate()
                if (r7 != 0) goto L9f
                int r7 = r0.maxStaleSeconds()
                if (r7 == r8) goto L9f
                java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
                int r0 = r0.maxStaleSeconds()
                long r8 = (long) r0
                long r9 = r7.toMillis(r8)
            L9f:
                boolean r0 = r2.noCache()
                if (r0 != 0) goto Ld8
                long r11 = r11 + r3
                long r9 = r9 + r5
                int r0 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
                if (r0 >= 0) goto Ld8
                okhttp3.Response r0 = r13.cacheResponse
                okhttp3.Response$Builder r0 = r0.newBuilder()
                int r2 = (r11 > r5 ? 1 : (r11 == r5 ? 0 : -1))
                java.lang.String r5 = "Warning"
                if (r2 < 0) goto Lbc
                java.lang.String r2 = "110 HttpURLConnection \"Response is stale\""
                r0.addHeader(r5, r2)
            Lbc:
                r6 = 86400000(0x5265c00, double:4.2687272E-316)
                int r2 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
                if (r2 <= 0) goto Lce
                boolean r2 = r13.isFreshnessLifetimeHeuristic()
                if (r2 == 0) goto Lce
                java.lang.String r2 = "113 HttpURLConnection \"Heuristic expiration\""
                r0.addHeader(r5, r2)
            Lce:
                okhttp3.internal.cache.CacheStrategy r2 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Response r0 = r0.build()
                r2.<init>(r1, r0)
                return r2
            Ld8:
                java.lang.String r0 = r13.etag
                java.lang.String r2 = "If-Modified-Since"
                if (r0 == 0) goto Le1
                java.lang.String r2 = "If-None-Match"
                goto Lee
            Le1:
                java.util.Date r0 = r13.lastModified
                if (r0 == 0) goto Le8
                java.lang.String r0 = r13.lastModifiedString
                goto Lee
            Le8:
                java.util.Date r0 = r13.servedDate
                if (r0 == 0) goto L118
                java.lang.String r0 = r13.servedDateString
            Lee:
                okhttp3.Request r1 = r13.request
                okhttp3.Headers r1 = r1.headers()
                okhttp3.Headers$Builder r1 = r1.newBuilder()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                r1.addLenient$okhttp(r2, r0)
                okhttp3.Request r0 = r13.request
                okhttp3.Request$Builder r0 = r0.newBuilder()
                okhttp3.Headers r1 = r1.build()
                okhttp3.Request$Builder r0 = r0.headers(r1)
                okhttp3.Request r0 = r0.build()
                okhttp3.internal.cache.CacheStrategy r1 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Response r2 = r13.cacheResponse
                r1.<init>(r0, r2)
                return r1
            L118:
                okhttp3.internal.cache.CacheStrategy r0 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Request r2 = r13.request
                r0.<init>(r2, r1)
                return r0
            L120:
                okhttp3.internal.cache.CacheStrategy r0 = new okhttp3.internal.cache.CacheStrategy
                okhttp3.Request r2 = r13.request
                r0.<init>(r2, r1)
                return r0
        }

        private final long computeFreshnessLifetime() {
                r6 = this;
                okhttp3.Response r0 = r6.cacheResponse
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                okhttp3.CacheControl r0 = r0.cacheControl()
                int r1 = r0.maxAgeSeconds()
                r2 = -1
                if (r1 == r2) goto L1c
                java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
                int r0 = r0.maxAgeSeconds()
                long r2 = (long) r0
                long r0 = r1.toMillis(r2)
                return r0
            L1c:
                java.util.Date r0 = r6.expires
                r1 = 0
                r2 = 0
                if (r0 == 0) goto L44
                java.util.Date r4 = r6.servedDate
                if (r4 != 0) goto L28
                goto L30
            L28:
                long r4 = r4.getTime()
                java.lang.Long r1 = java.lang.Long.valueOf(r4)
            L30:
                if (r1 != 0) goto L35
                long r4 = r6.receivedResponseMillis
                goto L39
            L35:
                long r4 = r1.longValue()
            L39:
                long r0 = r0.getTime()
                long r0 = r0 - r4
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L43
                r2 = r0
            L43:
                return r2
            L44:
                java.util.Date r0 = r6.lastModified
                if (r0 == 0) goto L81
                okhttp3.Response r0 = r6.cacheResponse
                okhttp3.Request r0 = r0.request()
                okhttp3.HttpUrl r0 = r0.url()
                java.lang.String r0 = r0.query()
                if (r0 != 0) goto L81
                java.util.Date r0 = r6.servedDate
                if (r0 != 0) goto L5d
                goto L65
            L5d:
                long r0 = r0.getTime()
                java.lang.Long r1 = java.lang.Long.valueOf(r0)
            L65:
                if (r1 != 0) goto L6a
                long r0 = r6.sentRequestMillis
                goto L6e
            L6a:
                long r0 = r1.longValue()
            L6e:
                java.util.Date r4 = r6.lastModified
                kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
                long r4 = r4.getTime()
                long r0 = r0 - r4
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L81
                r2 = 10
                long r2 = (long) r2
                long r2 = r0 / r2
            L81:
                return r2
        }

        private final boolean hasConditions(okhttp3.Request r2) {
                r1 = this;
                java.lang.String r0 = "If-Modified-Since"
                java.lang.String r0 = r2.header(r0)
                if (r0 != 0) goto L13
                java.lang.String r0 = "If-None-Match"
                java.lang.String r2 = r2.header(r0)
                if (r2 == 0) goto L11
                goto L13
            L11:
                r2 = 0
                goto L14
            L13:
                r2 = 1
            L14:
                return r2
        }

        private final boolean isFreshnessLifetimeHeuristic() {
                r2 = this;
                okhttp3.Response r0 = r2.cacheResponse
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                okhttp3.CacheControl r0 = r0.cacheControl()
                int r0 = r0.maxAgeSeconds()
                r1 = -1
                if (r0 != r1) goto L16
                java.util.Date r0 = r2.expires
                if (r0 != 0) goto L16
                r0 = 1
                goto L17
            L16:
                r0 = 0
            L17:
                return r0
        }

        public final okhttp3.internal.cache.CacheStrategy compute() {
                r2 = this;
                okhttp3.internal.cache.CacheStrategy r0 = r2.computeCandidate()
                okhttp3.Request r1 = r0.getNetworkRequest()
                if (r1 == 0) goto L1c
                okhttp3.Request r1 = r2.request
                okhttp3.CacheControl r1 = r1.cacheControl()
                boolean r1 = r1.onlyIfCached()
                if (r1 == 0) goto L1c
                okhttp3.internal.cache.CacheStrategy r0 = new okhttp3.internal.cache.CacheStrategy
                r1 = 0
                r0.<init>(r1, r1)
            L1c:
                return r0
        }

        public final okhttp3.Request getRequest$okhttp() {
                r1 = this;
                okhttp3.Request r0 = r1.request
                return r0
        }
    }

    static {
            okhttp3.internal.cache.CacheStrategy$Companion r0 = new okhttp3.internal.cache.CacheStrategy$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.cache.CacheStrategy.Companion = r0
            return
    }

    public CacheStrategy(okhttp3.Request r1, okhttp3.Response r2) {
            r0 = this;
            r0.<init>()
            r0.networkRequest = r1
            r0.cacheResponse = r2
            return
    }

    public final okhttp3.Response getCacheResponse() {
            r1 = this;
            okhttp3.Response r0 = r1.cacheResponse
            return r0
    }

    public final okhttp3.Request getNetworkRequest() {
            r1 = this;
            okhttp3.Request r0 = r1.networkRequest
            return r0
    }
}
