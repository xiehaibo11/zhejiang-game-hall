package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class DefaultRoutePlanner implements cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner {
    private final cz.msebera.android.httpclient.conn.SchemePortResolver schemePortResolver;

    public DefaultRoutePlanner(cz.msebera.android.httpclient.conn.SchemePortResolver r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L6
            goto L8
        L6:
            cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver r1 = cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver.INSTANCE
        L8:
            r0.schemePortResolver = r1
            return
    }

    protected cz.msebera.android.httpclient.HttpHost determineProxy(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.HttpException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.conn.routing.HttpRoute determineRoute(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.HttpRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws cz.msebera.android.httpclient.HttpException {
            r3 = this;
            java.lang.String r0 = "Request"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            if (r4 == 0) goto L5b
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r6)
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r0.getRequestConfig()
            java.net.InetAddress r1 = r0.getLocalAddress()
            cz.msebera.android.httpclient.HttpHost r0 = r0.getProxy()
            if (r0 != 0) goto L1d
            cz.msebera.android.httpclient.HttpHost r0 = r3.determineProxy(r4, r5, r6)
        L1d:
            int r5 = r4.getPort()
            if (r5 > 0) goto L43
            cz.msebera.android.httpclient.HttpHost r5 = new cz.msebera.android.httpclient.HttpHost     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L38
            java.lang.String r6 = r4.getHostName()     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L38
            cz.msebera.android.httpclient.conn.SchemePortResolver r2 = r3.schemePortResolver     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L38
            int r2 = r2.resolve(r4)     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L38
            java.lang.String r4 = r4.getSchemeName()     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L38
            r5.<init>(r6, r2, r4)     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L38
            r4 = r5
            goto L43
        L38:
            r4 = move-exception
            cz.msebera.android.httpclient.HttpException r5 = new cz.msebera.android.httpclient.HttpException
            java.lang.String r4 = r4.getMessage()
            r5.<init>(r4)
            throw r5
        L43:
            java.lang.String r5 = r4.getSchemeName()
            java.lang.String r6 = "https"
            boolean r5 = r5.equalsIgnoreCase(r6)
            if (r0 != 0) goto L55
            cz.msebera.android.httpclient.conn.routing.HttpRoute r6 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            r6.<init>(r4, r1, r5)
            return r6
        L55:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r6 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            r6.<init>(r4, r1, r0, r5)
            return r6
        L5b:
            cz.msebera.android.httpclient.ProtocolException r4 = new cz.msebera.android.httpclient.ProtocolException
            java.lang.String r5 = "Target host is not specified"
            r4.<init>(r5)
            throw r4
    }
}
