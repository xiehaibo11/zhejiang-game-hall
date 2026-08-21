package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class BasicPoolEntryRef extends java.lang.ref.WeakReference<cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry> {
    private final cz.msebera.android.httpclient.conn.routing.HttpRoute route;

    public BasicPoolEntryRef(cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntry r1, java.lang.ref.ReferenceQueue<java.lang.Object> r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r2 = "Pool entry"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            cz.msebera.android.httpclient.conn.routing.HttpRoute r1 = r1.getPlannedRoute()
            r0.route = r1
            return
    }

    public final cz.msebera.android.httpclient.conn.routing.HttpRoute getRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r1.route
            return r0
    }
}
