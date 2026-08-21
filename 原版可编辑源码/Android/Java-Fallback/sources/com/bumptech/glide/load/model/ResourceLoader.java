package com.bumptech.glide.load.model;

public class ResourceLoader<T> implements com.bumptech.glide.load.model.ModelLoader<java.lang.Integer, T> {
    private static final java.lang.String TAG = "ResourceLoader";
    private final android.content.res.Resources resources;
    private final com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> uriLoader;

    public ResourceLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r2) {
            r0 = this;
            android.content.res.Resources r1 = r1.getResources()
            r0.<init>(r1, r2)
            return
    }

    public ResourceLoader(android.content.res.Resources r1, com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r2) {
            r0 = this;
            r0.<init>()
            r0.resources = r1
            r0.uriLoader = r2
            return
    }

    public com.bumptech.glide.load.data.DataFetcher<T> getResourceFetcher(java.lang.Integer r6, int r7, int r8) {
            r5 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: android.content.res.Resources.NotFoundException -> L43
            r1.<init>()     // Catch: android.content.res.Resources.NotFoundException -> L43
            java.lang.String r2 = "android.resource://"
            r1.append(r2)     // Catch: android.content.res.Resources.NotFoundException -> L43
            android.content.res.Resources r2 = r5.resources     // Catch: android.content.res.Resources.NotFoundException -> L43
            int r3 = r6.intValue()     // Catch: android.content.res.Resources.NotFoundException -> L43
            java.lang.String r2 = r2.getResourcePackageName(r3)     // Catch: android.content.res.Resources.NotFoundException -> L43
            r1.append(r2)     // Catch: android.content.res.Resources.NotFoundException -> L43
            r2 = 47
            r1.append(r2)     // Catch: android.content.res.Resources.NotFoundException -> L43
            android.content.res.Resources r3 = r5.resources     // Catch: android.content.res.Resources.NotFoundException -> L43
            int r4 = r6.intValue()     // Catch: android.content.res.Resources.NotFoundException -> L43
            java.lang.String r3 = r3.getResourceTypeName(r4)     // Catch: android.content.res.Resources.NotFoundException -> L43
            r1.append(r3)     // Catch: android.content.res.Resources.NotFoundException -> L43
            r1.append(r2)     // Catch: android.content.res.Resources.NotFoundException -> L43
            android.content.res.Resources r2 = r5.resources     // Catch: android.content.res.Resources.NotFoundException -> L43
            int r3 = r6.intValue()     // Catch: android.content.res.Resources.NotFoundException -> L43
            java.lang.String r2 = r2.getResourceEntryName(r3)     // Catch: android.content.res.Resources.NotFoundException -> L43
            r1.append(r2)     // Catch: android.content.res.Resources.NotFoundException -> L43
            java.lang.String r1 = r1.toString()     // Catch: android.content.res.Resources.NotFoundException -> L43
            android.net.Uri r6 = android.net.Uri.parse(r1)     // Catch: android.content.res.Resources.NotFoundException -> L43
            goto L62
        L43:
            r1 = move-exception
            r2 = 5
            java.lang.String r3 = "ResourceLoader"
            boolean r2 = android.util.Log.isLoggable(r3, r2)
            if (r2 == 0) goto L61
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "Received invalid resource id: "
            r2.append(r4)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            android.util.Log.w(r3, r6, r1)
        L61:
            r6 = r0
        L62:
            if (r6 == 0) goto L6b
            com.bumptech.glide.load.model.ModelLoader<android.net.Uri, T> r0 = r5.uriLoader
            com.bumptech.glide.load.data.DataFetcher r6 = r0.getResourceFetcher(r6, r7, r8)
            return r6
        L6b:
            return r0
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher getResourceFetcher(java.lang.Integer r1, int r2, int r3) {
            r0 = this;
            java.lang.Integer r1 = (java.lang.Integer) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }
}
