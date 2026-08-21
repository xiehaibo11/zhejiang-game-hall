package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class ResponseServer implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    private final java.lang.String originServer;

    public ResponseServer() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ResponseServer(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.originServer = r1
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r3 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r3)
            java.lang.String r3 = "Server"
            boolean r0 = r2.containsHeader(r3)
            if (r0 != 0) goto L14
            java.lang.String r0 = r1.originServer
            if (r0 == 0) goto L14
            r2.addHeader(r3, r0)
        L14:
            return
    }
}
