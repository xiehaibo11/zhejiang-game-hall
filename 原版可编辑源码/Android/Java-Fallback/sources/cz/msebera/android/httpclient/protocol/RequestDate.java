package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class RequestDate implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private static final cz.msebera.android.httpclient.protocol.HttpDateGenerator DATE_GENERATOR = null;

    static {
            cz.msebera.android.httpclient.protocol.HttpDateGenerator r0 = new cz.msebera.android.httpclient.protocol.HttpDateGenerator
            r0.<init>()
            cz.msebera.android.httpclient.protocol.RequestDate.DATE_GENERATOR = r0
            return
    }

    public RequestDate() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r3 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r3)
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r3 == 0) goto L1a
            java.lang.String r3 = "Date"
            boolean r0 = r2.containsHeader(r3)
            if (r0 != 0) goto L1a
            cz.msebera.android.httpclient.protocol.HttpDateGenerator r0 = cz.msebera.android.httpclient.protocol.RequestDate.DATE_GENERATOR
            java.lang.String r0 = r0.getCurrentDate()
            r2.setHeader(r3, r0)
        L1a:
            return
    }
}
