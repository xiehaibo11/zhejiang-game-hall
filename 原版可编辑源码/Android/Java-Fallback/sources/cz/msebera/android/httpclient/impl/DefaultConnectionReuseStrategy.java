package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultConnectionReuseStrategy implements cz.msebera.android.httpclient.ConnectionReuseStrategy {
    public static final cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r0 = new cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy
            r0.<init>()
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy.INSTANCE = r0
            return
    }

    public DefaultConnectionReuseStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean canResponseHaveBody(cz.msebera.android.httpclient.HttpResponse r2) {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r2 = r2.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 < r0) goto L1a
            r0 = 204(0xcc, float:2.86E-43)
            if (r2 == r0) goto L1a
            r0 = 304(0x130, float:4.26E-43)
            if (r2 == r0) goto L1a
            r0 = 205(0xcd, float:2.87E-43)
            if (r2 == r0) goto L1a
            r2 = 1
            goto L1b
        L1a:
            r2 = 0
        L1b:
            return r2
    }

    protected cz.msebera.android.httpclient.TokenIterator createTokenIterator(cz.msebera.android.httpclient.HeaderIterator r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicTokenIterator r0 = new cz.msebera.android.httpclient.message.BasicTokenIterator
            r0.<init>(r2)
            return r0
    }

    @Override
    public boolean keepAlive(cz.msebera.android.httpclient.HttpResponse r6, cz.msebera.android.httpclient.protocol.HttpContext r7) {
            r5 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            cz.msebera.android.httpclient.StatusLine r7 = r6.getStatusLine()
            cz.msebera.android.httpclient.ProtocolVersion r7 = r7.getProtocolVersion()
            java.lang.String r0 = "Transfer-Encoding"
            cz.msebera.android.httpclient.Header r0 = r6.getFirstHeader(r0)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L29
            java.lang.String r0 = r0.getValue()
            java.lang.String r3 = "chunked"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 != 0) goto L45
            return r2
        L29:
            boolean r0 = r5.canResponseHaveBody(r6)
            if (r0 == 0) goto L45
            java.lang.String r0 = "Content-Length"
            cz.msebera.android.httpclient.Header[] r0 = r6.getHeaders(r0)
            int r3 = r0.length
            if (r3 != r1) goto L44
            r0 = r0[r2]
            java.lang.String r0 = r0.getValue()     // Catch: java.lang.NumberFormatException -> L44
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L44
            if (r0 >= 0) goto L45
        L44:
            return r2
        L45:
            java.lang.String r0 = "Connection"
            cz.msebera.android.httpclient.Header[] r0 = r6.getHeaders(r0)
            int r3 = r0.length
            if (r3 != 0) goto L54
            java.lang.String r0 = "Proxy-Connection"
            cz.msebera.android.httpclient.Header[] r0 = r6.getHeaders(r0)
        L54:
            int r6 = r0.length
            if (r6 == 0) goto L84
            cz.msebera.android.httpclient.message.BasicTokenIterator r6 = new cz.msebera.android.httpclient.message.BasicTokenIterator     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            cz.msebera.android.httpclient.message.BasicHeaderIterator r3 = new cz.msebera.android.httpclient.message.BasicHeaderIterator     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            r4 = 0
            r3.<init>(r0, r4)     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            r6.<init>(r3)     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            r0 = 0
        L63:
            boolean r3 = r6.hasNext()     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            if (r3 == 0) goto L80
            java.lang.String r3 = r6.nextToken()     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            java.lang.String r4 = "Close"
            boolean r4 = r4.equalsIgnoreCase(r3)     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            if (r4 == 0) goto L76
            return r2
        L76:
            java.lang.String r4 = "Keep-Alive"
            boolean r3 = r4.equalsIgnoreCase(r3)     // Catch: cz.msebera.android.httpclient.ParseException -> L83
            if (r3 == 0) goto L63
            r0 = 1
            goto L63
        L80:
            if (r0 == 0) goto L84
            return r1
        L83:
            return r2
        L84:
            cz.msebera.android.httpclient.HttpVersion r6 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r6 = r7.lessEquals(r6)
            r6 = r6 ^ r1
            return r6
    }
}
