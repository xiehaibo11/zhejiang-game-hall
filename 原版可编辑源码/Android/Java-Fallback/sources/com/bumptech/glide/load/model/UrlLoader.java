package com.bumptech.glide.load.model;

public class UrlLoader<T> implements com.bumptech.glide.load.model.ModelLoader<java.net.URL, T> {
    private final com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> glideUrlLoader;

    public UrlLoader(com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> r1) {
            r0 = this;
            r0.<init>()
            r0.glideUrlLoader = r1
            return
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher getResourceFetcher(java.net.URL r1, int r2, int r3) {
            r0 = this;
            java.net.URL r1 = (java.net.URL) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }

    public com.bumptech.glide.load.data.DataFetcher<T> getResourceFetcher(java.net.URL r3, int r4, int r5) {
            r2 = this;
            com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> r0 = r2.glideUrlLoader
            com.bumptech.glide.load.model.GlideUrl r1 = new com.bumptech.glide.load.model.GlideUrl
            r1.<init>(r3)
            com.bumptech.glide.load.data.DataFetcher r3 = r0.getResourceFetcher(r1, r4, r5)
            return r3
    }
}
