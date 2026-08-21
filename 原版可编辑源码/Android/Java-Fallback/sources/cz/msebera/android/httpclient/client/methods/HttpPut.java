package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpPut extends cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase {
    public static final java.lang.String METHOD_NAME = "PUT";

    public HttpPut() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpPut(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.net.URI r1 = java.net.URI.create(r1)
            r0.setURI(r1)
            return
    }

    public HttpPut(java.net.URI r1) {
            r0 = this;
            r0.<init>()
            r0.setURI(r1)
            return
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = "PUT"
            return r0
    }
}
