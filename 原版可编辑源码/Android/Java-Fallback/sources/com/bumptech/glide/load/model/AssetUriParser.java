package com.bumptech.glide.load.model;

final class AssetUriParser {
    private static final java.lang.String ASSET_PATH_SEGMENT = "android_asset";
    private static final java.lang.String ASSET_PREFIX = "file:///android_asset/";
    private static final int ASSET_PREFIX_LENGTH = 22;

    static {
            return
    }

    private AssetUriParser() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isAssetUri(android.net.Uri r2) {
            java.lang.String r0 = r2.getScheme()
            java.lang.String r1 = "file"
            boolean r0 = r1.equals(r0)
            r1 = 0
            if (r0 == 0) goto L28
            java.util.List r0 = r2.getPathSegments()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L28
            java.util.List r2 = r2.getPathSegments()
            java.lang.Object r2 = r2.get(r1)
            java.lang.String r0 = "android_asset"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L28
            r1 = 1
        L28:
            return r1
    }

    public static java.lang.String toAssetPath(android.net.Uri r1) {
            java.lang.String r1 = r1.toString()
            int r0 = com.bumptech.glide.load.model.AssetUriParser.ASSET_PREFIX_LENGTH
            java.lang.String r1 = r1.substring(r0)
            return r1
    }
}
