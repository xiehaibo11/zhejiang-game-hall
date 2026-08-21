package com.bumptech.glide.load.data;

public abstract class LocalUriFetcher<T> implements com.bumptech.glide.load.data.DataFetcher<T> {
    private static final java.lang.String TAG = "LocalUriFetcher";
    private final android.content.Context context;
    private T data;
    private final android.net.Uri uri;

    public LocalUriFetcher(android.content.Context r1, android.net.Uri r2) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.context = r1
            r0.uri = r2
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
            if (r0 == 0) goto L17
            r3.close(r0)     // Catch: java.io.IOException -> L8
            goto L17
        L8:
            r0 = move-exception
            r1 = 2
            java.lang.String r2 = "LocalUriFetcher"
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto L17
            java.lang.String r1 = "failed to close data"
            android.util.Log.v(r2, r1, r0)
        L17:
            return
    }

    protected abstract void close(T r1) throws java.io.IOException;

    @Override
    public java.lang.String getId() {
            r1 = this;
            android.net.Uri r0 = r1.uri
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final T loadData(com.bumptech.glide.Priority r2) throws java.lang.Exception {
            r1 = this;
            android.content.Context r2 = r1.context
            android.content.ContentResolver r2 = r2.getContentResolver()
            android.net.Uri r0 = r1.uri
            java.lang.Object r2 = r1.loadResource(r0, r2)
            r1.data = r2
            return r2
    }

    protected abstract T loadResource(android.net.Uri r1, android.content.ContentResolver r2) throws java.io.FileNotFoundException;
}
