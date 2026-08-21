package com.bumptech.glide.load.model;

public class StringLoader<T> implements com.bumptech.glide.load.model.ModelLoader<java.lang.String, T> {
    private final com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> uriLoader;

    public StringLoader(com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r1) {
            r0 = this;
            r0.<init>()
            r0.uriLoader = r1
            return
    }

    private static android.net.Uri toFileUri(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            android.net.Uri r1 = android.net.Uri.fromFile(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher getResourceFetcher(java.lang.String r1, int r2, int r3) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }

    public com.bumptech.glide.load.data.DataFetcher<T> getResourceFetcher(java.lang.String r3, int r4, int r5) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            java.lang.String r0 = "/"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L15
            android.net.Uri r3 = toFileUri(r3)
            goto L25
        L15:
            android.net.Uri r0 = android.net.Uri.parse(r3)
            java.lang.String r1 = r0.getScheme()
            if (r1 != 0) goto L24
            android.net.Uri r3 = toFileUri(r3)
            goto L25
        L24:
            r3 = r0
        L25:
            com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r0 = r2.uriLoader
            com.bumptech.glide.load.data.DataFetcher r3 = r0.getResourceFetcher(r3, r4, r5)
            return r3
    }
}
