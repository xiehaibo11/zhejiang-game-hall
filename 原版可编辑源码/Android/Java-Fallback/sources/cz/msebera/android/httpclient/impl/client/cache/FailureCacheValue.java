package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
public class FailureCacheValue {
    private final long creationTimeInNanos;
    private final int errorCount;
    private final java.lang.String key;

    public FailureCacheValue(java.lang.String r3, int r4) {
            r2 = this;
            r2.<init>()
            long r0 = java.lang.System.nanoTime()
            r2.creationTimeInNanos = r0
            r2.key = r3
            r2.errorCount = r4
            return
    }

    public long getCreationTimeInNanos() {
            r2 = this;
            long r0 = r2.creationTimeInNanos
            return r0
    }

    public int getErrorCount() {
            r1 = this;
            int r0 = r1.errorCount
            return r0
    }

    public java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[entry creationTimeInNanos="
            r0.append(r1)
            long r1 = r3.creationTimeInNanos
            r0.append(r1)
            java.lang.String r1 = "; "
            r0.append(r1)
            java.lang.String r1 = "key="
            r0.append(r1)
            java.lang.String r1 = r3.key
            r0.append(r1)
            java.lang.String r1 = "; errorCount="
            r0.append(r1)
            int r1 = r3.errorCount
            r0.append(r1)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
