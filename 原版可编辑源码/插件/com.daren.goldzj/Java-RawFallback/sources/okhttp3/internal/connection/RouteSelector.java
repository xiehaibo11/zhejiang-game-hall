package okhttp3.internal.connection;

public final class RouteSelector {
    private final okhttp3.Address address;
    private final okhttp3.Call call;
    private final okhttp3.EventListener eventListener;
    private java.util.List<java.net.InetSocketAddress> inetSocketAddresses;
    private int nextProxyIndex;
    private final java.util.List<okhttp3.Route> postponedRoutes;
    private java.util.List<java.net.Proxy> proxies;
    private final okhttp3.internal.connection.RouteDatabase routeDatabase;

    public static final class Selection {
        private int nextRouteIndex;
        private final java.util.List<okhttp3.Route> routes;

        Selection(java.util.List<okhttp3.Route> r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.nextRouteIndex = r0
                r1.routes = r2
                return
        }

        public java.util.List<okhttp3.Route> getAll() {
                r2 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                java.util.List<okhttp3.Route> r1 = r2.routes
                r0.<init>(r1)
                return r0
        }

        public boolean hasNext() {
                r2 = this;
                int r0 = r2.nextRouteIndex
                java.util.List<okhttp3.Route> r1 = r2.routes
                int r1 = r1.size()
                if (r0 >= r1) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        public okhttp3.Route next() {
                r3 = this;
                boolean r0 = r3.hasNext()
                if (r0 == 0) goto L15
                java.util.List<okhttp3.Route> r0 = r3.routes
                int r1 = r3.nextRouteIndex
                int r2 = r1 + 1
                r3.nextRouteIndex = r2
                java.lang.Object r0 = r0.get(r1)
                okhttp3.Route r0 = (okhttp3.Route) r0
                return r0
            L15:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                r0.<init>()
                throw r0
        }
    }

    public RouteSelector(okhttp3.Address r2, okhttp3.internal.connection.RouteDatabase r3, okhttp3.Call r4, okhttp3.EventListener r5) {
            r1 = this;
            r1.<init>()
            java.util.List r0 = java.util.Collections.emptyList()
            r1.proxies = r0
            java.util.List r0 = java.util.Collections.emptyList()
            r1.inetSocketAddresses = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.postponedRoutes = r0
            r1.address = r2
            r1.routeDatabase = r3
            r1.call = r4
            r1.eventListener = r5
            okhttp3.HttpUrl r3 = r2.url()
            java.net.Proxy r2 = r2.proxy()
            r1.resetNextProxy(r3, r2)
            return
    }

    static java.lang.String getHostString(java.net.InetSocketAddress r1) {
            java.net.InetAddress r0 = r1.getAddress()
            if (r0 != 0) goto Lb
            java.lang.String r1 = r1.getHostName()
            return r1
        Lb:
            java.lang.String r1 = r0.getHostAddress()
            return r1
    }

    private boolean hasNextProxy() {
            r2 = this;
            int r0 = r2.nextProxyIndex
            java.util.List<java.net.Proxy> r1 = r2.proxies
            int r1 = r1.size()
            if (r0 >= r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private java.net.Proxy nextProxy() throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.hasNextProxy()
            if (r0 == 0) goto L18
            java.util.List<java.net.Proxy> r0 = r3.proxies
            int r1 = r3.nextProxyIndex
            int r2 = r1 + 1
            r3.nextProxyIndex = r2
            java.lang.Object r0 = r0.get(r1)
            java.net.Proxy r0 = (java.net.Proxy) r0
            r3.resetNextInetSocketAddress(r0)
            return r0
        L18:
            java.net.SocketException r0 = new java.net.SocketException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "No route to "
            r1.append(r2)
            okhttp3.Address r2 = r3.address
            okhttp3.HttpUrl r2 = r2.url()
            java.lang.String r2 = r2.host()
            r1.append(r2)
            java.lang.String r2 = "; exhausted proxy configurations: "
            r1.append(r2)
            java.util.List<java.net.Proxy> r2 = r3.proxies
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private void resetNextInetSocketAddress(java.net.Proxy r7) throws java.io.IOException {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.inetSocketAddresses = r0
            java.net.Proxy$Type r0 = r7.type()
            java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT
            if (r0 == r1) goto L46
            java.net.Proxy$Type r0 = r7.type()
            java.net.Proxy$Type r1 = java.net.Proxy.Type.SOCKS
            if (r0 != r1) goto L18
            goto L46
        L18:
            java.net.SocketAddress r0 = r7.address()
            boolean r1 = r0 instanceof java.net.InetSocketAddress
            if (r1 == 0) goto L2b
            java.net.InetSocketAddress r0 = (java.net.InetSocketAddress) r0
            java.lang.String r1 = getHostString(r0)
            int r0 = r0.getPort()
            goto L5a
        L2b:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Proxy.address() is not an InetSocketAddress: "
            r1.append(r2)
            java.lang.Class r0 = r0.getClass()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r7.<init>(r0)
            throw r7
        L46:
            okhttp3.Address r0 = r6.address
            okhttp3.HttpUrl r0 = r0.url()
            java.lang.String r1 = r0.host()
            okhttp3.Address r0 = r6.address
            okhttp3.HttpUrl r0 = r0.url()
            int r0 = r0.port()
        L5a:
            r2 = 1
            if (r0 < r2) goto Lcd
            r2 = 65535(0xffff, float:9.1834E-41)
            if (r0 > r2) goto Lcd
            java.net.Proxy$Type r7 = r7.type()
            java.net.Proxy$Type r2 = java.net.Proxy.Type.SOCKS
            if (r7 != r2) goto L74
            java.util.List<java.net.InetSocketAddress> r7 = r6.inetSocketAddresses
            java.net.InetSocketAddress r0 = java.net.InetSocketAddress.createUnresolved(r1, r0)
            r7.add(r0)
            goto Lac
        L74:
            okhttp3.EventListener r7 = r6.eventListener
            okhttp3.Call r2 = r6.call
            r7.dnsStart(r2, r1)
            okhttp3.Address r7 = r6.address
            okhttp3.Dns r7 = r7.dns()
            java.util.List r7 = r7.lookup(r1)
            boolean r2 = r7.isEmpty()
            if (r2 != 0) goto Lad
            okhttp3.EventListener r2 = r6.eventListener
            okhttp3.Call r3 = r6.call
            r2.dnsEnd(r3, r1, r7)
            r1 = 0
            int r2 = r7.size()
        L97:
            if (r1 >= r2) goto Lac
            java.lang.Object r3 = r7.get(r1)
            java.net.InetAddress r3 = (java.net.InetAddress) r3
            java.util.List<java.net.InetSocketAddress> r4 = r6.inetSocketAddresses
            java.net.InetSocketAddress r5 = new java.net.InetSocketAddress
            r5.<init>(r3, r0)
            r4.add(r5)
            int r1 = r1 + 1
            goto L97
        Lac:
            return
        Lad:
            java.net.UnknownHostException r7 = new java.net.UnknownHostException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            okhttp3.Address r2 = r6.address
            okhttp3.Dns r2 = r2.dns()
            r0.append(r2)
            java.lang.String r2 = " returned no addresses for "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.<init>(r0)
            throw r7
        Lcd:
            java.net.SocketException r7 = new java.net.SocketException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "No route to "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = ":"
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = "; port is out of range"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r7.<init>(r0)
            throw r7
    }

    private void resetNextProxy(okhttp3.HttpUrl r2, java.net.Proxy r3) {
            r1 = this;
            r0 = 0
            if (r3 == 0) goto La
            java.util.List r2 = java.util.Collections.singletonList(r3)
            r1.proxies = r2
            goto L32
        La:
            okhttp3.Address r3 = r1.address
            java.net.ProxySelector r3 = r3.proxySelector()
            java.net.URI r2 = r2.uri()
            java.util.List r2 = r3.select(r2)
            if (r2 == 0) goto L25
            boolean r3 = r2.isEmpty()
            if (r3 != 0) goto L25
            java.util.List r2 = okhttp3.internal.Util.immutableList(r2)
            goto L30
        L25:
            r2 = 1
            java.net.Proxy[] r2 = new java.net.Proxy[r2]
            java.net.Proxy r3 = java.net.Proxy.NO_PROXY
            r2[r0] = r3
            java.util.List r2 = okhttp3.internal.Util.immutableList(r2)
        L30:
            r1.proxies = r2
        L32:
            r1.nextProxyIndex = r0
            return
    }

    public void connectFailed(okhttp3.Route r4, java.io.IOException r5) {
            r3 = this;
            java.net.Proxy r0 = r4.proxy()
            java.net.Proxy$Type r0 = r0.type()
            java.net.Proxy$Type r1 = java.net.Proxy.Type.DIRECT
            if (r0 == r1) goto L2f
            okhttp3.Address r0 = r3.address
            java.net.ProxySelector r0 = r0.proxySelector()
            if (r0 == 0) goto L2f
            okhttp3.Address r0 = r3.address
            java.net.ProxySelector r0 = r0.proxySelector()
            okhttp3.Address r1 = r3.address
            okhttp3.HttpUrl r1 = r1.url()
            java.net.URI r1 = r1.uri()
            java.net.Proxy r2 = r4.proxy()
            java.net.SocketAddress r2 = r2.address()
            r0.connectFailed(r1, r2, r5)
        L2f:
            okhttp3.internal.connection.RouteDatabase r5 = r3.routeDatabase
            r5.failed(r4)
            return
    }

    public boolean hasNext() {
            r1 = this;
            boolean r0 = r1.hasNextProxy()
            if (r0 != 0) goto L11
            java.util.List<okhttp3.Route> r0 = r1.postponedRoutes
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            return r0
    }

    public okhttp3.internal.connection.RouteSelector.Selection next() throws java.io.IOException {
            r7 = this;
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L5d
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        Lb:
            boolean r1 = r7.hasNextProxy()
            if (r1 == 0) goto L47
            java.net.Proxy r1 = r7.nextProxy()
            r2 = 0
            java.util.List<java.net.InetSocketAddress> r3 = r7.inetSocketAddresses
            int r3 = r3.size()
        L1c:
            if (r2 >= r3) goto L41
            okhttp3.Route r4 = new okhttp3.Route
            okhttp3.Address r5 = r7.address
            java.util.List<java.net.InetSocketAddress> r6 = r7.inetSocketAddresses
            java.lang.Object r6 = r6.get(r2)
            java.net.InetSocketAddress r6 = (java.net.InetSocketAddress) r6
            r4.<init>(r5, r1, r6)
            okhttp3.internal.connection.RouteDatabase r5 = r7.routeDatabase
            boolean r5 = r5.shouldPostpone(r4)
            if (r5 == 0) goto L3b
            java.util.List<okhttp3.Route> r5 = r7.postponedRoutes
            r5.add(r4)
            goto L3e
        L3b:
            r0.add(r4)
        L3e:
            int r2 = r2 + 1
            goto L1c
        L41:
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto Lb
        L47:
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L57
            java.util.List<okhttp3.Route> r1 = r7.postponedRoutes
            r0.addAll(r1)
            java.util.List<okhttp3.Route> r1 = r7.postponedRoutes
            r1.clear()
        L57:
            okhttp3.internal.connection.RouteSelector$Selection r1 = new okhttp3.internal.connection.RouteSelector$Selection
            r1.<init>(r0)
            return r1
        L5d:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
    }
}
