package com.mbridge.msdk.playercommon.exoplayer2;

final class MediaPeriodQueue {
    private static final int MAXIMUM_BUFFER_AHEAD_PERIODS = 100;
    private int length;
    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder loading;
    private long nextWindowSequenceNumber;
    private java.lang.Object oldFrontPeriodUid;
    private long oldFrontPeriodWindowSequenceNumber;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period;
    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder playing;
    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder reading;
    private int repeatMode;
    private boolean shuffleModeEnabled;
    private com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;

    public MediaPeriodQueue() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
            r0.<init>()
            r1.period = r0
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r0.<init>()
            r1.window = r0
            return
    }

    private boolean canKeepMediaPeriodHolder(com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r5, com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r6) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r5.info
            long r0 = r5.startPositionUs
            long r2 = r6.startPositionUs
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L1e
            long r0 = r5.endPositionUs
            long r2 = r6.endPositionUs
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r5.id
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r6 = r6.id
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L1e
            r5 = 1
            goto L1f
        L1e:
            r5 = 0
        L1f:
            return r5
    }

    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getFirstMediaPeriodInfo(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r7) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r7.periodId
            long r2 = r7.contentPositionUs
            long r4 = r7.startPositionUs
            r0 = r6
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r7 = r0.getMediaPeriodInfo(r1, r2, r4)
            return r7
    }

    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getFollowingMediaPeriodInfo(com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r18, long r19) {
            r17 = this;
            r8 = r17
            r0 = r18
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r1 = r0.info
            boolean r2 = r1.isLastInTimelinePeriod
            r3 = 1
            r4 = -1
            r5 = 0
            if (r2 == 0) goto La4
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r9 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = r1.id
            int r10 = r2.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r11 = r8.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r12 = r8.window
            int r13 = r8.repeatMode
            boolean r14 = r8.shuffleModeEnabled
            int r2 = r9.getNextPeriodIndex(r10, r11, r12, r13, r14)
            if (r2 != r4) goto L22
            return r5
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r6 = r8.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r4.getPeriod(r2, r6, r3)
            int r12 = r3.windowIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r8.period
            java.lang.Object r3 = r3.uid
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r4 = r1.id
            long r6 = r4.windowSequenceNumber
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r9 = r8.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r4 = r4.getWindow(r12, r9)
            int r4 = r4.firstPeriodIndex
            r9 = 0
            if (r4 != r2) goto L95
            long r6 = r18.getRendererOffset()
            long r1 = r1.durationUs
            long r6 = r6 + r1
            long r6 = r6 - r19
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r8.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r11 = r8.period
            r13 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            long r15 = java.lang.Math.max(r9, r6)
            r9 = r1
            r10 = r2
            android.util.Pair r1 = r9.getPeriodPosition(r10, r11, r12, r13, r15)
            if (r1 != 0) goto L63
            return r5
        L63:
            java.lang.Object r2 = r1.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r1 = r1.second
            java.lang.Long r1 = (java.lang.Long) r1
            long r4 = r1.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r0.next
            if (r1 == 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r0.next
            java.lang.Object r1 = r1.uid
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.id
            long r0 = r0.windowSequenceNumber
            goto L91
        L8a:
            long r0 = r8.nextWindowSequenceNumber
            r6 = 1
            long r6 = r6 + r0
            r8.nextWindowSequenceNumber = r6
        L91:
            r9 = r4
            r4 = r0
            r1 = r2
            goto L97
        L95:
            r1 = r2
            r4 = r6
        L97:
            r0 = r17
            r2 = r9
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r0.resolveMediaPeriodIdForAds(r1, r2, r4)
            r4 = r9
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.getMediaPeriodInfo(r1, r2, r4)
            return r0
        La4:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r1.id
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r8.timeline
            int r6 = r0.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r7 = r8.period
            r2.getPeriod(r6, r7)
            boolean r2 = r0.isAd()
            if (r2 == 0) goto Lf4
            int r2 = r0.adGroupIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r8.period
            int r3 = r3.getAdCountInAdGroup(r2)
            if (r3 != r4) goto Lc0
            return r5
        Lc0:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r8.period
            int r6 = r0.adIndexInAdGroup
            int r4 = r4.getNextAdIndexToPlay(r2, r6)
            if (r4 >= r3) goto Le4
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r8.period
            boolean r3 = r3.isAdAvailable(r2, r4)
            if (r3 != 0) goto Ld3
            goto Le3
        Ld3:
            int r3 = r0.periodIndex
            long r5 = r1.contentPositionUs
            long r9 = r0.windowSequenceNumber
            r0 = r17
            r1 = r3
            r3 = r4
            r4 = r5
            r6 = r9
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r0.getMediaPeriodInfoForAd(r1, r2, r3, r4, r6)
        Le3:
            return r5
        Le4:
            int r2 = r0.periodIndex
            long r3 = r1.contentPositionUs
            long r5 = r0.windowSequenceNumber
            r0 = r17
            r1 = r2
            r2 = r3
            r4 = r5
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.getMediaPeriodInfoForContent(r1, r2, r4)
            return r0
        Lf4:
            long r6 = r1.endPositionUs
            r9 = -9223372036854775808
            int r2 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r2 == 0) goto L135
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r8.period
            long r6 = r1.endPositionUs
            int r2 = r2.getAdGroupIndexForPositionUs(r6)
            if (r2 != r4) goto L116
            int r2 = r0.periodIndex
            long r3 = r1.endPositionUs
            long r5 = r0.windowSequenceNumber
            r0 = r17
            r1 = r2
            r2 = r3
            r4 = r5
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.getMediaPeriodInfoForContent(r1, r2, r4)
            return r0
        L116:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r8.period
            int r3 = r3.getFirstAdIndexToPlay(r2)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r8.period
            boolean r4 = r4.isAdAvailable(r2, r3)
            if (r4 != 0) goto L125
            goto L134
        L125:
            int r4 = r0.periodIndex
            long r5 = r1.endPositionUs
            long r9 = r0.windowSequenceNumber
            r0 = r17
            r1 = r4
            r4 = r5
            r6 = r9
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r0.getMediaPeriodInfoForAd(r1, r2, r3, r4, r6)
        L134:
            return r5
        L135:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r8.period
            int r1 = r1.getAdGroupCount()
            if (r1 != 0) goto L13e
            return r5
        L13e:
            int r2 = r1 + (-1)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r8.period
            long r3 = r1.getAdGroupTimeUs(r2)
            int r1 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r1 != 0) goto L173
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r8.period
            boolean r1 = r1.hasPlayedAdGroup(r2)
            if (r1 == 0) goto L153
            goto L173
        L153:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r8.period
            int r3 = r1.getFirstAdIndexToPlay(r2)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r8.period
            boolean r1 = r1.isAdAvailable(r2, r3)
            if (r1 != 0) goto L162
            return r5
        L162:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r8.period
            long r4 = r1.getDurationUs()
            int r1 = r0.periodIndex
            long r6 = r0.windowSequenceNumber
            r0 = r17
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.getMediaPeriodInfoForAd(r1, r2, r3, r4, r6)
            return r0
        L173:
            return r5
    }

    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getMediaPeriodInfo(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r9, long r10, long r12) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r8.timeline
            int r1 = r9.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r8.period
            r0.getPeriod(r1, r2)
            boolean r0 = r9.isAd()
            if (r0 == 0) goto L2c
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r12 = r8.period
            int r13 = r9.adGroupIndex
            int r0 = r9.adIndexInAdGroup
            boolean r12 = r12.isAdAvailable(r13, r0)
            if (r12 != 0) goto L1d
            r9 = 0
            return r9
        L1d:
            int r1 = r9.periodIndex
            int r2 = r9.adGroupIndex
            int r3 = r9.adIndexInAdGroup
            long r6 = r9.windowSequenceNumber
            r0 = r8
            r4 = r10
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r9 = r0.getMediaPeriodInfoForAd(r1, r2, r3, r4, r6)
            return r9
        L2c:
            int r1 = r9.periodIndex
            long r4 = r9.windowSequenceNumber
            r0 = r8
            r2 = r12
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r9 = r0.getMediaPeriodInfoForContent(r1, r2, r4)
            return r9
    }

    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getMediaPeriodInfoForAd(int r15, int r16, int r17, long r18, long r20) {
            r14 = this;
            r0 = r14
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r7 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r1 = r7
            r2 = r15
            r3 = r16
            r4 = r17
            r5 = r20
            r1.<init>(r2, r3, r4, r5)
            r1 = -9223372036854775808
            boolean r11 = r14.isLastInPeriod(r7, r1)
            boolean r12 = r14.isLastInTimeline(r7, r11)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r0.timeline
            int r2 = r7.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r0.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r1.getPeriod(r2, r3)
            int r2 = r7.adGroupIndex
            int r3 = r7.adIndexInAdGroup
            long r9 = r1.getAdDurationUs(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r0.period
            r2 = r16
            int r1 = r1.getFirstAdIndexToPlay(r2)
            r2 = r17
            if (r2 != r1) goto L3d
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r0.period
            long r1 = r1.getAdResumePositionUs()
            goto L3f
        L3d:
            r1 = 0
        L3f:
            r3 = r1
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r13 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo
            r5 = -9223372036854775808
            r1 = r13
            r2 = r7
            r7 = r18
            r1.<init>(r2, r3, r5, r7, r9, r11, r12)
            return r13
    }

    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getMediaPeriodInfoForContent(int r17, long r18, long r20) {
            r16 = this;
            r0 = r16
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r1 = r17
            r3 = r20
            r2.<init>(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r0.timeline
            int r3 = r2.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r0.period
            r1.getPeriod(r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r0.period
            r3 = r18
            int r1 = r1.getAdGroupIndexAfterPositionUs(r3)
            r5 = -9223372036854775808
            r7 = -1
            if (r1 != r7) goto L23
            r7 = r5
            goto L29
        L23:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r7 = r0.period
            long r7 = r7.getAdGroupTimeUs(r1)
        L29:
            boolean r11 = r0.isLastInPeriod(r2, r7)
            boolean r12 = r0.isLastInTimeline(r2, r11)
            int r1 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r1 != 0) goto L3d
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r0.period
            long r5 = r1.getDurationUs()
            r9 = r5
            goto L3e
        L3d:
            r9 = r7
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r13 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo
            r14 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r1 = r13
            r3 = r18
            r5 = r7
            r7 = r14
            r1.<init>(r2, r3, r5, r7, r9, r11, r12)
            return r13
    }

    private com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getUpdatedMediaPeriodInfo(com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r14, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r15) {
            r13 = this;
            long r2 = r14.startPositionUs
            long r4 = r14.endPositionUs
            boolean r10 = r13.isLastInPeriod(r15, r4)
            boolean r11 = r13.isLastInTimeline(r15, r10)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r13.timeline
            int r1 = r15.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r6 = r13.period
            r0.getPeriod(r1, r6)
            boolean r0 = r15.isAd()
            if (r0 == 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r13.period
            int r1 = r15.adGroupIndex
            int r6 = r15.adIndexInAdGroup
            long r0 = r0.getAdDurationUs(r1, r6)
        L25:
            r8 = r0
            goto L35
        L27:
            r0 = -9223372036854775808
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r13.period
            long r0 = r0.getDurationUs()
            goto L25
        L34:
            r8 = r4
        L35:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo
            long r6 = r14.contentPositionUs
            r0 = r12
            r1 = r15
            r0.<init>(r1, r2, r4, r6, r8, r10, r11)
            return r12
    }

    private boolean isLastInPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r8, long r9) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r7.timeline
            int r1 = r8.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r7.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r0.getPeriod(r1, r2)
            int r0 = r0.getAdGroupCount()
            r1 = 1
            if (r0 != 0) goto L12
            return r1
        L12:
            int r0 = r0 - r1
            boolean r2 = r8.isAd()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r7.period
            long r3 = r3.getAdGroupTimeUs(r0)
            r5 = -9223372036854775808
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r4 = 0
            if (r3 == 0) goto L2d
            if (r2 != 0) goto L2b
            int r8 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r8 != 0) goto L2b
            goto L2c
        L2b:
            r1 = r4
        L2c:
            return r1
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r9 = r7.period
            int r9 = r9.getAdCountInAdGroup(r0)
            r10 = -1
            if (r9 != r10) goto L37
            return r4
        L37:
            if (r2 == 0) goto L45
            int r10 = r8.adGroupIndex
            if (r10 != r0) goto L45
            int r8 = r8.adIndexInAdGroup
            int r10 = r9 + (-1)
            if (r8 != r10) goto L45
            r8 = r1
            goto L46
        L45:
            r8 = r4
        L46:
            if (r8 != 0) goto L54
            if (r2 != 0) goto L53
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r8 = r7.period
            int r8 = r8.getFirstAdIndexToPlay(r0)
            if (r8 != r9) goto L53
            goto L54
        L53:
            r1 = r4
        L54:
            return r1
    }

    private boolean isLastInTimeline(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r8, boolean r9) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r7.timeline
            int r1 = r8.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r7.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r0.getPeriod(r1, r2)
            int r0 = r0.windowIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r7.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r7.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r1.getWindow(r0, r2)
            boolean r0 = r0.isDynamic
            if (r0 != 0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r7.timeline
            int r2 = r8.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r7.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r4 = r7.window
            int r5 = r7.repeatMode
            boolean r6 = r7.shuffleModeEnabled
            boolean r8 = r1.isLastPeriod(r2, r3, r4, r5, r6)
            if (r8 == 0) goto L2e
            if (r9 == 0) goto L2e
            r8 = 1
            goto L2f
        L2e:
            r8 = 0
        L2f:
            return r8
    }

    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId resolveMediaPeriodIdForAds(int r8, long r9, long r11) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r7.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r7.period
            r0.getPeriod(r8, r1)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r7.period
            int r3 = r0.getAdGroupIndexForPositionUs(r9)
            r9 = -1
            if (r3 != r9) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r9.<init>(r8, r11)
            return r9
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r9 = r7.period
            int r4 = r9.getFirstAdIndexToPlay(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r1 = r9
            r2 = r8
            r5 = r11
            r1.<init>(r2, r3, r4, r5)
            return r9
    }

    private long resolvePeriodIndexToWindowSequenceNumber(int r6) {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r5.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r5.period
            r2 = 1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r6 = r0.getPeriod(r6, r1, r2)
            java.lang.Object r6 = r6.uid
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r5.period
            int r0 = r0.windowIndex
            java.lang.Object r1 = r5.oldFrontPeriodUid
            r2 = -1
            if (r1 == 0) goto L2b
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r5.timeline
            int r1 = r3.getIndexOfPeriod(r1)
            if (r1 == r2) goto L2b
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r5.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r5.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r3.getPeriod(r1, r4)
            int r1 = r1.windowIndex
            if (r1 != r0) goto L2b
            long r0 = r5.oldFrontPeriodWindowSequenceNumber
            return r0
        L2b:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r5.getFrontPeriod()
        L2f:
            if (r1 == 0) goto L43
            java.lang.Object r3 = r1.uid
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L40
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r6 = r1.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r6 = r6.id
            long r0 = r6.windowSequenceNumber
            return r0
        L40:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.next
            goto L2f
        L43:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r6 = r5.getFrontPeriod()
        L47:
            if (r6 == 0) goto L69
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r5.timeline
            java.lang.Object r3 = r6.uid
            int r1 = r1.getIndexOfPeriod(r3)
            if (r1 == r2) goto L66
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r5.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r5.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r3.getPeriod(r1, r4)
            int r1 = r1.windowIndex
            if (r1 != r0) goto L66
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r6 = r6.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r6 = r6.id
            long r0 = r6.windowSequenceNumber
            return r0
        L66:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r6 = r6.next
            goto L47
        L69:
            long r0 = r5.nextWindowSequenceNumber
            r2 = 1
            long r2 = r2 + r0
            r5.nextWindowSequenceNumber = r2
            return r0
    }

    private boolean updateForPlaybackModeChange() {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r8.getFrontPeriod()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r3.id
            int r3 = r3.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r8.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r5 = r8.window
            int r6 = r8.repeatMode
            boolean r7 = r8.shuffleModeEnabled
            int r2 = r2.getNextPeriodIndex(r3, r4, r5, r6, r7)
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r0.next
            if (r3 == 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r0.info
            boolean r3 = r3.isLastInTimelinePeriod
            if (r3 != 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            goto L1c
        L29:
            r3 = -1
            if (r2 == r3) goto L3e
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r0.next
            if (r3 == 0) goto L3e
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r0.next
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r3.id
            int r3 = r3.periodIndex
            if (r3 == r2) goto L3b
            goto L3e
        L3b:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            goto L8
        L3e:
            boolean r2 = r8.removeAfter(r0)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r4 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r4 = r4.id
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r8.getUpdatedMediaPeriodInfo(r3, r4)
            r0.info = r3
            if (r2 == 0) goto L58
            boolean r0 = r8.hasPlayingPeriod()
            if (r0 != 0) goto L57
            goto L58
        L57:
            r1 = 0
        L58:
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder advancePlayingPeriod() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.playing
            if (r0 == 0) goto L33
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r2.reading
            if (r0 != r1) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            r2.reading = r0
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.playing
            r0.release()
            int r0 = r2.length
            int r0 = r0 + (-1)
            r2.length = r0
            if (r0 != 0) goto L2c
            r0 = 0
            r2.loading = r0
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.playing
            java.lang.Object r0 = r0.uid
            r2.oldFrontPeriodUid = r0
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.playing
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.id
            long r0 = r0.windowSequenceNumber
            r2.oldFrontPeriodWindowSequenceNumber = r0
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.playing
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            r2.playing = r0
            goto L39
        L33:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.loading
            r2.playing = r0
            r2.reading = r0
        L39:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.playing
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder advanceReadingPeriod() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.reading
            if (r0 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.reading
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            r1.reading = r0
            return r0
    }

    public final void clear(boolean r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r4.getFrontPeriod()
            r1 = 0
            if (r0 == 0) goto L1e
            if (r5 == 0) goto Lc
            java.lang.Object r5 = r0.uid
            goto Ld
        Lc:
            r5 = r1
        Ld:
            r4.oldFrontPeriodUid = r5
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r5.id
            long r2 = r5.windowSequenceNumber
            r4.oldFrontPeriodWindowSequenceNumber = r2
            r0.release()
            r4.removeAfter(r0)
            goto L22
        L1e:
            if (r5 != 0) goto L22
            r4.oldFrontPeriodUid = r1
        L22:
            r4.playing = r1
            r4.loading = r1
            r4.reading = r1
            r5 = 0
            r4.length = r5
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod enqueueNextMediaPeriod(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r12, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r13, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r14, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r15, java.lang.Object r16, com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r17) {
            r11 = this;
            r0 = r11
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r0.loading
            if (r1 != 0) goto La
            r10 = r17
            long r1 = r10.startPositionUs
            goto L17
        La:
            r10 = r17
            long r1 = r1.getRendererOffset()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r0.loading
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.info
            long r3 = r3.durationUs
            long r1 = r1 + r3
        L17:
            r4 = r1
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder
            r2 = r1
            r3 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            r9 = r16
            r10 = r17
            r2.<init>(r3, r4, r6, r7, r8, r9, r10)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r0.loading
            if (r2 == 0) goto L35
            boolean r2 = r11.hasPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r0.loading
            r2.next = r1
        L35:
            r2 = 0
            r0.oldFrontPeriodUid = r2
            r0.loading = r1
            int r2 = r0.length
            int r2 = r2 + 1
            r0.length = r2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r1.mediaPeriod
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder getFrontPeriod() {
            r1 = this;
            boolean r0 = r1.hasPlayingPeriod()
            if (r0 == 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.playing
            goto Lb
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.loading
        Lb:
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder getLoadingPeriod() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.loading
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getNextMediaPeriodInfo(long r2, com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.loading
            if (r0 != 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2 = r1.getFirstMediaPeriodInfo(r4)
            goto Ld
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2 = r1.getFollowingMediaPeriodInfo(r0, r2)
        Ld:
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder getPlayingPeriod() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.playing
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder getReadingPeriod() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.reading
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo getUpdatedMediaPeriodInfo(com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2, int r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r2.id
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r0.copyWithPeriodIndex(r3)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2 = r1.getUpdatedMediaPeriodInfo(r2, r3)
            return r2
    }

    public final boolean hasPlayingPeriod() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.playing
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public final boolean isLoading(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.loading
            if (r0 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r0.mediaPeriod
            if (r0 != r2) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public final void reevaluateBuffer(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r1.loading
            if (r0 == 0) goto L7
            r0.reevaluateBuffer(r2)
        L7:
            return
    }

    public final boolean removeAfter(com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r4) {
            r3 = this;
            r0 = 0
            r1 = 1
            if (r4 == 0) goto L6
            r2 = r1
            goto L7
        L6:
            r2 = r0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2)
            r3.loading = r4
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r4.next
            if (r2 == 0) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r4 = r4.next
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r3.reading
            if (r4 != r2) goto L1b
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r3.playing
            r3.reading = r0
            r0 = r1
        L1b:
            r4.release()
            int r2 = r3.length
            int r2 = r2 - r1
            r3.length = r2
            goto Lc
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r4 = r3.loading
            r1 = 0
            r4.next = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId resolveMediaPeriodIdForAds(int r7, long r8) {
            r6 = this;
            long r4 = r6.resolvePeriodIndexToWindowSequenceNumber(r7)
            r0 = r6
            r1 = r7
            r2 = r8
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r7 = r0.resolveMediaPeriodIdForAds(r1, r2, r4)
            return r7
    }

    public final void setTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1) {
            r0 = this;
            r0.timeline = r1
            return
    }

    public final boolean shouldLoadNextMediaPeriod() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r4.loading
            if (r0 == 0) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            boolean r0 = r0.isFinal
            if (r0 != 0) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r4.loading
            boolean r0 = r0.isFullyBuffered()
            if (r0 == 0) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r4.loading
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            long r0 = r0.durationUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L28
            int r0 = r4.length
            r1 = 100
            if (r0 >= r1) goto L28
            goto L2a
        L28:
            r0 = 0
            goto L2b
        L2a:
            r0 = 1
        L2b:
            return r0
    }

    public final boolean updateQueuedPeriods(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r9, long r10) {
            r8 = this;
            int r9 = r9.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r8.getFrontPeriod()
            r1 = 0
            r3 = r9
        L8:
            r9 = 1
            if (r0 == 0) goto L6b
            if (r1 != 0) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r9 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r9 = r8.getUpdatedMediaPeriodInfo(r9, r3)
            r0.info = r9
            goto L4c
        L16:
            r2 = -1
            if (r3 == r2) goto L66
            java.lang.Object r2 = r0.uid
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r5 = r8.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r4.getPeriod(r3, r5, r9)
            java.lang.Object r4 = r4.uid
            boolean r2 = r2.equals(r4)
            if (r2 != 0) goto L2c
            goto L66
        L2c:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2 = r8.getFollowingMediaPeriodInfo(r1, r10)
            if (r2 != 0) goto L38
            boolean r10 = r8.removeAfter(r1)
            r9 = r9 ^ r10
            return r9
        L38:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r4 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r4 = r8.getUpdatedMediaPeriodInfo(r4, r3)
            r0.info = r4
            boolean r2 = r8.canKeepMediaPeriodHolder(r0, r2)
            if (r2 != 0) goto L4c
            boolean r10 = r8.removeAfter(r1)
            r9 = r9 ^ r10
            return r9
        L4c:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r9 = r0.info
            boolean r9 = r9.isLastInTimelinePeriod
            if (r9 == 0) goto L61
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r8.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r5 = r8.window
            int r6 = r8.repeatMode
            boolean r7 = r8.shuffleModeEnabled
            int r9 = r2.getNextPeriodIndex(r3, r4, r5, r6, r7)
            r3 = r9
        L61:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r9 = r0.next
            r1 = r0
            r0 = r9
            goto L8
        L66:
            boolean r10 = r8.removeAfter(r1)
            r9 = r9 ^ r10
        L6b:
            return r9
    }

    public final boolean updateRepeatMode(int r1) {
            r0 = this;
            r0.repeatMode = r1
            boolean r1 = r0.updateForPlaybackModeChange()
            return r1
    }

    public final boolean updateShuffleModeEnabled(boolean r1) {
            r0 = this;
            r0.shuffleModeEnabled = r1
            boolean r1 = r0.updateForPlaybackModeChange()
            return r1
    }
}
