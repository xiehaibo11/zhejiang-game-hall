package com.mbridge.msdk.playercommon.exoplayer2.source;

public abstract class ForwardingTimeline extends com.mbridge.msdk.playercommon.exoplayer2.Timeline {
    protected final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;

    public ForwardingTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1) {
            r0 = this;
            r0.<init>()
            r0.timeline = r1
            return
    }

    @Override
    public int getFirstWindowIndex(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r2 = r0.getFirstWindowIndex(r2)
            return r2
    }

    @Override
    public int getIndexOfPeriod(java.lang.Object r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r2 = r0.getIndexOfPeriod(r2)
            return r2
    }

    @Override
    public int getLastWindowIndex(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r2 = r0.getLastWindowIndex(r2)
            return r2
    }

    @Override
    public int getNextWindowIndex(int r2, int r3, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r2 = r0.getNextWindowIndex(r2, r3, r4)
            return r2
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r3, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r0.getPeriod(r2, r3, r4)
            return r2
    }

    @Override
    public int getPeriodCount() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r0 = r0.getPeriodCount()
            return r0
    }

    @Override
    public int getPreviousWindowIndex(int r2, int r3, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r2 = r0.getPreviousWindowIndex(r2, r3, r4)
            return r2
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r7, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r8, boolean r9, long r10) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r6.timeline
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r7 = r0.getWindow(r1, r2, r3, r4)
            return r7
    }

    @Override
    public int getWindowCount() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
            int r0 = r0.getWindowCount()
            return r0
    }
}
