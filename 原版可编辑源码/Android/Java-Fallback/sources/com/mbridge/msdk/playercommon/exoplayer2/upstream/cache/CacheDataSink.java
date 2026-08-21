package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class CacheDataSink implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink {
    public static final int DEFAULT_BUFFER_SIZE = 20480;
    private final int bufferSize;
    private com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream bufferedOutputStream;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache cache;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private long dataSpecBytesWritten;
    private java.io.File file;
    private final long maxCacheFileSize;
    private java.io.OutputStream outputStream;
    private long outputStreamBytesWritten;
    private final boolean syncFileDescriptor;
    private java.io.FileOutputStream underlyingFileOutputStream;

    public static class CacheDataSinkException extends com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
        public CacheDataSinkException(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public CacheDataSink(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, long r8) {
            r6 = this;
            r4 = 20480(0x5000, float:2.8699E-41)
            r5 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r4, r5)
            return
    }

    public CacheDataSink(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, long r8, int r10) {
            r6 = this;
            r5 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r0.<init>(r1, r2, r4, r5)
            return
    }

    public CacheDataSink(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1, long r2, int r4, boolean r5) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache) r1
            r0.cache = r1
            r0.maxCacheFileSize = r2
            r0.bufferSize = r4
            r0.syncFileDescriptor = r5
            return
    }

    public CacheDataSink(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r7, long r8, boolean r10) {
            r6 = this;
            r4 = 20480(0x5000, float:2.8699E-41)
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r10
            r0.<init>(r1, r2, r4, r5)
            return
    }

    private void closeCurrentOutputStream() throws java.io.IOException {
            r3 = this;
            java.io.OutputStream r0 = r3.outputStream
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r0.flush()     // Catch: java.lang.Throwable -> L27
            boolean r0 = r3.syncFileDescriptor     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L16
            java.io.FileOutputStream r0 = r3.underlyingFileOutputStream     // Catch: java.lang.Throwable -> L27
            java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.lang.Throwable -> L27
            r0.sync()     // Catch: java.lang.Throwable -> L27
        L16:
            java.io.OutputStream r0 = r3.outputStream
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            r3.outputStream = r1
            java.io.File r0 = r3.file
            r3.file = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r1 = r3.cache
            r1.commitFile(r0)
            return
        L27:
            r0 = move-exception
            java.io.OutputStream r2 = r3.outputStream
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r2)
            r3.outputStream = r1
            java.io.File r2 = r3.file
            r3.file = r1
            r2.delete()
            throw r0
    }

    private void openNextOutputStream() throws java.io.IOException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r8.dataSpec
            long r0 = r0.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Ld
            long r0 = r8.maxCacheFileSize
            goto L1a
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r8.dataSpec
            long r0 = r0.length
            long r2 = r8.dataSpecBytesWritten
            long r0 = r0 - r2
            long r2 = r8.maxCacheFileSize
            long r0 = java.lang.Math.min(r0, r2)
        L1a:
            r6 = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2 = r8.cache
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r8.dataSpec
            java.lang.String r3 = r0.key
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r8.dataSpec
            long r0 = r0.absoluteStreamPosition
            long r4 = r8.dataSpecBytesWritten
            long r4 = r4 + r0
            java.io.File r0 = r2.startFile(r3, r4, r6)
            r8.file = r0
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            java.io.File r1 = r8.file
            r0.<init>(r1)
            r8.underlyingFileOutputStream = r0
            int r1 = r8.bufferSize
            if (r1 <= 0) goto L53
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r1 = r8.bufferedOutputStream
            if (r1 != 0) goto L4b
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream
            java.io.FileOutputStream r1 = r8.underlyingFileOutputStream
            int r2 = r8.bufferSize
            r0.<init>(r1, r2)
            r8.bufferedOutputStream = r0
            goto L4e
        L4b:
            r1.reset(r0)
        L4e:
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r0 = r8.bufferedOutputStream
            r8.outputStream = r0
            goto L55
        L53:
            r8.outputStream = r0
        L55:
            r0 = 0
            r8.outputStreamBytesWritten = r0
            return
    }

    @Override
    public final void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink.CacheDataSinkException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r2.dataSpec
            if (r0 != 0) goto L5
            return
        L5:
            r2.closeCurrentOutputStream()     // Catch: java.io.IOException -> L9
            return
        L9:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink$CacheDataSinkException r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink$CacheDataSinkException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public final void open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink.CacheDataSinkException {
            r4 = this;
            long r0 = r5.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L13
            r0 = 2
            boolean r0 = r5.isFlagSet(r0)
            if (r0 != 0) goto L13
            r5 = 0
            r4.dataSpec = r5
            return
        L13:
            r4.dataSpec = r5
            r0 = 0
            r4.dataSpecBytesWritten = r0
            r4.openNextOutputStream()     // Catch: java.io.IOException -> L1d
            return
        L1d:
            r5 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink$CacheDataSinkException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink$CacheDataSinkException
            r0.<init>(r5)
            throw r0
    }

    @Override
    public final void write(byte[] r8, int r9, int r10) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink.CacheDataSinkException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r7.dataSpec
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
        L6:
            if (r0 >= r10) goto L3e
            long r1 = r7.outputStreamBytesWritten     // Catch: java.io.IOException -> L37
            long r3 = r7.maxCacheFileSize     // Catch: java.io.IOException -> L37
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L16
            r7.closeCurrentOutputStream()     // Catch: java.io.IOException -> L37
            r7.openNextOutputStream()     // Catch: java.io.IOException -> L37
        L16:
            int r1 = r10 - r0
            long r1 = (long) r1     // Catch: java.io.IOException -> L37
            long r3 = r7.maxCacheFileSize     // Catch: java.io.IOException -> L37
            long r5 = r7.outputStreamBytesWritten     // Catch: java.io.IOException -> L37
            long r3 = r3 - r5
            long r1 = java.lang.Math.min(r1, r3)     // Catch: java.io.IOException -> L37
            int r1 = (int) r1     // Catch: java.io.IOException -> L37
            java.io.OutputStream r2 = r7.outputStream     // Catch: java.io.IOException -> L37
            int r3 = r9 + r0
            r2.write(r8, r3, r1)     // Catch: java.io.IOException -> L37
            int r0 = r0 + r1
            long r2 = r7.outputStreamBytesWritten     // Catch: java.io.IOException -> L37
            long r4 = (long) r1     // Catch: java.io.IOException -> L37
            long r2 = r2 + r4
            r7.outputStreamBytesWritten = r2     // Catch: java.io.IOException -> L37
            long r1 = r7.dataSpecBytesWritten     // Catch: java.io.IOException -> L37
            long r1 = r1 + r4
            r7.dataSpecBytesWritten = r1     // Catch: java.io.IOException -> L37
            goto L6
        L37:
            r8 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink$CacheDataSinkException r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheDataSink$CacheDataSinkException
            r9.<init>(r8)
            throw r9
        L3e:
            return
    }
}
