package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DefaultBHttpServerConnection extends cz.msebera.android.httpclient.impl.BHttpConnectionBase implements cz.msebera.android.httpclient.HttpServerConnection {
    private final cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpRequest> requestParser;
    private final cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpResponse> responseWriter;

    public DefaultBHttpServerConnection(int r11) {
            r10 = this;
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r0 = r10
            r1 = r11
            r2 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public DefaultBHttpServerConnection(int r10, int r11, java.nio.charset.CharsetDecoder r12, java.nio.charset.CharsetEncoder r13, cz.msebera.android.httpclient.config.MessageConstraints r14, cz.msebera.android.httpclient.entity.ContentLengthStrategy r15, cz.msebera.android.httpclient.entity.ContentLengthStrategy r16, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpRequest> r17, cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpResponse> r18) {
            r9 = this;
            r8 = r9
            if (r15 == 0) goto L5
            r6 = r15
            goto L8
        L5:
            cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy r0 = cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy.INSTANCE
            r6 = r0
        L8:
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r7 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            if (r17 == 0) goto L18
            r0 = r17
            goto L1a
        L18:
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParserFactory r0 = cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParserFactory.INSTANCE
        L1a:
            cz.msebera.android.httpclient.io.SessionInputBuffer r1 = r9.getSessionInputBuffer()
            r2 = r14
            cz.msebera.android.httpclient.io.HttpMessageParser r0 = r0.create(r1, r14)
            r8.requestParser = r0
            if (r18 == 0) goto L2a
            r0 = r18
            goto L2c
        L2a:
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriterFactory r0 = cz.msebera.android.httpclient.impl.io.DefaultHttpResponseWriterFactory.INSTANCE
        L2c:
            cz.msebera.android.httpclient.io.SessionOutputBuffer r1 = r9.getSessionOutputBuffer()
            cz.msebera.android.httpclient.io.HttpMessageWriter r0 = r0.create(r1)
            r8.responseWriter = r0
            return
    }

    public DefaultBHttpServerConnection(int r11, java.nio.charset.CharsetDecoder r12, java.nio.charset.CharsetEncoder r13, cz.msebera.android.httpclient.config.MessageConstraints r14) {
            r10 = this;
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r0 = r10
            r1 = r11
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    @Override
    public void bind(java.net.Socket r1) throws java.io.IOException {
            r0 = this;
            super.bind(r1)
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r0 = this;
            r0.ensureOpen()
            r0.doFlush()
            return
    }

    protected void onRequestReceived(cz.msebera.android.httpclient.HttpRequest r1) {
            r0 = this;
            return
    }

    protected void onResponseSubmitted(cz.msebera.android.httpclient.HttpResponse r1) {
            r0 = this;
            return
    }

    @Override
    public void receiveRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureOpen()
            cz.msebera.android.httpclient.HttpEntity r0 = r1.prepareInput(r2)
            r2.setEntity(r0)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpRequest receiveRequestHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            r1.ensureOpen()
            cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpRequest> r0 = r1.requestParser
            cz.msebera.android.httpclient.HttpMessage r0 = r0.parse()
            cz.msebera.android.httpclient.HttpRequest r0 = (cz.msebera.android.httpclient.HttpRequest) r0
            r1.onRequestReceived(r0)
            r1.incrementRequestCount()
            return r0
    }

    @Override
    public void sendResponseEntity(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureOpen()
            cz.msebera.android.httpclient.HttpEntity r0 = r2.getEntity()
            if (r0 != 0) goto Lf
            return
        Lf:
            java.io.OutputStream r2 = r1.prepareOutput(r2)
            r0.writeTo(r2)
            r2.close()
            return
    }

    @Override
    public void sendResponseHeader(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureOpen()
            cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpResponse> r0 = r1.responseWriter
            r0.write(r2)
            r1.onResponseSubmitted(r2)
            cz.msebera.android.httpclient.StatusLine r2 = r2.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 < r0) goto L1f
            r1.incrementResponseCount()
        L1f:
            return
    }
}
