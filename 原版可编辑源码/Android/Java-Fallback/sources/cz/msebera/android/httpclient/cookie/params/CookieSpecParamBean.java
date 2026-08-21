package cz.msebera.android.httpclient.cookie.params;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class CookieSpecParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public CookieSpecParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setDatePatterns(java.util.Collection<java.lang.String> r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.cookie-datepatterns"
            r0.setParameter(r1, r3)
            return
    }

    public void setSingleHeader(boolean r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.protocol.single-cookie-header"
            r0.setBooleanParameter(r1, r3)
            return
    }
}
