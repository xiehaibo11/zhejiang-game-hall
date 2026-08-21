package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class SinglePeriodTimeline extends com.mbridge.msdk.playercommon.exoplayer2.Timeline {
    private static final java.lang.Object UID = null;
    private final boolean isDynamic;
    private final boolean isSeekable;
    private final long periodDurationUs;
    private final long presentationStartTimeMs;
    private final java.lang.Object tag;
    private final long windowDefaultStartPositionUs;
    private final long windowDurationUs;
    private final long windowPositionInPeriodUs;
    private final long windowStartTimeMs;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline.UID = r0
            return
    }

    public SinglePeriodTimeline(long r1, long r3, long r5, long r7, long r9, long r11, boolean r13, boolean r14, java.lang.Object r15) {
            r0 = this;
            r0.<init>()
            r0.presentationStartTimeMs = r1
            r0.windowStartTimeMs = r3
            r0.periodDurationUs = r5
            r0.windowDurationUs = r7
            r0.windowPositionInPeriodUs = r9
            r0.windowDefaultStartPositionUs = r11
            r0.isSeekable = r13
            r0.isDynamic = r14
            r0.tag = r15
            return
    }

    public SinglePeriodTimeline(long r17, long r19, long r21, long r23, boolean r25, boolean r26, java.lang.Object r27) {
            r16 = this;
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0 = r16
            r5 = r17
            r7 = r19
            r9 = r21
            r11 = r23
            r13 = r25
            r14 = r26
            r15 = r27
            r0.<init>(r1, r3, r5, r7, r9, r11, r13, r14, r15)
            return
    }

    public SinglePeriodTimeline(long r7, boolean r9, boolean r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            r4 = r10
            r0.<init>(r1, r3, r4, r5)
            return
    }

    public SinglePeriodTimeline(long r13, boolean r15, boolean r16, java.lang.Object r17) {
            r12 = this;
            r5 = 0
            r7 = 0
            r0 = r12
            r1 = r13
            r3 = r13
            r9 = r15
            r10 = r16
            r11 = r17
            r0.<init>(r1, r3, r5, r7, r9, r10, r11)
            return
    }

    @Override
    public final int getIndexOfPeriod(java.lang.Object r2) {
            r1 = this;
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline.UID
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto La
            r2 = 0
            goto Lb
        La:
            r2 = -1
        Lb:
            return r2
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r9, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r10, boolean r11) {
            r8 = this;
            r0 = 0
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r9, r0, r1)
            if (r11 == 0) goto La
            java.lang.Object r9 = com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline.UID
            goto Lb
        La:
            r9 = 0
        Lb:
            r2 = r9
            r1 = 0
            r3 = 0
            long r4 = r8.periodDurationUs
            long r6 = r8.windowPositionInPeriodUs
            long r6 = -r6
            r0 = r10
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r9 = r0.set(r1, r2, r3, r4, r6)
            return r9
    }

    @Override
    public final int getPeriodCount() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r19, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r20, boolean r21, long r22) {
            r18 = this;
            r0 = r18
            r1 = 0
            r2 = 1
            r3 = r19
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r3, r1, r2)
            if (r21 == 0) goto Le
            java.lang.Object r1 = r0.tag
            goto Lf
        Le:
            r1 = 0
        Lf:
            r3 = r1
            long r1 = r0.windowDefaultStartPositionUs
            boolean r4 = r0.isDynamic
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 == 0) goto L30
            r7 = 0
            int r4 = (r22 > r7 ? 1 : (r22 == r7 ? 0 : -1))
            if (r4 == 0) goto L30
            long r7 = r0.windowDurationUs
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 != 0) goto L29
        L27:
            r10 = r5
            goto L31
        L29:
            long r1 = r1 + r22
            int r4 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r4 <= 0) goto L30
            goto L27
        L30:
            r10 = r1
        L31:
            long r4 = r0.presentationStartTimeMs
            long r6 = r0.windowStartTimeMs
            boolean r8 = r0.isSeekable
            boolean r9 = r0.isDynamic
            long r12 = r0.windowDurationUs
            r14 = 0
            r15 = 0
            long r1 = r0.windowPositionInPeriodUs
            r16 = r1
            r2 = r20
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = r2.set(r3, r4, r6, r8, r9, r10, r12, r14, r15, r16)
            return r1
    }

    @Override
    public final int getWindowCount() {
            r1 = this;
            r0 = 1
            return r0
    }
}
