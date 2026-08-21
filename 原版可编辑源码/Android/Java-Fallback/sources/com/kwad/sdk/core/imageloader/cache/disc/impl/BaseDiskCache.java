package com.kwad.sdk.core.imageloader.cache.disc.impl;

public abstract class BaseDiskCache implements com.kwad.sdk.core.imageloader.cache.disc.DiskCache {
    public static final int DEFAULT_BUFFER_SIZE = 32768;
    public static final android.graphics.Bitmap.CompressFormat DEFAULT_COMPRESS_FORMAT = null;
    public static final int DEFAULT_COMPRESS_QUALITY = 100;
    private static final java.lang.String ERROR_ARG_NULL = " argument must be not null";
    private static final java.lang.String TEMP_IMAGE_POSTFIX = ".tmp";
    protected int bufferSize;
    protected final java.io.File cacheDir;
    protected android.graphics.Bitmap.CompressFormat compressFormat;
    protected int compressQuality;
    protected final com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator fileNameGenerator;
    protected final java.io.File reserveCacheDir;

    static {
            android.graphics.Bitmap$CompressFormat r0 = android.graphics.Bitmap.CompressFormat.PNG
            com.kwad.sdk.core.imageloader.cache.disc.impl.BaseDiskCache.DEFAULT_COMPRESS_FORMAT = r0
            return
    }

    public BaseDiskCache(java.io.File r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BaseDiskCache(java.io.File r2, java.io.File r3) {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createFileNameGenerator()
            r1.<init>(r2, r3, r0)
            return
    }

    public BaseDiskCache(java.io.File r2, java.io.File r3, com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r4) {
            r1 = this;
            r1.<init>()
            r0 = 32768(0x8000, float:4.5918E-41)
            r1.bufferSize = r0
            android.graphics.Bitmap$CompressFormat r0 = com.kwad.sdk.core.imageloader.cache.disc.impl.BaseDiskCache.DEFAULT_COMPRESS_FORMAT
            r1.compressFormat = r0
            r0 = 100
            r1.compressQuality = r0
            if (r2 == 0) goto L23
            if (r4 == 0) goto L1b
            r1.cacheDir = r2
            r1.reserveCacheDir = r3
            r1.fileNameGenerator = r4
            return
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "fileNameGenerator argument must be not null"
            r2.<init>(r3)
            throw r2
        L23:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "cacheDir argument must be not null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void clear() {
            r4 = this;
            java.io.File r0 = r4.cacheDir
            java.io.File[] r0 = r0.listFiles()
            if (r0 == 0) goto L14
            int r1 = r0.length
            r2 = 0
        La:
            if (r2 >= r1) goto L14
            r3 = r0[r2]
            r3.delete()
            int r2 = r2 + 1
            goto La
        L14:
            return
    }

    @Override
    public void close() {
            r0 = this;
            return
    }

    @Override
    public java.io.File get(java.lang.String r1) {
            r0 = this;
            java.io.File r1 = r0.getFile(r1)
            return r1
    }

    @Override
    public java.io.File getDirectory() {
            r1 = this;
            java.io.File r0 = r1.cacheDir
            return r0
    }

    protected java.io.File getFile(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r0 = r2.fileNameGenerator
            java.lang.String r3 = r0.generate(r3)
            java.io.File r0 = r2.cacheDir
            boolean r1 = r0.exists()
            if (r1 != 0) goto L2a
            java.io.File r1 = r2.cacheDir
            boolean r1 = r1.mkdirs()
            if (r1 != 0) goto L2a
            java.io.File r1 = r2.reserveCacheDir
            if (r1 == 0) goto L2a
            boolean r1 = r1.exists()
            if (r1 != 0) goto L28
            java.io.File r1 = r2.reserveCacheDir
            boolean r1 = r1.mkdirs()
            if (r1 == 0) goto L2a
        L28:
            java.io.File r0 = r2.reserveCacheDir
        L2a:
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r3)
            return r1
    }

    @Override
    public boolean remove(java.lang.String r1) {
            r0 = this;
            java.io.File r1 = r0.getFile(r1)
            boolean r1 = r1.delete()
            return r1
    }

    @Override
    public boolean save(java.lang.String r5, android.graphics.Bitmap r6) {
            r4 = this;
            java.io.File r5 = r4.getFile(r5)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = ".tmp"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream
            java.io.FileOutputStream r2 = new java.io.FileOutputStream
            r2.<init>(r0)
            int r3 = r4.bufferSize
            r1.<init>(r2, r3)
            android.graphics.Bitmap$CompressFormat r2 = r4.compressFormat     // Catch: java.lang.Throwable -> L47
            int r3 = r4.compressQuality     // Catch: java.lang.Throwable -> L47
            boolean r2 = r6.compress(r2, r3, r1)     // Catch: java.lang.Throwable -> L47
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            if (r2 == 0) goto L3e
            boolean r5 = r0.renameTo(r5)
            if (r5 != 0) goto L3e
            r2 = 0
        L3e:
            if (r2 != 0) goto L43
            r0.delete()
        L43:
            r6.recycle()
            return r2
        L47:
            r5 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            r0.delete()
            throw r5
    }

    @Override
    public boolean save(java.lang.String r6, java.io.InputStream r7, com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r8) {
            r5 = this;
            java.io.File r6 = r5.getFile(r6)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r6.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = ".tmp"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r1 = 0
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L4b
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L4b
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L4b
            int r4 = r5.bufferSize     // Catch: java.lang.Throwable -> L4b
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L4b
            int r3 = r5.bufferSize     // Catch: java.lang.Throwable -> L46
            boolean r7 = com.kwad.sdk.core.imageloader.utils.IoUtils.copyStream(r7, r2, r8, r3)     // Catch: java.lang.Throwable -> L46
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Throwable -> L44
            if (r7 == 0) goto L3d
            boolean r6 = r0.renameTo(r6)
            if (r6 != 0) goto L3d
            goto L3e
        L3d:
            r1 = r7
        L3e:
            if (r1 != 0) goto L43
            r0.delete()
        L43:
            return r1
        L44:
            r8 = move-exception
            goto L4d
        L46:
            r7 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Throwable -> L4b
            throw r7     // Catch: java.lang.Throwable -> L4b
        L4b:
            r8 = move-exception
            r7 = r1
        L4d:
            if (r7 == 0) goto L56
            boolean r6 = r0.renameTo(r6)
            if (r6 != 0) goto L56
            goto L57
        L56:
            r1 = r7
        L57:
            if (r1 != 0) goto L5c
            r0.delete()
        L5c:
            throw r8
    }

    public void setBufferSize(int r1) {
            r0 = this;
            r0.bufferSize = r1
            return
    }

    public void setCompressFormat(android.graphics.Bitmap.CompressFormat r1) {
            r0 = this;
            r0.compressFormat = r1
            return
    }

    public void setCompressQuality(int r1) {
            r0 = this;
            r0.compressQuality = r1
            return
    }
}
