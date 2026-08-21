package cz.msebera.android.httpclient.params;

@java.lang.Deprecated
public abstract class HttpAbstractParamBean {
    protected final cz.msebera.android.httpclient.params.HttpParams params;

    public HttpAbstractParamBean(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP parameters"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.params.HttpParams r2 = (cz.msebera.android.httpclient.params.HttpParams) r2
            r1.params = r2
            return
    }
}
