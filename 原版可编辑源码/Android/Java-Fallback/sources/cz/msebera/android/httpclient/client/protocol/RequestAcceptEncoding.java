package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestAcceptEncoding implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private final java.lang.String acceptEncoding;

    public RequestAcceptEncoding() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public RequestAcceptEncoding(java.util.List<java.lang.String> r4) {
            r3 = this;
            r3.<init>()
            if (r4 == 0) goto L31
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L11:
            int r2 = r4.size()
            if (r1 >= r2) goto L2a
            if (r1 <= 0) goto L1e
            java.lang.String r2 = ","
            r0.append(r2)
        L1e:
            java.lang.Object r2 = r4.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            int r1 = r1 + 1
            goto L11
        L2a:
            java.lang.String r4 = r0.toString()
            r3.acceptEncoding = r4
            goto L35
        L31:
            java.lang.String r4 = "gzip,deflate"
            r3.acceptEncoding = r4
        L35:
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r1 = this;
            java.lang.String r3 = "Accept-Encoding"
            boolean r0 = r2.containsHeader(r3)
            if (r0 != 0) goto Ld
            java.lang.String r0 = r1.acceptEncoding
            r2.addHeader(r3, r0)
        Ld:
            return
    }
}
