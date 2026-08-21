package cz.msebera.android.httpclient.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class HttpCacheEntry implements java.io.Serializable {
    private static final java.lang.String REQUEST_METHOD_HEADER_NAME = "Hc-Request-Method";
    private static final long serialVersionUID = -6300496422359477413L;
    private final java.util.Date date;
    private final java.util.Date requestDate;
    private final cz.msebera.android.httpclient.client.cache.Resource resource;
    private final java.util.Date responseDate;
    private final cz.msebera.android.httpclient.message.HeaderGroup responseHeaders;
    private final cz.msebera.android.httpclient.StatusLine statusLine;
    private final java.util.Map<java.lang.String, java.lang.String> variantMap;

    public HttpCacheEntry(java.util.Date r8, java.util.Date r9, cz.msebera.android.httpclient.StatusLine r10, cz.msebera.android.httpclient.Header[] r11, cz.msebera.android.httpclient.client.cache.Resource r12) {
            r7 = this;
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public HttpCacheEntry(java.util.Date r9, java.util.Date r10, cz.msebera.android.httpclient.StatusLine r11, cz.msebera.android.httpclient.Header[] r12, cz.msebera.android.httpclient.client.cache.Resource r13, java.lang.String r14) {
            r8 = this;
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r7 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public HttpCacheEntry(java.util.Date r9, java.util.Date r10, cz.msebera.android.httpclient.StatusLine r11, cz.msebera.android.httpclient.Header[] r12, cz.msebera.android.httpclient.client.cache.Resource r13, java.util.Map<java.lang.String, java.lang.String> r14) {
            r8 = this;
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public HttpCacheEntry(java.util.Date r1, java.util.Date r2, cz.msebera.android.httpclient.StatusLine r3, cz.msebera.android.httpclient.Header[] r4, cz.msebera.android.httpclient.client.cache.Resource r5, java.util.Map<java.lang.String, java.lang.String> r6, java.lang.String r7) {
            r0 = this;
            r0.<init>()
            java.lang.String r7 = "Request date"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r7)
            java.lang.String r7 = "Response date"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r7)
            java.lang.String r7 = "Status line"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r7)
            java.lang.String r7 = "Response headers"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r7)
            r0.requestDate = r1
            r0.responseDate = r2
            r0.statusLine = r3
            cz.msebera.android.httpclient.message.HeaderGroup r1 = new cz.msebera.android.httpclient.message.HeaderGroup
            r1.<init>()
            r0.responseHeaders = r1
            cz.msebera.android.httpclient.message.HeaderGroup r1 = r0.responseHeaders
            r1.setHeaders(r4)
            r0.resource = r5
            if (r6 == 0) goto L33
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>(r6)
            goto L34
        L33:
            r1 = 0
        L34:
            r0.variantMap = r1
            java.util.Date r1 = r0.parseDate()
            r0.date = r1
            return
    }

    private java.util.Date parseDate() {
            r1 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r0 = r1.getFirstHeader(r0)
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            java.lang.String r0 = r0.getValue()
            java.util.Date r0 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r0)
            return r0
    }

    public cz.msebera.android.httpclient.Header[] getAllHeaders() {
            r5 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            cz.msebera.android.httpclient.message.HeaderGroup r1 = r5.responseHeaders
            cz.msebera.android.httpclient.HeaderIterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.Header r2 = (cz.msebera.android.httpclient.Header) r2
            java.lang.String r3 = r2.getName()
            java.lang.String r4 = "Hc-Request-Method"
            boolean r3 = r4.equals(r3)
            if (r3 != 0) goto Lb
            r0.addHeader(r2)
            goto Lb
        L27:
            cz.msebera.android.httpclient.Header[] r0 = r0.getAllHeaders()
            return r0
    }

    public java.util.Date getDate() {
            r1 = this;
            java.util.Date r0 = r1.date
            return r0
    }

    public cz.msebera.android.httpclient.Header getFirstHeader(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Hc-Request-Method"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto La
            r2 = 0
            return r2
        La:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.responseHeaders
            cz.msebera.android.httpclient.Header r2 = r0.getFirstHeader(r2)
            return r2
    }

    public cz.msebera.android.httpclient.Header[] getHeaders(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Hc-Request-Method"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto Lc
            r2 = 0
            cz.msebera.android.httpclient.Header[] r2 = new cz.msebera.android.httpclient.Header[r2]
            return r2
        Lc:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.responseHeaders
            cz.msebera.android.httpclient.Header[] r2 = r0.getHeaders(r2)
            return r2
    }

    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r1.statusLine
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
            return r0
    }

    public java.lang.String getReasonPhrase() {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r1.statusLine
            java.lang.String r0 = r0.getReasonPhrase()
            return r0
    }

    public java.util.Date getRequestDate() {
            r1 = this;
            java.util.Date r0 = r1.requestDate
            return r0
    }

    public java.lang.String getRequestMethod() {
            r2 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.responseHeaders
            java.lang.String r1 = "Hc-Request-Method"
            cz.msebera.android.httpclient.Header r0 = r0.getFirstHeader(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getValue()
            return r0
        Lf:
            java.lang.String r0 = "GET"
            return r0
    }

    public cz.msebera.android.httpclient.client.cache.Resource getResource() {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.Resource r0 = r1.resource
            return r0
    }

    public java.util.Date getResponseDate() {
            r1 = this;
            java.util.Date r0 = r1.responseDate
            return r0
    }

    public int getStatusCode() {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r1.statusLine
            int r0 = r0.getStatusCode()
            return r0
    }

    public cz.msebera.android.httpclient.StatusLine getStatusLine() {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r1.statusLine
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getVariantMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.variantMap
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
            return r0
    }

    public boolean hasVariants() {
            r1 = this;
            java.lang.String r0 = "Vary"
            cz.msebera.android.httpclient.Header r0 = r1.getFirstHeader(r0)
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[request date="
            r0.append(r1)
            java.util.Date r1 = r2.requestDate
            r0.append(r1)
            java.lang.String r1 = "; response date="
            r0.append(r1)
            java.util.Date r1 = r2.responseDate
            r0.append(r1)
            java.lang.String r1 = "; statusLine="
            r0.append(r1)
            cz.msebera.android.httpclient.StatusLine r1 = r2.statusLine
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
