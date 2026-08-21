package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class ContentDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private android.content.res.AssetFileDescriptor assetFileDescriptor;
    private long bytesRemaining;
    private java.io.FileInputStream inputStream;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> listener;
    private boolean opened;
    private final android.content.ContentResolver resolver;
    private android.net.Uri uri;

    public static class ContentDataSourceException extends java.io.IOException {
        public ContentDataSourceException(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public ContentDataSource(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ContentDataSource(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r2) {
            r0 = this;
            r0.<init>()
            android.content.ContentResolver r1 = r1.getContentResolver()
            r0.resolver = r1
            r0.listener = r2
            return
    }

    @Override
    public final void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource.ContentDataSourceException {
            r4 = this;
            r0 = 0
            r4.uri = r0
            r1 = 0
            java.io.FileInputStream r2 = r4.inputStream     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            if (r2 == 0) goto Ld
            java.io.FileInputStream r2 = r4.inputStream     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            r2.close()     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
        Ld:
            r4.inputStream = r0
            android.content.res.AssetFileDescriptor r2 = r4.assetFileDescriptor     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            if (r2 == 0) goto L18
            android.content.res.AssetFileDescriptor r2 = r4.assetFileDescriptor     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
            r2.close()     // Catch: java.lang.Throwable -> L28 java.io.IOException -> L2a
        L18:
            r4.assetFileDescriptor = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L27
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r0 = r4.listener
            if (r0 == 0) goto L27
            r0.onTransferEnd(r4)
        L27:
            return
        L28:
            r2 = move-exception
            goto L31
        L2a:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L31:
            r4.assetFileDescriptor = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L40
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r0 = r4.listener
            if (r0 == 0) goto L40
            r0.onTransferEnd(r4)
        L40:
            throw r2
        L41:
            r2 = move-exception
            goto L4a
        L43:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException     // Catch: java.lang.Throwable -> L41
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L41
            throw r3     // Catch: java.lang.Throwable -> L41
        L4a:
            r4.inputStream = r0
            android.content.res.AssetFileDescriptor r3 = r4.assetFileDescriptor     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
            if (r3 == 0) goto L55
            android.content.res.AssetFileDescriptor r3 = r4.assetFileDescriptor     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
            r3.close()     // Catch: java.lang.Throwable -> L65 java.io.IOException -> L67
        L55:
            r4.assetFileDescriptor = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L64
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r0 = r4.listener
            if (r0 == 0) goto L64
            r0.onTransferEnd(r4)
        L64:
            throw r2
        L65:
            r2 = move-exception
            goto L6e
        L67:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException     // Catch: java.lang.Throwable -> L65
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L65
            throw r3     // Catch: java.lang.Throwable -> L65
        L6e:
            r4.assetFileDescriptor = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L7d
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r0 = r4.listener
            if (r0 == 0) goto L7d
            r0.onTransferEnd(r4)
        L7d:
            throw r2
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            android.net.Uri r0 = r1.uri
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r9) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource.ContentDataSourceException {
            r8 = this;
            android.net.Uri r0 = r9.uri     // Catch: java.io.IOException -> L93
            r8.uri = r0     // Catch: java.io.IOException -> L93
            android.content.ContentResolver r1 = r8.resolver     // Catch: java.io.IOException -> L93
            java.lang.String r2 = "r"
            android.content.res.AssetFileDescriptor r0 = r1.openAssetFileDescriptor(r0, r2)     // Catch: java.io.IOException -> L93
            r8.assetFileDescriptor = r0     // Catch: java.io.IOException -> L93
            if (r0 == 0) goto L7a
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.IOException -> L93
            android.content.res.AssetFileDescriptor r1 = r8.assetFileDescriptor     // Catch: java.io.IOException -> L93
            java.io.FileDescriptor r1 = r1.getFileDescriptor()     // Catch: java.io.IOException -> L93
            r0.<init>(r1)     // Catch: java.io.IOException -> L93
            r8.inputStream = r0     // Catch: java.io.IOException -> L93
            android.content.res.AssetFileDescriptor r0 = r8.assetFileDescriptor     // Catch: java.io.IOException -> L93
            long r0 = r0.getStartOffset()     // Catch: java.io.IOException -> L93
            java.io.FileInputStream r2 = r8.inputStream     // Catch: java.io.IOException -> L93
            long r3 = r9.position     // Catch: java.io.IOException -> L93
            long r3 = r3 + r0
            long r2 = r2.skip(r3)     // Catch: java.io.IOException -> L93
            long r2 = r2 - r0
            long r0 = r9.position     // Catch: java.io.IOException -> L93
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L74
            long r0 = r9.length     // Catch: java.io.IOException -> L93
            r4 = -1
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L40
            long r0 = r9.length     // Catch: java.io.IOException -> L93
            r8.bytesRemaining = r0     // Catch: java.io.IOException -> L93
            goto L67
        L40:
            android.content.res.AssetFileDescriptor r0 = r8.assetFileDescriptor     // Catch: java.io.IOException -> L93
            long r0 = r0.getLength()     // Catch: java.io.IOException -> L93
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 != 0) goto L64
            java.io.FileInputStream r0 = r8.inputStream     // Catch: java.io.IOException -> L93
            java.nio.channels.FileChannel r0 = r0.getChannel()     // Catch: java.io.IOException -> L93
            long r1 = r0.size()     // Catch: java.io.IOException -> L93
            r6 = 0
            int r3 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r3 != 0) goto L5b
            goto L61
        L5b:
            long r3 = r0.position()     // Catch: java.io.IOException -> L93
            long r4 = r1 - r3
        L61:
            r8.bytesRemaining = r4     // Catch: java.io.IOException -> L93
            goto L67
        L64:
            long r0 = r0 - r2
            r8.bytesRemaining = r0     // Catch: java.io.IOException -> L93
        L67:
            r0 = 1
            r8.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r0 = r8.listener
            if (r0 == 0) goto L71
            r0.onTransferStart(r8, r9)
        L71:
            long r0 = r8.bytesRemaining
            return r0
        L74:
            java.io.EOFException r9 = new java.io.EOFException     // Catch: java.io.IOException -> L93
            r9.<init>()     // Catch: java.io.IOException -> L93
            throw r9     // Catch: java.io.IOException -> L93
        L7a:
            java.io.FileNotFoundException r9 = new java.io.FileNotFoundException     // Catch: java.io.IOException -> L93
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L93
            r0.<init>()     // Catch: java.io.IOException -> L93
            java.lang.String r1 = "Could not open file descriptor for: "
            r0.append(r1)     // Catch: java.io.IOException -> L93
            android.net.Uri r1 = r8.uri     // Catch: java.io.IOException -> L93
            r0.append(r1)     // Catch: java.io.IOException -> L93
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L93
            r9.<init>(r0)     // Catch: java.io.IOException -> L93
            throw r9     // Catch: java.io.IOException -> L93
        L93:
            r9 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException
            r0.<init>(r9)
            throw r0
    }

    @Override
    public final int read(byte[] r9, int r10, int r11) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource.ContentDataSourceException {
            r8 = this;
            if (r11 != 0) goto L4
            r9 = 0
            return r9
        L4:
            long r0 = r8.bytesRemaining
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = -1
            if (r2 != 0) goto Le
            return r3
        Le:
            r4 = -1
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 != 0) goto L15
            goto L1b
        L15:
            long r6 = (long) r11
            long r0 = java.lang.Math.min(r0, r6)     // Catch: java.io.IOException -> L47
            int r11 = (int) r0     // Catch: java.io.IOException -> L47
        L1b:
            java.io.FileInputStream r0 = r8.inputStream     // Catch: java.io.IOException -> L47
            int r9 = r0.read(r9, r10, r11)     // Catch: java.io.IOException -> L47
            if (r9 != r3) goto L35
            long r9 = r8.bytesRemaining
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 != 0) goto L2a
            return r3
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException
            java.io.EOFException r10 = new java.io.EOFException
            r10.<init>()
            r9.<init>(r10)
            throw r9
        L35:
            long r10 = r8.bytesRemaining
            int r0 = (r10 > r4 ? 1 : (r10 == r4 ? 0 : -1))
            if (r0 == 0) goto L3f
            long r0 = (long) r9
            long r10 = r10 - r0
            r8.bytesRemaining = r10
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource> r10 = r8.listener
            if (r10 == 0) goto L46
            r10.onBytesTransferred(r8, r9)
        L46:
            return r9
        L47:
            r9 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException r10 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource$ContentDataSourceException
            r10.<init>(r9)
            throw r10
    }
}
