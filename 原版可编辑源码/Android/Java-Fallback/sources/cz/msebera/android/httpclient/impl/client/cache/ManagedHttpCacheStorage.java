package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class ManagedHttpCacheStorage implements cz.msebera.android.httpclient.client.cache.HttpCacheStorage, java.io.Closeable {
    private final java.util.concurrent.atomic.AtomicBoolean active;
    private final cz.msebera.android.httpclient.impl.client.cache.CacheMap entries;
    private final java.lang.ref.ReferenceQueue<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> morque;
    private final java.util.Set<cz.msebera.android.httpclient.impl.client.cache.ResourceReference> resources;

    public ManagedHttpCacheStorage(cz.msebera.android.httpclient.impl.client.cache.CacheConfig r2) {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = new cz.msebera.android.httpclient.impl.client.cache.CacheMap
            int r2 = r2.getMaxCacheEntries()
            r0.<init>(r2)
            r1.entries = r0
            java.lang.ref.ReferenceQueue r2 = new java.lang.ref.ReferenceQueue
            r2.<init>()
            r1.morque = r2
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.resources = r2
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r0 = 1
            r2.<init>(r0)
            r1.active = r2
            return
    }

    private void ensureValidState() throws java.lang.IllegalStateException {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.active
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Cache has been shut down"
            r0.<init>(r1)
            throw r0
    }

    private void keepResourceReference(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) {
            r2 = this;
            cz.msebera.android.httpclient.client.cache.Resource r0 = r3.getResource()
            if (r0 == 0) goto L12
            cz.msebera.android.httpclient.impl.client.cache.ResourceReference r0 = new cz.msebera.android.httpclient.impl.client.cache.ResourceReference
            java.lang.ref.ReferenceQueue<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> r1 = r2.morque
            r0.<init>(r3, r1)
            java.util.Set<cz.msebera.android.httpclient.impl.client.cache.ResourceReference> r3 = r2.resources
            r3.add(r0)
        L12:
            return
    }

    public void cleanResources() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.active
            boolean r0 = r0.get()
            if (r0 == 0) goto L24
        L8:
            java.lang.ref.ReferenceQueue<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> r0 = r2.morque
            java.lang.ref.Reference r0 = r0.poll()
            cz.msebera.android.httpclient.impl.client.cache.ResourceReference r0 = (cz.msebera.android.httpclient.impl.client.cache.ResourceReference) r0
            if (r0 == 0) goto L24
            monitor-enter(r2)
            java.util.Set<cz.msebera.android.httpclient.impl.client.cache.ResourceReference> r1 = r2.resources     // Catch: java.lang.Throwable -> L21
            r1.remove(r0)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L21
            cz.msebera.android.httpclient.client.cache.Resource r0 = r0.getResource()
            r0.dispose()
            goto L8
        L21:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L21
            throw r0
        L24:
            return
    }

    @Override
    public void close() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.active
            r1 = 1
            r2 = 0
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L27
            monitor-enter(r3)
        Lb:
            java.lang.ref.ReferenceQueue<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> r0 = r3.morque     // Catch: java.lang.Throwable -> L24
            java.lang.ref.Reference r0 = r0.poll()     // Catch: java.lang.Throwable -> L24
            cz.msebera.android.httpclient.impl.client.cache.ResourceReference r0 = (cz.msebera.android.httpclient.impl.client.cache.ResourceReference) r0     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L22
            java.util.Set<cz.msebera.android.httpclient.impl.client.cache.ResourceReference> r1 = r3.resources     // Catch: java.lang.Throwable -> L24
            r1.remove(r0)     // Catch: java.lang.Throwable -> L24
            cz.msebera.android.httpclient.client.cache.Resource r0 = r0.getResource()     // Catch: java.lang.Throwable -> L24
            r0.dispose()     // Catch: java.lang.Throwable -> L24
            goto Lb
        L22:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            goto L27
        L24:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L24
            throw r0
        L27:
            return
    }

    @Override
    public cz.msebera.android.httpclient.client.cache.HttpCacheEntry getEntry(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "URL"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureValidState()
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r1.entries     // Catch: java.lang.Throwable -> L13
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L13
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2 = (cz.msebera.android.httpclient.client.cache.HttpCacheEntry) r2     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L13
            throw r2
    }

    @Override
    public void putEntry(java.lang.String r2, cz.msebera.android.httpclient.client.cache.HttpCacheEntry r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "URL"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cache entry"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.ensureValidState()
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r1.entries     // Catch: java.lang.Throwable -> L18
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L18
            r1.keepResourceReference(r3)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            throw r2
    }

    @Override
    public void removeEntry(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "URL"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.ensureValidState()
            monitor-enter(r1)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r1.entries     // Catch: java.lang.Throwable -> L10
            r0.remove(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L10
            throw r2
    }

    public void shutdown() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.active
            r1 = 1
            r2 = 0
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L3d
            monitor-enter(r3)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r3.entries     // Catch: java.lang.Throwable -> L3a
            r0.clear()     // Catch: java.lang.Throwable -> L3a
            java.util.Set<cz.msebera.android.httpclient.impl.client.cache.ResourceReference> r0 = r3.resources     // Catch: java.lang.Throwable -> L3a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3a
        L16:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3a
            cz.msebera.android.httpclient.impl.client.cache.ResourceReference r1 = (cz.msebera.android.httpclient.impl.client.cache.ResourceReference) r1     // Catch: java.lang.Throwable -> L3a
            cz.msebera.android.httpclient.client.cache.Resource r1 = r1.getResource()     // Catch: java.lang.Throwable -> L3a
            r1.dispose()     // Catch: java.lang.Throwable -> L3a
            goto L16
        L2a:
            java.util.Set<cz.msebera.android.httpclient.impl.client.cache.ResourceReference> r0 = r3.resources     // Catch: java.lang.Throwable -> L3a
            r0.clear()     // Catch: java.lang.Throwable -> L3a
        L2f:
            java.lang.ref.ReferenceQueue<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> r0 = r3.morque     // Catch: java.lang.Throwable -> L3a
            java.lang.ref.Reference r0 = r0.poll()     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L38
            goto L2f
        L38:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3a
            goto L3d
        L3a:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3a
            throw r0
        L3d:
            return
    }

    @Override
    public void updateEntry(java.lang.String r3, cz.msebera.android.httpclient.client.cache.HttpCacheUpdateCallback r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "URL"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Callback"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            r2.ensureValidState()
            monitor-enter(r2)
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r0 = r2.entries     // Catch: java.lang.Throwable -> L26
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L26
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = (cz.msebera.android.httpclient.client.cache.HttpCacheEntry) r0     // Catch: java.lang.Throwable -> L26
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r4 = r4.update(r0)     // Catch: java.lang.Throwable -> L26
            cz.msebera.android.httpclient.impl.client.cache.CacheMap r1 = r2.entries     // Catch: java.lang.Throwable -> L26
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L26
            if (r0 == r4) goto L24
            r2.keepResourceReference(r4)     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L26
            throw r3
    }
}
