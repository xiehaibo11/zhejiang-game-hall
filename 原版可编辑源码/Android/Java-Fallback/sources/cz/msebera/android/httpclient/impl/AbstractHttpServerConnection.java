package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public abstract class AbstractHttpServerConnection implements cz.msebera.android.httpclient.HttpServerConnection {
    private final cz.msebera.android.httpclient.impl.entity.EntityDeserializer entitydeserializer;
    private final cz.msebera.android.httpclient.impl.entity.EntitySerializer entityserializer;
    private cz.msebera.android.httpclient.io.EofSensor eofSensor;
    private cz.msebera.android.httpclient.io.SessionInputBuffer inbuffer;
    private cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl metrics;
    private cz.msebera.android.httpclient.io.SessionOutputBuffer outbuffer;
    private cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpRequest> requestParser;
    private cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpResponse> responseWriter;

    public AbstractHttpServerConnection() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.inbuffer = r0
            r1.outbuffer = r0
            r1.eofSensor = r0
            r1.requestParser = r0
            r1.responseWriter = r0
            r1.metrics = r0
            cz.msebera.android.httpclient.impl.entity.EntitySerializer r0 = r1.createEntitySerializer()
            r1.entityserializer = r0
            cz.msebera.android.httpclient.impl.entity.EntityDeserializer r0 = r1.createEntityDeserializer()
            r1.entitydeserializer = r0
            return
    }

    protected abstract void assertOpen() throws java.lang.IllegalStateException;

    protected cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl createConnectionMetrics(cz.msebera.android.httpclient.io.HttpTransportMetrics r2, cz.msebera.android.httpclient.io.HttpTransportMetrics r3) {
            r1 = this;
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r0 = new cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl
            r0.<init>(r2, r3)
            return r0
    }

    protected cz.msebera.android.httpclient.impl.entity.EntityDeserializer createEntityDeserializer() {
            r4 = this;
            cz.msebera.android.httpclient.impl.entity.EntityDeserializer r0 = new cz.msebera.android.httpclient.impl.entity.EntityDeserializer
            cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy r1 = new cz.msebera.android.httpclient.impl.entity.DisallowIdentityContentLengthStrategy
            cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy r2 = new cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy
            r3 = 0
            r2.<init>(r3)
            r1.<init>(r2)
            r0.<init>(r1)
            return r0
    }

    protected cz.msebera.android.httpclient.impl.entity.EntitySerializer createEntitySerializer() {
            r2 = this;
            cz.msebera.android.httpclient.impl.entity.EntitySerializer r0 = new cz.msebera.android.httpclient.impl.entity.EntitySerializer
            cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy r1 = new cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy
            r1.<init>()
            r0.<init>(r1)
            return r0
    }

    protected cz.msebera.android.httpclient.HttpRequestFactory createHttpRequestFactory() {
            r1 = this;
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory r0 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.INSTANCE
            return r0
    }

    protected cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpRequest> createRequestParser(cz.msebera.android.httpclient.io.SessionInputBuffer r3, cz.msebera.android.httpclient.HttpRequestFactory r4, cz.msebera.android.httpclient.params.HttpParams r5) {
            r2 = this;
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParser r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParser
            r1 = 0
            r0.<init>(r3, r1, r4, r5)
            return r0
    }

    protected cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpResponse> createResponseWriter(cz.msebera.android.httpclient.io.SessionOutputBuffer r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r2 = this;
            cz.msebera.android.httpclient.impl.io.HttpResponseWriter r0 = new cz.msebera.android.httpclient.impl.io.HttpResponseWriter
            r1 = 0
            r0.<init>(r3, r1, r4)
            return r0
    }

    protected void doFlush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.outbuffer
            r0.flush()
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r0 = this;
            r0.assertOpen()
            r0.doFlush()
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnectionMetrics getMetrics() {
            r1 = this;
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r0 = r1.metrics
            return r0
    }

    protected void init(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.io.SessionOutputBuffer r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r1 = this;
            java.lang.String r0 = "Input session buffer"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = (cz.msebera.android.httpclient.io.SessionInputBuffer) r0
            r1.inbuffer = r0
            java.lang.String r0 = "Output session buffer"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = (cz.msebera.android.httpclient.io.SessionOutputBuffer) r0
            r1.outbuffer = r0
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.io.EofSensor
            if (r0 == 0) goto L1d
            r0 = r2
            cz.msebera.android.httpclient.io.EofSensor r0 = (cz.msebera.android.httpclient.io.EofSensor) r0
            r1.eofSensor = r0
        L1d:
            cz.msebera.android.httpclient.HttpRequestFactory r0 = r1.createHttpRequestFactory()
            cz.msebera.android.httpclient.io.HttpMessageParser r0 = r1.createRequestParser(r2, r0, r4)
            r1.requestParser = r0
            cz.msebera.android.httpclient.io.HttpMessageWriter r4 = r1.createResponseWriter(r3, r4)
            r1.responseWriter = r4
            cz.msebera.android.httpclient.io.HttpTransportMetrics r2 = r2.getMetrics()
            cz.msebera.android.httpclient.io.HttpTransportMetrics r3 = r3.getMetrics()
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r2 = r1.createConnectionMetrics(r2, r3)
            r1.metrics = r2
            return
    }

    protected boolean isEof() {
            r1 = this;
            cz.msebera.android.httpclient.io.EofSensor r0 = r1.eofSensor
            if (r0 == 0) goto Lc
            boolean r0 = r0.isEof()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public boolean isStale() {
            r2 = this;
            boolean r0 = r2.isOpen()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r0 = r2.isEof()
            if (r0 == 0) goto Lf
            return r1
        Lf:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r2.inbuffer     // Catch: java.io.IOException -> L19
            r0.isDataAvailable(r1)     // Catch: java.io.IOException -> L19
            boolean r0 = r2.isEof()     // Catch: java.io.IOException -> L19
            return r0
        L19:
            return r1
    }

    @Override
    public void receiveRequestEntity(cz.msebera.android.httpclient.HttpEntityEnclosingRequest r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r2 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r2.assertOpen()
            cz.msebera.android.httpclient.impl.entity.EntityDeserializer r0 = r2.entitydeserializer
            cz.msebera.android.httpclient.io.SessionInputBuffer r1 = r2.inbuffer
            cz.msebera.android.httpclient.HttpEntity r0 = r0.deserialize(r1, r3)
            r3.setEntity(r0)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpRequest receiveRequestHeader() throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r2 = this;
            r2.assertOpen()
            cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpRequest> r0 = r2.requestParser
            cz.msebera.android.httpclient.HttpMessage r0 = r0.parse()
            cz.msebera.android.httpclient.HttpRequest r0 = (cz.msebera.android.httpclient.HttpRequest) r0
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r1 = r2.metrics
            r1.incrementRequestCount()
            return r0
    }

    @Override
    public void sendResponseEntity(cz.msebera.android.httpclient.HttpResponse r4) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r3 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r4.getEntity()
            if (r0 != 0) goto L7
            return
        L7:
            cz.msebera.android.httpclient.impl.entity.EntitySerializer r0 = r3.entityserializer
            cz.msebera.android.httpclient.io.SessionOutputBuffer r1 = r3.outbuffer
            cz.msebera.android.httpclient.HttpEntity r2 = r4.getEntity()
            r0.serialize(r1, r4, r2)
            return
    }

    @Override
    public void sendResponseHeader(cz.msebera.android.httpclient.HttpResponse r2) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.assertOpen()
            cz.msebera.android.httpclient.io.HttpMessageWriter<cz.msebera.android.httpclient.HttpResponse> r0 = r1.responseWriter
            r0.write(r2)
            cz.msebera.android.httpclient.StatusLine r2 = r2.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 < r0) goto L1e
            cz.msebera.android.httpclient.impl.HttpConnectionMetricsImpl r2 = r1.metrics
            r2.incrementResponseCount()
        L1e:
            return
    }
}
