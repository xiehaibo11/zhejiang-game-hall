package cz.msebera.android.httpclient.impl.client;

public class DefaultBackoffStrategy implements cz.msebera.android.httpclient.client.ConnectionBackoffStrategy {
    public DefaultBackoffStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean shouldBackoff(cz.msebera.android.httpclient.HttpResponse r2) {
            r1 = this;
            cz.msebera.android.httpclient.StatusLine r2 = r2.getStatusLine()
            int r2 = r2.getStatusCode()
            r0 = 503(0x1f7, float:7.05E-43)
            if (r2 != r0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    @Override
    public boolean shouldBackoff(java.lang.Throwable r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.net.SocketTimeoutException
            if (r0 != 0) goto Lb
            boolean r2 = r2 instanceof java.net.ConnectException
            if (r2 == 0) goto L9
            goto Lb
        L9:
            r2 = 0
            goto Lc
        Lb:
            r2 = 1
        Lc:
            return r2
    }
}
