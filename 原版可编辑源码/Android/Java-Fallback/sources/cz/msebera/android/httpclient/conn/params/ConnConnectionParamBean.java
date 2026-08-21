package cz.msebera.android.httpclient.conn.params;

@java.lang.Deprecated
public class ConnConnectionParamBean extends cz.msebera.android.httpclient.params.HttpAbstractParamBean {
    public ConnConnectionParamBean(cz.msebera.android.httpclient.params.HttpParams r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @java.lang.Deprecated
    public void setMaxStatusLineGarbage(int r3) {
            r2 = this;
            cz.msebera.android.httpclient.params.HttpParams r0 = r2.params
            java.lang.String r1 = "http.connection.max-status-line-garbage"
            r0.setIntParameter(r1, r3)
            return
    }
}
