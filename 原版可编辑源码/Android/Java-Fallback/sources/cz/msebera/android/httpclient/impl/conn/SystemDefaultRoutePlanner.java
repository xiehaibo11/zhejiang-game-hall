package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class SystemDefaultRoutePlanner extends cz.msebera.android.httpclient.impl.conn.DefaultRoutePlanner {
    private final java.net.ProxySelector proxySelector;

    static class 1 {
        static final int[] $SwitchMap$java$net$Proxy$Type = null;

        static {
                java.net.Proxy$Type[] r0 = java.net.Proxy.Type.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner.1.$SwitchMap$java$net$Proxy$Type = r0
                int[] r0 = cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner.1.$SwitchMap$java$net$Proxy$Type     // Catch: java.lang.NoSuchFieldError -> L14
                java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner.1.$SwitchMap$java$net$Proxy$Type     // Catch: java.lang.NoSuchFieldError -> L1f
                java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner.1.$SwitchMap$java$net$Proxy$Type     // Catch: java.lang.NoSuchFieldError -> L2a
                java.net.Proxy$Type r1 = java.net.Proxy.Type.SOCKS     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                return
        }
    }

    public SystemDefaultRoutePlanner(cz.msebera.android.httpclient.conn.SchemePortResolver r1, java.net.ProxySelector r2) {
            r0 = this;
            r0.<init>(r1)
            if (r2 == 0) goto L6
            goto La
        L6:
            java.net.ProxySelector r2 = java.net.ProxySelector.getDefault()
        La:
            r0.proxySelector = r2
            return
    }

    public SystemDefaultRoutePlanner(java.net.ProxySelector r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    private java.net.Proxy chooseProxy(java.util.List<java.net.Proxy> r6) {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            if (r0 != 0) goto L27
            int r2 = r6.size()
            if (r1 >= r2) goto L27
            java.lang.Object r2 = r6.get(r1)
            java.net.Proxy r2 = (java.net.Proxy) r2
            int[] r3 = cz.msebera.android.httpclient.impl.conn.SystemDefaultRoutePlanner.1.$SwitchMap$java$net$Proxy$Type
            java.net.Proxy$Type r4 = r2.type()
            int r4 = r4.ordinal()
            r3 = r3[r4]
            r4 = 1
            if (r3 == r4) goto L23
            r4 = 2
            if (r3 == r4) goto L23
            goto L24
        L23:
            r0 = r2
        L24:
            int r1 = r1 + 1
            goto L2
        L27:
            if (r0 != 0) goto L2b
            java.net.Proxy r0 = java.net.Proxy.NO_PROXY
        L2b:
            return r0
    }

    private java.lang.String getHost(java.net.InetSocketAddress r2) {
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

    @Override
    protected cz.msebera.android.httpclient.HttpHost determineProxy(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException {
            r2 = this;
            java.net.URI r4 = new java.net.URI     // Catch: java.net.URISyntaxException -> L54
            java.lang.String r5 = r3.toURI()     // Catch: java.net.URISyntaxException -> L54
            r4.<init>(r5)     // Catch: java.net.URISyntaxException -> L54
            java.net.ProxySelector r3 = r2.proxySelector
            java.util.List r3 = r3.select(r4)
            java.net.Proxy r3 = r2.chooseProxy(r3)
            r4 = 0
            java.net.Proxy$Type r5 = r3.type()
            java.net.Proxy$Type r0 = java.net.Proxy.Type.HTTP
            if (r5 != r0) goto L53
            java.net.SocketAddress r4 = r3.address()
            boolean r4 = r4 instanceof java.net.InetSocketAddress
            if (r4 == 0) goto L38
            java.net.SocketAddress r3 = r3.address()
            java.net.InetSocketAddress r3 = (java.net.InetSocketAddress) r3
            cz.msebera.android.httpclient.HttpHost r4 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r5 = r2.getHost(r3)
            int r3 = r3.getPort()
            r4.<init>(r5, r3)
            goto L53
        L38:
            cz.msebera.android.httpclient.HttpException r4 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Unable to handle non-Inet proxy address: "
            r5.append(r0)
            java.net.SocketAddress r3 = r3.address()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L53:
            return r4
        L54:
            r4 = move-exception
            cz.msebera.android.httpclient.HttpException r5 = new cz.msebera.android.httpclient.HttpException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot convert host to URI: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r5.<init>(r3, r4)
            throw r5
    }
}
