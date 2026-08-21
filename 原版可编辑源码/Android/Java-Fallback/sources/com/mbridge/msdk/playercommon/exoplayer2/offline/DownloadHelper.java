package com.mbridge.msdk.playercommon.exoplayer2.offline;

public abstract class DownloadHelper {


    public interface Callback {
        void onPrepareError(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadHelper r1, java.io.IOException r2);

        void onPrepared(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadHelper r1);
    }

    public DownloadHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction getDownloadAction(byte[] r1, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.offline.TrackKey> r2);

    public abstract int getPeriodCount();

    public abstract com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction getRemoveAction(byte[] r1);

    public abstract com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups(int r1);

    public void prepare(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadHelper.Callback r3) {
            r2 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r1 == 0) goto Ld
            android.os.Looper r1 = android.os.Looper.myLooper()
            goto L11
        Ld:
            android.os.Looper r1 = android.os.Looper.getMainLooper()
        L11:
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadHelper$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadHelper$1
            r1.<init>(r2, r0, r3)
            r1.start()
            return
    }

    protected abstract void prepareInternal() throws java.io.IOException;
}
