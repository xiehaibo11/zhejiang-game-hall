package com.mbridge.msdk.playercommon.exoplayer2.source;

import com.mbridge.msdk.playercommon.exoplayer2.Timeline;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;

public final class SinglePeriodTimeline extends Timeline {
    private static final Object UID = new Object();
    private final boolean isDynamic;
    private final boolean isSeekable;
    private final long periodDurationUs;
    private final long presentationStartTimeMs;
    private final Object tag;
    private final long windowDefaultStartPositionUs;
    private final long windowDurationUs;
    private final long windowPositionInPeriodUs;
    private final long windowStartTimeMs;

    @Override
    public final int getPeriodCount() {
        return 1;
    }

    @Override
    public final int getWindowCount() {
        return 1;
    }

    public SinglePeriodTimeline(long j, boolean z, boolean z2) {
        this(j, z, z2, null);
    }

    public SinglePeriodTimeline(long j, boolean z, boolean z2, Object obj) {
        this(j, j, 0L, 0L, z, z2, obj);
    }

    public SinglePeriodTimeline(long j, long j2, long j3, long j4, boolean z, boolean z2, Object obj) {
        this(-9223372036854775807L, -9223372036854775807L, j, j2, j3, j4, z, z2, obj);
    }

    public SinglePeriodTimeline(long j, long j2, long j3, long j4, long j5, long j6, boolean z, boolean z2, Object obj) {
        this.presentationStartTimeMs = j;
        this.windowStartTimeMs = j2;
        this.periodDurationUs = j3;
        this.windowDurationUs = j4;
        this.windowPositionInPeriodUs = j5;
        this.windowDefaultStartPositionUs = j6;
        this.isSeekable = z;
        this.isDynamic = z2;
        this.tag = obj;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0030 A[PHI: r1
      0x0030: PHI (r1v4 long) = (r1v3 long), (r1v3 long), (r1v7 long) binds: [B:7:0x0019, B:9:0x001f, B:14:0x002d] A[DONT_GENERATE, DONT_INLINE]] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Timeline.Window getWindow(int i, Timeline.Window window, boolean z, long j) {
        long j2;
        Assertions.checkIndex(i, 0, 1);
        Object obj = z ? this.tag : null;
        long j3 = this.windowDefaultStartPositionUs;
        if (!this.isDynamic || j == 0) {
            j2 = j3;
        } else {
            long j4 = this.windowDurationUs;
            if (j4 != -9223372036854775807L) {
                j3 += j;
                if (j3 > j4) {
                }
            }
            j2 = -9223372036854775807L;
        }
        return window.set(obj, this.presentationStartTimeMs, this.windowStartTimeMs, this.isSeekable, this.isDynamic, j2, this.windowDurationUs, 0, 0, this.windowPositionInPeriodUs);
    }

    @Override
    public final Timeline.Period getPeriod(int i, Timeline.Period period, boolean z) {
        Assertions.checkIndex(i, 0, 1);
        return period.set(null, z ? UID : null, 0, this.periodDurationUs, -this.windowPositionInPeriodUs);
    }

    @Override
    public final int getIndexOfPeriod(Object obj) {
        return UID.equals(obj) ? 0 : -1;
    }
}
