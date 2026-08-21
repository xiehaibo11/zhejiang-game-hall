package cz.msebera.android.httpclient.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class HttpResponseException extends cz.msebera.android.httpclient.client.ClientProtocolException {
    private static final long serialVersionUID = -7186627969477257933L;
    private final int statusCode;

    public HttpResponseException(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r2)
            r0.statusCode = r1
            return
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }
}
