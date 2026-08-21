package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public class HttpConnectionParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public HttpConnectionParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public void setConnectionTimeout(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpConnectionParams.setConnectionTimeout(r0, r2)
            return
    }

    public void setLinger(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpConnectionParams.setLinger(r0, r2)
            return
    }

    public void setSoTimeout(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpConnectionParams.setSoTimeout(r0, r2)
            return
    }

    public void setSocketBufferSize(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpConnectionParams.setSocketBufferSize(r0, r2)
            return
    }

    public void setStaleCheckingEnabled(boolean r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpConnectionParams.setStaleCheckingEnabled(r0, r2)
            return
    }

    public void setTcpNoDelay(boolean r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r1.params
            cz.msebera.android.httpclient.params.HttpConnectionParams.setTcpNoDelay(r0, r2)
            return
    }
}
