package cz.msebera.android.httpclient.pool;

@cz.msebera.android.httpclient.annotation.Immutable
public class PoolStats {
    private final int available;
    private final int leased;
    private final int max;
    private final int pending;

    public PoolStats(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.<init>()
            r0.leased = r1
            r0.pending = r2
            r0.available = r3
            r0.max = r4
            return
    }

    public int getAvailable() {
            r1 = this;
            int r0 = r1.available
            return r0
    }

    public int getLeased() {
            r1 = this;
            int r0 = r1.leased
            return r0
    }

    public int getMax() {
            r1 = this;
            int r0 = r1.max
            return r0
    }

    public int getPending() {
            r1 = this;
            int r0 = r1.pending
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[leased: "
            r0.append(r1)
            int r1 = r2.leased
            r0.append(r1)
            java.lang.String r1 = "; pending: "
            r0.append(r1)
            int r1 = r2.pending
            r0.append(r1)
            java.lang.String r1 = "; available: "
            r0.append(r1)
            int r1 = r2.available
            r0.append(r1)
            java.lang.String r1 = "; max: "
            r0.append(r1)
            int r1 = r2.max
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
