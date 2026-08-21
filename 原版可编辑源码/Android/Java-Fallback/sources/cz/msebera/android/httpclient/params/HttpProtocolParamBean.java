package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public class HttpProtocolParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public HttpProtocolParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setContentCharset(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpProtocolParams.setContentCharset(r0, r2)
            return
    }

    public void setHttpElementCharset(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpProtocolParams.setHttpElementCharset(r0, r2)
            return
    }

    public void setUseExpectContinue(boolean r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpProtocolParams.setUseExpectContinue(r0, r2)
            return
    }

    public void setUserAgent(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpProtocolParams.setUserAgent(r0, r2)
            return
    }

    public void setVersion(cz.msebera.android.httpclient.HttpVersion r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpProtocolParams.setVersion(r0, r2)
            return
    }
}
