package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DefaultDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    private static final java.lang.String SCHEME_ASSET = "asset";
    private static final java.lang.String SCHEME_CONTENT = "content";
    private static final java.lang.String SCHEME_RAW = "rawresource";
    private static final java.lang.String SCHEME_RTMP = "rtmp";
    private static final java.lang.String TAG = "DefaultDataSource";
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource assetDataSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource baseDataSource;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource contentDataSource;
    private final android.content.Context context;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSchemeDataSource;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource fileDataSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> listener;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource rawResourceDataSource;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource rtmpDataSource;

    public DefaultDataSource(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.context = r1
            r0.listener = r2
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource) r1
            r0.baseDataSource = r1
            return
    }

    public DefaultDataSource(android.content.Context r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r11, java.lang.String r12, int r13, int r14, boolean r15) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource r8 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource
            r2 = 0
            r7 = 0
            r0 = r8
            r1 = r12
            r3 = r11
            r4 = r13
            r5 = r14
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r9.<init>(r10, r11, r8)
            return
    }

    public DefaultDataSource(android.content.Context r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r9, java.lang.String r10, boolean r11) {
            r7 = this;
            r4 = 8000(0x1f40, float:1.121E-41)
            r5 = 8000(0x1f40, float:1.121E-41)
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource getAssetDataSource() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.assetDataSource
            if (r0 != 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.AssetDataSource
            android.content.Context r1 = r3.context
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2 = r3.listener
            r0.<init>(r1, r2)
            r3.assetDataSource = r0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.assetDataSource
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource getContentDataSource() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.contentDataSource
            if (r0 != 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ContentDataSource
            android.content.Context r1 = r3.context
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2 = r3.listener
            r0.<init>(r1, r2)
            r3.contentDataSource = r0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.contentDataSource
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource getDataSchemeDataSource() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.dataSchemeDataSource
            if (r0 != 0) goto Lb
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSchemeDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSchemeDataSource
            r0.<init>()
            r1.dataSchemeDataSource = r0
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.dataSchemeDataSource
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource getFileDataSource() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.fileDataSource
            if (r0 != 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.FileDataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r1 = r2.listener
            r0.<init>(r1)
            r2.fileDataSource = r0
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.fileDataSource
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource getRawResourceDataSource() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.rawResourceDataSource
            if (r0 != 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.RawResourceDataSource
            android.content.Context r1 = r3.context
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource> r2 = r3.listener
            r0.<init>(r1, r2)
            r3.rawResourceDataSource = r0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.rawResourceDataSource
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource getRtmpDataSource() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.rtmpDataSource
            if (r0 != 0) goto L34
            java.lang.String r0 = "com.mbridge.msdk.playercommon.exoplayer2.ext.rtmp.RtmpDataSource"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            java.lang.reflect.Constructor r0 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource) r0     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            r3.rtmpDataSource = r0     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            goto L2c
        L1c:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating RTMP extension"
            r1.<init>(r2, r0)
            throw r1
        L25:
            java.lang.String r0 = "DefaultDataSource"
            java.lang.String r1 = "Attempting to play RTMP stream without depending on the RTMP extension"
            android.util.Log.w(r0, r1)
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.rtmpDataSource
            if (r0 != 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.baseDataSource
            r3.rtmpDataSource = r0
        L34:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r3.rtmpDataSource
            return r0
    }

    @Override
    public final void close() throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.dataSource
            if (r0 == 0) goto Lf
            r1 = 0
            r0.close()     // Catch: java.lang.Throwable -> Lb
            r2.dataSource = r1
            goto Lf
        Lb:
            r0 = move-exception
            r2.dataSource = r1
            throw r0
        Lf:
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.dataSource
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            android.net.Uri r0 = r0.getUri()
        La:
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3) throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.dataSource
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            android.net.Uri r0 = r3.uri
            java.lang.String r0 = r0.getScheme()
            android.net.Uri r1 = r3.uri
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isLocalFileUri(r1)
            if (r1 == 0) goto L34
            android.net.Uri r0 = r3.uri
            java.lang.String r0 = r0.getPath()
            java.lang.String r1 = "/android_asset/"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getAssetDataSource()
            r2.dataSource = r0
            goto L83
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getFileDataSource()
            r2.dataSource = r0
            goto L83
        L34:
            java.lang.String r1 = "asset"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L43
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getAssetDataSource()
            r2.dataSource = r0
            goto L83
        L43:
            java.lang.String r1 = "content"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L52
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getContentDataSource()
            r2.dataSource = r0
            goto L83
        L52:
            java.lang.String r1 = "rtmp"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L61
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getRtmpDataSource()
            r2.dataSource = r0
            goto L83
        L61:
            java.lang.String r1 = "data"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L70
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getDataSchemeDataSource()
            r2.dataSource = r0
            goto L83
        L70:
            java.lang.String r1 = "rawresource"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.getRawResourceDataSource()
            r2.dataSource = r0
            goto L83
        L7f:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.baseDataSource
            r2.dataSource = r0
        L83:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r2.dataSource
            long r0 = r0.open(r3)
            return r0
    }

    @Override
    public final int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r1.dataSource
            int r2 = r0.read(r2, r3, r4)
            return r2
    }
}
