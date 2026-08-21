package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class HttpService {
    private volatile cz.msebera.android.httpclient.ConnectionReuseStrategy connStrategy;
    private volatile cz.msebera.android.httpclient.protocol.HttpExpectationVerifier expectationVerifier;
    private volatile cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper handlerMapper;
    private volatile cz.msebera.android.httpclient.params.HttpParams params;
    private volatile cz.msebera.android.httpclient.protocol.HttpProcessor processor;
    private volatile cz.msebera.android.httpclient.HttpResponseFactory responseFactory;

    @java.lang.Deprecated
    private static class HttpRequestHandlerResolverAdapter implements cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper {
        private final cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver resolver;

        public HttpRequestHandlerResolverAdapter(cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver r1) {
                r0 = this;
                r0.<init>()
                r0.resolver = r1
                return
        }

        @Override
        public cz.msebera.android.httpclient.protocol.HttpRequestHandler lookup(cz.msebera.android.httpclient.HttpRequest r2) {
                r1 = this;
                cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver r0 = r1.resolver
                cz.msebera.android.httpclient.RequestLine r2 = r2.getRequestLine()
                java.lang.String r2 = r2.getUri()
                cz.msebera.android.httpclient.protocol.HttpRequestHandler r2 = r0.lookup(r2)
                return r2
        }
    }

    @java.lang.Deprecated
    public HttpService(cz.msebera.android.httpclient.protocol.HttpProcessor r2, cz.msebera.android.httpclient.ConnectionReuseStrategy r3, cz.msebera.android.httpclient.HttpResponseFactory r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.params = r0
            r1.processor = r0
            r1.handlerMapper = r0
            r1.connStrategy = r0
            r1.responseFactory = r0
            r1.expectationVerifier = r0
            r1.setHttpProcessor(r2)
            r1.setConnReuseStrategy(r3)
            r1.setResponseFactory(r4)
            return
    }

    public HttpService(cz.msebera.android.httpclient.protocol.HttpProcessor r7, cz.msebera.android.httpclient.ConnectionReuseStrategy r8, cz.msebera.android.httpclient.HttpResponseFactory r9, cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public HttpService(cz.msebera.android.httpclient.protocol.HttpProcessor r2, cz.msebera.android.httpclient.ConnectionReuseStrategy r3, cz.msebera.android.httpclient.HttpResponseFactory r4, cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r5, cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.params = r0
            r1.processor = r0
            r1.handlerMapper = r0
            r1.connStrategy = r0
            r1.responseFactory = r0
            r1.expectationVerifier = r0
            java.lang.String r0 = "HTTP processor"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.protocol.HttpProcessor r2 = (cz.msebera.android.httpclient.protocol.HttpProcessor) r2
            r1.processor = r2
            if (r3 == 0) goto L1d
            goto L1f
        L1d:
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r3 = cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy.INSTANCE
        L1f:
            r1.connStrategy = r3
            if (r4 == 0) goto L24
            goto L26
        L24:
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory r4 = cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory.INSTANCE
        L26:
            r1.responseFactory = r4
            r1.handlerMapper = r5
            r1.expectationVerifier = r6
            return
    }

    @java.lang.Deprecated
    public HttpService(cz.msebera.android.httpclient.protocol.HttpProcessor r7, cz.msebera.android.httpclient.ConnectionReuseStrategy r8, cz.msebera.android.httpclient.HttpResponseFactory r9, cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver r10, cz.msebera.android.httpclient.params.HttpParams r11) {
            r6 = this;
            cz.msebera.android.httpclient.protocol.HttpService$HttpRequestHandlerResolverAdapter r4 = new cz.msebera.android.httpclient.protocol.HttpService$HttpRequestHandlerResolverAdapter
            r4.<init>(r10)
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            r6.params = r11
            return
    }

    @java.lang.Deprecated
    public HttpService(cz.msebera.android.httpclient.protocol.HttpProcessor r7, cz.msebera.android.httpclient.ConnectionReuseStrategy r8, cz.msebera.android.httpclient.HttpResponseFactory r9, cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver r10, cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r11, cz.msebera.android.httpclient.params.HttpParams r12) {
            r6 = this;
            cz.msebera.android.httpclient.protocol.HttpService$HttpRequestHandlerResolverAdapter r4 = new cz.msebera.android.httpclient.protocol.HttpService$HttpRequestHandlerResolverAdapter
            r4.<init>(r10)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            r6.params = r12
            return
    }

    public HttpService(cz.msebera.android.httpclient.protocol.HttpProcessor r7, cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r8) {
            r6 = this;
            r2 = 0
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private boolean canResponseHaveBody(cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.HttpResponse r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L14
            cz.msebera.android.httpclient.RequestLine r3 = r3.getRequestLine()
            java.lang.String r3 = r3.getMethod()
            java.lang.String r1 = "HEAD"
            boolean r3 = r1.equalsIgnoreCase(r3)
            if (r3 == 0) goto L14
            return r0
        L14:
            cz.msebera.android.httpclient.StatusLine r3 = r4.getStatusLine()
            int r3 = r3.getStatusCode()
            r4 = 200(0xc8, float:2.8E-43)
            if (r3 < r4) goto L2d
            r4 = 204(0xcc, float:2.86E-43)
            if (r3 == r4) goto L2d
            r4 = 304(0x130, float:4.26E-43)
            if (r3 == r4) goto L2d
            r4 = 205(0xcd, float:2.87E-43)
            if (r3 == r4) goto L2d
            r0 = 1
        L2d:
            return r0
    }

    protected void doService(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r0 = r1.handlerMapper
            if (r0 == 0) goto Lb
            cz.msebera.android.httpclient.protocol.HttpRequestHandlerMapper r0 = r1.handlerMapper
            cz.msebera.android.httpclient.protocol.HttpRequestHandler r0 = r0.lookup(r2)
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L12
            r0.handle(r2, r3, r4)
            goto L17
        L12:
            r2 = 501(0x1f5, float:7.02E-43)
            r3.setStatusCode(r2)
        L17:
            return
    }

    @java.lang.Deprecated
    public cz.msebera.android.httpclient.params.HttpParams getParams() {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            return r0
    }

    protected void handleException(cz.msebera.android.httpclient.HttpException r2, cz.msebera.android.httpclient.HttpResponse r3) {
            r1 = this;
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.MethodNotSupportedException
            if (r0 == 0) goto La
            r0 = 501(0x1f5, float:7.02E-43)
            r3.setStatusCode(r0)
            goto L23
        La:
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.UnsupportedHttpVersionException
            if (r0 == 0) goto L14
            r0 = 505(0x1f9, float:7.08E-43)
            r3.setStatusCode(r0)
            goto L23
        L14:
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.ProtocolException
            if (r0 == 0) goto L1e
            r0 = 400(0x190, float:5.6E-43)
            r3.setStatusCode(r0)
            goto L23
        L1e:
            r0 = 500(0x1f4, float:7.0E-43)
            r3.setStatusCode(r0)
        L23:
            java.lang.String r0 = r2.getMessage()
            if (r0 != 0) goto L2d
            java.lang.String r0 = r2.toString()
        L2d:
            byte[] r2 = cz.msebera.android.httpclient.util.EncodingUtils.getAsciiBytes(r0)
            cz.msebera.android.httpclient.entity.ByteArrayEntity r0 = new cz.msebera.android.httpclient.entity.ByteArrayEntity
            r0.<init>(r2)
            java.lang.String r2 = "text/plain; charset=US-ASCII"
            r0.setContentType(r2)
            r3.setEntity(r0)
            return
    }

    public void handleRequest(cz.msebera.android.httpclient.HttpServerConnection r9, cz.msebera.android.httpclient.protocol.HttpContext r10) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r8 = this;
            java.lang.String r0 = "http.connection"
            r10.setAttribute(r0, r9)
            r0 = 500(0x1f4, float:7.0E-43)
            r1 = 0
            cz.msebera.android.httpclient.HttpRequest r2 = r9.receiveRequestHeader()     // Catch: cz.msebera.android.httpclient.HttpException -> L84
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r4 = 200(0xc8, float:2.8E-43)
            if (r3 == 0) goto L5b
            r3 = r2
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            boolean r3 = r3.expectContinue()     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            if (r3 == 0) goto L55
            cz.msebera.android.httpclient.HttpResponseFactory r3 = r8.responseFactory     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.HttpVersion r5 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r6 = 100
            cz.msebera.android.httpclient.HttpResponse r3 = r3.newHttpResponse(r5, r6, r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r5 = r8.expectationVerifier     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            if (r5 == 0) goto L3c
            cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r5 = r8.expectationVerifier     // Catch: cz.msebera.android.httpclient.HttpException -> L2f
            r5.verify(r2, r3, r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L2f
            goto L3c
        L2f:
            r3 = move-exception
            cz.msebera.android.httpclient.HttpResponseFactory r5 = r8.responseFactory     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.HttpVersion r6 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.HttpResponse r5 = r5.newHttpResponse(r6, r0, r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r8.handleException(r3, r5)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r3 = r5
        L3c:
            cz.msebera.android.httpclient.StatusLine r5 = r3.getStatusLine()     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            int r5 = r5.getStatusCode()     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            if (r5 >= r4) goto L53
            r9.sendResponseHeader(r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r9.flush()     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r3 = r2
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r9.receiveRequestEntity(r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            goto L5b
        L53:
            r1 = r3
            goto L5b
        L55:
            r3 = r2
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r9.receiveRequestEntity(r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
        L5b:
            java.lang.String r3 = "http.request"
            r10.setAttribute(r3, r2)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            if (r1 != 0) goto L72
            cz.msebera.android.httpclient.HttpResponseFactory r1 = r8.responseFactory     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.HttpVersion r3 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.HttpResponse r1 = r1.newHttpResponse(r3, r4, r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.protocol.HttpProcessor r3 = r8.processor     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r3.process(r2, r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            r8.doService(r2, r1, r10)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
        L72:
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            if (r3 == 0) goto L80
            r3 = r2
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r3     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.HttpEntity r3 = r3.getEntity()     // Catch: cz.msebera.android.httpclient.HttpException -> L82
            cz.msebera.android.httpclient.util.EntityUtils.consume(r3)     // Catch: cz.msebera.android.httpclient.HttpException -> L82
        L80:
            r0 = r1
            goto L93
        L82:
            r1 = move-exception
            goto L88
        L84:
            r2 = move-exception
            r7 = r2
            r2 = r1
            r1 = r7
        L88:
            cz.msebera.android.httpclient.HttpResponseFactory r3 = r8.responseFactory
            cz.msebera.android.httpclient.HttpVersion r4 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            cz.msebera.android.httpclient.HttpResponse r0 = r3.newHttpResponse(r4, r0, r10)
            r8.handleException(r1, r0)
        L93:
            java.lang.String r1 = "http.response"
            r10.setAttribute(r1, r0)
            cz.msebera.android.httpclient.protocol.HttpProcessor r1 = r8.processor
            r1.process(r0, r10)
            r9.sendResponseHeader(r0)
            boolean r1 = r8.canResponseHaveBody(r2, r0)
            if (r1 == 0) goto La9
            r9.sendResponseEntity(r0)
        La9:
            r9.flush()
            cz.msebera.android.httpclient.ConnectionReuseStrategy r1 = r8.connStrategy
            boolean r10 = r1.keepAlive(r0, r10)
            if (r10 != 0) goto Lb7
            r9.close()
        Lb7:
            return
    }

    @java.lang.Deprecated
    public void setConnReuseStrategy(cz.msebera.android.httpclient.ConnectionReuseStrategy r2) {
            r1 = this;
            java.lang.String r0 = "Connection reuse strategy"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.connStrategy = r2
            return
    }

    @java.lang.Deprecated
    public void setExpectationVerifier(cz.msebera.android.httpclient.protocol.HttpExpectationVerifier r1) {
            r0 = this;
            r0.expectationVerifier = r1
            return
    }

    @java.lang.Deprecated
    public void setHandlerResolver(cz.msebera.android.httpclient.protocol.HttpRequestHandlerResolver r2) {
            r1 = this;
            cz.msebera.android.httpclient.protocol.HttpService$HttpRequestHandlerResolverAdapter r0 = new cz.msebera.android.httpclient.protocol.HttpService$HttpRequestHandlerResolverAdapter
            r0.<init>(r2)
            r1.handlerMapper = r0
            return
    }

    @java.lang.Deprecated
    public void setHttpProcessor(cz.msebera.android.httpclient.protocol.HttpProcessor r2) {
            r1 = this;
            java.lang.String r0 = "HTTP processor"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.processor = r2
            return
    }

    @java.lang.Deprecated
    public void setParams(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.params = r1
            return
    }

    @java.lang.Deprecated
    public void setResponseFactory(cz.msebera.android.httpclient.HttpResponseFactory r2) {
            r1 = this;
            java.lang.String r0 = "Response factory"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.responseFactory = r2
            return
    }
}
