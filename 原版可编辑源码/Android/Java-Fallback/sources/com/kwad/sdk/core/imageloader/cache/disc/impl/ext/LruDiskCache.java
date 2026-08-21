package com.kwad.sdk.core.imageloader.cache.disc.impl.ext;

public class LruDiskCache implements com.kwad.sdk.core.imageloader.cache.disc.DiskCache {
    public static final int DEFAULT_BUFFER_SIZE = 32768;
    public static final android.graphics.Bitmap.CompressFormat DEFAULT_COMPRESS_FORMAT = null;
    public static final int DEFAULT_COMPRESS_QUALITY = 100;
    private static final java.lang.String ERROR_ARG_NEGATIVE = " argument must be positive number";
    private static final java.lang.String ERROR_ARG_NULL = " argument must be not null";
    protected int bufferSize;
    protected com.kwad.sdk.core.diskcache.a.a cache;
    protected android.graphics.Bitmap.CompressFormat compressFormat;
    protected int compressQuality;
    protected final com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator fileNameGenerator;
    private java.io.File reserveCacheDir;

    static {
            android.graphics.Bitmap$CompressFormat r0 = android.graphics.Bitmap.CompressFormat.PNG
            com.kwad.sdk.core.imageloader.cache.disc.impl.ext.LruDiskCache.DEFAULT_COMPRESS_FORMAT = r0
            return
    }

    public LruDiskCache(java.io.File r8, com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r9, long r10) {
            r7 = this;
            r2 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r6)
            return
    }

    public LruDiskCache(java.io.File r7, java.io.File r8, com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r9, long r10, int r12) {
            r6 = this;
            r6.<init>()
            r0 = 32768(0x8000, float:4.5918E-41)
            r6.bufferSize = r0
            android.graphics.Bitmap$CompressFormat r0 = com.kwad.sdk.core.imageloader.cache.disc.impl.ext.LruDiskCache.DEFAULT_COMPRESS_FORMAT
            r6.compressFormat = r0
            r0 = 100
            r6.compressQuality = r0
            if (r7 == 0) goto L4d
            r0 = 0
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 < 0) goto L45
            if (r12 < 0) goto L3d
            if (r9 == 0) goto L35
            if (r0 != 0) goto L23
            r10 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L23:
            r3 = r10
            if (r12 != 0) goto L29
            r12 = 2147483647(0x7fffffff, float:NaN)
        L29:
            r5 = r12
            r6.reserveCacheDir = r8
            r6.fileNameGenerator = r9
            r0 = r6
            r1 = r7
            r2 = r8
            r0.initCache(r1, r2, r3, r5)
            return
        L35:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "fileNameGenerator argument must be not null"
            r7.<init>(r8)
            throw r7
        L3d:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "cacheMaxFileCount argument must be positive number"
            r7.<init>(r8)
            throw r7
        L45:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "cacheMaxSize argument must be positive number"
            r7.<init>(r8)
            throw r7
        L4d:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "cacheDir argument must be not null"
            r7.<init>(r8)
            throw r7
    }

    private java.lang.String getKey(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r0 = r1.fileNameGenerator
            java.lang.String r2 = r0.generate(r2)
            return r2
    }

    private void initCache(java.io.File r7, java.io.File r8, long r9, int r11) {
            r6 = this;
            r1 = 1
            r2 = 1
            r0 = r7
            r3 = r9
            r5 = r11
            com.kwad.sdk.core.diskcache.a.a r7 = com.kwad.sdk.core.diskcache.a.a.a(r0, r1, r2, r3, r5)     // Catch: java.io.IOException -> Lc
            r6.cache = r7     // Catch: java.io.IOException -> Lc
            return
        Lc:
            r7 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r7)
            if (r8 == 0) goto L1a
            r2 = 0
            r0 = r6
            r1 = r8
            r3 = r9
            r5 = r11
            r0.initCache(r1, r2, r3, r5)
        L1a:
            com.kwad.sdk.core.diskcache.a.a r8 = r6.cache
            if (r8 == 0) goto L1f
            return
        L1f:
            throw r7
    }

    @Override
    public void clear() {
            r7 = this;
            com.kwad.sdk.core.diskcache.a.a r0 = r7.cache     // Catch: java.io.IOException -> L6
            r0.delete()     // Catch: java.io.IOException -> L6
            goto La
        L6:
            r0 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r0)
        La:
            com.kwad.sdk.core.diskcache.a.a r0 = r7.cache     // Catch: java.io.IOException -> L23
            java.io.File r2 = r0.getDirectory()     // Catch: java.io.IOException -> L23
            java.io.File r3 = r7.reserveCacheDir     // Catch: java.io.IOException -> L23
            com.kwad.sdk.core.diskcache.a.a r0 = r7.cache     // Catch: java.io.IOException -> L23
            long r4 = r0.getMaxSize()     // Catch: java.io.IOException -> L23
            com.kwad.sdk.core.diskcache.a.a r0 = r7.cache     // Catch: java.io.IOException -> L23
            int r6 = r0.Ao()     // Catch: java.io.IOException -> L23
            r1 = r7
            r1.initCache(r2, r3, r4, r6)     // Catch: java.io.IOException -> L23
            return
        L23:
            r0 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r0)
            return
    }

    @Override
    public void close() {
            r1 = this;
            com.kwad.sdk.core.diskcache.a.a r0 = r1.cache
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            r0 = 0
            r1.cache = r0
            return
    }

    @Override
    public java.io.File get(java.lang.String r4) {
            r3 = this;
            r0 = 0
            com.kwad.sdk.core.diskcache.a.a r1 = r3.cache     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1e
            java.lang.String r4 = r3.getKey(r4)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1e
            com.kwad.sdk.core.diskcache.a.a$c r4 = r1.cA(r4)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1e
            if (r4 != 0) goto Le
            goto L13
        Le:
            r1 = 0
            java.io.File r0 = r4.bW(r1)     // Catch: java.io.IOException -> L17 java.lang.Throwable -> L27
        L13:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return r0
        L17:
            r1 = move-exception
            goto L20
        L19:
            r4 = move-exception
            r2 = r0
            r0 = r4
            r4 = r2
            goto L28
        L1e:
            r1 = move-exception
            r4 = r0
        L20:
            com.kwad.sdk.core.imageloader.utils.L.e(r1)     // Catch: java.lang.Throwable -> L27
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return r0
        L27:
            r0 = move-exception
        L28:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            throw r0
    }

    @Override
    public java.io.File getDirectory() {
            r1 = this;
            com.kwad.sdk.core.diskcache.a.a r0 = r1.cache
            java.io.File r0 = r0.getDirectory()
            return r0
    }

    @Override
    public boolean remove(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.diskcache.a.a r0 = r1.cache     // Catch: java.io.IOException -> Lb
            java.lang.String r2 = r1.getKey(r2)     // Catch: java.io.IOException -> Lb
            boolean r2 = r0.remove(r2)     // Catch: java.io.IOException -> Lb
            return r2
        Lb:
            r2 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r2)
            r2 = 0
            return r2
    }

    @Override
    public boolean save(java.lang.String r4, android.graphics.Bitmap r5) {
            r3 = this;
            com.kwad.sdk.core.diskcache.a.a r0 = r3.cache
            java.lang.String r4 = r3.getKey(r4)
            com.kwad.sdk.core.diskcache.a.a$a r4 = r0.cB(r4)
            r0 = 0
            if (r4 != 0) goto Le
            return r0
        Le:
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream
            java.io.OutputStream r0 = r4.bT(r0)
            int r2 = r3.bufferSize
            r1.<init>(r0, r2)
            android.graphics.Bitmap$CompressFormat r0 = r3.compressFormat     // Catch: java.lang.Throwable -> L2e
            int r2 = r3.compressQuality     // Catch: java.lang.Throwable -> L2e
            boolean r5 = r5.compress(r0, r2, r1)     // Catch: java.lang.Throwable -> L2e
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            if (r5 == 0) goto L2a
            r4.commit()
            goto L2d
        L2a:
            r4.abort()
        L2d:
            return r5
        L2e:
            r4 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r4
    }

    @Override
    public boolean save(java.lang.String r4, java.io.InputStream r5, com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r6) {
            r3 = this;
            com.kwad.sdk.core.diskcache.a.a r0 = r3.cache
            java.lang.String r4 = r3.getKey(r4)
            com.kwad.sdk.core.diskcache.a.a$a r4 = r0.cB(r4)
            r0 = 0
            if (r4 != 0) goto Le
            return r0
        Le:
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream
            java.io.OutputStream r0 = r4.bT(r0)
            int r2 = r3.bufferSize
            r1.<init>(r0, r2)
            int r0 = r3.bufferSize     // Catch: java.lang.Throwable -> L2c
            boolean r5 = com.kwad.sdk.core.imageloader.utils.IoUtils.copyStream(r5, r1, r6, r0)     // Catch: java.lang.Throwable -> L2c
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            if (r5 == 0) goto L28
            r4.commit()
            goto L2b
        L28:
            r4.abort()
        L2b:
            return r5
        L2c:
            r5 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            r4.abort()
            throw r5
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
