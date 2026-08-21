package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class LoopingMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource<java.lang.Void> {
    private int childPeriodCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource childSource;
    private final int loopCount;

    private static final class InfinitelyLoopingTimeline extends com.mbridge.msdk.playercommon.exoplayer2.source.ForwardingTimeline {
        public InfinitelyLoopingTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final int getNextWindowIndex(int r2, int r3, boolean r4) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
                int r2 = r0.getNextWindowIndex(r2, r3, r4)
                r3 = -1
                if (r2 != r3) goto Ld
                int r2 = r1.getFirstWindowIndex(r4)
            Ld:
                return r2
        }

        @Override
        public final int getPreviousWindowIndex(int r2, int r3, boolean r4) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
                int r2 = r0.getPreviousWindowIndex(r2, r3, r4)
                r3 = -1
                if (r2 != r3) goto Ld
                int r2 = r1.getLastWindowIndex(r4)
            Ld:
                return r2
        }
    }

    private static final class LoopingTimeline extends com.mbridge.msdk.playercommon.exoplayer2.source.AbstractConcatenatedTimeline {
        private final int childPeriodCount;
        private final com.mbridge.msdk.playercommon.exoplayer2.Timeline childTimeline;
        private final int childWindowCount;
        private final int loopCount;

        public LoopingTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, int r4) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder
                r0.<init>(r4)
                r1 = 0
                r2.<init>(r1, r0)
                r2.childTimeline = r3
                int r0 = r3.getPeriodCount()
                r2.childPeriodCount = r0
                int r3 = r3.getWindowCount()
                r2.childWindowCount = r3
                r2.loopCount = r4
                int r3 = r2.childPeriodCount
                if (r3 <= 0) goto L29
                r0 = 2147483647(0x7fffffff, float:NaN)
                int r0 = r0 / r3
                if (r4 > r0) goto L24
                r1 = 1
            L24:
                java.lang.String r3 = "LoopingMediaSource contains too many periods"
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1, r3)
            L29:
                return
        }

        @Override
        protected final int getChildIndexByChildUid(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof java.lang.Integer
                if (r0 != 0) goto L6
                r2 = -1
                return r2
            L6:
                java.lang.Integer r2 = (java.lang.Integer) r2
                int r2 = r2.intValue()
                return r2
        }

        @Override
        protected final int getChildIndexByPeriodIndex(int r2) {
                r1 = this;
                int r0 = r1.childPeriodCount
                int r2 = r2 / r0
                return r2
        }

        @Override
        protected final int getChildIndexByWindowIndex(int r2) {
                r1 = this;
                int r0 = r1.childWindowCount
                int r2 = r2 / r0
                return r2
        }

        @Override
        protected final java.lang.Object getChildUidByChildIndex(int r1) {
                r0 = this;
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                return r1
        }

        @Override
        protected final int getFirstPeriodIndexByChildIndex(int r2) {
                r1 = this;
                int r0 = r1.childPeriodCount
                int r2 = r2 * r0
                return r2
        }

        @Override
        protected final int getFirstWindowIndexByChildIndex(int r2) {
                r1 = this;
                int r0 = r1.childWindowCount
                int r2 = r2 * r0
                return r2
        }

        @Override
        public final int getPeriodCount() {
                r2 = this;
                int r0 = r2.childPeriodCount
                int r1 = r2.loopCount
                int r0 = r0 * r1
                return r0
        }

        @Override
        protected final com.mbridge.msdk.playercommon.exoplayer2.Timeline getTimelineByChildIndex(int r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r0.childTimeline
                return r1
        }

        @Override
        public final int getWindowCount() {
                r2 = this;
                int r0 = r2.childWindowCount
                int r1 = r2.loopCount
                int r0 = r0 * r1
                return r0
        }
    }

    public LoopingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2) {
            r1 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.<init>(r2, r0)
            return
    }

    public LoopingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, int r3) {
            r1 = this;
            r1.<init>()
            if (r3 <= 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r1.childSource = r2
            r1.loopCount = r3
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r4, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r5) {
            r3 = this;
            int r0 = r3.loopCount
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 == r1) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r3.childSource
            int r1 = r4.periodIndex
            int r2 = r3.childPeriodCount
            int r1 = r1 % r2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r4 = r4.copyWithPeriodIndex(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r4 = r0.createPeriod(r4, r5)
            goto L1d
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r3.childSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r4 = r0.createPeriod(r4, r5)
        L1d:
            return r4
    }

    @Override
    protected final void onChildSourceInfoRefreshed(java.lang.Void r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r0 = this;
            java.lang.Void r1 = (java.lang.Void) r1
            r0.onChildSourceInfoRefreshed(r1, r2, r3, r4)
            return
    }

    protected final void onChildSourceInfoRefreshed(java.lang.Void r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r0 = this;
            int r1 = r3.getPeriodCount()
            r0.childPeriodCount = r1
            int r1 = r0.loopCount
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r1 == r2) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.source.LoopingMediaSource$LoopingTimeline r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.LoopingMediaSource$LoopingTimeline
            int r2 = r0.loopCount
            r1.<init>(r3, r2)
            goto L1a
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.source.LoopingMediaSource$InfinitelyLoopingTimeline r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.LoopingMediaSource$InfinitelyLoopingTimeline
            r1.<init>(r3)
        L1a:
            r0.refreshSourceInfo(r1, r4)
            return
    }

    @Override
    public final void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, boolean r2) {
            r0 = this;
            super.prepareSourceInternal(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r0.childSource
            r2 = 0
            r0.prepareChildSource(r2, r1)
            return
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r1.childSource
            r0.releasePeriod(r2)
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r1 = this;
            super.releaseSourceInternal()
            r0 = 0
            r1.childPeriodCount = r0
            return
    }
}
