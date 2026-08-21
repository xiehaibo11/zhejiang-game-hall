package okhttp3.internal;

@kotlin.Metadata(d1 = {"\u0000T\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0016\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0004\u001a\u001e\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0006\u001a\u00020\u0004\u001a\u001e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e\u001a\u0018\u0010\u000f\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014\u001a\u0016\u0010\u0015\u001a\u00020\u00042\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u000e\u001a \u0010\u0019\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u0004¨\u0006\u001f"}, d2 = {"addHeaderLenient", "Lokhttp3/Headers$Builder;", "builder", "line", "", "name", "value", "applyConnectionSpec", "", "connectionSpec", "Lokhttp3/ConnectionSpec;", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "isFallback", "", "cacheGet", "Lokhttp3/Response;", "cache", "Lokhttp3/Cache;", "request", "Lokhttp3/Request;", "cookieToString", "cookie", "Lokhttp3/Cookie;", "forObsoleteRfc2965", "parseCookie", "currentTimeMillis", "", "url", "Lokhttp3/HttpUrl;", "setCookie", "okhttp"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class Internal {
    public static final okhttp3.Headers.Builder addHeaderLenient(okhttp3.Headers.Builder r1, java.lang.String r2) {
            java.lang.String r0 = "builder"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "line"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okhttp3.Headers$Builder r1 = r1.addLenient$okhttp(r2)
            return r1
    }

    public static final okhttp3.Headers.Builder addHeaderLenient(okhttp3.Headers.Builder r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "builder"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "value"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.Headers$Builder r1 = r1.addLenient$okhttp(r2, r3)
            return r1
    }

    public static final void applyConnectionSpec(okhttp3.ConnectionSpec r1, javax.net.ssl.SSLSocket r2, boolean r3) {
            java.lang.String r0 = "connectionSpec"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.apply$okhttp(r2, r3)
            return
    }

    public static final okhttp3.Response cacheGet(okhttp3.Cache r1, okhttp3.Request r2) {
            java.lang.String r0 = "cache"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "request"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okhttp3.Response r1 = r1.get$okhttp(r2)
            return r1
    }

    public static final java.lang.String cookieToString(okhttp3.Cookie r1, boolean r2) {
            java.lang.String r0 = "cookie"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r1 = r1.toString$okhttp(r2)
            return r1
    }

    public static final okhttp3.Cookie parseCookie(long r1, okhttp3.HttpUrl r3, java.lang.String r4) {
            java.lang.String r0 = "url"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "setCookie"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okhttp3.Cookie$Companion r0 = okhttp3.Cookie.Companion
            okhttp3.Cookie r1 = r0.parse$okhttp(r1, r3, r4)
            return r1
    }
}
