package com.kwad.sdk.core.imageloader.cache.disc;

public interface DiskCache {
    void clear();

    void close();

    java.io.File get(java.lang.String r1);

    java.io.File getDirectory();

    boolean remove(java.lang.String r1);

    boolean save(java.lang.String r1, android.graphics.Bitmap r2);

    boolean save(java.lang.String r1, java.io.InputStream r2, com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r3);
}
