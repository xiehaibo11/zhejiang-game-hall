package com.bumptech.glide.load.model.stream;

public class StreamUriLoader extends com.bumptech.glide.load.model.UriLoader<java.io.InputStream> implements com.bumptech.glide.load.model.stream.StreamModelLoader<android.net.Uri> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<android.net.Uri, java.io.InputStream> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> build(android.content.Context r4, com.bumptech.glide.load.model.GenericLoaderFactory r5) {
                r3 = this;
                com.bumptech.glide.load.model.stream.StreamUriLoader r0 = new com.bumptech.glide.load.model.stream.StreamUriLoader
                java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r1 = com.bumptech.glide.load.model.GlideUrl.class
                java.lang.Class<java.io.InputStream> r2 = java.io.InputStream.class
                com.bumptech.glide.load.model.ModelLoader r5 = r5.buildModelLoader(r1, r2)
                r0.<init>(r4, r5)
                return r0
        }

        @Override
        public void teardown() {
                r0 = this;
                return
        }
    }

    public StreamUriLoader(android.content.Context r2) {
            r1 = this;
            java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r0 = com.bumptech.glide.load.model.GlideUrl.class
            com.bumptech.glide.load.model.ModelLoader r0 = com.bumptech.glide.Glide.buildStreamModelLoader(r0, r2)
            r1.<init>(r2, r0)
            return
    }

    public StreamUriLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getAssetPathFetcher(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.bumptech.glide.load.data.StreamAssetPathFetcher r0 = new com.bumptech.glide.load.data.StreamAssetPathFetcher
            android.content.Context r2 = r2.getApplicationContext()
            android.content.res.AssetManager r2 = r2.getAssets()
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    protected com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getLocalUriFetcher(android.content.Context r2, android.net.Uri r3) {
            r1 = this;
            com.bumptech.glide.load.data.StreamLocalUriFetcher r0 = new com.bumptech.glide.load.data.StreamLocalUriFetcher
            r0.<init>(r2, r3)
            return r0
    }
}
