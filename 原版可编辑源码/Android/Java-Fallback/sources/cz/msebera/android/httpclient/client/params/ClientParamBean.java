package cz.msebera.android.httpclient.client.params;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class ClientParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public ClientParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setAllowCircularRedirects(boolean r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.allow-circular-redirects"
            r0.setBooleanParameter(r1, r3)
            return
    }

    @java.lang.Deprecated
    public void setConnectionManagerFactoryClassName(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.connection-manager.factory-class-name"
            r0.setParameter(r1, r3)
            return
    }

    public void setConnectionManagerTimeout(long r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.conn-manager.timeout"
            r0.setLongParameter(r1, r3)
            return
    }

    public void setCookiePolicy(java.lang.String r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.cookie-policy"
            r0.setParameter(r1, r3)
            return
    }

    public void setDefaultHeaders(java.util.Collection<cz.msebera.android.httpclient.Header> r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.default-headers"
            r0.setParameter(r1, r3)
            return
    }

    public void setDefaultHost(cz.msebera.android.httpclient.HttpHost r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.default-host"
            r0.setParameter(r1, r3)
            return
    }

    public void setHandleAuthentication(boolean r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.handle-authentication"
            r0.setBooleanParameter(r1, r3)
            return
    }

    public void setHandleRedirects(boolean r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.handle-redirects"
            r0.setBooleanParameter(r1, r3)
            return
    }

    public void setMaxRedirects(int r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.max-redirects"
            r0.setIntParameter(r1, r3)
            return
    }

    public void setRejectRelativeRedirect(boolean r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.reject-relative-redirect"
            r0.setBooleanParameter(r1, r3)
            return
    }

    public void setVirtualHost(cz.msebera.android.httpclient.HttpHost r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.virtual-host"
            r0.setParameter(r1, r3)
            return
    }
}
