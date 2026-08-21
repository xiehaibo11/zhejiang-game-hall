package com.bumptech.glide.load.model.stream;

public class HttpUrlGlideUrlLoader implements com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> {
    private final com.bumptech.glide.load.model.ModelCache<com.bumptech.glide.load.model.GlideUrl, com.bumptech.glide.load.model.GlideUrl> modelCache;

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> {
        private final com.bumptech.glide.load.model.ModelCache<com.bumptech.glide.load.model.GlideUrl, com.bumptech.glide.load.model.GlideUrl> modelCache;

        public Factory() {
                r2 = this;
                r2.<init>()
                com.bumptech.glide.load.model.ModelCache r0 = new com.bumptech.glide.load.model.ModelCache
                r1 = 500(0x1f4, float:7.0E-43)
                r0.<init>(r1)
                r2.modelCache = r0
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> build(android.content.Context r1, com.bumptech.glide.load.model.GenericLoaderFactory r2) {
                r0 = this;
                com.bumptech.glide.load.model.stream.HttpUrlGlideUrlLoader r1 = new com.bumptech.glide.load.model.stream.HttpUrlGlideUrlLoader
                com.bumptech.glide.load.model.ModelCache<com.bumptech.glide.load.model.GlideUrl, com.bumptech.glide.load.model.GlideUrl> r2 = r0.modelCache
                r1.<init>(r2)
                return r1
        }

        @Override
        public void teardown() {
                r0 = this;
                return
        }
    }

    public HttpUrlGlideUrlLoader() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public HttpUrlGlideUrlLoader(com.bumptech.glide.load.model.ModelCache<com.bumptech.glide.load.model.GlideUrl, com.bumptech.glide.load.model.GlideUrl> r1) {
            r0 = this;
            r0.<init>()
            r0.modelCache = r1
            return
    }

    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(com.bumptech.glide.load.model.GlideUrl r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.load.model.ModelCache<com.bumptech.glide.load.model.GlideUrl, com.bumptech.glide.load.model.GlideUrl> r2 = r0.modelCache
            if (r2 == 0) goto L14
            r3 = 0
            java.lang.Object r2 = r2.get(r1, r3, r3)
            com.bumptech.glide.load.model.GlideUrl r2 = (com.bumptech.glide.load.model.GlideUrl) r2
            if (r2 != 0) goto L13
            com.bumptech.glide.load.model.ModelCache<com.bumptech.glide.load.model.GlideUrl, com.bumptech.glide.load.model.GlideUrl> r2 = r0.modelCache
            r2.put(r1, r3, r3, r1)
            goto L14
        L13:
            r1 = r2
        L14:
            com.bumptech.glide.load.data.HttpUrlFetcher r2 = new com.bumptech.glide.load.data.HttpUrlFetcher
            r2.<init>(r1)
            return r2
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(com.bumptech.glide.load.model.GlideUrl r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.load.model.GlideUrl r1 = (com.bumptech.glide.load.model.GlideUrl) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }
}
