package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class HttpRequestParser extends cz.msebera.android.httpclient.impl.io.AbstractMessageParser<cz.msebera.android.httpclient.HttpMessage> {
    private final cz.msebera.android.httpclient.util.CharArrayBuffer lineBuf;
    private final cz.msebera.android.httpclient.HttpRequestFactory requestFactory;

    public HttpRequestParser(cz.msebera.android.httpclient.io.SessionInputBuffer r1, cz.msebera.android.httpclient.message.LineParser r2, cz.msebera.android.httpclient.HttpRequestFactory r3, cz.msebera.android.httpclient.params.HttpParams r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            java.lang.String r1 = "Request factory"
            java.lang.Object r1 = cz.msebera.android.httpclient.util.Args.notNull(r3, r1)
            cz.msebera.android.httpclient.HttpRequestFactory r1 = (cz.msebera.android.httpclient.HttpRequestFactory) r1
            r0.requestFactory = r1
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r2 = 128(0x80, float:1.8E-43)
            r1.<init>(r2)
            r0.lineBuf = r1
            return
    }

    @Override
    protected cz.msebera.android.httpclient.HttpMessage parseHead(cz.msebera.android.httpclient.io.SessionInputBuffer r3) throws java.io.IOException, cz.msebera.android.httpclient.HttpException, cz.msebera.android.httpclient.ParseException {
            r2 = this;
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.lineBuf
            r0.clear()
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r2.lineBuf
            int r3 = r3.readLine(r0)
            r0 = -1
            if (r3 == r0) goto L29
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            r0 = 0
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.lineBuf
            int r1 = r1.length()
            r3.<init>(r0, r1)
            cz.msebera.android.httpclient.message.LineParser r0 = r2.lineParser
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r2.lineBuf
            cz.msebera.android.httpclient.RequestLine r3 = r0.parseRequestLine(r1, r3)
            cz.msebera.android.httpclient.HttpRequestFactory r0 = r2.requestFactory
            cz.msebera.android.httpclient.HttpRequest r3 = r0.newHttpRequest(r3)
            return r3
        L29:
            cz.msebera.android.httpclient.ConnectionClosedException r3 = new cz.msebera.android.httpclient.ConnectionClosedException
            java.lang.String r0 = "Client closed connection"
            r3.<init>(r0)
            throw r3
    }
}
