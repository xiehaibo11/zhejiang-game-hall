package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class HttpRequestBase extends cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest implements cz.msebera.android.httpclient.client.methods.HttpUriRequest, cz.msebera.android.httpclient.client.methods.Configurable {
    private cz.msebera.android.httpclient.client.config.RequestConfig config;
    private java.net.URI uri;
    private cz.msebera.android.httpclient.ProtocolVersion version;

    public HttpRequestBase() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.config.RequestConfig getConfig() {
            r1 = this;
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r1.config
            return r0
    }

    public abstract java.lang.String getMethod();

    @Override
    public cz.msebera.android.httpclient.ProtocolVersion getProtocolVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.version
            if (r0 == 0) goto L5
            goto Ld
        L5:
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.getParams()
            cz.msebera.android.httpclient.ProtocolVersion r0 = cz.msebera.android.httpclient.params.HttpProtocolParams.getVersion(r0)
        Ld:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.RequestLine getRequestLine() {
            r4 = this;
            java.lang.String r0 = r4.getMethod()
            cz.msebera.android.httpclient.ProtocolVersion r1 = r4.getProtocolVersion()
            java.net.URI r2 = r4.getURI()
            if (r2 == 0) goto L13
            java.lang.String r2 = r2.toASCIIString()
            goto L14
        L13:
            r2 = 0
        L14:
            if (r2 == 0) goto L1c
            boolean r3 = r2.isEmpty()
            if (r3 == 0) goto L1e
        L1c:
            java.lang.String r2 = "/"
        L1e:
            cz.msebera.android.httpclient.message.BasicRequestLine r3 = new cz.msebera.android.httpclient.message.BasicRequestLine
            r3.<init>(r0, r2, r1)
            return r3
    }

    @Override
    public java.net.URI getURI() {
            r1 = this;
            java.net.URI r0 = r1.uri
            return r0
    }

    public void releaseConnection() {
            r0 = this;
            r0.reset()
            return
    }

    public void setConfig(cz.msebera.android.httpclient.client.config.RequestConfig r1) {
            r0 = this;
            r0.config = r1
            return
    }

    public void setProtocolVersion(cz.msebera.android.httpclient.ProtocolVersion r1) {
            r0 = this;
            r0.version = r1
            return
    }

    public void setURI(java.net.URI r1) {
            r0 = this;
            r0.uri = r1
            return
    }

    public void started() {
            r0 = this;
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.getMethod()
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            java.net.URI r2 = r3.getURI()
            r0.append(r2)
            r0.append(r1)
            cz.msebera.android.httpclient.ProtocolVersion r1 = r3.getProtocolVersion()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
