package com.bumptech.glide.load.data;

public class StreamAssetPathFetcher extends com.bumptech.glide.load.data.AssetPathFetcher<java.io.InputStream> {
    public StreamAssetPathFetcher(android.content.res.AssetManager r1, java.lang.String r2) {
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
    protected java.io.InputStream loadResource(android.content.res.AssetManager r1, java.lang.String r2) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = r1.open(r2)
            return r1
    }

    @Override
    protected java.io.InputStream loadResource(android.content.res.AssetManager r1, java.lang.String r2) throws java.io.IOException {
            r0 = this;
            java.io.InputStream r1 = r0.loadResource(r1, r2)
            return r1
    }
}
