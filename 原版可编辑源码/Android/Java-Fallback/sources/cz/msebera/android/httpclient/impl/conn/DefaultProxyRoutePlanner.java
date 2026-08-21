package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultProxyRoutePlanner extends cz.msebera.android.httpclient.impl.conn.DefaultRoutePlanner {
    private final cz.msebera.android.httpclient.HttpHost proxy;

    public DefaultProxyRoutePlanner(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DefaultProxyRoutePlanner(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.conn.SchemePortResolver r2) {
            r0 = this;
            r0.<init>(r2)
            java.lang.String r2 = "Proxy host"
            java.lang.Object r1 = cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            r0.proxy = r1
            return
    }

    @Override
    protected cz.msebera.android.httpclient.HttpHost determineProxy(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException {
            r0 = this;
            cz.msebera.android.httpclient.HttpHost r1 = r0.proxy
            return r1
    }
}
