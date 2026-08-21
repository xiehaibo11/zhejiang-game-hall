package com.mbridge.msdk.playercommon.exoplayer2.source;

abstract class AbstractConcatenatedTimeline extends com.mbridge.msdk.playercommon.exoplayer2.Timeline {
    private final int childCount;
    private final boolean isAtomic;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder shuffleOrder;

    public AbstractConcatenatedTimeline(boolean r1, com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r2) {
            r0 = this;
            r0.<init>()
            r0.isAtomic = r1
            r0.shuffleOrder = r2
            int r1 = r2.getLength()
            r0.childCount = r1
            return
    }

    private int getNextChildIndex(int r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r2 = r0.shuffleOrder
            int r1 = r2.getNextIndex(r1)
            goto L13
        L9:
            int r2 = r0.childCount
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L12
            int r1 = r1 + 1
            goto L13
        L12:
            r1 = -1
        L13:
            return r1
    }

    private int getPreviousChildIndex(int r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r2 = r0.shuffleOrder
            int r1 = r2.getPreviousIndex(r1)
            goto Lf
        L9:
            if (r1 <= 0) goto Le
            int r1 = r1 + (-1)
            goto Lf
        Le:
            r1 = -1
        Lf:
            return r1
    }

    protected abstract int getChildIndexByChildUid(java.lang.Object r1);

    protected abstract int getChildIndexByPeriodIndex(int r1);

    protected abstract int getChildIndexByWindowIndex(int r1);

    protected abstract java.lang.Object getChildUidByChildIndex(int r1);

    protected abstract int getFirstPeriodIndexByChildIndex(int r1);

    @Override
    public int getFirstWindowIndex(boolean r4) {
            r3 = this;
            int r0 = r3.childCount
            r1 = -1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r3.isAtomic
            r2 = 0
            if (r0 == 0) goto Lc
            r4 = r2
        Lc:
            if (r4 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r0 = r3.shuffleOrder
            int r2 = r0.getFirstIndex()
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r3.getTimelineByChildIndex(r2)
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L25
            int r2 = r3.getNextChildIndex(r2, r4)
            if (r2 != r1) goto L14
            return r1
        L25:
            int r0 = r3.getFirstWindowIndexByChildIndex(r2)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r3.getTimelineByChildIndex(r2)
            int r4 = r1.getFirstWindowIndex(r4)
            int r0 = r0 + r4
            return r0
    }

    protected abstract int getFirstWindowIndexByChildIndex(int r1);

    @Override
    public final int getIndexOfPeriod(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof android.util.Pair
            r1 = -1
            if (r0 != 0) goto L6
            return r1
        L6:
            android.util.Pair r4 = (android.util.Pair) r4
            java.lang.Object r0 = r4.first
            java.lang.Object r4 = r4.second
            int r0 = r3.getChildIndexByChildUid(r0)
            if (r0 != r1) goto L13
            return r1
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r3.getTimelineByChildIndex(r0)
            int r4 = r2.getIndexOfPeriod(r4)
            if (r4 != r1) goto L1e
            goto L24
        L1e:
            int r0 = r3.getFirstPeriodIndexByChildIndex(r0)
            int r1 = r0 + r4
        L24:
            return r1
    }

    @Override
    public int getLastWindowIndex(boolean r4) {
            r3 = this;
            int r0 = r3.childCount
            r1 = -1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r3.isAtomic
            if (r0 == 0) goto Lb
            r4 = 0
        Lb:
            if (r4 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r0 = r3.shuffleOrder
            int r0 = r0.getLastIndex()
            goto L18
        L14:
            int r0 = r3.childCount
            int r0 = r0 + (-1)
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r3.getTimelineByChildIndex(r0)
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L29
            int r0 = r3.getPreviousChildIndex(r0, r4)
            if (r0 != r1) goto L18
            return r1
        L29:
            int r1 = r3.getFirstWindowIndexByChildIndex(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r3.getTimelineByChildIndex(r0)
            int r4 = r0.getLastWindowIndex(r4)
            int r1 = r1 + r4
            return r1
    }

    @Override
    public int getNextWindowIndex(int r6, int r7, boolean r8) {
            r5 = this;
            boolean r0 = r5.isAtomic
            r1 = 0
            r2 = 2
            if (r0 == 0) goto Lb
            r8 = 1
            if (r7 != r8) goto La
            r7 = r2
        La:
            r8 = r1
        Lb:
            int r0 = r5.getChildIndexByWindowIndex(r6)
            int r3 = r5.getFirstWindowIndexByChildIndex(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = r5.getTimelineByChildIndex(r0)
            int r6 = r6 - r3
            if (r7 != r2) goto L1b
            goto L1c
        L1b:
            r1 = r7
        L1c:
            int r6 = r4.getNextWindowIndex(r6, r1, r8)
            r1 = -1
            if (r6 == r1) goto L25
            int r3 = r3 + r6
            return r3
        L25:
            int r6 = r5.getNextChildIndex(r0, r8)
        L29:
            if (r6 == r1) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r5.getTimelineByChildIndex(r6)
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L3a
            int r6 = r5.getNextChildIndex(r6, r8)
            goto L29
        L3a:
            if (r6 == r1) goto L4a
            int r7 = r5.getFirstWindowIndexByChildIndex(r6)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r6 = r5.getTimelineByChildIndex(r6)
            int r6 = r6.getFirstWindowIndex(r8)
            int r7 = r7 + r6
            return r7
        L4a:
            if (r7 != r2) goto L51
            int r6 = r5.getFirstWindowIndex(r8)
            return r6
        L51:
            return r1
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r5, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r6, boolean r7) {
            r4 = this;
            int r0 = r4.getChildIndexByPeriodIndex(r5)
            int r1 = r4.getFirstWindowIndexByChildIndex(r0)
            int r2 = r4.getFirstPeriodIndexByChildIndex(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r4.getTimelineByChildIndex(r0)
            int r5 = r5 - r2
            r3.getPeriod(r5, r6, r7)
            int r5 = r6.windowIndex
            int r5 = r5 + r1
            r6.windowIndex = r5
            if (r7 == 0) goto L27
            java.lang.Object r5 = r4.getChildUidByChildIndex(r0)
            java.lang.Object r7 = r6.uid
            android.util.Pair r5 = android.util.Pair.create(r5, r7)
            r6.uid = r5
        L27:
            return r6
    }

    @Override
    public int getPreviousWindowIndex(int r6, int r7, boolean r8) {
            r5 = this;
            boolean r0 = r5.isAtomic
            r1 = 0
            r2 = 2
            if (r0 == 0) goto Lb
            r8 = 1
            if (r7 != r8) goto La
            r7 = r2
        La:
            r8 = r1
        Lb:
            int r0 = r5.getChildIndexByWindowIndex(r6)
            int r3 = r5.getFirstWindowIndexByChildIndex(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = r5.getTimelineByChildIndex(r0)
            int r6 = r6 - r3
            if (r7 != r2) goto L1b
            goto L1c
        L1b:
            r1 = r7
        L1c:
            int r6 = r4.getPreviousWindowIndex(r6, r1, r8)
            r1 = -1
            if (r6 == r1) goto L25
            int r3 = r3 + r6
            return r3
        L25:
            int r6 = r5.getPreviousChildIndex(r0, r8)
        L29:
            if (r6 == r1) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r5.getTimelineByChildIndex(r6)
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L3a
            int r6 = r5.getPreviousChildIndex(r6, r8)
            goto L29
        L3a:
            if (r6 == r1) goto L4a
            int r7 = r5.getFirstWindowIndexByChildIndex(r6)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r6 = r5.getTimelineByChildIndex(r6)
            int r6 = r6.getLastWindowIndex(r8)
            int r7 = r7 + r6
            return r7
        L4a:
            if (r7 != r2) goto L51
            int r6 = r5.getLastWindowIndex(r8)
            return r6
        L51:
            return r1
    }

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.Timeline getTimelineByChildIndex(int r1);

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r10, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r11, boolean r12, long r13) {
            r9 = this;
            int r0 = r9.getChildIndexByWindowIndex(r10)
            int r1 = r9.getFirstWindowIndexByChildIndex(r0)
            int r2 = r9.getFirstPeriodIndexByChildIndex(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r9.getTimelineByChildIndex(r0)
            int r4 = r10 - r1
            r5 = r11
            r6 = r12
            r7 = r13
            r3.getWindow(r4, r5, r6, r7)
            int r10 = r11.firstPeriodIndex
            int r10 = r10 + r2
            r11.firstPeriodIndex = r10
            int r10 = r11.lastPeriodIndex
            int r10 = r10 + r2
            r11.lastPeriodIndex = r10
            return r11
    }
}
