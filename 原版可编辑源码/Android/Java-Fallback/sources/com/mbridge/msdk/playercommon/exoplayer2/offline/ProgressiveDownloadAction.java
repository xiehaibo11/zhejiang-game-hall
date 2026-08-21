package com.mbridge.msdk.playercommon.exoplayer2.offline;

public final class ProgressiveDownloadAction extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction {
    public static final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer DESERIALIZER = null;
    private static final java.lang.String TYPE = "progressive";
    private static final int VERSION = 0;
    public final java.lang.String customCacheKey;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction$1
            java.lang.String r1 = "progressive"
            r2 = 0
            r0.<init>(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction.DESERIALIZER = r0
            return
    }

    public ProgressiveDownloadAction(android.net.Uri r7, boolean r8, byte[] r9, java.lang.String r10) {
            r6 = this;
            java.lang.String r1 = "progressive"
            r2 = 0
            r0 = r6
            r3 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            r6.customCacheKey = r10
            return
    }

    private java.lang.String getCacheKey() {
            r1 = this;
            java.lang.String r0 = r1.customCacheKey
            if (r0 == 0) goto L5
            goto Lb
        L5:
            android.net.Uri r0 = r1.uri
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CacheUtil.generateKey(r0)
        Lb:
            return r0
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader createDownloader(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloader r1 = r0.createDownloader(r1)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloader createDownloader(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloader r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloader
            android.net.Uri r1 = r3.uri
            java.lang.String r2 = r3.customCacheKey
            r0.<init>(r1, r2, r4)
            return r0
    }

    @Override
    public final boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 != r2) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = super.equals(r2)
            if (r0 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction r2 = (com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction) r2
            java.lang.String r0 = r1.customCacheKey
            java.lang.String r2 = r2.customCacheKey
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r0, r2)
            return r2
    }

    @Override
    public final int hashCode() {
            r2 = this;
            int r0 = super.hashCode()
            int r0 = r0 * 31
            java.lang.String r1 = r2.customCacheKey
            if (r1 == 0) goto Lf
            int r1 = r1.hashCode()
            goto L10
        Lf:
            r1 = 0
        L10:
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final boolean isSameMedia(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction
            if (r0 == 0) goto L16
            java.lang.String r0 = r1.getCacheKey()
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction r2 = (com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction) r2
            java.lang.String r2 = r2.getCacheKey()
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    @Override
    protected final void writeToStream(java.io.DataOutputStream r2) throws java.io.IOException {
            r1 = this;
            android.net.Uri r0 = r1.uri
            java.lang.String r0 = r0.toString()
            r2.writeUTF(r0)
            boolean r0 = r1.isRemoveAction
            r2.writeBoolean(r0)
            byte[] r0 = r1.data
            int r0 = r0.length
            r2.writeInt(r0)
            byte[] r0 = r1.data
            r2.write(r0)
            java.lang.String r0 = r1.customCacheKey
            if (r0 == 0) goto L1f
            r0 = 1
            goto L20
        L1f:
            r0 = 0
        L20:
            r2.writeBoolean(r0)
            if (r0 == 0) goto L2a
            java.lang.String r0 = r1.customCacheKey
            r2.writeUTF(r0)
        L2a:
            return
    }
}
