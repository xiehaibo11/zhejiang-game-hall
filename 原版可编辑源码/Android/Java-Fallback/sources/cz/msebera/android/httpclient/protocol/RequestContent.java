package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestContent implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    private final boolean overwrite;

    public RequestContent() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public RequestContent(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.overwrite = r1
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r9, cz.msebera.android.httpclient.protocol.HttpContext r10) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r8 = this;
            java.lang.String r10 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r10)
            boolean r10 = r9 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r10 == 0) goto Lb7
            boolean r10 = r8.overwrite
            java.lang.String r0 = "Transfer-Encoding"
            java.lang.String r1 = "Content-Length"
            if (r10 == 0) goto L18
            r9.removeHeaders(r0)
            r9.removeHeaders(r1)
            goto L24
        L18:
            boolean r10 = r9.containsHeader(r0)
            if (r10 != 0) goto Laf
            boolean r10 = r9.containsHeader(r1)
            if (r10 != 0) goto La7
        L24:
            cz.msebera.android.httpclient.RequestLine r10 = r9.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r10 = r10.getProtocolVersion()
            r2 = r9
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r2 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r2
            cz.msebera.android.httpclient.HttpEntity r2 = r2.getEntity()
            if (r2 != 0) goto L3b
            java.lang.String r10 = "0"
            r9.addHeader(r1, r10)
            return
        L3b:
            boolean r3 = r2.isChunked()
            if (r3 != 0) goto L58
            long r3 = r2.getContentLength()
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 >= 0) goto L4c
            goto L58
        L4c:
            long r3 = r2.getContentLength()
            java.lang.String r10 = java.lang.Long.toString(r3)
            r9.addHeader(r1, r10)
            goto L65
        L58:
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r1 = r10.lessEquals(r1)
            if (r1 != 0) goto L90
            java.lang.String r10 = "chunked"
            r9.addHeader(r0, r10)
        L65:
            cz.msebera.android.httpclient.Header r10 = r2.getContentType()
            if (r10 == 0) goto L7a
            java.lang.String r10 = "Content-Type"
            boolean r10 = r9.containsHeader(r10)
            if (r10 != 0) goto L7a
            cz.msebera.android.httpclient.Header r10 = r2.getContentType()
            r9.addHeader(r10)
        L7a:
            cz.msebera.android.httpclient.Header r10 = r2.getContentEncoding()
            if (r10 == 0) goto Lb7
            java.lang.String r10 = "Content-Encoding"
            boolean r10 = r9.containsHeader(r10)
            if (r10 != 0) goto Lb7
            cz.msebera.android.httpclient.Header r10 = r2.getContentEncoding()
            r9.addHeader(r10)
            goto Lb7
        L90:
            cz.msebera.android.httpclient.ProtocolException r9 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Chunked transfer encoding not allowed for "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r9.<init>(r10)
            throw r9
        La7:
            cz.msebera.android.httpclient.ProtocolException r9 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r10 = "Content-Length header already present"
            r9.<init>(r10)
            throw r9
        Laf:
            cz.msebera.android.httpclient.ProtocolException r9 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r10 = "Transfer-encoding header already present"
            r9.<init>(r10)
            throw r9
        Lb7:
            return
    }
}
