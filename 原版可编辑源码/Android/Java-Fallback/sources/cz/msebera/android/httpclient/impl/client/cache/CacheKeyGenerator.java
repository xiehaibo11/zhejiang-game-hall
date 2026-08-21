package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CacheKeyGenerator {
    private static final java.net.URI BASE_URI = null;

    static {
            java.lang.String r0 = "http://example.com/"
            java.net.URI r0 = java.net.URI.create(r0)
            cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator.BASE_URI = r0
            return
    }

    CacheKeyGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    private int canonicalizePort(int r3, java.lang.String r4) {
            r2 = this;
            r0 = -1
            if (r3 != r0) goto Le
            java.lang.String r1 = "http"
            boolean r1 = r1.equalsIgnoreCase(r4)
            if (r1 == 0) goto Le
            r3 = 80
            return r3
        Le:
            if (r3 != r0) goto L1a
            java.lang.String r0 = "https"
            boolean r4 = r0.equalsIgnoreCase(r4)
            if (r4 == 0) goto L1a
            r3 = 443(0x1bb, float:6.21E-43)
        L1a:
            return r3
    }

    private boolean isRelativeRequest(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getUri()
            java.lang.String r0 = "*"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "/"
            boolean r2 = r2.startsWith(r0)
            if (r2 == 0) goto L19
            goto L1b
        L19:
            r2 = 0
            goto L1c
        L1b:
            r2 = 1
        L1c:
            return r2
    }

    public java.lang.String canonicalizeUri(java.lang.String r7) {
            r6 = this;
            java.net.URI r0 = cz.msebera.android.httpclient.impl.client.cache.CacheKeyGenerator.BASE_URI     // Catch: java.lang.Throwable -> L46
            java.net.URI r0 = cz.msebera.android.httpclient.client.utils.URIUtils.resolve(r0, r7)     // Catch: java.lang.Throwable -> L46
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = r0.toASCIIString()     // Catch: java.lang.Throwable -> L46
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = r1.getProtocol()     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = r1.getHost()     // Catch: java.lang.Throwable -> L46
            int r3 = r1.getPort()     // Catch: java.lang.Throwable -> L46
            int r3 = r6.canonicalizePort(r3, r0)     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = r1.getPath()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = r1.getQuery()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L3d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r5.<init>()     // Catch: java.lang.Throwable -> L46
            r5.append(r4)     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = "?"
            r5.append(r4)     // Catch: java.lang.Throwable -> L46
            r5.append(r1)     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L46
        L3d:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L46
            r1.<init>(r0, r2, r3, r4)     // Catch: java.lang.Throwable -> L46
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L46
        L46:
            return r7
    }

    protected java.lang.String getFullHeaderValue(cz.msebera.android.httpclient.Header[] r7) {
            r6 = this;
            java.lang.String r0 = ""
            if (r7 != 0) goto L5
            return r0
        L5:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            int r0 = r7.length
            r2 = 0
            r3 = 1
            r3 = 0
            r4 = 1
        Lf:
            if (r3 >= r0) goto L29
            r5 = r7[r3]
            if (r4 != 0) goto L1a
            java.lang.String r4 = ", "
            r1.append(r4)
        L1a:
            java.lang.String r4 = r5.getValue()
            java.lang.String r4 = r4.trim()
            r1.append(r4)
            int r3 = r3 + 1
            r4 = 0
            goto Lf
        L29:
            java.lang.String r7 = r1.toString()
            return r7
    }

    public java.lang.String getURI(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4) {
            r2 = this;
            boolean r0 = r2.isRelativeRequest(r4)
            if (r0 == 0) goto L26
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r3 = r3.toString()
            r0[r1] = r3
            r3 = 1
            cz.msebera.android.httpclient.RequestLine r4 = r4.getRequestLine()
            java.lang.String r4 = r4.getUri()
            r0[r3] = r4
            java.lang.String r3 = "%s%s"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.String r3 = r2.canonicalizeUri(r3)
            return r3
        L26:
            cz.msebera.android.httpclient.RequestLine r3 = r4.getRequestLine()
            java.lang.String r3 = r3.getUri()
            java.lang.String r3 = r2.canonicalizeUri(r3)
            return r3
    }

    public java.lang.String getVariantKey(cz.msebera.android.httpclient.HttpRequest r9, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r10) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "Vary"
            cz.msebera.android.httpclient.Header[] r10 = r10.getHeaders(r1)
            int r1 = r10.length
            r2 = 0
            r3 = 0
        Le:
            if (r3 >= r1) goto L29
            r4 = r10[r3]
            cz.msebera.android.httpclient.HeaderElement[] r4 = r4.getElements()
            int r5 = r4.length
            r6 = 0
        L18:
            if (r6 >= r5) goto L26
            r7 = r4[r6]
            java.lang.String r7 = r7.getName()
            r0.add(r7)
            int r6 = r6 + 1
            goto L18
        L26:
            int r3 = r3 + 1
            goto Le
        L29:
            java.util.Collections.sort(r0)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r1 = "{"
            r10.<init>(r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.io.UnsupportedEncodingException -> L7e
            r1 = 1
        L38:
            boolean r3 = r0.hasNext()     // Catch: java.io.UnsupportedEncodingException -> L7e
            if (r3 == 0) goto L74
            java.lang.Object r3 = r0.next()     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.io.UnsupportedEncodingException -> L7e
            if (r1 != 0) goto L4b
            java.lang.String r1 = "&"
            r10.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
        L4b:
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.UTF_8     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r1 = r1.name()     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r1 = java.net.URLEncoder.encode(r3, r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
            r10.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r1 = "="
            r10.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
            cz.msebera.android.httpclient.Header[] r1 = r9.getHeaders(r3)     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r1 = r8.getFullHeaderValue(r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.Consts.UTF_8     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r3 = r3.name()     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r3)     // Catch: java.io.UnsupportedEncodingException -> L7e
            r10.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L7e
            r1 = 0
            goto L38
        L74:
            java.lang.String r9 = "}"
            r10.append(r9)     // Catch: java.io.UnsupportedEncodingException -> L7e
            java.lang.String r9 = r10.toString()
            return r9
        L7e:
            r9 = move-exception
            java.lang.RuntimeException r10 = new java.lang.RuntimeException
            java.lang.String r0 = "couldn't encode to UTF-8"
            r10.<init>(r0, r9)
            throw r10
    }

    public java.lang.String getVariantURI(cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4) {
            r1 = this;
            boolean r0 = r4.hasVariants()
            if (r0 != 0) goto Lb
            java.lang.String r2 = r1.getURI(r2, r3)
            return r2
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = r1.getVariantKey(r3, r4)
            r0.append(r4)
            java.lang.String r2 = r1.getURI(r2, r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }
}
