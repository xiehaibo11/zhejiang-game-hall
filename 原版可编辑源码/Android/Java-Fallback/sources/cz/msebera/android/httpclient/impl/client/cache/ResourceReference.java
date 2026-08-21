package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class ResourceReference extends java.lang.ref.PhantomReference<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> {
    private final cz.msebera.android.httpclient.client.cache.Resource resource;

    public ResourceReference(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r2, java.lang.ref.ReferenceQueue<cz.msebera.android.httpclient.client.cache.HttpCacheEntry> r3) {
            r1 = this;
            r1.<init>(r2, r3)
            cz.msebera.android.httpclient.client.cache.Resource r3 = r2.getResource()
            java.lang.String r0 = "Resource"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.client.cache.Resource r2 = r2.getResource()
            r1.resource = r2
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.Resource r0 = r1.resource
            boolean r2 = r0.equals(r2)
            return r2
    }

    public cz.msebera.android.httpclient.client.cache.Resource getResource() {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.Resource r0 = r1.resource
            return r0
    }

    public int hashCode() {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.Resource r0 = r1.resource
            int r0 = r0.hashCode()
            return r0
    }
}
