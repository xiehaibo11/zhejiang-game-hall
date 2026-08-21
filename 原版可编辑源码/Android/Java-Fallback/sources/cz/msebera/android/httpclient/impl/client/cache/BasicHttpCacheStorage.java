package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicHttpCacheStorage implements cz.msebera.android.httpclient.client.cache.HttpCacheStorage {
    private final cz.msebera.android.httpclient.impl.client.cache.CacheMap entries;

    public BasicHttpCacheStorage(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r2) {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheMap
            int r2 = r2.getMaxCacheEntries()
            r0.<init>(r2)
            r1.entries = r0
            return
    }

    @Override
    public synchronized cz.msebera.android.httpclient.client.cache.HttpCacheEntry getEntry(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r1.entries     // Catch: java.lang.Throwable -> Lb
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lb
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2 = (cz.msebera.android.httpclient.client.cache.HttpCacheEntry) r2     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r2
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void putEntry(java.lang.String r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r1.entries     // Catch: java.lang.Throwable -> L8
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void removeEntry(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r1.entries     // Catch: java.lang.Throwable -> L8
            r0.remove(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void updateEntry(java.lang.String r3, cz.msebera.android.httpclient.client.cache.HttpCacheUpdateCallback r4) throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r2.entries     // Catch: java.lang.Throwable -> L14
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L14
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = (cz.msebera.android.httpclient.client.cache.HttpCacheEntry) r0     // Catch: java.lang.Throwable -> L14
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r1 = r2.entries     // Catch: java.lang.Throwable -> L14
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4 = r4.update(r0)     // Catch: java.lang.Throwable -> L14
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r2)
            return
        L14:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
