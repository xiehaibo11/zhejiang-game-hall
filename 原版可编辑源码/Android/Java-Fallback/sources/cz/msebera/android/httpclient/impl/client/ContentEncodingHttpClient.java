package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class ContentEncodingHttpClient extends cz.msebera.android.httpclient.impl.client.DefaultHttpClient {
    public ContentEncodingHttpClient() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ContentEncodingHttpClient(cz.msebera.android.httpclient.conn.ClientConnectionManager r1, cz.msebera.android.httpclient.params.HttpParams r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ContentEncodingHttpClient(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    @Override
    protected cz.msebera.android.httpclient.protocol.BasicHttpProcessor createHttpProcessor() {
            r2 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpProcessor r0 = super.createHttpProcessor()
            cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding r1 = new cz.msebera.android.httpclient.client.protocol.RequestAcceptEncoding
            r1.<init>()
            r0.addRequestInterceptor(r1)
            cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding r1 = new cz.msebera.android.httpclient.client.protocol.ResponseContentEncoding
            r1.<init>()
            r0.addResponseInterceptor(r1)
            return r0
    }
}
