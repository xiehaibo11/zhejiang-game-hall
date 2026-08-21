package cz.msebera.android.httpclient.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class ResponseConnControl implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    public ResponseConnControl() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r10, cz.msebera.android.httpclient.protocol.HttpContext r11) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r9 = this;
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            cz.msebera.android.httpclient.protocol.HttpCoreContext r11 = cz.msebera.android.httpclient.protocol.HttpCoreContext.adapt(r11)
            cz.msebera.android.httpclient.StatusLine r0 = r10.getStatusLine()
            int r0 = r0.getStatusCode()
            java.lang.String r1 = "Close"
            java.lang.String r2 = "Connection"
            r3 = 400(0x190, float:5.6E-43)
            if (r0 == r3) goto L91
            r3 = 408(0x198, float:5.72E-43)
            if (r0 == r3) goto L91
            r3 = 411(0x19b, float:5.76E-43)
            if (r0 == r3) goto L91
            r3 = 413(0x19d, float:5.79E-43)
            if (r0 == r3) goto L91
            r3 = 414(0x19e, float:5.8E-43)
            if (r0 == r3) goto L91
            r3 = 503(0x1f7, float:7.05E-43)
            if (r0 == r3) goto L91
            r3 = 501(0x1f5, float:7.02E-43)
            if (r0 != r3) goto L32
            goto L91
        L32:
            cz.msebera.android.httpclient.Header r0 = r10.getFirstHeader(r2)
            if (r0 == 0) goto L43
            java.lang.String r0 = r0.getValue()
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L43
            return
        L43:
            cz.msebera.android.httpclient.HttpEntity r0 = r10.getEntity()
            if (r0 == 0) goto L6d
            cz.msebera.android.httpclient.StatusLine r3 = r10.getStatusLine()
            cz.msebera.android.httpclient.ProtocolVersion r3 = r3.getProtocolVersion()
            long r4 = r0.getContentLength()
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 >= 0) goto L6d
            boolean r0 = r0.isChunked()
            if (r0 == 0) goto L69
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r0 = r3.lessEquals(r0)
            if (r0 == 0) goto L6d
        L69:
            r10.setHeader(r2, r1)
            return
        L6d:
            cz.msebera.android.httpclient.HttpRequest r11 = r11.getRequest()
            if (r11 == 0) goto L90
            cz.msebera.android.httpclient.Header r0 = r11.getFirstHeader(r2)
            if (r0 == 0) goto L81
            java.lang.String r11 = r0.getValue()
            r10.setHeader(r2, r11)
            goto L90
        L81:
            cz.msebera.android.httpclient.ProtocolVersion r11 = r11.getProtocolVersion()
            cz.msebera.android.httpclient.HttpVersion r0 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_0
            boolean r11 = r11.lessEquals(r0)
            if (r11 == 0) goto L90
            r10.setHeader(r2, r1)
        L90:
            return
        L91:
            r10.setHeader(r2, r1)
            return
    }
}
