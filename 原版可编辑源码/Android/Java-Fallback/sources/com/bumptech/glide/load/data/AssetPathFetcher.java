package com.bumptech.glide.load.data;

public abstract class AssetPathFetcher<T> implements com.bumptech.glide.load.data.DataFetcher<T> {
    private static final java.lang.String TAG = "AssetUriFetcher";
    private final android.content.res.AssetManager assetManager;
    private final java.lang.String assetPath;
    private T data;

    public AssetPathFetcher(android.content.res.AssetManager r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.assetManager = r1
            r0.assetPath = r2
            return
    }

    @Override
    public void cancel() {
            r0 = this;
            return
    }

    @Override
    public void cleanup() {
            r3 = this;
            T r0 = r3.data
            if (r0 != 0) goto L5
            return
        L5:
            r3.close(r0)     // Catch: java.io.IOException -> L9
            goto L18
        L9:
            r0 = move-exception
            r1 = 2
            java.lang.String r2 = "AssetUriFetcher"
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto L18
            java.lang.String r1 = "Failed to close data"
            android.util.Log.v(r2, r1, r0)
        L18:
            return
    }

    protected abstract void close(T r1) throws java.io.IOException;

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.assetPath
            return r0
    }

    @Override
    public T loadData(com.bumptech.glide.Priority r2) throws java.lang.Exception {
            r1 = this;
            android.content.res.AssetManager r2 = r1.assetManager
            java.lang.String r0 = r1.assetPath
            java.lang.Object r2 = r1.loadResource(r2, r0)
            r1.data = r2
            return r2
    }

    protected abstract T loadResource(android.content.res.AssetManager r1, java.lang.String r2) throws java.io.IOException;
}
