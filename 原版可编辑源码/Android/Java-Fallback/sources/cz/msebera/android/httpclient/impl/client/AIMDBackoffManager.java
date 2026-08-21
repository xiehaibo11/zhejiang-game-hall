package cz.msebera.android.httpclient.impl.client;

public class AIMDBackoffManager implements cz.msebera.android.httpclient.client.BackoffManager {
    private double backoffFactor;
    private int cap;
    private final cz.msebera.android.httpclient.impl.client.Clock clock;
    private final cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> connPerRoute;
    private long coolDown;
    private final java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> lastRouteBackoffs;
    private final java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> lastRouteProbes;

    public AIMDBackoffManager(cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.client.SystemClock r0 = new cz.msebera.android.httpclient.impl.client.SystemClock
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    AIMDBackoffManager(cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r3, cz.msebera.android.httpclient.impl.client.Clock r4) {
            r2 = this;
            r2.<init>()
            r0 = 5000(0x1388, double:2.4703E-320)
            r2.coolDown = r0
            r0 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            r2.backoffFactor = r0
            r0 = 2
            r2.cap = r0
            r2.clock = r4
            r2.connPerRoute = r3
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r2.lastRouteProbes = r3
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r2.lastRouteBackoffs = r3
            return
    }

    private int getBackedOffPoolSize(int r5) {
            r4 = this;
            r0 = 1
            if (r5 > r0) goto L4
            return r0
        L4:
            double r0 = r4.backoffFactor
            double r2 = (double) r5
            double r0 = r0 * r2
            double r0 = java.lang.Math.floor(r0)
            int r5 = (int) r0
            return r5
    }

    private java.lang.Long getLastUpdate(java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2) {
            r0 = this;
            java.lang.Object r1 = r1.get(r2)
            java.lang.Long r1 = (java.lang.Long) r1
            if (r1 != 0) goto Le
            r1 = 0
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
        Le:
            return r1
    }

    @Override
    public void backOff(cz.msebera.android.httpclient.conn.routing.HttpRoute r10) {
            r9 = this;
            cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r0 = r9.connPerRoute
            monitor-enter(r0)
            cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r1 = r9.connPerRoute     // Catch: java.lang.Throwable -> L37
            int r1 = r1.getMaxPerRoute(r10)     // Catch: java.lang.Throwable -> L37
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> r2 = r9.lastRouteBackoffs     // Catch: java.lang.Throwable -> L37
            java.lang.Long r2 = r9.getLastUpdate(r2, r10)     // Catch: java.lang.Throwable -> L37
            cz.msebera.android.httpclient.impl.client.Clock r3 = r9.clock     // Catch: java.lang.Throwable -> L37
            long r3 = r3.getCurrentTime()     // Catch: java.lang.Throwable -> L37
            long r5 = r2.longValue()     // Catch: java.lang.Throwable -> L37
            long r5 = r3 - r5
            long r7 = r9.coolDown     // Catch: java.lang.Throwable -> L37
            int r2 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r2 >= 0) goto L23
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return
        L23:
            cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r2 = r9.connPerRoute     // Catch: java.lang.Throwable -> L37
            int r1 = r9.getBackedOffPoolSize(r1)     // Catch: java.lang.Throwable -> L37
            r2.setMaxPerRoute(r10, r1)     // Catch: java.lang.Throwable -> L37
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> r1 = r9.lastRouteBackoffs     // Catch: java.lang.Throwable -> L37
            java.lang.Long r2 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L37
            r1.put(r10, r2)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return
        L37:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r10
    }

    @Override
    public void probe(cz.msebera.android.httpclient.conn.routing.HttpRoute r11) {
            r10 = this;
            cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r0 = r10.connPerRoute
            monitor-enter(r0)
            cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r1 = r10.connPerRoute     // Catch: java.lang.Throwable -> L4f
            int r1 = r1.getMaxPerRoute(r11)     // Catch: java.lang.Throwable -> L4f
            int r2 = r10.cap     // Catch: java.lang.Throwable -> L4f
            if (r1 < r2) goto L10
            int r1 = r10.cap     // Catch: java.lang.Throwable -> L4f
            goto L12
        L10:
            int r1 = r1 + 1
        L12:
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> r2 = r10.lastRouteProbes     // Catch: java.lang.Throwable -> L4f
            java.lang.Long r2 = r10.getLastUpdate(r2, r11)     // Catch: java.lang.Throwable -> L4f
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> r3 = r10.lastRouteBackoffs     // Catch: java.lang.Throwable -> L4f
            java.lang.Long r3 = r10.getLastUpdate(r3, r11)     // Catch: java.lang.Throwable -> L4f
            cz.msebera.android.httpclient.impl.client.Clock r4 = r10.clock     // Catch: java.lang.Throwable -> L4f
            long r4 = r4.getCurrentTime()     // Catch: java.lang.Throwable -> L4f
            long r6 = r2.longValue()     // Catch: java.lang.Throwable -> L4f
            long r6 = r4 - r6
            long r8 = r10.coolDown     // Catch: java.lang.Throwable -> L4f
            int r2 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r2 < 0) goto L4d
            long r2 = r3.longValue()     // Catch: java.lang.Throwable -> L4f
            long r2 = r4 - r2
            long r6 = r10.coolDown     // Catch: java.lang.Throwable -> L4f
            int r8 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r8 >= 0) goto L3d
            goto L4d
        L3d:
            cz.msebera.android.httpclient.pool.ConnPoolControl<cz.msebera.android.httpclient.conn.routing.HttpRoute> r2 = r10.connPerRoute     // Catch: java.lang.Throwable -> L4f
            r2.setMaxPerRoute(r11, r1)     // Catch: java.lang.Throwable -> L4f
            java.util.Map<cz.msebera.android.httpclient.conn.routing.HttpRoute, java.lang.Long> r1 = r10.lastRouteProbes     // Catch: java.lang.Throwable -> L4f
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L4f
            r1.put(r11, r2)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            return
        L4d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            return
        L4f:
            r11 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r11
    }

    public void setBackoffFactor(double r4) {
            r3 = this;
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto Le
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 >= 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            java.lang.String r1 = "Backoff factor must be 0.0 < f < 1.0"
            cz.msebera.android.httpclient.util.Args.check(r0, r1)
            r3.backoffFactor = r4
            return
    }

    public void setCooldownMillis(long r4) {
            r3 = this;
            long r0 = r3.coolDown
            java.lang.String r2 = "Cool down"
            cz.msebera.android.httpclient.util.Args.positive(r0, r2)
            r3.coolDown = r4
            return
    }

    public void setPerHostConnectionCap(int r2) {
            r1 = this;
            java.lang.String r0 = "Per host connection cap"
            cz.msebera.android.httpclient.util.Args.positive(r2, r0)
            r1.cap = r2
            return
    }
}
