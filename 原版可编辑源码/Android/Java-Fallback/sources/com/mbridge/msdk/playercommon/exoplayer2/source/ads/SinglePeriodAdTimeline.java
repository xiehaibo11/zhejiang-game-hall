package com.mbridge.msdk.playercommon.exoplayer2.source.ads;

final class SinglePeriodAdTimeline extends com.mbridge.msdk.playercommon.exoplayer2.source.ForwardingTimeline {
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState adPlaybackState;

    public SinglePeriodAdTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r4, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r5) {
            r3 = this;
            r3.<init>(r4)
            int r0 = r4.getPeriodCount()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto Ld
            r0 = r2
            goto Le
        Ld:
            r0 = r1
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            int r4 = r4.getWindowCount()
            if (r4 != r2) goto L18
            r1 = r2
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            r3.adPlaybackState = r5
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r11, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r12, boolean r13) {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r10.timeline
            r0.getPeriod(r11, r12, r13)
            java.lang.Object r2 = r12.id
            java.lang.Object r3 = r12.uid
            int r4 = r12.windowIndex
            long r5 = r12.durationUs
            long r7 = r12.getPositionInWindowUs()
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = r10.adPlaybackState
            r1 = r12
            r1.set(r2, r3, r4, r5, r7, r9)
            return r12
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r2, boolean r3, long r4) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = super.getWindow(r1, r2, r3, r4)
            long r2 = r1.durationUs
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r2 = r0.adPlaybackState
            long r2 = r2.contentDurationUs
            r1.durationUs = r2
        L15:
            return r1
    }
}
