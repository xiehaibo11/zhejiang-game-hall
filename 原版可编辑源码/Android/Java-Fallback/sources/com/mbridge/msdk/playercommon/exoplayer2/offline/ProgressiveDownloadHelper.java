package com.mbridge.msdk.playercommon.exoplayer2.offline;

public final class ProgressiveDownloadHelper extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadHelper {
    private final java.lang.String customCacheKey;
    private final android.net.Uri uri;

    public ProgressiveDownloadHelper(android.net.Uri r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ProgressiveDownloadHelper(android.net.Uri r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.uri = r1
            r0.customCacheKey = r2
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction getDownloadAction(byte[] r4, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.offline.TrackKey> r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction r5 = new com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction
            android.net.Uri r0 = r3.uri
            java.lang.String r1 = r3.customCacheKey
            r2 = 0
            r5.<init>(r0, r2, r4, r1)
            return r5
    }

    @Override
    public final int getPeriodCount() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction getRemoveAction(byte[] r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.ProgressiveDownloadAction
            android.net.Uri r1 = r4.uri
            java.lang.String r2 = r4.customCacheKey
            r3 = 1
            r0.<init>(r1, r3, r5, r2)
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups(int r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.EMPTY
            return r1
    }

    @Override
    protected final void prepareInternal() {
            r0 = this;
            return
    }
}
