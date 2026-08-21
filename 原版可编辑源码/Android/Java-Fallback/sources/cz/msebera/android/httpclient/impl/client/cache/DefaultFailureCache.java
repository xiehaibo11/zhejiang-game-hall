package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class DefaultFailureCache implements cz.msebera.android.httpclient.impl.client.cache.FailureCache {
    static final int DEFAULT_MAX_SIZE = 1000;
    static final int MAX_UPDATE_TRIES = 10;
    private final int maxSize;
    private final java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> storage;

    public DefaultFailureCache() {
            r1 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            r1.<init>(r0)
            return
    }

    public DefaultFailureCache(int r1) {
            r0 = this;
            r0.<init>()
            r0.maxSize = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r0.storage = r1
            return
    }

    private cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue findValueWithOldestTimestamp() {
            r8 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r0 = r8.storage
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = 0
        L10:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L33
            java.lang.Object r4 = r0.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getValue()
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r5 = (cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue) r5
            long r5 = r5.getCreationTimeInNanos()
            int r7 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r7 >= 0) goto L10
            java.lang.Object r1 = r4.getValue()
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r1 = (cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue) r1
            r3 = r1
            r1 = r5
            goto L10
        L33:
            return r3
    }

    private void removeOldestEntryIfMapSizeExceeded() {
            r3 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r0 = r3.storage
            int r0 = r0.size()
            int r1 = r3.maxSize
            if (r0 <= r1) goto L19
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r0 = r3.findValueWithOldestTimestamp()
            if (r0 == 0) goto L19
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r1 = r3.storage
            java.lang.String r2 = r0.getKey()
            r1.remove(r2, r0)
        L19:
            return
    }

    private void updateValue(java.lang.String r5) {
            r4 = this;
            r0 = 0
        L1:
            r1 = 10
            if (r0 >= r1) goto L3b
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r1 = r4.storage
            java.lang.Object r1 = r1.get(r5)
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r1 = (cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue) r1
            if (r1 != 0) goto L1e
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r1 = new cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue
            r2 = 1
            r1.<init>(r5, r2)
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r2 = r4.storage
            java.lang.Object r1 = r2.putIfAbsent(r5, r1)
            if (r1 != 0) goto L38
            return
        L1e:
            int r2 = r1.getErrorCount()
            r3 = 2147483647(0x7fffffff, float:NaN)
            if (r2 != r3) goto L28
            return
        L28:
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r3 = new cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue
            int r2 = r2 + 1
            r3.<init>(r5, r2)
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r2 = r4.storage
            boolean r1 = r2.replace(r5, r1, r3)
            if (r1 == 0) goto L38
            return
        L38:
            int r0 = r0 + 1
            goto L1
        L3b:
            return
    }

    @Override
    public int getErrorCount(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L13
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r0 = r1.storage
            java.lang.Object r2 = r0.get(r2)
            cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue r2 = (cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue) r2
            if (r2 == 0) goto L11
            int r2 = r2.getErrorCount()
            goto L12
        L11:
            r2 = 0
        L12:
            return r2
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "identifier may not be null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void increaseErrorCount(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L9
            r1.updateValue(r2)
            r1.removeOldestEntryIfMapSizeExceeded()
            return
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "identifier may not be null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void resetErrorCount(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L8
            java.util.concurrent.ConcurrentMap<java.lang.String, cz.msebera.android.httpclient.impl.client.cache.FailureCacheValue> r0 = r1.storage
            r0.remove(r2)
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "identifier may not be null"
            r2.<init>(r0)
            throw r2
    }
}
