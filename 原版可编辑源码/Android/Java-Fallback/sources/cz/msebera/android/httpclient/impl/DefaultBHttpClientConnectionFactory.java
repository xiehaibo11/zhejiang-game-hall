package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultBHttpClientConnectionFactory implements cz.msebera.android.httpclient.HttpConnectionFactory<cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection> {
    public static final cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory INSTANCE = null;
    private final cz.msebera.android.httpclient.config.ConnectionConfig cconfig;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy incomingContentStrategy;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy outgoingContentStrategy;
    private final cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> requestWriterFactory;
    private final cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> responseParserFactory;

    static {
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory r0 = new cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnectionFactory.INSTANCE = r0
            return
    }

    public DefaultBHttpClientConnectionFactory() {
            r6 = this;
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public DefaultBHttpClientConnectionFactory(cz.msebera.android.httpclient.config.ConnectionConfig r7) {
            r6 = this;
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public DefaultBHttpClientConnectionFactory(cz.msebera.android.httpclient.config.ConnectionConfig r1, cz.msebera.android.httpclient.entity.ContentLengthStrategy r2, cz.msebera.android.httpclient.entity.ContentLengthStrategy r3, cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r4, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r5) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.config.ConnectionConfig r1 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
        L8:
            r0.cconfig = r1
            r0.incomingContentStrategy = r2
            r0.outgoingContentStrategy = r3
            r0.requestWriterFactory = r4
            r0.responseParserFactory = r5
            return
    }

    public DefaultBHttpClientConnectionFactory(cz.msebera.android.httpclient.config.ConnectionConfig r7, cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r8, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r9) {
            r6 = this;
            r2 = 0
            r3 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnection createConnection(java.net.Socket r1) throws java.io.IOException {
            r0 = this;
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection r1 = r0.createConnection(r1)
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection createConnection(java.net.Socket r12) throws java.io.IOException {
            r11 = this;
            cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection r10 = new cz.msebera.android.httpclient.impl.DefaultBHttpClientConnection
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r11.cconfig
            int r1 = r0.getBufferSize()
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r11.cconfig
            int r2 = r0.getFragmentSizeHint()
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r11.cconfig
            java.nio.charset.CharsetDecoder r3 = cz.msebera.android.httpclient.impl.ConnSupport.createDecoder(r0)
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r11.cconfig
            java.nio.charset.CharsetEncoder r4 = cz.msebera.android.httpclient.impl.ConnSupport.createEncoder(r0)
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r11.cconfig
            cz.msebera.android.httpclient.config.MessageConstraints r5 = r0.getMessageConstraints()
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r6 = r11.incomingContentStrategy
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r7 = r11.outgoingContentStrategy
            cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r8 = r11.requestWriterFactory
            cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r9 = r11.responseParserFactory
            r0 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r10.bind(r12)
            return r10
    }
}
