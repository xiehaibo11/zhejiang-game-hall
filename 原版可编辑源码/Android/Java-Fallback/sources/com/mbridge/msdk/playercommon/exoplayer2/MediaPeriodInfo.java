package com.mbridge.msdk.playercommon.exoplayer2;

final class MediaPeriodInfo {
    public final long contentPositionUs;
    public final long durationUs;
    public final long endPositionUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId id;
    public final boolean isFinal;
    public final boolean isLastInTimelinePeriod;
    public final long startPositionUs;

    MediaPeriodInfo(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1, long r2, long r4, long r6, long r8, boolean r10, boolean r11) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.startPositionUs = r2
            r0.endPositionUs = r4
            r0.contentPositionUs = r6
            r0.durationUs = r8
            r0.isLastInTimelinePeriod = r10
            r0.isFinal = r11
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo copyWithPeriodIndex(int r14) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r13.id
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r0.copyWithPeriodIndex(r14)
            long r2 = r13.startPositionUs
            long r4 = r13.endPositionUs
            long r6 = r13.contentPositionUs
            long r8 = r13.durationUs
            boolean r10 = r13.isLastInTimelinePeriod
            boolean r11 = r13.isFinal
            r0 = r12
            r0.<init>(r1, r2, r4, r6, r8, r10, r11)
            return r12
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo copyWithStartPositionUs(long r14) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r13.id
            long r4 = r13.endPositionUs
            long r6 = r13.contentPositionUs
            long r8 = r13.durationUs
            boolean r10 = r13.isLastInTimelinePeriod
            boolean r11 = r13.isFinal
            r0 = r12
            r2 = r14
            r0.<init>(r1, r2, r4, r6, r8, r10, r11)
            return r12
    }
}
