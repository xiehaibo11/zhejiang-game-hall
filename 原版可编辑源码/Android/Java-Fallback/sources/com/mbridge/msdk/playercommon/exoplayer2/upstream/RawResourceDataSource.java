package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class RawResourceDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    public static final java.lang.String RAW_RESOURCE_SCHEME = "rawresource";
    private android.content.res.AssetFileDescriptor assetFileDescriptor;
    private long bytesRemaining;
    private java.io.InputStream inputStream;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> listener;
    private boolean opened;
    private final android.content.res.Resources resources;
    private android.net.Uri uri;

    public static class RawResourceDataSourceException extends java.io.IOException {
        public RawResourceDataSourceException(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public RawResourceDataSourceException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public RawResourceDataSource(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RawResourceDataSource(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r2) {
            r0 = this;
            r0.<init>()
            android.content.res.Resources r1 = r1.getResources()
            r0.resources = r1
            r0.listener = r2
            return
    }

    public static android.net.Uri buildRawResourceUri(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "rawresource:///"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            return r2
    }

    @Override
    public final void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource.RawResourceDataSourceException {
            r4 = this;
            r0 = 0
            r4.uri = r0
            r1 = 0
            java.io.InputStream r2 = r4.inputStream     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
            if (r2 == 0) goto Ld
            java.io.InputStream r2 = r4.inputStream     // Catch: java.lang.Throwable -> L41 java.io.IOException -> L43
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
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r0 = r4.listener
            if (r0 == 0) goto L27
            r0.onTransferEnd(r4)
        L27:
            return
        L28:
            r2 = move-exception
            goto L31
        L2a:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L31:
            r4.assetFileDescriptor = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L40
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r0 = r4.listener
            if (r0 == 0) goto L40
            r0.onTransferEnd(r4)
        L40:
            throw r2
        L41:
            r2 = move-exception
            goto L4a
        L43:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException     // Catch: java.lang.Throwable -> L41
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
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r0 = r4.listener
            if (r0 == 0) goto L64
            r0.onTransferEnd(r4)
        L64:
            throw r2
        L65:
            r2 = move-exception
            goto L6e
        L67:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException     // Catch: java.lang.Throwable -> L65
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L65
            throw r3     // Catch: java.lang.Throwable -> L65
        L6e:
            r4.assetFileDescriptor = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L7d
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r0 = r4.listener
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
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r6) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource.RawResourceDataSourceException {
            r5 = this;
            android.net.Uri r0 = r6.uri     // Catch: java.io.IOException -> L87
            r5.uri = r0     // Catch: java.io.IOException -> L87
            java.lang.String r1 = "rawresource"
            java.lang.String r0 = r0.getScheme()     // Catch: java.io.IOException -> L87
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.io.IOException -> L87
            if (r0 == 0) goto L7f
            android.net.Uri r0 = r5.uri     // Catch: java.lang.NumberFormatException -> L77 java.io.IOException -> L87
            java.lang.String r0 = r0.getLastPathSegment()     // Catch: java.lang.NumberFormatException -> L77 java.io.IOException -> L87
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L77 java.io.IOException -> L87
            android.content.res.Resources r1 = r5.resources     // Catch: java.io.IOException -> L87
            android.content.res.AssetFileDescriptor r0 = r1.openRawResourceFd(r0)     // Catch: java.io.IOException -> L87
            r5.assetFileDescriptor = r0     // Catch: java.io.IOException -> L87
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.io.IOException -> L87
            android.content.res.AssetFileDescriptor r1 = r5.assetFileDescriptor     // Catch: java.io.IOException -> L87
            java.io.FileDescriptor r1 = r1.getFileDescriptor()     // Catch: java.io.IOException -> L87
            r0.<init>(r1)     // Catch: java.io.IOException -> L87
            r5.inputStream = r0     // Catch: java.io.IOException -> L87
            android.content.res.AssetFileDescriptor r1 = r5.assetFileDescriptor     // Catch: java.io.IOException -> L87
            long r1 = r1.getStartOffset()     // Catch: java.io.IOException -> L87
            r0.skip(r1)     // Catch: java.io.IOException -> L87
            java.io.InputStream r0 = r5.inputStream     // Catch: java.io.IOException -> L87
            long r1 = r6.position     // Catch: java.io.IOException -> L87
            long r0 = r0.skip(r1)     // Catch: java.io.IOException -> L87
            long r2 = r6.position     // Catch: java.io.IOException -> L87
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L71
            long r0 = r6.length     // Catch: java.io.IOException -> L87
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L53
            long r0 = r6.length     // Catch: java.io.IOException -> L87
            r5.bytesRemaining = r0     // Catch: java.io.IOException -> L87
            goto L64
        L53:
            android.content.res.AssetFileDescriptor r0 = r5.assetFileDescriptor     // Catch: java.io.IOException -> L87
            long r0 = r0.getLength()     // Catch: java.io.IOException -> L87
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L5e
            goto L62
        L5e:
            long r2 = r6.position     // Catch: java.io.IOException -> L87
            long r2 = r0 - r2
        L62:
            r5.bytesRemaining = r2     // Catch: java.io.IOException -> L87
        L64:
            r0 = 1
            r5.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r0 = r5.listener
            if (r0 == 0) goto L6e
            r0.onTransferStart(r5, r6)
        L6e:
            long r0 = r5.bytesRemaining
            return r0
        L71:
            java.io.EOFException r6 = new java.io.EOFException     // Catch: java.io.IOException -> L87
            r6.<init>()     // Catch: java.io.IOException -> L87
            throw r6     // Catch: java.io.IOException -> L87
        L77:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r6 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException     // Catch: java.io.IOException -> L87
            java.lang.String r0 = "Resource identifier must be an integer."
            r6.<init>(r0)     // Catch: java.io.IOException -> L87
            throw r6     // Catch: java.io.IOException -> L87
        L7f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r6 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException     // Catch: java.io.IOException -> L87
            java.lang.String r0 = "URI must use scheme rawresource"
            r6.<init>(r0)     // Catch: java.io.IOException -> L87
            throw r6     // Catch: java.io.IOException -> L87
        L87:
            r6 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException
            r0.<init>(r6)
            throw r0
    }

    @Override
    public final int read(byte[] r9, int r10, int r11) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource.RawResourceDataSourceException {
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
            java.io.InputStream r0 = r8.inputStream     // Catch: java.io.IOException -> L47
            int r9 = r0.read(r9, r10, r11)     // Catch: java.io.IOException -> L47
            if (r9 != r3) goto L35
            long r9 = r8.bytesRemaining
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 != 0) goto L2a
            return r3
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException
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
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource> r10 = r8.listener
            if (r10 == 0) goto L46
            r10.onBytesTransferred(r8, r9)
        L46:
            return r9
        L47:
            r9 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException r10 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource$RawResourceDataSourceException
            r10.<init>(r9)
            throw r10
    }
}
