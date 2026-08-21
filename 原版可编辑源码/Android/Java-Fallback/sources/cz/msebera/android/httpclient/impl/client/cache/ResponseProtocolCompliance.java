package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class ResponseProtocolCompliance {
    private static final java.lang.String UNEXPECTED_100_CONTINUE = "The incoming request did not contain a 100-continue header, but the response was a Status 100, continue.";
    private static final java.lang.String UNEXPECTED_PARTIAL_CONTENT = "partial content was returned for a request that did not ask for it";

    ResponseProtocolCompliance() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean backendResponseMustNotHaveBody(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r0 = "HEAD"
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L37
            cz.msebera.android.httpclient.StatusLine r2 = r3.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 204(0xcc, float:2.86E-43)
            if (r2 == r0) goto L37
            cz.msebera.android.httpclient.StatusLine r2 = r3.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 205(0xcd, float:2.87E-43)
            if (r2 == r0) goto L37
            cz.msebera.android.httpclient.StatusLine r2 = r3.getStatusLine()
            int r2 = r2.getStatusCode()
            r3 = 304(0x130, float:4.26E-43)
            if (r2 != r3) goto L35
            goto L37
        L35:
            r2 = 0
            goto L38
        L37:
            r2 = 1
        L38:
            return r2
    }

    private void consumeBody(cz.msebera.android.httpclient.HttpResponse r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.HttpEntity r1 = r1.getEntity()
            if (r1 == 0) goto L9
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.consume(r1)
        L9:
            return
    }

    private void ensure200ForOPTIONSRequestWithNoBodyHasContentLengthZero(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r0 = "OPTIONS"
            boolean r2 = r2.equalsIgnoreCase(r0)
            if (r2 != 0) goto L11
            return
        L11:
            cz.msebera.android.httpclient.StatusLine r2 = r3.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 == r0) goto L1e
            return
        L1e:
            java.lang.String r2 = "Content-Length"
            cz.msebera.android.httpclient.Header r0 = r3.getFirstHeader(r2)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "0"
            r3.addHeader(r2, r0)
        L2b:
            return
    }

    private void ensure206ContainsDateHeader(cz.msebera.android.httpclient.HttpResponse r3) {
            r2 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r1 = r3.getFirstHeader(r0)
            if (r1 != 0) goto L14
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r1 = cz.msebera.android.httpclient.client.utils.DateUtils.formatDate(r1)
            r3.addHeader(r0, r1)
        L14:
            return
    }

    private void ensure304DoesNotContainExtraEntityHeaders(cz.msebera.android.httpclient.HttpResponse r9) {
            r8 = this;
            java.lang.String r0 = "Allow"
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r2 = "Content-Language"
            java.lang.String r3 = "Content-Length"
            java.lang.String r4 = "Content-MD5"
            java.lang.String r5 = "Content-Range"
            java.lang.String r6 = "Content-Type"
            java.lang.String r7 = "Last-Modified"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7}
            cz.msebera.android.httpclient.StatusLine r1 = r9.getStatusLine()
            int r1 = r1.getStatusCode()
            r2 = 304(0x130, float:4.26E-43)
            if (r1 != r2) goto L2c
            int r1 = r0.length
            r2 = 0
        L22:
            if (r2 >= r1) goto L2c
            r3 = r0[r2]
            r9.removeHeaders(r3)
            int r2 = r2 + 1
            goto L22
        L2c:
            return
    }

    private void ensurePartialContentIsNotSentToAClientThatDidNotRequestIt(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Range"
            cz.msebera.android.httpclient.Header r2 = r2.getFirstHeader(r0)
            if (r2 != 0) goto L20
            cz.msebera.android.httpclient.StatusLine r2 = r3.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 206(0xce, float:2.89E-43)
            if (r2 == r0) goto L15
            goto L20
        L15:
            r1.consumeBody(r3)
            cz.msebera.android.httpclient.client.ClientProtocolException r2 = new cz.msebera.android.httpclient.client.ClientProtocolException
            java.lang.String r3 = "partial content was returned for a request that did not ask for it"
            r2.<init>(r3)
            throw r2
        L20:
            return
    }

    private void identityIsNotUsedInContentEncoding(cz.msebera.android.httpclient.HttpResponse r17) {
            r16 = this;
            r0 = r17
            java.lang.String r1 = "Content-Encoding"
            cz.msebera.android.httpclient.Header[] r2 = r0.getHeaders(r1)
            if (r2 == 0) goto L7f
            int r3 = r2.length
            if (r3 != 0) goto Lf
            goto L7f
        Lf:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            int r4 = r2.length
            r6 = 0
            r7 = 0
        L17:
            if (r6 >= r4) goto L65
            r8 = r2[r6]
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            cz.msebera.android.httpclient.HeaderElement[] r8 = r8.getElements()
            int r10 = r8.length
            r11 = 1
            r12 = r7
            r7 = 0
            r13 = 1
        L29:
            if (r7 >= r10) goto L4d
            r14 = r8[r7]
            java.lang.String r15 = r14.getName()
            java.lang.String r5 = "identity"
            boolean r5 = r5.equalsIgnoreCase(r15)
            if (r5 == 0) goto L3b
            r12 = 1
            goto L4a
        L3b:
            if (r13 != 0) goto L42
            java.lang.String r5 = ","
            r9.append(r5)
        L42:
            java.lang.String r5 = r14.toString()
            r9.append(r5)
            r13 = 0
        L4a:
            int r7 = r7 + 1
            goto L29
        L4d:
            java.lang.String r5 = r9.toString()
            java.lang.String r7 = ""
            boolean r7 = r7.equals(r5)
            if (r7 != 0) goto L61
            cz.msebera.android.httpclient.message.BasicHeader r7 = new cz.msebera.android.httpclient.message.BasicHeader
            r7.<init>(r1, r5)
            r3.add(r7)
        L61:
            int r6 = r6 + 1
            r7 = r12
            goto L17
        L65:
            if (r7 != 0) goto L68
            return
        L68:
            r0.removeHeaders(r1)
            java.util.Iterator r1 = r3.iterator()
        L6f:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L7f
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.Header r2 = (cz.msebera.android.httpclient.Header) r2
            r0.addHeader(r2)
            goto L6f
        L7f:
            return
    }

    private void removeResponseTransferEncoding(cz.msebera.android.httpclient.HttpResponse r2) {
            r1 = this;
            java.lang.String r0 = "TE"
            r2.removeHeaders(r0)
            java.lang.String r0 = "Transfer-Encoding"
            r2.removeHeaders(r0)
            return
    }

    private void requestDidNotExpect100ContinueButResponseIsOne(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r3, cz.msebera.android.httpclient.HttpResponse r4) throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.StatusLine r0 = r4.getStatusLine()
            int r0 = r0.getStatusCode()
            r1 = 100
            if (r0 == r1) goto Ld
            return
        Ld:
            cz.msebera.android.httpclient.HttpRequest r3 = r3.getOriginal()
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r0 == 0) goto L1e
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3
            boolean r3 = r3.expectContinue()
            if (r3 == 0) goto L1e
            return
        L1e:
            r2.consumeBody(r4)
            cz.msebera.android.httpclient.client.ClientProtocolException r3 = new cz.msebera.android.httpclient.client.ClientProtocolException
            java.lang.String r4 = "The incoming request did not contain a 100-continue header, but the response was a Status 100, continue."
            r3.<init>(r4)
            throw r3
    }

    private void transferEncodingIsNotReturnedTo1_0Client(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            cz.msebera.android.httpclient.HttpRequest r2 = r2.getOriginal()
            cz.msebera.android.httpclient.ProtocolVersion r2 = r2.getProtocolVersion()
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            int r2 = r2.compareToVersion(r0)
            if (r2 < 0) goto L11
            return
        L11:
            r1.removeResponseTransferEncoding(r3)
            return
    }

    private void warningsWithNonMatchingWarnDatesAreRemoved(cz.msebera.android.httpclient.HttpResponse r14) {
            r13 = this;
            java.lang.String r0 = "Date"
            cz.msebera.android.httpclient.Header r0 = r14.getFirstHeader(r0)
            java.lang.String r0 = r0.getValue()
            java.util.Date r0 = cz.msebera.android.httpclient.client.utils.DateUtils.parseDate(r0)
            if (r0 != 0) goto L11
            return
        L11:
            java.lang.String r1 = "Warning"
            cz.msebera.android.httpclient.Header[] r2 = r14.getHeaders(r1)
            if (r2 == 0) goto L70
            int r3 = r2.length
            if (r3 != 0) goto L1d
            goto L70
        L1d:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            int r4 = r2.length
            r5 = 0
            r6 = 0
            r7 = 0
        L26:
            if (r6 >= r4) goto L57
            r8 = r2[r6]
            cz.msebera.android.httpclient.impl.client.cache.WarningValue[] r8 = cz.msebera.android.httpclient.impl.client.cache.WarningValue.getWarningValues(r8)
            int r9 = r8.length
            r10 = r7
            r7 = 0
        L31:
            if (r7 >= r9) goto L53
            r11 = r8[r7]
            java.util.Date r12 = r11.getWarnDate()
            if (r12 == 0) goto L44
            boolean r12 = r12.equals(r0)
            if (r12 == 0) goto L42
            goto L44
        L42:
            r10 = 1
            goto L50
        L44:
            cz.msebera.android.httpclient.message.BasicHeader r12 = new cz.msebera.android.httpclient.message.BasicHeader
            java.lang.String r11 = r11.toString()
            r12.<init>(r1, r11)
            r3.add(r12)
        L50:
            int r7 = r7 + 1
            goto L31
        L53:
            int r6 = r6 + 1
            r7 = r10
            goto L26
        L57:
            if (r7 == 0) goto L70
            r14.removeHeaders(r1)
            java.util.Iterator r0 = r3.iterator()
        L60:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L70
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.Header r1 = (cz.msebera.android.httpclient.Header) r1
            r14.addHeader(r1)
            goto L60
        L70:
            return
    }

    public void ensureProtocolCompliance(cz.msebera.android.httpclient.client.methods.HttpRequestWrapper r2, cz.msebera.android.httpclient.HttpResponse r3) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.backendResponseMustNotHaveBody(r2, r3)
            if (r0 == 0) goto Ld
            r1.consumeBody(r3)
            r0 = 0
            r3.setEntity(r0)
        Ld:
            r1.requestDidNotExpect100ContinueButResponseIsOne(r2, r3)
            r1.transferEncodingIsNotReturnedTo1_0Client(r2, r3)
            r1.ensurePartialContentIsNotSentToAClientThatDidNotRequestIt(r2, r3)
            r1.ensure200ForOPTIONSRequestWithNoBodyHasContentLengthZero(r2, r3)
            r1.ensure206ContainsDateHeader(r3)
            r1.ensure304DoesNotContainExtraEntityHeaders(r3)
            r1.identityIsNotUsedInContentEncoding(r3)
            r1.warningsWithNonMatchingWarnDatesAreRemoved(r3)
            return
    }
}
