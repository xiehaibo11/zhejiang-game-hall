package com.bumptech.glide.load.model.stream;

public class MediaStoreStreamLoader implements com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> {
    private final android.content.Context context;
    private final com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> uriLoader;

    public MediaStoreStreamLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> r2) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.uriLoader = r2
            return
    }

    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(android.net.Uri r8, int r9, int r10) {
            r7 = this;
            com.bumptech.glide.load.data.MediaStoreThumbFetcher r6 = new com.bumptech.glide.load.data.MediaStoreThumbFetcher
            android.content.Context r1 = r7.context
            com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> r0 = r7.uriLoader
            com.bumptech.glide.load.data.DataFetcher r3 = r0.getResourceFetcher(r8, r9, r10)
            r0 = r6
            r2 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(android.net.Uri r1, int r2, int r3) {
            r0 = this;
            android.net.Uri r1 = (android.net.Uri) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }
}
