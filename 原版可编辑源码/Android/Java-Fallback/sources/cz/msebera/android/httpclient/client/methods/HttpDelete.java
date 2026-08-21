package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpDelete extends cz.msebera.android.httpclient.client.methods.HttpRequestBase {
    public static final java.lang.String METHOD_NAME = "DELETE";

    public HttpDelete() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpDelete(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            java.net.URI r1 = java.net.URI.create(r1)
            r0.setURI(r1)
            return
    }

    public HttpDelete(java.net.URI r1) {
            r0 = this;
            r0.<init>()
            r0.setURI(r1)
            return
    }

    @Override
    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = "DELETE"
            return r0
    }
}
