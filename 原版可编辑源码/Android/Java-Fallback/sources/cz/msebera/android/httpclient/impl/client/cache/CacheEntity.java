package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.Immutable
class CacheEntity implements cz.msebera.android.httpclient.HttpEntity, java.io.Serializable {
    private static final long serialVersionUID = -3467082284120936233L;
    private final cz.msebera.android.httpclient.client.cache.HttpCacheEntry cacheEntry;

    public CacheEntity(cz.msebera.android.httpclient.client.cache.HttpCacheEntry r1) {
            r0 = this;
            r0.<init>()
            r0.cacheEntry = r1
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    @Override
    public void consumeContent() throws java.io.IOException {
            r0 = this;
            return
    }

    @Override
    public java.io.InputStream getContent() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r1.cacheEntry
            cz.msebera.android.httpclient.client.cache.Resource r0 = r0.getResource()
            java.io.InputStream r0 = r0.getInputStream()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentEncoding() {
            r2 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r2.cacheEntry
            java.lang.String r1 = "Content-Encoding"
            cz.msebera.android.httpclient.Header r0 = r0.getFirstHeader(r1)
            return r0
    }

    @Override
    public long getContentLength() {
            r2 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r2.cacheEntry
            cz.msebera.android.httpclient.client.cache.Resource r0 = r0.getResource()
            long r0 = r0.length()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getContentType() {
            r2 = this;
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r2.cacheEntry
            java.lang.String r1 = "Content-Type"
            cz.msebera.android.httpclient.Header r0 = r0.getFirstHeader(r1)
            return r0
    }

    @Override
    public boolean isChunked() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isRepeatable() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean isStreaming() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeTo(java.io.OutputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output stream"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.client.cache.HttpCacheEntry r0 = r1.cacheEntry
            cz.msebera.android.httpclient.client.cache.Resource r0 = r0.getResource()
            java.io.InputStream r0 = r0.getInputStream()
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.copy(r0, r2)     // Catch: java.lang.Throwable -> L16
            r0.close()
            return
        L16:
            r2 = move-exception
            r0.close()
            throw r2
    }
}
