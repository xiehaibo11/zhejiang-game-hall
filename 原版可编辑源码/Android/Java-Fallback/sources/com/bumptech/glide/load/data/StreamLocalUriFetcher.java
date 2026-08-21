package com.bumptech.glide.load.data;

public class StreamLocalUriFetcher extends com.bumptech.glide.load.data.LocalUriFetcher<java.io.InputStream> {
    public StreamLocalUriFetcher(android.content.Context r1, android.net.Uri r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    protected void close(java.io.InputStream r1) throws java.io.IOException {
            r0 = this;
            r1.close()
            return
    }

    @Override
    protected void close(java.io.InputStream r1) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = (java.io.InputStream) r1
            r0.close(r1)
            return
    }

    @Override
    protected java.io.InputStream loadResource(android.net.Uri r1, android.content.ContentResolver r2) throws java.io.FileNotFoundException {
            r0 = this;
            java.io.InputStream r1 = r2.openInputStream(r1)
            return r1
    }

    @Override
    protected java.io.InputStream loadResource(android.net.Uri r1, android.content.ContentResolver r2) throws java.io.FileNotFoundException {
            r0 = this;
            java.io.InputStream r1 = r0.loadResource(r1, r2)
            return r1
    }
}
