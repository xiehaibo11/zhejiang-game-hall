package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class FileDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private long bytesRemaining;
    private java.io.RandomAccessFile file;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> listener;
    private boolean opened;
    private android.net.Uri uri;

    public static class FileDataSourceException extends java.io.IOException {
        public FileDataSourceException(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public FileDataSource() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public FileDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r1) {
            r0 = this;
            r0.<init>()
            r0.listener = r1
            return
    }

    @Override
    public final void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource.FileDataSourceException {
            r4 = this;
            r0 = 0
            r4.uri = r0
            r1 = 0
            java.io.RandomAccessFile r2 = r4.file     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
            if (r2 == 0) goto Ld
            java.io.RandomAccessFile r2 = r4.file     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
            r2.close()     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
        Ld:
            r4.file = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L1c
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r0 = r4.listener
            if (r0 == 0) goto L1c
            r0.onTransferEnd(r4)
        L1c:
            return
        L1d:
            r2 = move-exception
            goto L26
        L1f:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource$FileDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource$FileDataSourceException     // Catch: java.lang.Throwable -> L1d
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1d
            throw r3     // Catch: java.lang.Throwable -> L1d
        L26:
            r4.file = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L35
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r0 = r4.listener
            if (r0 == 0) goto L35
            r0.onTransferEnd(r4)
        L35:
            throw r2
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            android.net.Uri r0 = r1.uri
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource.FileDataSourceException {
            r4 = this;
            android.net.Uri r0 = r5.uri     // Catch: java.io.IOException -> L47
            r4.uri = r0     // Catch: java.io.IOException -> L47
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L47
            android.net.Uri r1 = r5.uri     // Catch: java.io.IOException -> L47
            java.lang.String r1 = r1.getPath()     // Catch: java.io.IOException -> L47
            java.lang.String r2 = "r"
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> L47
            r4.file = r0     // Catch: java.io.IOException -> L47
            long r1 = r5.position     // Catch: java.io.IOException -> L47
            r0.seek(r1)     // Catch: java.io.IOException -> L47
            long r0 = r5.length     // Catch: java.io.IOException -> L47
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L2a
            java.io.RandomAccessFile r0 = r4.file     // Catch: java.io.IOException -> L47
            long r0 = r0.length()     // Catch: java.io.IOException -> L47
            long r2 = r5.position     // Catch: java.io.IOException -> L47
            long r0 = r0 - r2
            goto L2c
        L2a:
            long r0 = r5.length     // Catch: java.io.IOException -> L47
        L2c:
            r4.bytesRemaining = r0     // Catch: java.io.IOException -> L47
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L41
            r0 = 1
            r4.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r0 = r4.listener
            if (r0 == 0) goto L3e
            r0.onTransferStart(r4, r5)
        L3e:
            long r0 = r4.bytesRemaining
            return r0
        L41:
            java.io.EOFException r5 = new java.io.EOFException     // Catch: java.io.IOException -> L47
            r5.<init>()     // Catch: java.io.IOException -> L47
            throw r5     // Catch: java.io.IOException -> L47
        L47:
            r5 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource$FileDataSourceException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource$FileDataSourceException
            r0.<init>(r5)
            throw r0
    }

    @Override
    public final int read(byte[] r6, int r7, int r8) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource.FileDataSourceException {
            r5 = this;
            if (r8 != 0) goto L4
            r6 = 0
            return r6
        L4:
            long r0 = r5.bytesRemaining
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Le
            r6 = -1
            return r6
        Le:
            java.io.RandomAccessFile r2 = r5.file     // Catch: java.io.IOException -> L2a
            long r3 = (long) r8     // Catch: java.io.IOException -> L2a
            long r0 = java.lang.Math.min(r0, r3)     // Catch: java.io.IOException -> L2a
            int r8 = (int) r0     // Catch: java.io.IOException -> L2a
            int r6 = r2.read(r6, r7, r8)     // Catch: java.io.IOException -> L2a
            if (r6 <= 0) goto L29
            long r7 = r5.bytesRemaining
            long r0 = (long) r6
            long r7 = r7 - r0
            r5.bytesRemaining = r7
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource> r7 = r5.listener
            if (r7 == 0) goto L29
            r7.onBytesTransferred(r5, r6)
        L29:
            return r6
        L2a:
            r6 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource$FileDataSourceException r7 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource$FileDataSourceException
            r7.<init>(r6)
            throw r7
    }
}
