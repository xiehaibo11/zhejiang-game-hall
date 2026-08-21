package com.mbridge.msdk.playercommon.exoplayer2;

public abstract class Timeline {
    public static final com.mbridge.msdk.playercommon.exoplayer2.Timeline EMPTY = null;


    public static final class Period {
        private com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState adPlaybackState;
        public long durationUs;
        public java.lang.Object id;
        private long positionInWindowUs;
        public java.lang.Object uid;
        public int windowIndex;

        public Period() {
                r0 = this;
                r0.<init>()
                return
        }

        public final int getAdCountInAdGroup(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r0.adGroups
                r2 = r0[r2]
                int r2 = r2.count
                return r2
        }

        public final long getAdDurationUs(int r3, int r4) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r2.adPlaybackState
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r0.adGroups
                r3 = r0[r3]
                int r0 = r3.count
                r1 = -1
                if (r0 == r1) goto L10
                long[] r3 = r3.durationsUs
                r0 = r3[r4]
                goto L15
            L10:
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            L15:
                return r0
        }

        public final int getAdGroupCount() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                int r0 = r0.adGroupCount
                return r0
        }

        public final int getAdGroupIndexAfterPositionUs(long r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                int r2 = r0.getAdGroupIndexAfterPositionUs(r2)
                return r2
        }

        public final int getAdGroupIndexForPositionUs(long r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                int r2 = r0.getAdGroupIndexForPositionUs(r2)
                return r2
        }

        public final long getAdGroupTimeUs(int r4) {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r3.adPlaybackState
                long[] r0 = r0.adGroupTimesUs
                r1 = r0[r4]
                return r1
        }

        public final long getAdResumePositionUs() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r2.adPlaybackState
                long r0 = r0.adResumePositionUs
                return r0
        }

        public final long getDurationMs() {
                r2 = this;
                long r0 = r2.durationUs
                long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
                return r0
        }

        public final long getDurationUs() {
                r2 = this;
                long r0 = r2.durationUs
                return r0
        }

        public final int getFirstAdIndexToPlay(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r0.adGroups
                r2 = r0[r2]
                int r2 = r2.getFirstAdIndexToPlay()
                return r2
        }

        public final int getNextAdIndexToPlay(int r2, int r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r0.adGroups
                r2 = r0[r2]
                int r2 = r2.getNextAdIndexToPlay(r3)
                return r2
        }

        public final long getPositionInWindowMs() {
                r2 = this;
                long r0 = r2.positionInWindowUs
                long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
                return r0
        }

        public final long getPositionInWindowUs() {
                r2 = this;
                long r0 = r2.positionInWindowUs
                return r0
        }

        public final boolean hasPlayedAdGroup(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r1.adPlaybackState
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r0.adGroups
                r2 = r0[r2]
                boolean r2 = r2.hasUnplayedAds()
                r2 = r2 ^ 1
                return r2
        }

        public final boolean isAdAvailable(int r3, int r4) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r2.adPlaybackState
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r0.adGroups
                r3 = r0[r3]
                int r0 = r3.count
                r1 = -1
                if (r0 == r1) goto L13
                int[] r3 = r3.states
                r3 = r3[r4]
                if (r3 == 0) goto L13
                r3 = 1
                goto L14
            L13:
                r3 = 0
            L14:
                return r3
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period set(java.lang.Object r10, java.lang.Object r11, int r12, long r13, long r15) {
                r9 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r8 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.NONE
                r0 = r9
                r1 = r10
                r2 = r11
                r3 = r12
                r4 = r13
                r6 = r15
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r0.set(r1, r2, r3, r4, r6, r8)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period set(java.lang.Object r1, java.lang.Object r2, int r3, long r4, long r6, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r8) {
                r0 = this;
                r0.id = r1
                r0.uid = r2
                r0.windowIndex = r3
                r0.durationUs = r4
                r0.positionInWindowUs = r6
                r0.adPlaybackState = r8
                return r0
        }
    }

    public static final class Window {
        public long defaultPositionUs;
        public long durationUs;
        public int firstPeriodIndex;
        public boolean isDynamic;
        public boolean isSeekable;
        public int lastPeriodIndex;
        public long positionInFirstPeriodUs;
        public long presentationStartTimeMs;
        public java.lang.Object tag;
        public long windowStartTimeMs;

        public Window() {
                r0 = this;
                r0.<init>()
                return
        }

        public final long getDefaultPositionMs() {
                r2 = this;
                long r0 = r2.defaultPositionUs
                long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
                return r0
        }

        public final long getDefaultPositionUs() {
                r2 = this;
                long r0 = r2.defaultPositionUs
                return r0
        }

        public final long getDurationMs() {
                r2 = this;
                long r0 = r2.durationUs
                long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
                return r0
        }

        public final long getDurationUs() {
                r2 = this;
                long r0 = r2.durationUs
                return r0
        }

        public final long getPositionInFirstPeriodMs() {
                r2 = this;
                long r0 = r2.positionInFirstPeriodUs
                long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
                return r0
        }

        public final long getPositionInFirstPeriodUs() {
                r2 = this;
                long r0 = r2.positionInFirstPeriodUs
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window set(java.lang.Object r1, long r2, long r4, boolean r6, boolean r7, long r8, long r10, int r12, int r13, long r14) {
                r0 = this;
                r0.tag = r1
                r0.presentationStartTimeMs = r2
                r0.windowStartTimeMs = r4
                r0.isSeekable = r6
                r0.isDynamic = r7
                r0.defaultPositionUs = r8
                r0.durationUs = r10
                r0.firstPeriodIndex = r12
                r0.lastPeriodIndex = r13
                r0.positionInFirstPeriodUs = r14
                return r0
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY = r0
            return
    }

    public Timeline() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getFirstWindowIndex(boolean r1) {
            r0 = this;
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L8
            r1 = -1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public abstract int getIndexOfPeriod(java.lang.Object r1);

    public int getLastWindowIndex(boolean r1) {
            r0 = this;
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L8
            r1 = -1
            goto Le
        L8:
            int r1 = r0.getWindowCount()
            int r1 = r1 + (-1)
        Le:
            return r1
    }

    public final int getNextPeriodIndex(int r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r3, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r4, int r5, boolean r6) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r1.getPeriod(r2, r3)
            int r3 = r3.windowIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r1.getWindow(r3, r4)
            int r0 = r0.lastPeriodIndex
            if (r0 != r2) goto L1d
            int r2 = r1.getNextWindowIndex(r3, r5, r6)
            r3 = -1
            if (r2 != r3) goto L16
            return r3
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r1.getWindow(r2, r4)
            int r2 = r2.firstPeriodIndex
            return r2
        L1d:
            int r2 = r2 + 1
            return r2
    }

    public int getNextWindowIndex(int r3, int r4, boolean r5) {
            r2 = this;
            r0 = 1
            if (r4 == 0) goto L1c
            if (r4 == r0) goto L1b
            r1 = 2
            if (r4 != r1) goto L15
            int r4 = r2.getLastWindowIndex(r5)
            if (r3 != r4) goto L13
            int r3 = r2.getFirstWindowIndex(r5)
            goto L14
        L13:
            int r3 = r3 + r0
        L14:
            return r3
        L15:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
        L1b:
            return r3
        L1c:
            int r4 = r2.getLastWindowIndex(r5)
            if (r3 != r4) goto L24
            r3 = -1
            goto L25
        L24:
            int r3 = r3 + r0
        L25:
            return r3
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r3) {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r1.getPeriod(r2, r3, r0)
            return r2
    }

    public abstract com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r2, boolean r3);

    public abstract int getPeriodCount();

    public final android.util.Pair<java.lang.Integer, java.lang.Long> getPeriodPosition(com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r9, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r10, int r11, long r12) {
            r8 = this;
            r6 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            android.util.Pair r9 = r0.getPeriodPosition(r1, r2, r3, r4, r6)
            return r9
    }

    public final android.util.Pair<java.lang.Integer, java.lang.Long> getPeriodPosition(com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r9, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r10, int r11, long r12, long r14) {
            r8 = this;
            int r0 = r8.getWindowCount()
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r11, r1, r0)
            r5 = 0
            r2 = r8
            r3 = r11
            r4 = r9
            r6 = r14
            r2.getWindow(r3, r4, r5, r6)
            r14 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r11 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r11 != 0) goto L23
            long r12 = r9.getDefaultPositionUs()
            int r11 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r11 != 0) goto L23
            r9 = 0
            return r9
        L23:
            int r11 = r9.firstPeriodIndex
            long r0 = r9.getPositionInFirstPeriodUs()
            long r0 = r0 + r12
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r12 = r8.getPeriod(r11, r10)
            long r12 = r12.getDurationUs()
        L32:
            int r2 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r2 == 0) goto L4a
            int r2 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
            if (r2 < 0) goto L4a
            int r2 = r9.lastPeriodIndex
            if (r11 >= r2) goto L4a
            long r0 = r0 - r12
            int r11 = r11 + 1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r12 = r8.getPeriod(r11, r10)
            long r12 = r12.getDurationUs()
            goto L32
        L4a:
            java.lang.Integer r9 = java.lang.Integer.valueOf(r11)
            java.lang.Long r10 = java.lang.Long.valueOf(r0)
            android.util.Pair r9 = android.util.Pair.create(r9, r10)
            return r9
    }

    public int getPreviousWindowIndex(int r3, int r4, boolean r5) {
            r2 = this;
            r0 = 1
            if (r4 == 0) goto L1c
            if (r4 == r0) goto L1b
            r1 = 2
            if (r4 != r1) goto L15
            int r4 = r2.getFirstWindowIndex(r5)
            if (r3 != r4) goto L13
            int r3 = r2.getLastWindowIndex(r5)
            goto L14
        L13:
            int r3 = r3 - r0
        L14:
            return r3
        L15:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
        L1b:
            return r3
        L1c:
            int r4 = r2.getFirstWindowIndex(r5)
            if (r3 != r4) goto L24
            r3 = -1
            goto L25
        L24:
            int r3 = r3 - r0
        L25:
            return r3
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r3) {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r1.getWindow(r2, r3, r0)
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r7, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r8, boolean r9) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r7 = r0.getWindow(r1, r2, r3, r4)
            return r7
    }

    public abstract com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r2, boolean r3, long r4);

    public abstract int getWindowCount();

    public final boolean isEmpty() {
            r1 = this;
            int r0 = r1.getWindowCount()
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public final boolean isLastPeriod(int r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r3, int r4, boolean r5) {
            r0 = this;
            int r1 = r0.getNextPeriodIndex(r1, r2, r3, r4, r5)
            r2 = -1
            if (r1 != r2) goto L9
            r1 = 1
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }
}
