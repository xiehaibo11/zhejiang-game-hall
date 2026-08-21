package cz.msebera.android.httpclient.auth.params;

@java.lang.Deprecated
public class AuthParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public AuthParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setCredentialCharset(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.auth.params.AuthParams.setCredentialCharset(r0, r2)
            return
    }
}
