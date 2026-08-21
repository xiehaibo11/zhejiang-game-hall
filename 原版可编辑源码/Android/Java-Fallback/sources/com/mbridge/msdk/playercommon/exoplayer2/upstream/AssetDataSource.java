package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class AssetDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private final android.content.res.AssetManager assetManager;
    private long bytesRemaining;
    private java.io.InputStream inputStream;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource> listener;
    private boolean opened;
    private android.net.Uri uri;

    public static final class AssetDataSourceException extends java.io.IOException {
        public AssetDataSourceException(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public AssetDataSource(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AssetDataSource(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource> r2) {
            r0 = this;
            r0.<init>()
            android.content.res.AssetManager r1 = r1.getAssets()
            r0.assetManager = r1
            r0.listener = r2
            return
    }

    @Override
    public final void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource.AssetDataSourceException {
            r4 = this;
            r0 = 0
            r4.uri = r0
            r1 = 0
            java.io.InputStream r2 = r4.inputStream     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
            if (r2 == 0) goto Ld
            java.io.InputStream r2 = r4.inputStream     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
            r2.close()     // Catch: java.lang.Throwable -> L1d java.io.IOException -> L1f
        Ld:
            r4.inputStream = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L1c
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource> r0 = r4.listener
            if (r0 == 0) goto L1c
            r0.onTransferEnd(r4)
        L1c:
            return
        L1d:
            r2 = move-exception
            goto L26
        L1f:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException     // Catch: java.lang.Throwable -> L1d
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L1d
            throw r3     // Catch: java.lang.Throwable -> L1d
        L26:
            r4.inputStream = r0
            boolean r0 = r4.opened
            if (r0 == 0) goto L35
            r4.opened = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource> r0 = r4.listener
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
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r8) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource.AssetDataSourceException {
            r7 = this;
            android.net.Uri r0 = r8.uri     // Catch: java.io.IOException -> L69
            r7.uri = r0     // Catch: java.io.IOException -> L69
            java.lang.String r0 = r0.getPath()     // Catch: java.io.IOException -> L69
            java.lang.String r1 = "/android_asset/"
            boolean r1 = r0.startsWith(r1)     // Catch: java.io.IOException -> L69
            r2 = 1
            if (r1 == 0) goto L18
            r1 = 15
            java.lang.String r0 = r0.substring(r1)     // Catch: java.io.IOException -> L69
            goto L24
        L18:
            java.lang.String r1 = "/"
            boolean r1 = r0.startsWith(r1)     // Catch: java.io.IOException -> L69
            if (r1 == 0) goto L24
            java.lang.String r0 = r0.substring(r2)     // Catch: java.io.IOException -> L69
        L24:
            android.content.res.AssetManager r1 = r7.assetManager     // Catch: java.io.IOException -> L69
            java.io.InputStream r0 = r1.open(r0, r2)     // Catch: java.io.IOException -> L69
            r7.inputStream = r0     // Catch: java.io.IOException -> L69
            long r3 = r8.position     // Catch: java.io.IOException -> L69
            long r0 = r0.skip(r3)     // Catch: java.io.IOException -> L69
            long r3 = r8.position     // Catch: java.io.IOException -> L69
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 < 0) goto L63
            long r0 = r8.length     // Catch: java.io.IOException -> L69
            r3 = -1
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto L45
            long r0 = r8.length     // Catch: java.io.IOException -> L69
            r7.bytesRemaining = r0     // Catch: java.io.IOException -> L69
            goto L57
        L45:
            java.io.InputStream r0 = r7.inputStream     // Catch: java.io.IOException -> L69
            int r0 = r0.available()     // Catch: java.io.IOException -> L69
            long r0 = (long) r0     // Catch: java.io.IOException -> L69
            r7.bytesRemaining = r0     // Catch: java.io.IOException -> L69
            r5 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 != 0) goto L57
            r7.bytesRemaining = r3     // Catch: java.io.IOException -> L69
        L57:
            r7.opened = r2
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource> r0 = r7.listener
            if (r0 == 0) goto L60
            r0.onTransferStart(r7, r8)
        L60:
            long r0 = r7.bytesRemaining
            return r0
        L63:
            java.io.EOFException r8 = new java.io.EOFException     // Catch: java.io.IOException -> L69
            r8.<init>()     // Catch: java.io.IOException -> L69
            throw r8     // Catch: java.io.IOException -> L69
        L69:
            r8 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException
            r0.<init>(r8)
            throw r0
    }

    @Override
    public final int read(byte[] r9, int r10, int r11) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource.AssetDataSourceException {
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
            com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException r9 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException
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
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource> r10 = r8.listener
            if (r10 == 0) goto L46
            r10.onBytesTransferred(r8, r9)
        L46:
            return r9
        L47:
            r9 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException r10 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource$AssetDataSourceException
            r10.<init>(r9)
            throw r10
    }
}
