package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CacheableRequestPolicy {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    CacheableRequestPolicy() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    public boolean isServableFromCache(cz.msebera.android.httpclient.HttpRequest r10) {
            r9 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r10.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            cz.msebera.android.httpclient.RequestLine r1 = r10.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r1 = r1.getProtocolVersion()
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r1 = r2.compareToVersion(r1)
            r2 = 0
            if (r1 == 0) goto L21
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r0 = "non-HTTP/1.1 request was not serveable from cache"
            r10.trace(r0)
            return r2
        L21:
            java.lang.String r1 = "GET"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L39
            java.lang.String r1 = "HEAD"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L39
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r0 = "non-GET or non-HEAD request was not serveable from cache"
            r10.trace(r0)
            return r2
        L39:
            java.lang.String r0 = "Pragma"
            cz.msebera.android.httpclient.Header[] r0 = r10.getHeaders(r0)
            int r0 = r0.length
            if (r0 <= 0) goto L4a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r0 = "request with Pragma header was not serveable from cache"
            r10.trace(r0)
            return r2
        L4a:
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r10 = r10.getHeaders(r0)
            int r0 = r10.length
            r1 = 0
        L52:
            if (r1 >= r0) goto L8e
            r3 = r10[r1]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L5c:
            if (r5 >= r4) goto L8b
            r6 = r3[r5]
            java.lang.String r7 = r6.getName()
            java.lang.String r8 = "no-store"
            boolean r7 = r8.equalsIgnoreCase(r7)
            if (r7 == 0) goto L74
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r0 = "Request with no-store was not serveable from cache"
            r10.trace(r0)
            return r2
        L74:
            java.lang.String r6 = r6.getName()
            java.lang.String r7 = "no-cache"
            boolean r6 = r7.equalsIgnoreCase(r6)
            if (r6 == 0) goto L88
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r0 = "Request with no-cache was not serveable from cache"
            r10.trace(r0)
            return r2
        L88:
            int r5 = r5 + 1
            goto L5c
        L8b:
            int r1 = r1 + 1
            goto L52
        L8e:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r0 = "Request was serveable from cache"
            r10.trace(r0)
            r10 = 1
            return r10
    }
}
