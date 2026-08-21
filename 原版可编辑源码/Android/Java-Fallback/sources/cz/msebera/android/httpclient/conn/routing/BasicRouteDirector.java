package cz.msebera.android.httpclient.conn.routing;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicRouteDirector implements cz.msebera.android.httpclient.conn.routing.HttpRouteDirector {
    public BasicRouteDirector() {
            r0 = this;
            r0.<init>()
            return
    }

    protected int directStep(cz.msebera.android.httpclient.conn.routing.RouteInfo r4, cz.msebera.android.httpclient.conn.routing.RouteInfo r5) {
            r3 = this;
            int r0 = r5.getHopCount()
            r1 = -1
            r2 = 1
            if (r0 <= r2) goto L9
            return r1
        L9:
            cz.msebera.android.httpclient.HttpHost r0 = r4.getTargetHost()
            cz.msebera.android.httpclient.HttpHost r2 = r5.getTargetHost()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L18
            return r1
        L18:
            boolean r0 = r4.isSecure()
            boolean r2 = r5.isSecure()
            if (r0 == r2) goto L23
            return r1
        L23:
            java.net.InetAddress r0 = r4.getLocalAddress()
            if (r0 == 0) goto L38
            java.net.InetAddress r4 = r4.getLocalAddress()
            java.net.InetAddress r5 = r5.getLocalAddress()
            boolean r4 = r4.equals(r5)
            if (r4 != 0) goto L38
            return r1
        L38:
            r4 = 0
            return r4
    }

    protected int firstStep(cz.msebera.android.httpclient.conn.routing.RouteInfo r2) {
            r1 = this;
            int r2 = r2.getHopCount()
            r0 = 1
            if (r2 <= r0) goto L8
            r0 = 2
        L8:
            return r0
    }

    @Override
    public int nextStep(cz.msebera.android.httpclient.conn.routing.RouteInfo r3, cz.msebera.android.httpclient.conn.routing.RouteInfo r4) {
            r2 = this;
            java.lang.String r0 = "Planned route"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r4 == 0) goto L1f
            int r0 = r4.getHopCount()
            r1 = 1
            if (r0 >= r1) goto Lf
            goto L1f
        Lf:
            int r0 = r3.getHopCount()
            if (r0 <= r1) goto L1a
            int r3 = r2.proxiedStep(r3, r4)
            goto L23
        L1a:
            int r3 = r2.directStep(r3, r4)
            goto L23
        L1f:
            int r3 = r2.firstStep(r3)
        L23:
            return r3
    }

    protected int proxiedStep(cz.msebera.android.httpclient.conn.routing.RouteInfo r8, cz.msebera.android.httpclient.conn.routing.RouteInfo r9) {
            r7 = this;
            int r0 = r9.getHopCount()
            r1 = 1
            r2 = -1
            if (r0 > r1) goto L9
            return r2
        L9:
            cz.msebera.android.httpclient.HttpHost r0 = r8.getTargetHost()
            cz.msebera.android.httpclient.HttpHost r1 = r9.getTargetHost()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L18
            return r2
        L18:
            int r0 = r8.getHopCount()
            int r1 = r9.getHopCount()
            if (r0 >= r1) goto L23
            return r2
        L23:
            r3 = 0
            r4 = 0
        L25:
            int r5 = r1 + (-1)
            if (r4 >= r5) goto L3b
            cz.msebera.android.httpclient.HttpHost r5 = r8.getHopTarget(r4)
            cz.msebera.android.httpclient.HttpHost r6 = r9.getHopTarget(r4)
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L38
            return r2
        L38:
            int r4 = r4 + 1
            goto L25
        L3b:
            if (r0 <= r1) goto L3f
            r8 = 4
            return r8
        L3f:
            boolean r0 = r9.isTunnelled()
            if (r0 == 0) goto L4b
            boolean r0 = r8.isTunnelled()
            if (r0 == 0) goto L57
        L4b:
            boolean r0 = r9.isLayered()
            if (r0 == 0) goto L58
            boolean r0 = r8.isLayered()
            if (r0 != 0) goto L58
        L57:
            return r2
        L58:
            boolean r0 = r8.isTunnelled()
            if (r0 == 0) goto L66
            boolean r0 = r9.isTunnelled()
            if (r0 != 0) goto L66
            r8 = 3
            return r8
        L66:
            boolean r0 = r8.isLayered()
            if (r0 == 0) goto L74
            boolean r0 = r9.isLayered()
            if (r0 != 0) goto L74
            r8 = 5
            return r8
        L74:
            boolean r8 = r8.isSecure()
            boolean r9 = r9.isSecure()
            if (r8 == r9) goto L7f
            return r2
        L7f:
            return r3
    }
}
