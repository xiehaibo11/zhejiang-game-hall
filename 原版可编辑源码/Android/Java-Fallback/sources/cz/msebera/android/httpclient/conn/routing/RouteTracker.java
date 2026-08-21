package cz.msebera.android.httpclient.conn.routing;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public final class RouteTracker implements cz.msebera.android.httpclient.conn.routing.RouteInfo, java.lang.Cloneable {
    private boolean connected;
    private cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType layered;
    private final java.net.InetAddress localAddress;
    private cz.msebera.android.httpclient.HttpHost[] proxyChain;
    private boolean secure;
    private final cz.msebera.android.httpclient.HttpHost targetHost;
    private cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType tunnelled;

    public RouteTracker(cz.msebera.android.httpclient.HttpHost r2, java.net.InetAddress r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.targetHost = r2
            r1.localAddress = r3
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r2 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
            r1.tunnelled = r2
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r2 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
            r1.layered = r2
            return
    }

    public RouteTracker(cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r2.getTargetHost()
            java.net.InetAddress r2 = r2.getLocalAddress()
            r1.<init>(r0, r2)
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public final void connectProxy(cz.msebera.android.httpclient.HttpHost r4, boolean r5) {
            r3 = this;
            java.lang.String r0 = "Proxy host"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            boolean r0 = r3.connected
            r1 = 1
            r0 = r0 ^ r1
            java.lang.String r2 = "Already connected"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r2)
            r3.connected = r1
            cz.msebera.android.httpclient.HttpHost[] r0 = new cz.msebera.android.httpclient.HttpHost[r1]
            r1 = 0
            r0[r1] = r4
            r3.proxyChain = r0
            r3.secure = r5
            return
    }

    public final void connectTarget(boolean r4) {
            r3 = this;
            boolean r0 = r3.connected
            r1 = 1
            r0 = r0 ^ r1
            java.lang.String r2 = "Already connected"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r2)
            r3.connected = r1
            r3.secure = r4
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.conn.routing.RouteTracker
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            cz.msebera.android.httpclient.conn.routing.RouteTracker r5 = (cz.msebera.android.httpclient.conn.routing.RouteTracker) r5
            boolean r1 = r4.connected
            boolean r3 = r5.connected
            if (r1 != r3) goto L43
            boolean r1 = r4.secure
            boolean r3 = r5.secure
            if (r1 != r3) goto L43
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = r4.tunnelled
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r3 = r5.tunnelled
            if (r1 != r3) goto L43
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = r4.layered
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r3 = r5.layered
            if (r1 != r3) goto L43
            cz.msebera.android.httpclient.HttpHost r1 = r4.targetHost
            cz.msebera.android.httpclient.HttpHost r3 = r5.targetHost
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r1 == 0) goto L43
            java.net.InetAddress r1 = r4.localAddress
            java.net.InetAddress r3 = r5.localAddress
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r1 == 0) goto L43
            cz.msebera.android.httpclient.HttpHost[] r1 = r4.proxyChain
            cz.msebera.android.httpclient.HttpHost[] r5 = r5.proxyChain
            boolean r5 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r5)
            if (r5 == 0) goto L43
            goto L44
        L43:
            r0 = 0
        L44:
            return r0
    }

    @Override
    public final int getHopCount() {
            r2 = this;
            boolean r0 = r2.connected
            r1 = 1
            if (r0 == 0) goto Ld
            cz.msebera.android.httpclient.HttpHost[] r0 = r2.proxyChain
            if (r0 != 0) goto La
            goto Le
        La:
            int r0 = r0.length
            int r1 = r1 + r0
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    @Override
    public final cz.msebera.android.httpclient.HttpHost getHopTarget(int r5) {
            r4 = this;
            java.lang.String r0 = "Hop index"
            cz.msebera.android.httpclient.util.Args.notNegative(r5, r0)
            int r0 = r4.getHopCount()
            r1 = 1
            if (r5 >= r0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            java.lang.String r3 = "Hop index exceeds tracked route length"
            cz.msebera.android.httpclient.util.Args.check(r2, r3)
            int r0 = r0 - r1
            if (r5 >= r0) goto L1c
            cz.msebera.android.httpclient.HttpHost[] r0 = r4.proxyChain
            r5 = r0[r5]
            goto L1e
        L1c:
            cz.msebera.android.httpclient.HttpHost r5 = r4.targetHost
        L1e:
            return r5
    }

    @Override
    public final cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType getLayerType() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r0 = r1.layered
            return r0
    }

    @Override
    public final java.net.InetAddress getLocalAddress() {
            r1 = this;
            java.net.InetAddress r0 = r1.localAddress
            return r0
    }

    @Override
    public final cz.msebera.android.httpclient.HttpHost getProxyHost() {
            r2 = this;
            cz.msebera.android.httpclient.HttpHost[] r0 = r2.proxyChain
            if (r0 != 0) goto L6
            r0 = 0
            goto L9
        L6:
            r1 = 0
            r0 = r0[r1]
        L9:
            return r0
    }

    @Override
    public final cz.msebera.android.httpclient.HttpHost getTargetHost() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.targetHost
            return r0
    }

    @Override
    public final cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType getTunnelType() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r0 = r1.tunnelled
            return r0
    }

    public final int hashCode() {
            r5 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r5.targetHost
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.net.InetAddress r1 = r5.localAddress
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            cz.msebera.android.httpclient.HttpHost[] r1 = r5.proxyChain
            if (r1 == 0) goto L1f
            int r2 = r1.length
            r3 = 0
        L14:
            if (r3 >= r2) goto L1f
            r4 = r1[r3]
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r4)
            int r3 = r3 + 1
            goto L14
        L1f:
            boolean r1 = r5.connected
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            boolean r1 = r5.secure
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = r5.tunnelled
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = r5.layered
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            return r0
    }

    public final boolean isConnected() {
            r1 = this;
            boolean r0 = r1.connected
            return r0
    }

    @Override
    public final boolean isLayered() {
            r2 = this;
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r0 = r2.layered
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public final boolean isSecure() {
            r1 = this;
            boolean r0 = r1.secure
            return r0
    }

    @Override
    public final boolean isTunnelled() {
            r2 = this;
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r0 = r2.tunnelled
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public final void layerProtocol(boolean r3) {
            r2 = this;
            boolean r0 = r2.connected
            java.lang.String r1 = "No layered protocol unless connected"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r0 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED
            r2.layered = r0
            r2.secure = r3
            return
    }

    public void reset() {
            r2 = this;
            r0 = 0
            r2.connected = r0
            r1 = 0
            r2.proxyChain = r1
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
            r2.tunnelled = r1
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
            r2.layered = r1
            r2.secure = r0
            return
    }

    public final cz.msebera.android.httpclient.conn.routing.HttpRoute toRoute() {
            r8 = this;
            boolean r0 = r8.connected
            if (r0 != 0) goto L6
            r0 = 0
            goto L18
        L6:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = new cz.msebera.android.httpclient.conn.routing.HttpRoute
            cz.msebera.android.httpclient.HttpHost r2 = r8.targetHost
            java.net.InetAddress r3 = r8.localAddress
            cz.msebera.android.httpclient.HttpHost[] r4 = r8.proxyChain
            boolean r5 = r8.secure
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r6 = r8.tunnelled
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r7 = r8.layered
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
        L18:
            return r0
    }

    public final java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r6.getHopCount()
            int r1 = r1 * 30
            int r1 = r1 + 50
            r0.<init>(r1)
            java.lang.String r1 = "RouteTracker["
            r0.append(r1)
            java.net.InetAddress r1 = r6.localAddress
            java.lang.String r2 = "->"
            if (r1 == 0) goto L1e
            r0.append(r1)
            r0.append(r2)
        L1e:
            r1 = 123(0x7b, float:1.72E-43)
            r0.append(r1)
            boolean r1 = r6.connected
            if (r1 == 0) goto L2c
            r1 = 99
            r0.append(r1)
        L2c:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = r6.tunnelled
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r3 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            if (r1 != r3) goto L37
            r1 = 116(0x74, float:1.63E-43)
            r0.append(r1)
        L37:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = r6.layered
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r3 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED
            if (r1 != r3) goto L42
            r1 = 108(0x6c, float:1.51E-43)
            r0.append(r1)
        L42:
            boolean r1 = r6.secure
            if (r1 == 0) goto L4b
            r1 = 115(0x73, float:1.61E-43)
            r0.append(r1)
        L4b:
            java.lang.String r1 = "}->"
            r0.append(r1)
            cz.msebera.android.httpclient.HttpHost[] r1 = r6.proxyChain
            if (r1 == 0) goto L63
            int r3 = r1.length
            r4 = 0
        L56:
            if (r4 >= r3) goto L63
            r5 = r1[r4]
            r0.append(r5)
            r0.append(r2)
            int r4 = r4 + 1
            goto L56
        L63:
            cz.msebera.android.httpclient.HttpHost r1 = r6.targetHost
            r0.append(r1)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final void tunnelProxy(cz.msebera.android.httpclient.HttpHost r5, boolean r6) {
            r4 = this;
            java.lang.String r0 = "Proxy host"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            boolean r0 = r4.connected
            java.lang.String r1 = "No tunnel unless connected"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.HttpHost[] r0 = r4.proxyChain
            java.lang.String r1 = "No tunnel without proxy"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            cz.msebera.android.httpclient.HttpHost[] r0 = r4.proxyChain
            int r1 = r0.length
            int r1 = r1 + 1
            cz.msebera.android.httpclient.HttpHost[] r1 = new cz.msebera.android.httpclient.HttpHost[r1]
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            int r0 = r1.length
            int r0 = r0 + (-1)
            r1[r0] = r5
            r4.proxyChain = r1
            r4.secure = r6
            return
    }

    public final void tunnelTarget(boolean r3) {
            r2 = this;
            boolean r0 = r2.connected
            java.lang.String r1 = "No tunnel unless connected"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.HttpHost[] r0 = r2.proxyChain
            java.lang.String r1 = "No tunnel without proxy"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r0 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            r2.tunnelled = r0
            r2.secure = r3
            return
    }
}
