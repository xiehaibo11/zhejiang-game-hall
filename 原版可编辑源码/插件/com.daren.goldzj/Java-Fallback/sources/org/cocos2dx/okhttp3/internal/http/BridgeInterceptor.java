package org.cocos2dx.okhttp3.internal.http;

import java.io.IOException;
import java.util.List;
import org.cocos2dx.okhttp3.Cookie;
import org.cocos2dx.okhttp3.CookieJar;
import org.cocos2dx.okhttp3.Interceptor;
import org.cocos2dx.okhttp3.MediaType;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.RequestBody;
import org.cocos2dx.okhttp3.Response;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.Version;
import org.cocos2dx.okio.GzipSource;
import org.cocos2dx.okio.Okio;

public final class BridgeInterceptor implements Interceptor {
    private final CookieJar cookieJar;

    public BridgeInterceptor(CookieJar r1) {
        this.cookieJar = r1;
    }

    @Override
    public Response intercept(Interceptor.Chain r11) throws IOException {
        Request r0 = r11.request();
        Request.Builder r1 = r0.newBuilder();
        RequestBody r2 = r0.body();
        if (r2 == null) goto L11;
        MediaType r7 = r2.contentType();
        if (r7 == null) goto L7;
        r1.header("Content-Type", r7.toString());
    L7:
        long r72 = r2.contentLength();
        if (r72 == (-1)) goto L10;
        r1.header("Content-Length", Long.toString(r72));
        r1.removeHeader("Transfer-Encoding");
        goto L11
    L10:
        r1.header("Transfer-Encoding", "chunked");
        r1.removeHeader("Content-Length");
    L11:
        boolean r8 = false;
        if (r0.header("Host") != null) goto L15;
        r1.header("Host", Util.hostHeader(r0.url(), false));
    L15:
        if (r0.header("Connection") != null) goto L18;
        r1.header("Connection", "Keep-Alive");
    L18:
        if (r0.header("Accept-Encoding") == null) goto L20;
    L22:
        List<Cookie> r22 = this.cookieJar.loadForRequest(r0.url());
        if (r22.isEmpty() == true) goto L26;
        r1.header("Cookie", cookieHeader(r22));
    L26:
        if (r0.header("User-Agent") != null) goto L28;
        r1.header("User-Agent", Version.userAgent());
    L28:
        Response r112 = r11.proceed(r1.build());
        HttpHeaders.receiveHeaders(this.cookieJar, r0.url(), r112.headers());
        Response.Builder r02 = r112.newBuilder().request(r0);
        if (r8 == false) goto L36;
        if ("gzip".equalsIgnoreCase(r112.header("Content-Encoding")) == false) goto L36;
        if (HttpHeaders.hasBody(r112) == false) goto L36;
        GzipSource r23 = new GzipSource(r112.body().source());
        r02.headers(r112.headers().newBuilder().removeAll("Content-Encoding").removeAll("Content-Length").build());
        r02.body(new RealResponseBody(r112.header("Content-Type"), -1, Okio.buffer(r23)));
    L36:
        return r02.build();
    L20:
        if (r0.header("Range") != null) goto L22;
        r8 = true;
        r1.header("Accept-Encoding", "gzip");
        goto L22
    }

    private String cookieHeader(List<Cookie> r6) {
        StringBuilder r0 = new StringBuilder();
        int r1 = r6.size();
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L8;
        if (r2 <= 0) goto L6;
        r0.append("; ");
    L6:
        Cookie r3 = r6.get(r2);
        r0.append(r3.name());
        r0.append('=');
        r0.append(r3.value());
        r2 = r2 + 1;
        goto L3
    L8:
        return r0.toString();
    }
}
