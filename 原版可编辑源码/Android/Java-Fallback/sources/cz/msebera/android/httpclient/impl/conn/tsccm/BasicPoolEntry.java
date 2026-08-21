package cz.msebera.android.httpclient.impl.conn.tsccm;

@java.lang.Deprecated
public class BasicPoolEntry extends cz.msebera.android.httpclient.impl.conn.AbstractPoolEntry {
    private final long created;
    private long expiry;
    private long updated;
    private final long validUntil;

    public BasicPoolEntry(cz.msebera.android.httpclient.conn.ClientConnectionOperator r7, cz.msebera.android.httpclient.conn.routing.HttpRoute r8) {
            r6 = this;
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            r3 = -1
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r3, r5)
            return
    }

    public BasicPoolEntry(cz.msebera.android.httpclient.conn.ClientConnectionOperator r2, cz.msebera.android.httpclient.conn.routing.HttpRoute r3, long r4, java.util.concurrent.TimeUnit r6) {
            r1 = this;
            r1.<init>(r2, r3)
            java.lang.String r2 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.created = r2
            r2 = 0
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1e
            long r2 = r1.created
            long r4 = r6.toMillis(r4)
            long r2 = r2 + r4
            r1.validUntil = r2
            goto L25
        L1e:
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r1.validUntil = r2
        L25:
            long r2 = r1.validUntil
            r1.expiry = r2
            return
    }

    public BasicPoolEntry(cz.msebera.android.httpclient.conn.ClientConnectionOperator r1, cz.msebera.android.httpclient.conn.routing.HttpRoute r2, java.lang.ref.ReferenceQueue<java.lang.Object> r3) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "HTTP route"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.created = r1
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.validUntil = r1
            long r1 = r0.validUntil
            r0.expiry = r1
            return
    }

    protected final cz.msebera.android.httpclient.conn.OperatedClientConnection getConnection() {
            r1 = this;
            cz.msebera.android.httpclient.conn.OperatedClientConnection r0 = r1.connection
            return r0
    }

    public long getCreated() {
            r2 = this;
            long r0 = r2.created
            return r0
    }

    public long getExpiry() {
            r2 = this;
            long r0 = r2.expiry
            return r0
    }

    protected final cz.msebera.android.httpclient.conn.routing.HttpRoute getPlannedRoute() {
            r1 = this;
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r1.route
            return r0
    }

    public long getUpdated() {
            r2 = this;
            long r0 = r2.updated
            return r0
    }

    public long getValidUntil() {
            r2 = this;
            long r0 = r2.validUntil
            return r0
    }

    protected final cz.msebera.android.httpclient.impl.conn.tsccm.BasicPoolEntryRef getWeakRef() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isExpired(long r4) {
            r3 = this;
            long r0 = r3.expiry
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 < 0) goto L8
            r4 = 1
            goto L9
        L8:
            r4 = 0
        L9:
            return r4
    }

    @Override
    protected void shutdownEntry() {
            r0 = this;
            super.shutdownEntry()
            return
    }

    public void updateExpiry(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r3.updated = r0
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L14
            long r0 = r3.updated
            long r4 = r6.toMillis(r4)
            long r0 = r0 + r4
            goto L19
        L14:
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L19:
            long r4 = r3.validUntil
            long r4 = java.lang.Math.min(r4, r0)
            r3.expiry = r4
            return
    }
}
