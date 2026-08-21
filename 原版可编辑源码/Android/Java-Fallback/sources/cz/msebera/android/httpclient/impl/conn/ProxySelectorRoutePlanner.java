package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class ProxySelectorRoutePlanner implements cz.msebera.android.httpclient.conn.routing.HttpRoutePlanner {
    protected java.net.ProxySelector proxySelector;
    protected final cz.msebera.android.httpclient.conn.scheme.SchemeRegistry schemeRegistry;

    static class 1 {
        static final int[] $SwitchMap$java$net$Proxy$Type = null;

        static {
                java.net.Proxy$Type[] r0 = java.net.Proxy.Type.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner.1.$SwitchMap$java$net$Proxy$Type = r0
                int[] r0 = cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner.1.$SwitchMap$java$net$Proxy$Type     // Catch: java.lang.NoSuchFieldError -> L14
                java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner.1.$SwitchMap$java$net$Proxy$Type     // Catch: java.lang.NoSuchFieldError -> L1f
                java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner.1.$SwitchMap$java$net$Proxy$Type     // Catch: java.lang.NoSuchFieldError -> L2a
                java.net.Proxy$Type r1 = java.net.Proxy.Type.SOCKS     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                return
        }
    }

    public ProxySelectorRoutePlanner(cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r2, java.net.ProxySelector r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "SchemeRegistry"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.schemeRegistry = r2
            r1.proxySelector = r3
            return
    }

    protected java.net.Proxy chooseProxy(java.util.List<java.net.Proxy> r3, cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.HttpRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) {
            r2 = this;
            java.lang.String r4 = "List of proxies"
            cz.msebera.android.httpclient.util.Args.notEmpty(r3, r4)
            r4 = 0
            r5 = 0
        L7:
            if (r4 != 0) goto L2c
            int r6 = r3.size()
            if (r5 >= r6) goto L2c
            java.lang.Object r6 = r3.get(r5)
            java.net.Proxy r6 = (java.net.Proxy) r6
            int[] r0 = cz.msebera.android.httpclient.impl.conn.ProxySelectorRoutePlanner.1.$SwitchMap$java$net$Proxy$Type
            java.net.Proxy$Type r1 = r6.type()
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L28
            r1 = 2
            if (r0 == r1) goto L28
            goto L29
        L28:
            r4 = r6
        L29:
            int r5 = r5 + 1
            goto L7
        L2c:
            if (r4 != 0) goto L30
            java.net.Proxy r4 = java.net.Proxy.NO_PROXY
        L30:
            return r4
    }

    protected cz.msebera.android.httpclient.HttpHost determineProxy(cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.HttpRequest r6, cz.msebera.android.httpclient.protocol.HttpContext r7) throws cz.msebera.android.httpclient.HttpException {
            r4 = this;
            java.net.ProxySelector r0 = r4.proxySelector
            if (r0 != 0) goto L8
            java.net.ProxySelector r0 = java.net.ProxySelector.getDefault()
        L8:
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.net.URI r2 = new java.net.URI     // Catch: java.net.URISyntaxException -> L5d
            java.lang.String r3 = r5.toURI()     // Catch: java.net.URISyntaxException -> L5d
            r2.<init>(r3)     // Catch: java.net.URISyntaxException -> L5d
            java.util.List r0 = r0.select(r2)
            java.net.Proxy r5 = r4.chooseProxy(r0, r5, r6, r7)
            java.net.Proxy$Type r6 = r5.type()
            java.net.Proxy$Type r7 = java.net.Proxy.Type.HTTP
            if (r6 != r7) goto L5c
            java.net.SocketAddress r6 = r5.address()
            boolean r6 = r6 instanceof java.net.InetSocketAddress
            if (r6 == 0) goto L41
            java.net.SocketAddress r5 = r5.address()
            java.net.InetSocketAddress r5 = (java.net.InetSocketAddress) r5
            cz.msebera.android.httpclient.HttpHost r1 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r6 = r4.getHost(r5)
            int r5 = r5.getPort()
            r1.<init>(r6, r5)
            goto L5c
        L41:
            cz.msebera.android.httpclient.HttpException r6 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Unable to handle non-Inet proxy address: "
            r7.append(r0)
            java.net.SocketAddress r5 = r5.address()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L5c:
            return r1
        L5d:
            r6 = move-exception
            cz.msebera.android.httpclient.HttpException r7 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot convert host to URI: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r7.<init>(r5, r6)
            throw r7
    }

    @Override
    public cz.msebera.android.httpclient.conn.routing.HttpRoute determineRoute(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException {
            r2 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            cz.msebera.android.httpclient.params.HttpParams r0 = r4.getParams()
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.getForcedRoute(r0)
            if (r0 == 0) goto L10
            return r0
        L10:
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Asserts.notNull(r3, r0)
            cz.msebera.android.httpclient.params.HttpParams r0 = r4.getParams()
            java.net.InetAddress r0 = cz.msebera.android.httpclient.conn.params.ConnRouteParams.getLocalAddress(r0)
            cz.msebera.android.httpclient.HttpHost r4 = r2.determineProxy(r3, r4, r5)
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r5 = r2.schemeRegistry
            java.lang.String r1 = r3.getSchemeName()
            cz.msebera.android.httpclient.conn.scheme.Scheme r5 = r5.getScheme(r1)
            boolean r5 = r5.isLayered()
            if (r4 != 0) goto L37
            cz.msebera.android.httpclient.conn.routing.HttpRoute r4 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            r4.<init>(r3, r0, r5)
            goto L3d
        L37:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            r1.<init>(r3, r0, r4, r5)
            r4 = r1
        L3d:
            return r4
    }

    protected java.lang.String getHost(java.net.InetSocketAddress r2) {
            r1 = this;
            boolean r0 = r2.isUnresolved()
            if (r0 == 0) goto Lb
            java.lang.String r2 = r2.getHostName()
            goto L13
        Lb:
            java.net.InetAddress r2 = r2.getAddress()
            java.lang.String r2 = r2.getHostAddress()
        L13:
            return r2
    }

    public java.net.ProxySelector getProxySelector() {
            r1 = this;
            java.net.ProxySelector r0 = r1.proxySelector
            return r0
    }

    public void setProxySelector(java.net.ProxySelector r1) {
            r0 = this;
            r0.proxySelector = r1
            return
    }
}
