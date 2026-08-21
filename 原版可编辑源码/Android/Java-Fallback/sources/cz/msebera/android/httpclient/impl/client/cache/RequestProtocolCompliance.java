package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class RequestProtocolCompliance {
    private static final java.util.List<java.lang.String> disallowedWithNoCache = null;
    private final boolean weakETagOnPutDeleteAllowed;

    static class 1 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError = null;

        static {
                cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.1.$SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError = r0
                int[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.1.$SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError     // Catch: java.lang.NoSuchFieldError -> L14
                cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.BODY_BUT_NO_LENGTH_ERROR     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.1.$SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError     // Catch: java.lang.NoSuchFieldError -> L1f
                cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_AND_RANGE_ERROR     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.1.$SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError     // Catch: java.lang.NoSuchFieldError -> L2a
                cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                int[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.1.$SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError     // Catch: java.lang.NoSuchFieldError -> L35
                cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.NO_CACHE_DIRECTIVE_WITH_FIELD_NAME     // Catch: java.lang.NoSuchFieldError -> L35
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L35
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L35
            L35:
                return
        }
    }

    static {
            java.lang.String r0 = "min-fresh"
            java.lang.String r1 = "max-stale"
            java.lang.String r2 = "max-age"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            java.util.List r0 = java.util.Arrays.asList(r0)
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.disallowedWithNoCache = r0
            return
    }

    public RequestProtocolCompliance() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.weakETagOnPutDeleteAllowed = r0
            return
    }

    public RequestProtocolCompliance(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.weakETagOnPutDeleteAllowed = r1
            return
    }

    private void add100ContinueHeaderIfMissing(cz.msebera.android.httpclient.HttpRequest r12) {
            r11 = this;
            java.lang.String r0 = "Expect"
            cz.msebera.android.httpclient.Header[] r1 = r12.getHeaders(r0)
            int r2 = r1.length
            r3 = 0
            r4 = 0
            r5 = 0
        La:
            java.lang.String r6 = "100-continue"
            if (r4 >= r2) goto L2d
            r7 = r1[r4]
            cz.msebera.android.httpclient.HeaderElement[] r7 = r7.getElements()
            int r8 = r7.length
            r9 = r5
            r5 = 0
        L17:
            if (r5 >= r8) goto L29
            r10 = r7[r5]
            java.lang.String r10 = r10.getName()
            boolean r10 = r6.equalsIgnoreCase(r10)
            if (r10 == 0) goto L26
            r9 = 1
        L26:
            int r5 = r5 + 1
            goto L17
        L29:
            int r4 = r4 + 1
            r5 = r9
            goto La
        L2d:
            if (r5 != 0) goto L32
            r12.addHeader(r0, r6)
        L32:
            return
    }

    private void addContentTypeHeaderIfMissing(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r2.getEntity()
            cz.msebera.android.httpclient.Header r0 = r0.getContentType()
            if (r0 != 0) goto L19
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()
            cz.msebera.android.httpclient.entity.AbstractHttpEntity r2 = (cz.msebera.android.httpclient.entity.AbstractHttpEntity) r2
            cz.msebera.android.httpclient.entity.ContentType r0 = cz.msebera.android.httpclient.entity.ContentType.APPLICATION_OCTET_STREAM
            java.lang.String r0 = r0.getMimeType()
            r2.setContentType(r0)
        L19:
            return
    }

    private java.lang.String buildHeaderFromElements(java.util.List<cz.msebera.android.httpclient.HeaderElement> r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = ""
            r0.<init>(r1)
            java.util.Iterator r5 = r5.iterator()
            r1 = 1
        Lc:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L29
            java.lang.Object r2 = r5.next()
            cz.msebera.android.httpclient.HeaderElement r2 = (cz.msebera.android.httpclient.HeaderElement) r2
            if (r1 != 0) goto L20
            java.lang.String r3 = ","
            r0.append(r3)
            goto L21
        L20:
            r1 = 0
        L21:
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            goto Lc
        L29:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private void decrementOPTIONSMaxForwardsIfGreaterThen0(cz.msebera.android.httpclient.HttpRequest r3) {
            r2 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r3.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "OPTIONS"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L11
            return
        L11:
            java.lang.String r0 = "Max-Forwards"
            cz.msebera.android.httpclient.Header r1 = r3.getFirstHeader(r0)
            if (r1 != 0) goto L1a
            return
        L1a:
            r3.removeHeaders(r0)
            java.lang.String r1 = r1.getValue()
            int r1 = java.lang.Integer.parseInt(r1)
            int r1 = r1 + (-1)
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r3.setHeader(r0, r1)
            return
    }

    private void remove100ContinueHeaderIfExists(cz.msebera.android.httpclient.HttpRequest r15) {
            r14 = this;
            java.lang.String r0 = "Expect"
            cz.msebera.android.httpclient.Header[] r1 = r15.getHeaders(r0)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            int r3 = r1.length
            r4 = 0
            r5 = r2
            r2 = 0
            r6 = 0
        L10:
            if (r2 >= r3) goto L5f
            r7 = r1[r2]
            cz.msebera.android.httpclient.HeaderElement[] r8 = r7.getElements()
            int r9 = r8.length
            r10 = r6
            r6 = 0
        L1b:
            if (r6 >= r9) goto L33
            r11 = r8[r6]
            java.lang.String r12 = r11.getName()
            java.lang.String r13 = "100-continue"
            boolean r12 = r13.equalsIgnoreCase(r12)
            if (r12 != 0) goto L2f
            r5.add(r11)
            goto L30
        L2f:
            r10 = 1
        L30:
            int r6 = r6 + 1
            goto L1b
        L33:
            if (r10 == 0) goto L56
            r15.removeHeader(r7)
            java.util.Iterator r1 = r5.iterator()
        L3c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L55
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.HeaderElement r2 = (cz.msebera.android.httpclient.HeaderElement) r2
            cz.msebera.android.httpclient.message.BasicHeader r3 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r2 = r2.getName()
            r3.<init>(r0, r2)
            r15.addHeader(r3)
            goto L3c
        L55:
            return
        L56:
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            int r2 = r2 + 1
            r6 = r10
            goto L10
        L5f:
            return
    }

    private cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError requestContainsNoCacheDirectiveWithFieldName(cz.msebera.android.httpclient.HttpRequest r10) {
            r9 = this;
            java.lang.String r0 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r10 = r10.getHeaders(r0)
            int r0 = r10.length
            r1 = 0
            r2 = 0
        L9:
            if (r2 >= r0) goto L32
            r3 = r10[r2]
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            int r4 = r3.length
            r5 = 0
        L13:
            if (r5 >= r4) goto L2f
            r6 = r3[r5]
            java.lang.String r7 = r6.getName()
            java.lang.String r8 = "no-cache"
            boolean r7 = r8.equalsIgnoreCase(r7)
            if (r7 == 0) goto L2c
            java.lang.String r6 = r6.getValue()
            if (r6 == 0) goto L2c
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r10 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.NO_CACHE_DIRECTIVE_WITH_FIELD_NAME
            return r10
        L2c:
            int r5 = r5 + 1
            goto L13
        L2f:
            int r2 = r2 + 1
            goto L9
        L32:
            r10 = 0
            return r10
    }

    private cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError requestHasWeakETagAndRange(cz.msebera.android.httpclient.HttpRequest r3) {
            r2 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r3.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "GET"
            boolean r0 = r1.equals(r0)
            r1 = 0
            if (r0 != 0) goto L12
            return r1
        L12:
            java.lang.String r0 = "Range"
            cz.msebera.android.httpclient.Header r0 = r3.getFirstHeader(r0)
            if (r0 != 0) goto L1b
            return r1
        L1b:
            java.lang.String r0 = "If-Range"
            cz.msebera.android.httpclient.Header r3 = r3.getFirstHeader(r0)
            if (r3 != 0) goto L24
            return r1
        L24:
            java.lang.String r3 = r3.getValue()
            java.lang.String r0 = "W/"
            boolean r3 = r3.startsWith(r0)
            if (r3 == 0) goto L33
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r3 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_AND_RANGE_ERROR
            return r3
        L33:
            return r1
    }

    private cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError requestHasWeekETagForPUTOrDELETEIfMatch(cz.msebera.android.httpclient.HttpRequest r4) {
            r3 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r4.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "PUT"
            boolean r1 = r1.equals(r0)
            r2 = 0
            if (r1 != 0) goto L1a
            java.lang.String r1 = "DELETE"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1a
            return r2
        L1a:
            java.lang.String r0 = "If-Match"
            cz.msebera.android.httpclient.Header r0 = r4.getFirstHeader(r0)
            java.lang.String r1 = "W/"
            if (r0 == 0) goto L31
            java.lang.String r4 = r0.getValue()
            boolean r4 = r4.startsWith(r1)
            if (r4 == 0) goto L47
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r4 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR
            return r4
        L31:
            java.lang.String r0 = "If-None-Match"
            cz.msebera.android.httpclient.Header r4 = r4.getFirstHeader(r0)
            if (r4 != 0) goto L3a
            return r2
        L3a:
            java.lang.String r4 = r4.getValue()
            boolean r4 = r4.startsWith(r1)
            if (r4 == 0) goto L47
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r4 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError.WEAK_ETAG_ON_PUTDELETE_METHOD_ERROR
            return r4
        L47:
            return r2
    }

    private boolean requestMustNotHaveEntity(cz.msebera.android.httpclient.HttpRequest r3) {
            r2 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r3.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "TRACE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L16
            boolean r3 = r3 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r3 == 0) goto L16
            r3 = 1
            goto L17
        L16:
            r3 = 0
        L17:
            return r3
    }

    private void stripOtherFreshnessDirectivesWithNoCache(cz.msebera.android.httpclient.HttpRequest r14) {
            r13 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "Cache-Control"
            cz.msebera.android.httpclient.Header[] r2 = r14.getHeaders(r1)
            int r3 = r2.length
            r4 = 0
            r5 = 0
            r6 = 0
        Lf:
            if (r5 >= r3) goto L41
            r7 = r2[r5]
            cz.msebera.android.httpclient.HeaderElement[] r7 = r7.getElements()
            int r8 = r7.length
            r9 = r6
            r6 = 0
        L1a:
            if (r6 >= r8) goto L3d
            r10 = r7[r6]
            java.util.List<java.lang.String> r11 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.disallowedWithNoCache
            java.lang.String r12 = r10.getName()
            boolean r11 = r11.contains(r12)
            if (r11 != 0) goto L2d
            r0.add(r10)
        L2d:
            java.lang.String r10 = r10.getName()
            java.lang.String r11 = "no-cache"
            boolean r10 = r11.equals(r10)
            if (r10 == 0) goto L3a
            r9 = 1
        L3a:
            int r6 = r6 + 1
            goto L1a
        L3d:
            int r5 = r5 + 1
            r6 = r9
            goto Lf
        L41:
            if (r6 != 0) goto L44
            return
        L44:
            r14.removeHeaders(r1)
            java.lang.String r0 = r13.buildHeaderFromElements(r0)
            r14.setHeader(r1, r0)
            return
    }

    private void verifyOPTIONSRequestWithBodyHasContentType(cz.msebera.android.httpclient.HttpRequest r3) {
            r2 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r3.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "OPTIONS"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L11
            return
        L11:
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r0 != 0) goto L16
            return
        L16:
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3
            r2.addContentTypeHeaderIfMissing(r3)
            return
    }

    private void verifyRequestWithExpectContinueFlagHas100continueHeader(cz.msebera.android.httpclient.HttpRequest r3) {
            r2 = this;
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r0 == 0) goto L1b
            r0 = r3
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r0 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r0
            boolean r1 = r0.expectContinue()
            if (r1 == 0) goto L17
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            if (r0 == 0) goto L17
            r2.add100ContinueHeaderIfMissing(r3)
            goto L1e
        L17:
            r2.remove100ContinueHeaderIfExists(r3)
            goto L1e
        L1b:
            r2.remove100ContinueHeaderIfExists(r3)
        L1e:
            return
    }

    public cz.msebera.android.httpclient.HttpResponse getErrorForRequest(cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r5) {
            r4 = this;
            int[] r0 = cz.msebera.android.httpclient.impl.client.cache.RequestProtocolCompliance.1.$SwitchMap$cz$msebera$android$httpclient$impl$client$cache$RequestProtocolError
            int r5 = r5.ordinal()
            r5 = r0[r5]
            r0 = 1
            if (r5 == r0) goto L4b
            r0 = 2
            r1 = 400(0x190, float:5.6E-43)
            if (r5 == r0) goto L3c
            r0 = 3
            if (r5 == r0) goto L2d
            r0 = 4
            if (r5 != r0) goto L25
            cz.msebera.android.httpclient.message.BasicHttpResponse r5 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            java.lang.String r3 = "No-Cache directive MUST NOT include a field name"
            r0.<init>(r2, r1, r3)
            r5.<init>(r0)
            return r5
        L25:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "The request was compliant, therefore no error can be generated for it."
            r5.<init>(r0)
            throw r5
        L2d:
            cz.msebera.android.httpclient.message.BasicHttpResponse r5 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            java.lang.String r3 = "Weak eTag not compatible with PUT or DELETE requests"
            r0.<init>(r2, r1, r3)
            r5.<init>(r0)
            return r5
        L3c:
            cz.msebera.android.httpclient.message.BasicHttpResponse r5 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            cz.msebera.android.httpclient.HttpVersion r2 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            java.lang.String r3 = "Weak eTag not compatible with byte range"
            r0.<init>(r2, r1, r3)
            r5.<init>(r0)
            return r5
        L4b:
            cz.msebera.android.httpclient.message.BasicHttpResponse r5 = new cz.msebera.android.httpclient.message.BasicHttpResponse
            cz.msebera.android.httpclient.message.BasicStatusLine r0 = new cz.msebera.android.httpclient.message.BasicStatusLine
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r2 = 411(0x19b, float:5.76E-43)
            java.lang.String r3 = ""
            r0.<init>(r1, r2, r3)
            r5.<init>(r0)
            return r5
    }

    public void makeRequestCompliant(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3) throws cz.msebera.android.httpclient.client.ClientProtocolException {
            r2 = this;
            boolean r0 = r2.requestMustNotHaveEntity(r3)
            if (r0 == 0) goto Ld
            r0 = r3
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r0 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r0
            r1 = 0
            r0.setEntity(r1)
        Ld:
            r2.verifyRequestWithExpectContinueFlagHas100continueHeader(r3)
            r2.verifyOPTIONSRequestWithBodyHasContentType(r3)
            r2.decrementOPTIONSMaxForwardsIfGreaterThen0(r3)
            r2.stripOtherFreshnessDirectivesWithNoCache(r3)
            boolean r0 = r2.requestVersionIsTooLow(r3)
            if (r0 != 0) goto L25
            boolean r0 = r2.requestMinorVersionIsTooHighMajorVersionsMatch(r3)
            if (r0 == 0) goto L2a
        L25:
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r3.setProtocolVersion(r0)
        L2a:
            return
    }

    public java.util.List<cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError> requestIsFatallyNonCompliant(cz.msebera.android.httpclient.HttpRequest r3) {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = r2.requestHasWeakETagAndRange(r3)
            if (r1 == 0) goto Le
            r0.add(r1)
        Le:
            boolean r1 = r2.weakETagOnPutDeleteAllowed
            if (r1 != 0) goto L1b
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r1 = r2.requestHasWeekETagForPUTOrDELETEIfMatch(r3)
            if (r1 == 0) goto L1b
            r0.add(r1)
        L1b:
            cz.msebera.android.httpclient.impl.client.cache.RequestProtocolError r3 = r2.requestContainsNoCacheDirectiveWithFieldName(r3)
            if (r3 == 0) goto L24
            r0.add(r3)
        L24:
            return r0
    }

    protected boolean requestMinorVersionIsTooHighMajorVersionsMatch(cz.msebera.android.httpclient.HttpRequest r4) {
            r3 = this;
            cz.msebera.android.httpclient.ProtocolVersion r4 = r4.getProtocolVersion()
            int r0 = r4.getMajor()
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r1 = r1.getMajor()
            r2 = 0
            if (r0 == r1) goto L12
            return r2
        L12:
            int r4 = r4.getMinor()
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r0 = r0.getMinor()
            if (r4 <= r0) goto L20
            r4 = 1
            return r4
        L20:
            return r2
    }

    protected boolean requestVersionIsTooLow(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r2 = r2.getProtocolVersion()
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r2 = r2.compareToVersion(r0)
            if (r2 >= 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }
}
