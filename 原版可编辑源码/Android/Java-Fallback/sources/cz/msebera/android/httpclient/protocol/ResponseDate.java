package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class ResponseDate implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    private static final cz.msebera.android.httpclient.protocol.HttpDateGenerator DATE_GENERATOR = null;

    static {
            cz.msebera.android.httpclient.protocol.HttpDateGenerator r0 = new cz.msebera.android.httpclient.protocol.HttpDateGenerator
            r0.<init>()
            cz.msebera.android.httpclient.protocol.ResponseDate.DATE_GENERATOR = r0
            return
    }

    public ResponseDate() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r3 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r3)
            cz.msebera.android.httpclient.StatusLine r3 = r2.getStatusLine()
            int r3 = r3.getStatusCode()
            r0 = 200(0xc8, float:2.8E-43)
            if (r3 < r0) goto L22
            java.lang.String r3 = "Date"
            boolean r0 = r2.containsHeader(r3)
            if (r0 != 0) goto L22
            cz.msebera.android.httpclient.protocol.HttpDateGenerator r0 = cz.msebera.android.httpclient.protocol.ResponseDate.DATE_GENERATOR
            java.lang.String r0 = r0.getCurrentDate()
            r2.setHeader(r3, r0)
        L22:
            return
    }
}
