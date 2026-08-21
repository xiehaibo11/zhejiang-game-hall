package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpResponseParserFactory implements cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpResponse> {
    public static final cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParserFactory INSTANCE = null;
    private final cz.msebera.android.httpclient.message.LineParser lineParser;
    private final cz.msebera.android.httpclient.HttpResponseFactory responseFactory;

    static {
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParserFactory r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParserFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParserFactory.INSTANCE = r0
            return
    }

    public DefaultHttpResponseParserFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    public DefaultHttpResponseParserFactory(cz.msebera.android.httpclient.message.LineParser r1, cz.msebera.android.httpclient.HttpResponseFactory r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.message.BasicLineParser r1 = cz.msebera.android.httpclient.message.BasicLineParser.INSTANCE
        L8:
            r0.lineParser = r1
            if (r2 == 0) goto Ld
            goto Lf
        Ld:
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory r2 = cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory.INSTANCE
        Lf:
            r0.responseFactory = r2
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpResponse> create(cz.msebera.android.httpclient.io.SessionInputBuffer r4, cz.msebera.android.httpclient.config.MessageConstraints r5) {
            r3 = this;
            cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParser r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpResponseParser
            cz.msebera.android.httpclient.message.LineParser r1 = r3.lineParser
            cz.msebera.android.httpclient.HttpResponseFactory r2 = r3.responseFactory
            r0.<init>(r4, r1, r2, r5)
            return r0
    }
}
