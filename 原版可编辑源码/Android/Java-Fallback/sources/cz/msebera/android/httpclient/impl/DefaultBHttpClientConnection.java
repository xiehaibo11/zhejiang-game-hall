package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DefaultBHttpClientConnection extends cz.msebera.android.httpclient.impl.BHttpConnectionBase implements cz.msebera.android.httpclient.HttpClientConnection {
    private final cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpRequest> requestWriter;
    private final cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpResponse> responseParser;

    public DefaultBHttpClientConnection(int r11) {
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

    public DefaultBHttpClientConnection(int r1, int r2, java.nio.charset.CharsetDecoder r3, java.nio.charset.CharsetEncoder r4, cz.msebera.android.httpclient.config.MessageConstraints r5, cz.msebera.android.httpclient.entity.ContentLengthStrategy r6, cz.msebera.android.httpclient.entity.ContentLengthStrategy r7, cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r8, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r9) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            if (r8 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory r8 = cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory.INSTANCE
        L8:
            cz.msebera.android.httpclient.io.SessionOutputBuffer r1 = r0.getSessionOutputBuffer()
            cz.msebera.android.httpclient.io.HttpMessageWriter r1 = r8.create(r1)
            r0.requestWriter = r1
            if (r9 == 0) goto L15
            goto L17
        L15:
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParserFactory r9 = cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParserFactory.INSTANCE
        L17:
            cz.msebera.android.httpclient.io.SessionInputBuffer r1 = r0.getSessionInputBuffer()
            cz.msebera.android.httpclient.io.HttpMessageParser r1 = r9.create(r1, r5)
            r0.responseParser = r1
            return
    }

    public DefaultBHttpClientConnection(int r11, java.nio.charset.CharsetDecoder r12, java.nio.charset.CharsetEncoder r13, cz.msebera.android.httpclient.config.MessageConstraints r14) {
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

    @Override
    public boolean isResponseAvailable(int r1) throws java.io.IOException {
            r0 = this;
            r0.ensureOpen()
            boolean r1 = r0.awaitInput(r1)     // Catch: java.net.SocketTimeoutException -> L8
            return r1
        L8:
            r1 = 0
            return r1
    }

    protected void onRequestSubmitted(cz.msebera.android.httpclient.HttpRequest r1) {
            r0 = this;
            return
    }

    protected void onResponseReceived(cz.msebera.android.httpclient.HttpResponse r1) {
            r0 = this;
            return
    }

    @Override
    public void receiveResponseEntity(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureOpen()
            cz.msebera.android.httpclient.HttpEntity r0 = r1.prepareInput(r2)
            r2.setEntity(r0)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpResponse receiveResponseHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r3 = this;
            r3.ensureOpen()
            cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpResponse> r0 = r3.responseParser
            cz.msebera.android.httpclient.HttpMessage r0 = r0.parse()
            cz.msebera.android.httpclient.HttpResponse r0 = (cz.msebera.android.httpclient.HttpResponse) r0
            r3.onResponseReceived(r0)
            cz.msebera.android.httpclient.StatusLine r1 = r0.getStatusLine()
            int r1 = r1.getStatusCode()
            r2 = 200(0xc8, float:2.8E-43)
            if (r1 < r2) goto L1d
            r3.incrementResponseCount()
        L1d:
            return r0
    }

    @Override
    public void sendRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP request"
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
    public void sendRequestHeader(cz.msebera.android.httpclient.HttpRequest r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureOpen()
            cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpRequest> r0 = r1.requestWriter
            r0.write(r2)
            r1.onRequestSubmitted(r2)
            r1.incrementRequestCount()
            return
    }
}
