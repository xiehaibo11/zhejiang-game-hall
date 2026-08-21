package com.kwad.sdk.core.imageloader.utils;

public final class StorageUtils {
    private static final java.lang.String EXTERNAL_STORAGE_PERMISSION = "android.permission.WRITE_EXTERNAL_STORAGE";
    public static final java.lang.String INDIVIDUAL_DIR_NAME = "ksad-images";

    private StorageUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.File getIndividualCacheDirectory(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "ksad-images"
            java.io.File r1 = getIndividualCacheDirectory(r1, r2, r0)
            return r1
    }

    public static java.io.File getIndividualCacheDirectory(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.io.File r1 = new java.io.File
            r1.<init>(r2)
            java.io.File r0 = new java.io.File
            r0.<init>(r2, r3)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L17
            boolean r2 = r0.mkdir()
            if (r2 != 0) goto L17
            goto L18
        L17:
            r1 = r0
        L18:
            return r1
    }
}
