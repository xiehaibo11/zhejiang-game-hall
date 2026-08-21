package com.mbridge.msdk.playercommon.exoplayer2.source;

import com.mbridge.msdk.playercommon.exoplayer2.Timeline;

public abstract class ForwardingTimeline extends Timeline {
    protected final Timeline timeline;

    public ForwardingTimeline(Timeline timeline) {
        this.timeline = timeline;
    }

    @Override
    public int getWindowCount() {
        return this.timeline.getWindowCount();
    }

    @Override
    public int getNextWindowIndex(int i, int i2, boolean z) {
        return this.timeline.getNextWindowIndex(i, i2, z);
    }

    @Override
    public int getPreviousWindowIndex(int i, int i2, boolean z) {
        return this.timeline.getPreviousWindowIndex(i, i2, z);
    }

    @Override
    public int getLastWindowIndex(boolean z) {
        return this.timeline.getLastWindowIndex(z);
    }

    @Override
    public int getFirstWindowIndex(boolean z) {
        return this.timeline.getFirstWindowIndex(z);
    }

    @Override
    public Timeline.Window getWindow(int i, Timeline.Window window, boolean z, long j) {
        return this.timeline.getWindow(i, window, z, j);
    }

    @Override
    public int getPeriodCount() {
        return this.timeline.getPeriodCount();
    }

    @Override
    public Timeline.Period getPeriod(int i, Timeline.Period period, boolean z) {
        return this.timeline.getPeriod(i, period, z);
    }

    @Override
    public int getIndexOfPeriod(Object obj) {
        return this.timeline.getIndexOfPeriod(obj);
    }
}
