package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultHttpRequestParserFactory implements cz.msebera.android.httpclient.io.HttpMessageParserFactory<cz.msebera.android.httpclient.HttpRequest> {
    public static final cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParserFactory INSTANCE = null;
    private final cz.msebera.android.httpclient.message.LineParser lineParser;
    private final cz.msebera.android.httpclient.HttpRequestFactory requestFactory;

    static {
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParserFactory r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParserFactory
            r0.<init>()
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParserFactory.INSTANCE = r0
            return
    }

    public DefaultHttpRequestParserFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    public DefaultHttpRequestParserFactory(cz.msebera.android.httpclient.message.LineParser r1, cz.msebera.android.httpclient.HttpRequestFactory r2) {
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
            cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory r2 = cz.msebera.android.httpclient.impl.DefaultHttpRequestFactory.INSTANCE
        Lf:
            r0.requestFactory = r2
            return
    }

    @Override
    public cz.msebera.android.httpclient.io.HttpMessageParser<cz.msebera.android.httpclient.HttpRequest> create(cz.msebera.android.httpclient.io.SessionInputBuffer r4, cz.msebera.android.httpclient.config.MessageConstraints r5) {
            r3 = this;
            cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParser r0 = new cz.msebera.android.httpclient.impl.io.DefaultHttpRequestParser
            cz.msebera.android.httpclient.message.LineParser r1 = r3.lineParser
            cz.msebera.android.httpclient.HttpRequestFactory r2 = r3.requestFactory
            r0.<init>(r4, r1, r2, r5)
            return r0
    }
}
