package com.bumptech.glide.load.model.stream;

public abstract class BaseGlideUrlLoader<T> implements com.bumptech.glide.load.model.stream.StreamModelLoader<T> {
    private final com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> concreteLoader;
    private final com.bumptech.glide.load.model.ModelCache<T, com.bumptech.glide.load.model.GlideUrl> modelCache;

    public BaseGlideUrlLoader(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BaseGlideUrlLoader(android.content.Context r3, com.bumptech.glide.load.model.ModelCache<T, com.bumptech.glide.load.model.GlideUrl> r4) {
            r2 = this;
            java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r0 = com.bumptech.glide.load.model.GlideUrl.class
            java.lang.Class<java.io.InputStream> r1 = java.io.InputStream.class
            com.bumptech.glide.load.model.ModelLoader r3 = com.bumptech.glide.Glide.buildModelLoader(r0, r1, r3)
            r2.<init>(r3, r4)
            return
    }

    public BaseGlideUrlLoader(com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BaseGlideUrlLoader(com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> r1, com.bumptech.glide.load.model.ModelCache<T, com.bumptech.glide.load.model.GlideUrl> r2) {
            r0 = this;
            r0.<init>()
            r0.concreteLoader = r1
            r0.modelCache = r2
            return
    }

    protected com.bumptech.glide.load.model.Headers getHeaders(T r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.load.model.Headers r1 = com.bumptech.glide.load.model.Headers.DEFAULT
            return r1
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(T r4, int r5, int r6) {
            r3 = this;
            com.bumptech.glide.load.model.ModelCache<T, com.bumptech.glide.load.model.GlideUrl> r0 = r3.modelCache
            r1 = 0
            if (r0 == 0) goto Lc
            java.lang.Object r0 = r0.get(r4, r5, r6)
            com.bumptech.glide.load.model.GlideUrl r0 = (com.bumptech.glide.load.model.GlideUrl) r0
            goto Ld
        Lc:
            r0 = r1
        Ld:
            if (r0 != 0) goto L2b
            java.lang.String r0 = r3.getUrl(r4, r5, r6)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L1a
            return r1
        L1a:
            com.bumptech.glide.load.model.GlideUrl r1 = new com.bumptech.glide.load.model.GlideUrl
            com.bumptech.glide.load.model.Headers r2 = r3.getHeaders(r4, r5, r6)
            r1.<init>(r0, r2)
            com.bumptech.glide.load.model.ModelCache<T, com.bumptech.glide.load.model.GlideUrl> r0 = r3.modelCache
            if (r0 == 0) goto L2a
            r0.put(r4, r5, r6, r1)
        L2a:
            r0 = r1
        L2b:
            com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> r4 = r3.concreteLoader
            com.bumptech.glide.load.data.DataFetcher r4 = r4.getResourceFetcher(r0, r5, r6)
            return r4
    }

    protected abstract java.lang.String getUrl(T r1, int r2, int r3);
}
