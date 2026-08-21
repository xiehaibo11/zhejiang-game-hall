package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class DefaultHttpResponseParser extends cz.msebera.android.httpclient.impl.io.AbstractMessageParser<cz.msebera.android.httpclient.HttpResponse> {
    private final cz.msebera.android.httpclient.util.CharArrayBuffer lineBuf;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
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
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r2 = r0.getClass()
            r1.<init>(r2)
            r0.log = r1
            if (r3 == 0) goto L11
            goto L13
        L11:
            cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory r3 = cz.msebera.android.httpclient.impl.DefaultHttpResponseFactory.INSTANCE
        L13:
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
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r2 = r0.getClass()
            r1.<init>(r2)
            r0.log = r1
            java.lang.String r1 = "Response factory"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r1)
            r0.responseFactory = r3
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
    protected cz.msebera.android.httpclient.HttpResponse parseHead(cz.msebera.android.httpclient.io.SessionInputBuffer r8) throws java.io.IOException, cz.msebera.android.httpclient.HttpException {
            r7 = this;
            r0 = 0
            r1 = 0
        L2:
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r7.lineBuf
            r2.clear()
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r7.lineBuf
            int r2 = r8.readLine(r2)
            r3 = -1
            if (r2 != r3) goto L1b
            if (r1 == 0) goto L13
            goto L1b
        L13:
            cz.msebera.android.httpclient.NoHttpResponseException r8 = new cz.msebera.android.httpclient.NoHttpResponseException
            java.lang.String r0 = "The target server failed to respond"
            r8.<init>(r0)
            throw r8
        L1b:
            cz.msebera.android.httpclient.message.ParserCursor r4 = new cz.msebera.android.httpclient.message.ParserCursor
            cz.msebera.android.httpclient.util.CharArrayBuffer r5 = r7.lineBuf
            int r5 = r5.length()
            r4.<init>(r0, r5)
            cz.msebera.android.httpclient.message.LineParser r5 = r7.lineParser
            cz.msebera.android.httpclient.util.CharArrayBuffer r6 = r7.lineBuf
            boolean r5 = r5.hasProtocolVersion(r6, r4)
            if (r5 == 0) goto L40
            cz.msebera.android.httpclient.message.LineParser r8 = r7.lineParser
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r7.lineBuf
            cz.msebera.android.httpclient.StatusLine r8 = r8.parseStatusLine(r0, r4)
            cz.msebera.android.httpclient.HttpResponseFactory r0 = r7.responseFactory
            r1 = 0
            cz.msebera.android.httpclient.HttpResponse r8 = r0.newHttpResponse(r8, r1)
            return r8
        L40:
            if (r2 == r3) goto L71
            cz.msebera.android.httpclient.util.CharArrayBuffer r2 = r7.lineBuf
            boolean r2 = r7.reject(r2, r1)
            if (r2 != 0) goto L71
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            boolean r2 = r2.isDebugEnabled()
            if (r2 == 0) goto L6e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Garbage in response: "
            r3.append(r4)
            cz.msebera.android.httpclient.util.CharArrayBuffer r4 = r7.lineBuf
            java.lang.String r4 = r4.toString()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.debug(r3)
        L6e:
            int r1 = r1 + 1
            goto L2
        L71:
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r0 = "The server failed to respond with a valid HTTP response"
            r8.<init>(r0)
            throw r8
    }

    protected boolean reject(cz.msebera.android.httpclient.util.CharArrayBuffer r1, int r2) {
            r0 = this;
            r1 = 0
            return r1
    }
}
