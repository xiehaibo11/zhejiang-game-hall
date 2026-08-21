package org.cocos2dx.okhttp3.internal.cache;

import java.io.IOException;
import org.cocos2dx.okhttp3.Headers;
import org.cocos2dx.okhttp3.Interceptor;
import org.cocos2dx.okhttp3.Protocol;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.Response;
import org.cocos2dx.okhttp3.internal.Internal;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.cache.CacheStrategy;
import org.cocos2dx.okhttp3.internal.http.HttpHeaders;
import org.cocos2dx.okhttp3.internal.http.HttpMethod;
import org.cocos2dx.okhttp3.internal.http.RealResponseBody;
import org.cocos2dx.okio.BufferedSink;
import org.cocos2dx.okio.BufferedSource;
import org.cocos2dx.okio.Okio;
import org.cocos2dx.okio.Sink;
import org.cocos2dx.okio.Source;

public final class CacheInterceptor implements Interceptor {
    final InternalCache cache;

    public CacheInterceptor(InternalCache r1) {
        this.cache = r1;
    }

    @Override
    public Response intercept(Interceptor.Chain r6) throws IOException {
        InternalCache r0 = this.cache;
        if (r0 == null) goto L5;
        Response r02 = r0.get(r6.request());
    L6:
        CacheStrategy r1 = new CacheStrategy.Factory(System.currentTimeMillis(), r6.request(), r02).get();
        Request r2 = r1.networkRequest;
        Response r3 = r1.cacheResponse;
        InternalCache r4 = this.cache;
        if (r4 == null) goto L9;
        r4.trackResponse(r1);
    L9:
        if (r02 == null) goto L12;
        if (r3 != null) goto L12;
        Util.closeQuietly(r02.body());
    L12:
        if (r2 != null) goto L16;
        if (r3 != null) goto L16;
        return new Response.Builder().request(r6.request()).protocol(Protocol.HTTP_1_1).code(504).message("Unsatisfiable Request (only-if-cached)").body(Util.EMPTY_RESPONSE).sentRequestAtMillis(-1).receivedResponseAtMillis(System.currentTimeMillis()).build();
    L16:
        if (r2 == null) goto L18;
        Response r62 = r6.proceed(r2);     // Catch: Throwable -> L41
        if (r62 != null) goto L23;
        if (r02 == null) goto L23;
        Util.closeQuietly(r02.body());
    L23:
        if (r3 != null) goto L25;
    L29:
        Response r63 = r62.newBuilder().cacheResponse(stripBody(r3)).networkResponse(stripBody(r62)).build();
        if (this.cache != null) goto L32;
    L40:
        return r63;
    L32:
        if (HttpHeaders.hasBody(r63) == false) goto L38;
        if (CacheStrategy.isCacheable(r63, r2) == false) goto L38;
        return cacheWritingResponse(this.cache.put(r63), r63);
    L38:
        if (HttpMethod.invalidatesCache(r2.method()) == false) goto L40;
        this.cache.remove(r2);     // Catch: IOException -> L45
        goto L40
    L25:
        if (r62.code() != 304) goto L28;
        Response r03 = r3.newBuilder().headers(combine(r3.headers(), r62.headers())).sentRequestAtMillis(r62.sentRequestAtMillis()).receivedResponseAtMillis(r62.receivedResponseAtMillis()).cacheResponse(stripBody(r3)).networkResponse(stripBody(r62)).build();
        r62.body().close();
        this.cache.trackConditionalCacheHit();
        this.cache.update(r3, r03);
        return r03;
    L28:
        Util.closeQuietly(r3.body());
    L41:
        th = move-exception;
        if (r02 == null) goto L44;
        Util.closeQuietly(r02.body());
    L44:
        throw th;
    L18:
        return r3.newBuilder().cacheResponse(stripBody(r3)).build();
    L5:
        r02 = null;
        goto L6
    }

    private static Response stripBody(Response r1) {
        if (r1 != null) goto L4;
        return r1;
    L4:
        if (r1.body() != null) goto L6;
        return r1;
    L6:
        return r1.newBuilder().body(null).build();
    }

    private Response cacheWritingResponse(final CacheRequest r5, Response r6) throws IOException {
        if (r5 != null) goto L4;
        return r6;
    L4:
        Sink r0 = r5.body();
        if (r0 != null) goto L7;
        return r6;
    L7:
        final BufferedSource r1 = r6.body().source();
        final BufferedSink r02 = Okio.buffer(r0);
        Source r2 = new 1(this, r1, r5, r02);
        String r52 = r6.header("Content-Type");
        long r03 = r6.body().contentLength();
        return r6.newBuilder().body(new RealResponseBody(r52, r03, Okio.buffer(r2))).build();
    }

    private static Headers combine(Headers r7, Headers r8) {
        Headers.Builder r0 = new Headers.Builder();
        int r1 = r7.size();
        int r2 = 0;
        int r3 = 0;
    L3:
        if (r3 >= r1) goto L17;
        String r4 = r7.name(r3);
        String r5 = r7.value(r3);
        if ("Warning".equalsIgnoreCase(r4) == false) goto L10;
        if (r5.startsWith("1") == false) goto L10;
    L16:
        r3 = r3 + 1;
    L10:
        if (isContentSpecificHeader(r4) == false) goto L12;
    L15:
        Internal.instance.addLenient(r0, r4, r5);
        goto L16
    L12:
        if (isEndToEnd(r4) == false) goto L15;
        if (r8.get(r4) != null) goto L16;
    L17:
        int r72 = r8.size();
    L18:
        if (r2 >= r72) goto L26;
        String r12 = r8.name(r2);
        if (isContentSpecificHeader(r12) == true) goto L24;
        if (isEndToEnd(r12) == false) goto L24;
        Internal.instance.addLenient(r0, r12, r8.value(r2));
    L24:
        r2 = r2 + 1;
        goto L18
    L26:
        return r0.build();
    }

    static boolean isEndToEnd(String r1) {
        if ("Connection".equalsIgnoreCase(r1) == false) goto L5;
    L19:
        return false;
    L5:
        if ("Keep-Alive".equalsIgnoreCase(r1) == true) goto L19;
        if ("Proxy-Authenticate".equalsIgnoreCase(r1) == true) goto L19;
        if ("Proxy-Authorization".equalsIgnoreCase(r1) == true) goto L19;
        if ("TE".equalsIgnoreCase(r1) == true) goto L19;
        if ("Trailers".equalsIgnoreCase(r1) == true) goto L19;
        if ("Transfer-Encoding".equalsIgnoreCase(r1) == true) goto L19;
        if ("Upgrade".equalsIgnoreCase(r1) == true) goto L19;
        return true;
    }

    static boolean isContentSpecificHeader(String r1) {
        if ("Content-Length".equalsIgnoreCase(r1) == false) goto L5;
    L10:
        return true;
    L5:
        if ("Content-Encoding".equalsIgnoreCase(r1) == true) goto L10;
        if ("Content-Type".equalsIgnoreCase(r1) == true) goto L10;
        return false;
    }
}
