package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class HttpRequestExecutor {
    public static final int DEFAULT_WAIT_FOR_CONTINUE = 3000;
    private final int waitForContinue;

    public HttpRequestExecutor() {
            r1 = this;
            r0 = 3000(0xbb8, float:4.204E-42)
            r1.<init>(r0)
            return
    }

    public HttpRequestExecutor(int r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Wait for continue time"
            int r2 = cz.msebera.android.httpclient.util.Args.positive(r2, r0)
            r1.waitForContinue = r2
            return
    }

    private static void closeConnection(cz.msebera.android.httpclient.HttpClientConnection r0) {
            r0.close()     // Catch: java.io.IOException -> L3
        L3:
            return
    }

    protected boolean canResponseHaveBody(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
            java.lang.String r2 = r2.getMethod()
            java.lang.String r0 = "HEAD"
            boolean r2 = r0.equalsIgnoreCase(r2)
            r0 = 0
            if (r2 == 0) goto L12
            return r0
        L12:
            cz.msebera.android.httpclient.StatusLine r2 = r3.getStatusLine()
            int r2 = r2.getStatusCode()
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 < r3) goto L2b
            r3 = 204(0xcc, float:2.86E-43)
            if (r2 == r3) goto L2b
            r3 = 304(0x130, float:4.26E-43)
            if (r2 == r3) goto L2b
            r3 = 205(0xcd, float:2.87E-43)
            if (r2 == r3) goto L2b
            r0 = 1
        L2b:
            return r0
    }

    protected cz.msebera.android.httpclient.HttpResponse doReceiveResponse(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.HttpClientConnection r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r2 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Client connection"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            r5 = 0
            r0 = 0
        L11:
            if (r5 == 0) goto L19
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 >= r1) goto L18
            goto L19
        L18:
            return r5
        L19:
            cz.msebera.android.httpclient.HttpResponse r5 = r4.receiveResponseHeader()
            boolean r0 = r2.canResponseHaveBody(r3, r5)
            if (r0 == 0) goto L26
            r4.receiveResponseEntity(r5)
        L26:
            cz.msebera.android.httpclient.StatusLine r0 = r5.getStatusLine()
            int r0 = r0.getStatusCode()
            goto L11
    }

    protected cz.msebera.android.httpclient.HttpResponse doSendRequest(cz.msebera.android.httpclient.HttpRequest r7, cz.msebera.android.httpclient.HttpClientConnection r8, cz.msebera.android.httpclient.protocol.HttpContext r9) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r6 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "Client connection"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r0 = "http.connection"
            r9.setAttribute(r0, r8)
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            java.lang.String r1 = "http.request_sent"
            r9.setAttribute(r1, r0)
            r8.sendRequestHeader(r7)
            boolean r0 = r7 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            r2 = 0
            if (r0 == 0) goto L88
            r0 = 1
            cz.msebera.android.httpclient.RequestLine r3 = r7.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r3 = r3.getProtocolVersion()
            r4 = r7
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r4 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r4
            boolean r5 = r4.expectContinue()
            if (r5 == 0) goto L83
            cz.msebera.android.httpclient.HttpVersion r5 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r3 = r3.lessEquals(r5)
            if (r3 != 0) goto L83
            r8.flush()
            int r3 = r6.waitForContinue
            boolean r3 = r8.isResponseAvailable(r3)
            if (r3 == 0) goto L83
            cz.msebera.android.httpclient.HttpResponse r3 = r8.receiveResponseHeader()
            boolean r7 = r6.canResponseHaveBody(r7, r3)
            if (r7 == 0) goto L55
            r8.receiveResponseEntity(r3)
        L55:
            cz.msebera.android.httpclient.StatusLine r7 = r3.getStatusLine()
            int r7 = r7.getStatusCode()
            r5 = 200(0xc8, float:2.8E-43)
            if (r7 >= r5) goto L81
            r5 = 100
            if (r7 != r5) goto L66
            goto L83
        L66:
            cz.msebera.android.httpclient.ProtocolException r7 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Unexpected response: "
            r8.append(r9)
            cz.msebera.android.httpclient.StatusLine r9 = r3.getStatusLine()
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L81:
            r0 = 0
            r2 = r3
        L83:
            if (r0 == 0) goto L88
            r8.sendRequestEntity(r4)
        L88:
            r8.flush()
            java.lang.Boolean r7 = java.lang.Boolean.TRUE
            r9.setAttribute(r1, r7)
            return r2
    }

    public cz.msebera.android.httpclient.HttpResponse execute(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpClientConnection r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r1 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Client connection"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.HttpResponse r0 = r1.doSendRequest(r2, r3, r4)     // Catch: java.lang.RuntimeException -> L1a cz.msebera.android.httpclient.HttpException -> L1f java.io.IOException -> L24
            if (r0 != 0) goto L19
            cz.msebera.android.httpclient.HttpResponse r0 = r1.doReceiveResponse(r2, r3, r4)     // Catch: java.lang.RuntimeException -> L1a cz.msebera.android.httpclient.HttpException -> L1f java.io.IOException -> L24
        L19:
            return r0
        L1a:
            r2 = move-exception
            closeConnection(r3)
            throw r2
        L1f:
            r2 = move-exception
            closeConnection(r3)
            throw r2
        L24:
            r2 = move-exception
            closeConnection(r3)
            throw r2
    }

    public void postProcess(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpProcessor r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP processor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "http.response"
            r4.setAttribute(r0, r2)
            r3.process(r2, r4)
            return
    }

    public void preProcess(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpProcessor r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "HTTP processor"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "http.request"
            r4.setAttribute(r0, r2)
            r3.process(r2, r4)
            return
    }
}
