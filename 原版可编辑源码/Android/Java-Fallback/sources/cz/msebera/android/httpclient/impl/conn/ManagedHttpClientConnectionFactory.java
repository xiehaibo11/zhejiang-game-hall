package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class ManagedHttpClientConnectionFactory implements cz.msebera.android.httpclient.conn.HttpConnectionFactory<cz.msebera.android.httpclient.conn.routing.HttpRoute, cz.msebera.android.httpclient.conn.ManagedHttpClientConnection> {
    private static final java.util.concurrent.atomic.AtomicLong COUNTER = null;
    public static final cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory INSTANCE = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog headerlog;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy incomingContentStrategy;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.entity.ContentLengthStrategy outgoingContentStrategy;
    private final cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> requestWriterFactory;
    private final cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> responseParserFactory;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog wirelog;

    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory.COUNTER = r0
            cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory r0 = new cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory.INSTANCE = r0
            return
    }

    public ManagedHttpClientConnectionFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    public ManagedHttpClientConnectionFactory(cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public ManagedHttpClientConnectionFactory(cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r2, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0, r0)
            return
    }

    public ManagedHttpClientConnectionFactory(cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r3, cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r4, cz.msebera.android.httpclient.entity.ContentLengthStrategy r5, cz.msebera.android.httpclient.entity.ContentLengthStrategy r6) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class<cz.msebera.android.httpclient.impl.conn.DefaultManagedHttpClientConnection> r1 = cz.msebera.android.httpclient.impl.conn.DefaultManagedHttpClientConnection.class
            r0.<init>(r1)
            r2.log = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.String r1 = "cz.msebera.android.httpclient.headers"
            r0.<init>(r1)
            r2.headerlog = r0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.String r1 = "cz.msebera.android.httpclient.wire"
            r0.<init>(r1)
            r2.wirelog = r0
            if (r3 == 0) goto L21
            goto L23
        L21:
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory r3 = cz.msebera.android.httpclient.impl.io.DefaultHttpRequestWriterFactory.INSTANCE
        L23:
            r2.requestWriterFactory = r3
            if (r4 == 0) goto L28
            goto L2a
        L28:
            cz.msebera.android.httpclient.impl.conn.DefaultHttpResponseParserFactory r4 = cz.msebera.android.httpclient.impl.conn.DefaultHttpResponseParserFactory.INSTANCE
        L2a:
            r2.responseParserFactory = r4
            if (r5 == 0) goto L2f
            goto L31
        L2f:
            cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy r5 = cz.msebera.android.httpclient.impl.entity.LaxContentLengthStrategy.INSTANCE
        L31:
            r2.incomingContentStrategy = r5
            if (r6 == 0) goto L36
            goto L38
        L36:
            cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy r6 = cz.msebera.android.httpclient.impl.entity.StrictContentLengthStrategy.INSTANCE
        L38:
            r2.outgoingContentStrategy = r6
            return
    }

    @Override
    public cz.msebera.android.httpclient.HttpConnection create(cz.msebera.android.httpclient.conn.routing.HttpRoute r1, cz.msebera.android.httpclient.config.ConnectionConfig r2) {
            r0 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r1
            cz.msebera.android.httpclient.conn.ManagedHttpClientConnection r1 = r0.create(r1, r2)
            return r1
    }

    public cz.msebera.android.httpclient.conn.ManagedHttpClientConnection create(cz.msebera.android.httpclient.conn.routing.HttpRoute r21, cz.msebera.android.httpclient.config.ConnectionConfig r22) {
            r20 = this;
            r0 = r20
            if (r22 == 0) goto L7
            r1 = r22
            goto L9
        L7:
            cz.msebera.android.httpclient.config.ConnectionConfig r1 = cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT
        L9:
            java.nio.charset.Charset r2 = r1.getCharset()
            java.nio.charset.CodingErrorAction r3 = r1.getMalformedInputAction()
            if (r3 == 0) goto L18
            java.nio.charset.CodingErrorAction r3 = r1.getMalformedInputAction()
            goto L1a
        L18:
            java.nio.charset.CodingErrorAction r3 = java.nio.charset.CodingErrorAction.REPORT
        L1a:
            java.nio.charset.CodingErrorAction r4 = r1.getUnmappableInputAction()
            if (r4 == 0) goto L25
            java.nio.charset.CodingErrorAction r4 = r1.getUnmappableInputAction()
            goto L27
        L25:
            java.nio.charset.CodingErrorAction r4 = java.nio.charset.CodingErrorAction.REPORT
        L27:
            r5 = 0
            if (r2 == 0) goto L41
            java.nio.charset.CharsetDecoder r5 = r2.newDecoder()
            r5.onMalformedInput(r3)
            r5.onUnmappableCharacter(r4)
            java.nio.charset.CharsetEncoder r2 = r2.newEncoder()
            r2.onMalformedInput(r3)
            r2.onUnmappableCharacter(r4)
            r14 = r2
            r13 = r5
            goto L43
        L41:
            r13 = r5
            r14 = r13
        L43:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "http-outgoing-"
            r2.append(r3)
            java.util.concurrent.atomic.AtomicLong r3 = cz.msebera.android.httpclient.impl.conn.ManagedHttpClientConnectionFactory.COUNTER
            long r3 = r3.getAndIncrement()
            java.lang.String r3 = java.lang.Long.toString(r3)
            r2.append(r3)
            java.lang.String r7 = r2.toString()
            cz.msebera.android.httpclient.impl.conn.LoggingManagedHttpClientConnection r2 = new cz.msebera.android.httpclient.impl.conn.LoggingManagedHttpClientConnection
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r0.log
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r0.headerlog
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r0.wirelog
            int r11 = r1.getBufferSize()
            int r12 = r1.getFragmentSizeHint()
            cz.msebera.android.httpclient.config.MessageConstraints r15 = r1.getMessageConstraints()
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r1 = r0.incomingContentStrategy
            cz.msebera.android.httpclient.entity.ContentLengthStrategy r3 = r0.outgoingContentStrategy
            cz.msebera.android.httpclient.io.HttpMessageWriterFactory<cz.msebera.android.httpclient.HttpRequest> r4 = r0.requestWriterFactory
            cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> r5 = r0.responseParserFactory
            r6 = r2
            r16 = r1
            r17 = r3
            r18 = r4
            r19 = r5
            r6.<init>(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return r2
    }
}
