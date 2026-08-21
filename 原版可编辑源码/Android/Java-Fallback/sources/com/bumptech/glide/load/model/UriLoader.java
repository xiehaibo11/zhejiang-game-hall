package com.bumptech.glide.load.model;

public abstract class UriLoader<T> implements com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> {
    private final android.content.Context context;
    private final com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> urlLoader;

    public UriLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> r2) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.urlLoader = r2
            return
    }

    private static boolean isLocalUri(java.lang.String r1) {
            java.lang.String r0 = "file"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "content"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1b
            java.lang.String r0 = "android.resource"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L19
            goto L1b
        L19:
            r1 = 0
            goto L1c
        L1b:
            r1 = 1
        L1c:
            return r1
    }

    protected abstract com.bumptech.glide.load.data.DataFetcher<T> getAssetPathFetcher(android.content.Context r1, java.lang.String r2);

    protected abstract com.bumptech.glide.load.data.DataFetcher<T> getLocalUriFetcher(android.content.Context r1, android.net.Uri r2);

    public final com.bumptech.glide.load.data.DataFetcher<T> getResourceFetcher(android.net.Uri r3, int r4, int r5) {
            r2 = this;
            java.lang.String r0 = r3.getScheme()
            boolean r1 = isLocalUri(r0)
            if (r1 == 0) goto L22
            boolean r4 = com.bumptech.glide.load.model.AssetUriParser.isAssetUri(r3)
            if (r4 == 0) goto L1b
            java.lang.String r3 = com.bumptech.glide.load.model.AssetUriParser.toAssetPath(r3)
            android.content.Context r4 = r2.context
            com.bumptech.glide.load.data.DataFetcher r3 = r2.getAssetPathFetcher(r4, r3)
            goto L47
        L1b:
            android.content.Context r4 = r2.context
            com.bumptech.glide.load.data.DataFetcher r3 = r2.getLocalUriFetcher(r4, r3)
            goto L47
        L22:
            com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> r1 = r2.urlLoader
            if (r1 == 0) goto L46
            java.lang.String r1 = "http"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L36
            java.lang.String r1 = "https"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L46
        L36:
            com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, T> r0 = r2.urlLoader
            com.bumptech.glide.load.model.GlideUrl r1 = new com.bumptech.glide.load.model.GlideUrl
            java.lang.String r3 = r3.toString()
            r1.<init>(r3)
            com.bumptech.glide.load.data.DataFetcher r3 = r0.getResourceFetcher(r1, r4, r5)
            goto L47
        L46:
            r3 = 0
        L47:
            return r3
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher getResourceFetcher(android.net.Uri r1, int r2, int r3) {
            r0 = this;
            android.net.Uri r1 = (android.net.Uri) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }
}
