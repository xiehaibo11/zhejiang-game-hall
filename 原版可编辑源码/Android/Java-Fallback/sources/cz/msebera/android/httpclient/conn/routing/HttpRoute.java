package cz.msebera.android.httpclient.conn.routing;

@cz.msebera.android.httpclient.annotation.Immutable
public final class HttpRoute implements cz.msebera.android.httpclient.conn.routing.RouteInfo, java.lang.Cloneable {
    private final cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType layered;
    private final java.net.InetAddress localAddress;
    private final java.util.List<cz.msebera.android.httpclient.HttpHost> proxyChain;
    private final boolean secure;
    private final cz.msebera.android.httpclient.HttpHost targetHost;
    private final cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType tunnelled;

    public HttpRoute(cz.msebera.android.httpclient.HttpHost r8) {
            r7 = this;
            java.util.List r3 = java.util.Collections.emptyList()
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r5 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r6 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
            r2 = 0
            r4 = 0
            r0 = r7
            r1 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public HttpRoute(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpHost r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r4, r1)
            return
    }

    public HttpRoute(cz.msebera.android.httpclient.HttpHost r8, java.net.InetAddress r9, cz.msebera.android.httpclient.HttpHost r10, boolean r11) {
            r7 = this;
            java.lang.String r0 = "Proxy host"
            java.lang.Object r10 = cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.util.List r3 = java.util.Collections.singletonList(r10)
            if (r11 == 0) goto Lf
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r10 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            goto L11
        Lf:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r10 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
        L11:
            r5 = r10
            if (r11 == 0) goto L17
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r10 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED
            goto L19
        L17:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r10 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
        L19:
            r6 = r10
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public HttpRoute(cz.msebera.android.httpclient.HttpHost r8, java.net.InetAddress r9, cz.msebera.android.httpclient.HttpHost r10, boolean r11, cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType r12, cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType r13) {
            r7 = this;
            if (r10 == 0) goto L7
            java.util.List r10 = java.util.Collections.singletonList(r10)
            goto L8
        L7:
            r10 = 0
        L8:
            r3 = r10
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private HttpRoute(cz.msebera.android.httpclient.HttpHost r2, java.net.InetAddress r3, java.util.List<cz.msebera.android.httpclient.HttpHost> r4, boolean r5, cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType r6, cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType r7) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Target host"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.HttpHost r2 = normalize(r2)
            r1.targetHost = r2
            r1.localAddress = r3
            if (r4 == 0) goto L20
            boolean r2 = r4.isEmpty()
            if (r2 != 0) goto L20
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r4)
            r1.proxyChain = r2
            goto L23
        L20:
            r2 = 0
            r1.proxyChain = r2
        L23:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r2 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            if (r6 != r2) goto L33
            java.util.List<cz.msebera.android.httpclient.HttpHost> r2 = r1.proxyChain
            if (r2 == 0) goto L2d
            r2 = 1
            goto L2e
        L2d:
            r2 = 0
        L2e:
            java.lang.String r3 = "Proxy required if tunnelled"
            cz.msebera.android.httpclient.util.Args.check(r2, r3)
        L33:
            r1.secure = r5
            if (r6 == 0) goto L38
            goto L3a
        L38:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r6 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
        L3a:
            r1.tunnelled = r6
            if (r7 == 0) goto L3f
            goto L41
        L3f:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r7 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
        L41:
            r1.layered = r7
            return
    }

    public HttpRoute(cz.msebera.android.httpclient.HttpHost r8, java.net.InetAddress r9, boolean r10) {
            r7 = this;
            java.util.List r3 = java.util.Collections.emptyList()
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r5 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r6 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public HttpRoute(cz.msebera.android.httpclient.HttpHost r8, java.net.InetAddress r9, cz.msebera.android.httpclient.HttpHost[] r10, boolean r11, cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType r12, cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType r13) {
            r7 = this;
            if (r10 == 0) goto L7
            java.util.List r10 = java.util.Arrays.asList(r10)
            goto L8
        L7:
            r10 = 0
        L8:
            r3 = r10
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private static int getDefaultPort(java.lang.String r1) {
            java.lang.String r0 = "http"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto Lb
            r1 = 80
            return r1
        Lb:
            java.lang.String r0 = "https"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L16
            r1 = 443(0x1bb, float:6.21E-43)
            return r1
        L16:
            r1 = -1
            return r1
    }

    private static cz.msebera.android.httpclient.HttpHost normalize(cz.msebera.android.httpclient.HttpHost r3) {
            int r0 = r3.getPort()
            if (r0 < 0) goto L7
            return r3
        L7:
            java.net.InetAddress r0 = r3.getAddress()
            java.lang.String r1 = r3.getSchemeName()
            if (r0 == 0) goto L1b
            cz.msebera.android.httpclient.HttpHost r3 = new cz.msebera.android.httpclient.HttpHost
            int r2 = getDefaultPort(r1)
            r3.<init>(r0, r2, r1)
            return r3
        L1b:
            java.lang.String r3 = r3.getHostName()
            cz.msebera.android.httpclient.HttpHost r0 = new cz.msebera.android.httpclient.HttpHost
            int r2 = getDefaultPort(r1)
            r0.<init>(r3, r2, r1)
            return r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.conn.routing.HttpRoute
            r2 = 0
            if (r1 == 0) goto L3e
            cz.msebera.android.httpclient.conn.routing.HttpRoute r5 = (cz.msebera.android.httpclient.conn.routing.HttpRoute) r5
            boolean r1 = r4.secure
            boolean r3 = r5.secure
            if (r1 != r3) goto L3c
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = r4.tunnelled
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r3 = r5.tunnelled
            if (r1 != r3) goto L3c
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = r4.layered
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r3 = r5.layered
            if (r1 != r3) goto L3c
            cz.msebera.android.httpclient.HttpHost r1 = r4.targetHost
            cz.msebera.android.httpclient.HttpHost r3 = r5.targetHost
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r1 == 0) goto L3c
            java.net.InetAddress r1 = r4.localAddress
            java.net.InetAddress r3 = r5.localAddress
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r1 == 0) goto L3c
            java.util.List<cz.msebera.android.httpclient.HttpHost> r1 = r4.proxyChain
            java.util.List<cz.msebera.android.httpclient.HttpHost> r5 = r5.proxyChain
            boolean r5 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r5)
            if (r5 == 0) goto L3c
            goto L3d
        L3c:
            r0 = 0
        L3d:
            return r0
        L3e:
            return r2
    }

    @Override
    public final int getHopCount() {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpHost> r0 = r2.proxyChain
            r1 = 1
            if (r0 == 0) goto La
            int r0 = r0.size()
            int r1 = r1 + r0
        La:
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
            if (r5 >= r0) goto L20
            java.util.List<cz.msebera.android.httpclient.HttpHost> r0 = r4.proxyChain
            java.lang.Object r5 = r0.get(r5)
            cz.msebera.android.httpclient.HttpHost r5 = (cz.msebera.android.httpclient.HttpHost) r5
            return r5
        L20:
            cz.msebera.android.httpclient.HttpHost r5 = r4.targetHost
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

    public final java.net.InetSocketAddress getLocalSocketAddress() {
            r3 = this;
            java.net.InetAddress r0 = r3.localAddress
            if (r0 == 0) goto Lb
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress
            r2 = 0
            r1.<init>(r0, r2)
            goto Lc
        Lb:
            r1 = 0
        Lc:
            return r1
    }

    @Override
    public final cz.msebera.android.httpclient.HttpHost getProxyHost() {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.HttpHost> r0 = r2.proxyChain
            if (r0 == 0) goto L14
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L14
            java.util.List<cz.msebera.android.httpclient.HttpHost> r0 = r2.proxyChain
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            cz.msebera.android.httpclient.HttpHost r0 = (cz.msebera.android.httpclient.HttpHost) r0
            goto L15
        L14:
            r0 = 0
        L15:
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
            r3 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r3.targetHost
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.net.InetAddress r1 = r3.localAddress
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            java.util.List<cz.msebera.android.httpclient.HttpHost> r1 = r3.proxyChain
            if (r1 == 0) goto L27
            java.util.Iterator r1 = r1.iterator()
        L16:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.HttpHost r2 = (cz.msebera.android.httpclient.HttpHost) r2
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r2)
            goto L16
        L27:
            boolean r1 = r3.secure
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = r3.tunnelled
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = r3.layered
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
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

    public final java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r4.getHopCount()
            int r1 = r1 * 30
            int r1 = r1 + 50
            r0.<init>(r1)
            java.net.InetAddress r1 = r4.localAddress
            java.lang.String r2 = "->"
            if (r1 == 0) goto L19
            r0.append(r1)
            r0.append(r2)
        L19:
            r1 = 123(0x7b, float:1.72E-43)
            r0.append(r1)
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = r4.tunnelled
            cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r3 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
            if (r1 != r3) goto L29
            r1 = 116(0x74, float:1.63E-43)
            r0.append(r1)
        L29:
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = r4.layered
            cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r3 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED
            if (r1 != r3) goto L34
            r1 = 108(0x6c, float:1.51E-43)
            r0.append(r1)
        L34:
            boolean r1 = r4.secure
            if (r1 == 0) goto L3d
            r1 = 115(0x73, float:1.61E-43)
            r0.append(r1)
        L3d:
            java.lang.String r1 = "}->"
            r0.append(r1)
            java.util.List<cz.msebera.android.httpclient.HttpHost> r1 = r4.proxyChain
            if (r1 == 0) goto L5d
            java.util.Iterator r1 = r1.iterator()
        L4a:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L5d
            java.lang.Object r3 = r1.next()
            cz.msebera.android.httpclient.HttpHost r3 = (cz.msebera.android.httpclient.HttpHost) r3
            r0.append(r3)
            r0.append(r2)
            goto L4a
        L5d:
            cz.msebera.android.httpclient.HttpHost r1 = r4.targetHost
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
