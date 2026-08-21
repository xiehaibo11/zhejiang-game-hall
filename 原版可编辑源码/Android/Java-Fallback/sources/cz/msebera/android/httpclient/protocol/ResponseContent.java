package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class ResponseContent implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    private final boolean overwrite;

    public ResponseContent() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ResponseContent(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.overwrite = r1
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r8, cz.msebera.android.httpclient.protocol.HttpContext r9) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r7 = this;
            java.lang.String r9 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r9)
            boolean r9 = r7.overwrite
            java.lang.String r0 = "Transfer-Encoding"
            java.lang.String r1 = "Content-Length"
            if (r9 == 0) goto L14
            r8.removeHeaders(r0)
            r8.removeHeaders(r1)
            goto L20
        L14:
            boolean r9 = r8.containsHeader(r0)
            if (r9 != 0) goto La4
            boolean r9 = r8.containsHeader(r1)
            if (r9 != 0) goto L9c
        L20:
            cz.msebera.android.httpclient.StatusLine r9 = r8.getStatusLine()
            cz.msebera.android.httpclient.ProtocolVersion r9 = r9.getProtocolVersion()
            cz.msebera.android.httpclient.HttpEntity r2 = r8.getEntity()
            if (r2 == 0) goto L82
            long r3 = r2.getContentLength()
            boolean r5 = r2.isChunked()
            if (r5 == 0) goto L46
            cz.msebera.android.httpclient.HttpVersion r5 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r9 = r9.lessEquals(r5)
            if (r9 != 0) goto L46
            java.lang.String r9 = "chunked"
            r8.addHeader(r0, r9)
            goto L57
        L46:
            r5 = 0
            int r9 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r9 < 0) goto L57
            long r3 = r2.getContentLength()
            java.lang.String r9 = java.lang.Long.toString(r3)
            r8.addHeader(r1, r9)
        L57:
            cz.msebera.android.httpclient.Header r9 = r2.getContentType()
            if (r9 == 0) goto L6c
            java.lang.String r9 = "Content-Type"
            boolean r9 = r8.containsHeader(r9)
            if (r9 != 0) goto L6c
            cz.msebera.android.httpclient.Header r9 = r2.getContentType()
            r8.addHeader(r9)
        L6c:
            cz.msebera.android.httpclient.Header r9 = r2.getContentEncoding()
            if (r9 == 0) goto L9b
            java.lang.String r9 = "Content-Encoding"
            boolean r9 = r8.containsHeader(r9)
            if (r9 != 0) goto L9b
            cz.msebera.android.httpclient.Header r9 = r2.getContentEncoding()
            r8.addHeader(r9)
            goto L9b
        L82:
            cz.msebera.android.httpclient.StatusLine r9 = r8.getStatusLine()
            int r9 = r9.getStatusCode()
            r0 = 204(0xcc, float:2.86E-43)
            if (r9 == r0) goto L9b
            r0 = 304(0x130, float:4.26E-43)
            if (r9 == r0) goto L9b
            r0 = 205(0xcd, float:2.87E-43)
            if (r9 == r0) goto L9b
            java.lang.String r9 = "0"
            r8.addHeader(r1, r9)
        L9b:
            return
        L9c:
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r9 = "Content-Length header already present"
            r8.<init>(r9)
            throw r8
        La4:
            cz.msebera.android.httpclient.ProtocolException r8 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r9 = "Transfer-encoding header already present"
            r8.<init>(r9)
            throw r8
    }
}
