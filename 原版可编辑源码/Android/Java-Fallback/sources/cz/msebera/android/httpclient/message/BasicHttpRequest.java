package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHttpRequest extends cz.msebera.android.httpclient.message.AbstractHttpMessage implements cz.msebera.android.httpclient.HttpRequest {
    private final java.lang.String method;
    private cz.msebera.android.httpclient.RequestLine requestline;
    private final java.lang.String uri;

    public BasicHttpRequest(cz.msebera.android.httpclient.RequestLine r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Request line"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.RequestLine r0 = (cz.msebera.android.httpclient.RequestLine) r0
            r1.requestline = r0
            java.lang.String r0 = r2.getMethod()
            r1.method = r0
            java.lang.String r2 = r2.getUri()
            r1.uri = r2
            return
    }

    public BasicHttpRequest(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Method name"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.method = r2
            java.lang.String r2 = "Request URI"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            java.lang.String r2 = (java.lang.String) r2
            r1.uri = r2
            r2 = 0
            r1.requestline = r2
            return
    }

    public BasicHttpRequest(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.ProtocolVersion r4) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicRequestLine r0 = new cz.msebera.android.httpclient.message.BasicRequestLine
            r0.<init>(r2, r3, r4)
            r1.<init>(r0)
            return
    }

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r1.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.RequestLine getRequestLine() {
            r4 = this;
            cz.msebera.android.httpclient.RequestLine r0 = r4.requestline
            if (r0 != 0) goto L11
            cz.msebera.android.httpclient.message.BasicRequestLine r0 = new cz.msebera.android.httpclient.message.BasicRequestLine
            java.lang.String r1 = r4.method
            java.lang.String r2 = r4.uri
            cz.msebera.android.httpclient.HttpVersion r3 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1
            r0.<init>(r1, r2, r3)
            r4.requestline = r0
        L11:
            cz.msebera.android.httpclient.RequestLine r0 = r4.requestline
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.method
            r0.append(r1)
            r1 = 32
            r0.append(r1)
            java.lang.String r2 = r3.uri
            r0.append(r2)
            r0.append(r1)
            cz.msebera.android.httpclient.message.HeaderGroup r1 = r3.headergroup
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
