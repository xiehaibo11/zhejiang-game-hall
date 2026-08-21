package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class ConditionalRequestBuilder {
    ConditionalRequestBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public cz.msebera.android.httpclient.client.methods.HttpRequestWrapper buildConditionalRequest(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r12, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r13) throws cz.msebera.android.httpclient.ProtocolException {
            r11 = this;
            cz.msebera.android.httpclient.HttpRequest r0 = r12.getOriginal()
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r0 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r0)
            cz.msebera.android.httpclient.Header[] r12 = r12.getAllHeaders()
            r0.setHeaders(r12)
            java.lang.String r12 = "ETag"
            cz.msebera.android.httpclient.Header r12 = r13.getFirstHeader(r12)
            if (r12 == 0) goto L20
            java.lang.String r12 = r12.getValue()
            java.lang.String r1 = "If-None-Match"
            r0.setHeader(r1, r12)
        L20:
            java.lang.String r12 = "Last-Modified"
            cz.msebera.android.httpclient.Header r12 = r13.getFirstHeader(r12)
            if (r12 == 0) goto L31
            java.lang.String r12 = r12.getValue()
            java.lang.String r1 = "If-Modified-Since"
            r0.setHeader(r1, r12)
        L31:
            java.lang.String r12 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r13 = r13.getHeaders(r12)
            int r1 = r13.length
            r2 = 0
            r3 = 0
            r4 = 0
        L3b:
            if (r3 >= r1) goto L69
            r5 = r13[r3]
            cz.msebera.android.httpclient.HeaderElement[] r5 = r5.getElements()
            int r6 = r5.length
            r7 = 0
        L45:
            if (r7 >= r6) goto L66
            r8 = r5[r7]
            java.lang.String r9 = r8.getName()
            java.lang.String r10 = "must-revalidate"
            boolean r9 = r10.equalsIgnoreCase(r9)
            if (r9 != 0) goto L65
            java.lang.String r8 = r8.getName()
            java.lang.String r9 = "proxy-revalidate"
            boolean r8 = r9.equalsIgnoreCase(r8)
            if (r8 == 0) goto L62
            goto L65
        L62:
            int r7 = r7 + 1
            goto L45
        L65:
            r4 = 1
        L66:
            int r3 = r3 + 1
            goto L3b
        L69:
            if (r4 == 0) goto L70
            java.lang.String r13 = "max-age=0"
            r0.addHeader(r12, r13)
        L70:
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.HttpRequestWrapper buildConditionalRequestFromVariants(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r4, java.util.Map<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.Variant> r5) {
            r3 = this;
            cz.msebera.android.httpclient.HttpRequest r0 = r4.getOriginal()
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r0 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r0)
            cz.msebera.android.httpclient.Header[] r4 = r4.getAllHeaders()
            r0.setHeaders(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.util.Set r5 = r5.keySet()
            java.util.Iterator r5 = r5.iterator()
            r1 = 1
        L1d:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L35
            java.lang.Object r2 = r5.next()
            java.lang.String r2 = (java.lang.String) r2
            if (r1 != 0) goto L30
            java.lang.String r1 = ","
            r4.append(r1)
        L30:
            r1 = 0
            r4.append(r2)
            goto L1d
        L35:
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "If-None-Match"
            r0.setHeader(r5, r4)
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.HttpRequestWrapper buildUnconditionalRequest(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r1 = this;
            cz.msebera.android.httpclient.HttpRequest r3 = r2.getOriginal()
            cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3 = cz.msebera.android.httpclient.client.methods.HttpRequestWrapper.wrap(r3)
            cz.msebera.android.httpclient.Header[] r2 = r2.getAllHeaders()
            r3.setHeaders(r2)
            java.lang.String r2 = "no-cache"
            java.lang.String r0 = "Cache-Control"
            r3.addHeader(r0, r2)
            java.lang.String r0 = "Pragma"
            r3.addHeader(r0, r2)
            java.lang.String r2 = "If-Range"
            r3.removeHeaders(r2)
            java.lang.String r2 = "If-Match"
            r3.removeHeaders(r2)
            java.lang.String r2 = "If-None-Match"
            r3.removeHeaders(r2)
            java.lang.String r2 = "If-Unmodified-Since"
            r3.removeHeaders(r2)
            java.lang.String r2 = "If-Modified-Since"
            r3.removeHeaders(r2)
            return r3
    }
}
