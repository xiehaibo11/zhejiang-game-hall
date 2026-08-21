package com.mbridge.msdk.playercommon.exoplayer2.source;

import com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer;
import com.mbridge.msdk.playercommon.exoplayer2.Timeline;
import com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource;
import com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder;
import com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;

public final class LoopingMediaSource extends CompositeMediaSource<Void> {
    private int childPeriodCount;
    private final MediaSource childSource;
    private final int loopCount;

    public LoopingMediaSource(MediaSource mediaSource) {
        this(mediaSource, Integer.MAX_VALUE);
    }

    public LoopingMediaSource(MediaSource mediaSource, int i) {
        Assertions.checkArgument(i > 0);
        this.childSource = mediaSource;
        this.loopCount = i;
    }

    @Override
    public final void prepareSourceInternal(ExoPlayer exoPlayer, boolean z) {
        super.prepareSourceInternal(exoPlayer, z);
        prepareChildSource(null, this.childSource);
    }

    @Override
    public final MediaPeriod createPeriod(MediaSource.MediaPeriodId mediaPeriodId, Allocator allocator) {
        if (this.loopCount != Integer.MAX_VALUE) {
            return this.childSource.createPeriod(mediaPeriodId.copyWithPeriodIndex(mediaPeriodId.periodIndex % this.childPeriodCount), allocator);
        }
        return this.childSource.createPeriod(mediaPeriodId, allocator);
    }

    @Override
    public final void releasePeriod(MediaPeriod mediaPeriod) {
        this.childSource.releasePeriod(mediaPeriod);
    }

    @Override
    public final void releaseSourceInternal() {
        super.releaseSourceInternal();
        this.childPeriodCount = 0;
    }

    @Override
    protected final void onChildSourceInfoRefreshed(Void r1, MediaSource mediaSource, Timeline timeline, Object obj) {
        this.childPeriodCount = timeline.getPeriodCount();
        refreshSourceInfo(this.loopCount != Integer.MAX_VALUE ? new LoopingTimeline(timeline, this.loopCount) : new InfinitelyLoopingTimeline(timeline), obj);
    }

    private static final class LoopingTimeline extends AbstractConcatenatedTimeline {
        private final int childPeriodCount;
        private final Timeline childTimeline;
        private final int childWindowCount;
        private final int loopCount;

        public LoopingTimeline(Timeline timeline, int i) {
            super(false, new ShuffleOrder.UnshuffledShuffleOrder(i));
            this.childTimeline = timeline;
            this.childPeriodCount = timeline.getPeriodCount();
            this.childWindowCount = timeline.getWindowCount();
            this.loopCount = i;
            int i2 = this.childPeriodCount;
            if (i2 > 0) {
                Assertions.checkState(i <= Integer.MAX_VALUE / i2, "LoopingMediaSource contains too many periods");
            }
        }

        @Override
        public final int getWindowCount() {
            return this.childWindowCount * this.loopCount;
        }

        @Override
        public final int getPeriodCount() {
            return this.childPeriodCount * this.loopCount;
        }

        @Override
        protected final int getChildIndexByPeriodIndex(int i) {
            return i / this.childPeriodCount;
        }

        @Override
        protected final int getChildIndexByWindowIndex(int i) {
            return i / this.childWindowCount;
        }

        @Override
        protected final int getChildIndexByChildUid(Object obj) {
            if (obj instanceof Integer) {
                return ((Integer) obj).intValue();
            }
            return -1;
        }

        @Override
        protected final Timeline getTimelineByChildIndex(int i) {
            return this.childTimeline;
        }

        @Override
        protected final int getFirstPeriodIndexByChildIndex(int i) {
            return i * this.childPeriodCount;
        }

        @Override
        protected final int getFirstWindowIndexByChildIndex(int i) {
            return i * this.childWindowCount;
        }

        @Override
        protected final Object getChildUidByChildIndex(int i) {
            return Integer.valueOf(i);
        }
    }

    private static final class InfinitelyLoopingTimeline extends ForwardingTimeline {
        public InfinitelyLoopingTimeline(Timeline timeline) {
            super(timeline);
        }

        @Override
        public final int getNextWindowIndex(int i, int i2, boolean z) {
            int nextWindowIndex = this.timeline.getNextWindowIndex(i, i2, z);
            return nextWindowIndex == -1 ? getFirstWindowIndex(z) : nextWindowIndex;
        }

        @Override
        public final int getPreviousWindowIndex(int i, int i2, boolean z) {
            int previousWindowIndex = this.timeline.getPreviousWindowIndex(i, i2, z);
            return previousWindowIndex == -1 ? getLastWindowIndex(z) : previousWindowIndex;
        }
    }
}
