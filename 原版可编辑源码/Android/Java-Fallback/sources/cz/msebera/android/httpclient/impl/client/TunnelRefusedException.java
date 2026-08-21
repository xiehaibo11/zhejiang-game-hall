package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class TunnelRefusedException extends cz.msebera.android.httpclient.HttpException {
    private static final long serialVersionUID = -8646722842745617323L;
    private final cz.msebera.android.httpclient.HttpResponse response;

    public TunnelRefusedException(java.lang.String r1, cz.msebera.android.httpclient.HttpResponse r2) {
            r0 = this;
            r0.<init>(r1)
            r0.response = r2
            return
    }

    public cz.msebera.android.httpclient.HttpResponse getResponse() {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.response
            return r0
    }
}
