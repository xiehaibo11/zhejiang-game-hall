package com.bumptech.glide.load.model;

public class FileLoader<T> implements com.bumptech.glide.load.model.ModelLoader<java.io.File, T> {
    private final com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> uriLoader;

    public FileLoader(com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r1) {
            r0 = this;
            r0.<init>()
            r0.uriLoader = r1
            return
    }

    public com.bumptech.glide.load.data.DataFetcher<T> getResourceFetcher(java.io.File r2, int r3, int r4) {
            r1 = this;
            com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r0 = r1.uriLoader
            android.net.Uri r2 = android.net.Uri.fromFile(r2)
            com.bumptech.glide.load.data.DataFetcher r2 = r0.getResourceFetcher(r2, r3, r4)
            return r2
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher getResourceFetcher(java.io.File r1, int r2, int r3) {
            r0 = this;
            java.io.File r1 = (java.io.File) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }
}
