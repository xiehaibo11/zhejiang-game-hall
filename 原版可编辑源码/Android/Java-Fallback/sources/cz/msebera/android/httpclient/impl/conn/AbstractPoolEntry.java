package cz.msebera.android.httpclient.impl.conn;

@java.lang.Deprecated
public abstract class AbstractPoolEntry {
    protected final cz.msebera.android.httpclient.conn.ClientConnectionOperator connOperator;
    protected final cz.msebera.android.httpclient.conn.OperatedClientConnection connection;
    protected volatile cz.msebera.android.httpclient.conn.routing.HttpRoute route;
    protected volatile java.lang.Object state;
    protected volatile cz.msebera.android.httpclient.conn.routing.RouteTracker tracker;

    protected AbstractPoolEntry(cz.msebera.android.httpclient.conn.ClientConnectionOperator r2, cz.msebera.android.httpclient.conn.routing.HttpRoute r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Connection operator"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.connOperator = r2
            cz.msebera.android.httpclient.conn.OperatedClientConnection r2 = r2.createConnection()
            r1.connection = r2
            r1.route = r3
            r2 = 0
            r1.tracker = r2
            return
    }

    public java.lang.Object getState() {
            r1 = this;
            java.lang.Object r0 = r1.state
            return r0
    }

    public void layerProtocol(cz.msebera.android.httpclient.protocol.HttpContext r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            boolean r0 = r0.isConnected()
            java.lang.String r1 = "Connection not open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            boolean r0 = r0.isTunnelled()
            java.lang.String r1 = "Protocol layering without a tunnel not supported"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            boolean r0 = r0.isLayered()
            r0 = r0 ^ 1
            java.lang.String r1 = "Multiple protocol layering not supported"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            cz.msebera.android.httpclient.HttpHost r0 = r0.getTargetHost()
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r1 = r3.connOperator
            cz.msebera.android.httpclient.conn.OperatedClientConnection r2 = r3.connection
            r1.updateSecureConnection(r2, r0, r4, r5)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r4 = r3.tracker
            cz.msebera.android.httpclient.conn.OperatedClientConnection r5 = r3.connection
            boolean r5 = r5.isSecure()
            r4.layerProtocol(r5)
            return
    }

    public void open(cz.msebera.android.httpclient.conn.routing.HttpRoute r8, cz.msebera.android.httpclient.protocol.HttpContext r9, cz.msebera.android.httpclient.params.HttpParams r10) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "Route"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r7.tracker
            if (r0 == 0) goto L1b
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r7.tracker
            boolean r0 = r0.isConnected()
            r0 = r0 ^ 1
            java.lang.String r1 = "Connection already open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
        L1b:
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = new cz.msebera.android.httpclient.conn.routing.RouteTracker
            r0.<init>(r8)
            r7.tracker = r0
            cz.msebera.android.httpclient.HttpHost r0 = r8.getProxyHost()
            cz.msebera.android.httpclient.conn.ClientConnectionOperator r1 = r7.connOperator
            cz.msebera.android.httpclient.conn.OperatedClientConnection r2 = r7.connection
            if (r0 == 0) goto L2e
            r3 = r0
            goto L32
        L2e:
            cz.msebera.android.httpclient.HttpHost r3 = r8.getTargetHost()
        L32:
            java.net.InetAddress r4 = r8.getLocalAddress()
            r5 = r9
            r6 = r10
            r1.openConnection(r2, r3, r4, r5, r6)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r8 = r7.tracker
            if (r8 == 0) goto L55
            if (r0 != 0) goto L4b
            cz.msebera.android.httpclient.conn.OperatedClientConnection r9 = r7.connection
            boolean r9 = r9.isSecure()
            r8.connectTarget(r9)
            goto L54
        L4b:
            cz.msebera.android.httpclient.conn.OperatedClientConnection r9 = r7.connection
            boolean r9 = r9.isSecure()
            r8.connectProxy(r0, r9)
        L54:
            return
        L55:
            java.io.InterruptedIOException r8 = new java.io.InterruptedIOException
            java.lang.String r9 = "Request aborted"
            r8.<init>(r9)
            throw r8
    }

    public void setState(java.lang.Object r1) {
            r0 = this;
            r0.state = r1
            return
    }

    protected void shutdownEntry() {
            r1 = this;
            r0 = 0
            r1.tracker = r0
            r1.state = r0
            return
    }

    public void tunnelProxy(cz.msebera.android.httpclient.HttpHost r3, boolean r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "Next proxy"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r2.tracker
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r2.tracker
            boolean r0 = r0.isConnected()
            java.lang.String r1 = "Connection not open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r2.connection
            r1 = 0
            r0.update(r1, r3, r4, r5)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r5 = r2.tracker
            r5.tunnelProxy(r3, r4)
            return
    }

    public void tunnelTarget(boolean r4, cz.msebera.android.httpclient.params.HttpParams r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            java.lang.String r1 = "Route tracker"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            boolean r0 = r0.isConnected()
            java.lang.String r1 = "Connection not open"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r0 = r3.tracker
            boolean r0 = r0.isTunnelled()
            r0 = r0 ^ 1
            java.lang.String r1 = "Connection is already tunnelled"
            cz.msebera.android.httpclient.util.Asserts.check(r0, r1)
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r3.connection
            r1 = 0
            cz.msebera.android.httpclient.conn.routing.RouteTracker r2 = r3.tracker
            cz.msebera.android.httpclient.HttpHost r2 = r2.getTargetHost()
            r0.update(r1, r2, r4, r5)
            cz.msebera.android.httpclient.conn.routing.RouteTracker r5 = r3.tracker
            r5.tunnelTarget(r4)
            return
    }
}
