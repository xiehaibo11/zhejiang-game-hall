package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
@java.lang.Deprecated
public class SystemDefaultHttpClient extends cz.msebera.android.httpclient.impl.client.DefaultHttpClient {
    public SystemDefaultHttpClient() {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r0)
            return
    }

    public SystemDefaultHttpClient(cz.msebera.android.httpclient.params.HttpParams r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    @Override
    protected cz.msebera.android.httpclient.conn.ClientConnectionManager createClientConnectionManager() {
            r3 = this;
            cz.msebera.android.httpclient.impl.conn.PoolingClientConnectionManager r0 = new cz.msebera.android.httpclient.impl.conn.PoolingClientConnectionManager
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r1 = cz.msebera.android.httpclient.impl.conn.SchemeRegistryFactory.createSystemDefault()
            r0.<init>(r1)
            java.lang.String r1 = "true"
            java.lang.String r2 = "http.keepAlive"
            java.lang.String r2 = java.lang.System.getProperty(r2, r1)
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto L2b
            java.lang.String r1 = "http.maxConnections"
            java.lang.String r2 = "5"
            java.lang.String r1 = java.lang.System.getProperty(r1, r2)
            int r1 = java.lang.Integer.parseInt(r1)
            r0.setDefaultMaxPerRoute(r1)
            int r1 = r1 * 2
            r0.setMaxTotal(r1)
        L2b:
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.ConnectionReuseStrategy createConnectionReuseStrategy() {
            r2 = this;
            java.lang.String r0 = "true"
            java.lang.String r1 = "http.keepAlive"
            java.lang.String r1 = java.lang.System.getProperty(r1, r0)
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L14
            cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy r0 = new cz.msebera.android.httpclient.impl.DefaultConnectionReuseStrategy
            r0.<init>()
            return r0
        L14:
            cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy r0 = new cz.msebera.android.httpclient.impl.NoConnectionReuseStrategy
            r0.<init>()
            return r0
    }

    @Override
    protected cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner createHttpRoutePlanner() {
            r3 = this;
            cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner r0 = new cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner
            cz.msebera.android.httpclient.conn.ClientConnectionManager r1 = r3.getConnectionManager()
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r1 = r1.getSchemeRegistry()
            java.net.ProxySelector r2 = java.net.ProxySelector.getDefault()
            r0.<init>(r1, r2)
            return r0
    }
}
