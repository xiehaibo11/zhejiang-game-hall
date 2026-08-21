package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DefaultHttpResponseParser extends cz.msebera.android.httpclient.impl.io.AbstractMessageParser<cz.msebera.android.httpclient.HttpResponse> {
    private final cz.msebera.android.httpclient.util.CharArrayBuffer lineBuf;
    private final cz.msebera.android.httpclient.HttpResponseFactory responseFactory;

    public DefaultHttpResponseParser(cz.msebera.android.httpclient.io.SessionInputBuffer r3) {
            r2 = this;
            cz.msebera.android.httpclient.config.MessageConstraints r0 = cz.msebera.android.httpclient.config.MessageConstraints.DEFAULT
            r1 = 0
            r2.<init>(r3, r1, r1, r0)
            return
    }

    public DefaultHttpResponseParser(cz.msebera.android.httpclient.io.SessionInputBuffer r2, cz.msebera.android.httpclient.config.MessageConstraints r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0, r3)
            return
    }

    public DefaultHttpResponseParser(cz.msebera.android.httpclient.io.SessionInputBuffer r1, cz.msebera.android.httpclient.message.LineParser r2, cz.msebera.android.httpclient.HttpResponseFactory r3, cz.msebera.android.httpclient.config.MessageConstraints r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            if (r3 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory r3 = cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory.INSTANCE
        L8:
            r0.responseFactory = r3
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r2 = 128(0x80, float:1.8E-43)
            r1.<init>(r2)
            r0.lineBuf = r1
            return
    }

    @java.lang.Deprecated
    public DefaultHttpResponseParser(cz.msebera.android.httpclient.io.SessionInputBuffer r1, cz.msebera.android.httpclient.message.LineParser r2, cz.msebera.android.httpclient.HttpResponseFactory r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            java.lang.String r1 = "Response factory"
            java.lang.Object r1 = cz.msebera.android.httpclient.util.Args.notNull(r3, r1)
            cz.msebera.android.httpclient.HttpResponseFactory r1 = (cz.msebera.android.httpclient.HttpResponseFactory) r1
            r0.responseFactory = r1
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r2 = 128(0x80, float:1.8E-43)
            r1.<init>(r2)
            r0.lineBuf = r1
            return
    }

    @Override
    protected cz.msebera.android.httpclient.HttpMessage parseHead(cz.msebera.android.httpclient.io.SessionInputBuffer r1) throws java.io.IOException, cz.msebera.android.httpclient.HttpException, cz.msebera.android.httpclient.ParseException {
            r0 = this;
            cz.msebera.android.httpclient.HttpResponse r1 = r0.parseHead(r1)
            return r1
    }

    @Override
    protected cz.msebera.android.httpclient.HttpResponse parseHead(cz.msebera.android.httpclient.io.SessionInputBuffer r3) throws java.io.IOException, cz.msebera.android.httpclient.HttpException, cz.msebera.android.httpclient.ParseException {
            r2 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.lineBuf
            r0.clear()
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.lineBuf
            int r3 = r3.readLine(r0)
            r0 = -1
            if (r3 == r0) goto L2a
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.lineBuf
            int r1 = r1.length()
            r3.<init>(r0, r1)
            cz.msebera.android.httpclient.message.LineParser r0 = r2.lineParser
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.lineBuf
            cz.msebera.android.httpclient.StatusLine r3 = r0.parseStatusLine(r1, r3)
            cz.msebera.android.httpclient.HttpResponseFactory r0 = r2.responseFactory
            r1 = 0
            cz.msebera.android.httpclient.HttpResponse r3 = r0.newHttpResponse(r3, r1)
            return r3
        L2a:
            cz.msebera.android.httpclient.NoHttpResponseException r3 = new cz.msebera.android.httpclient.NoHttpResponseException
            java.lang.String r0 = "The target server failed to respond"
            r3.<init>(r0)
            throw r3
    }
}
