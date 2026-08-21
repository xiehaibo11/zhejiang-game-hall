package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class ClippingMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource<java.lang.Void> {
    private final boolean allowDynamicClippingUpdates;
    private com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource.IllegalClippingException clippingError;
    private com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource.ClippingTimeline clippingTimeline;
    private final boolean enableInitialDiscontinuity;
    private final long endUs;
    private java.lang.Object manifest;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> mediaPeriods;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    private long periodEndUs;
    private long periodStartUs;
    private final boolean relativeToDefaultPosition;
    private final long startUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;

    private static final class ClippingTimeline extends com.mbridge.msdk.playercommon.exoplayer2.source.ForwardingTimeline {
        private final long durationUs;
        private final long endUs;
        private final boolean isDynamic;
        private final long startUs;

        public ClippingTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r10, long r11, long r13) throws com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource.IllegalClippingException {
                r9 = this;
                r9.<init>(r10)
                int r0 = r10.getPeriodCount()
                r1 = 1
                r2 = 0
                if (r0 != r1) goto L7a
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r10 = r10.getWindow(r2, r0, r2)
                r3 = 0
                long r11 = java.lang.Math.max(r3, r11)
                r5 = -9223372036854775808
                int r0 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
                if (r0 != 0) goto L23
                long r13 = r10.durationUs
                goto L27
            L23:
                long r13 = java.lang.Math.max(r3, r13)
            L27:
                long r5 = r10.durationUs
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r0 == 0) goto L55
                long r5 = r10.durationUs
                int r0 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
                if (r0 <= 0) goto L3a
                long r13 = r10.durationUs
            L3a:
                int r0 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
                if (r0 == 0) goto L49
                boolean r0 = r10.isSeekable
                if (r0 == 0) goto L43
                goto L49
            L43:
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException r10 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException
                r10.<init>(r1)
                throw r10
            L49:
                int r0 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
                if (r0 > 0) goto L4e
                goto L55
            L4e:
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException r10 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException
                r11 = 2
                r10.<init>(r11)
                throw r10
            L55:
                r9.startUs = r11
                r9.endUs = r13
                int r0 = (r13 > r7 ? 1 : (r13 == r7 ? 0 : -1))
                if (r0 != 0) goto L5f
                r11 = r7
                goto L61
            L5f:
                long r11 = r13 - r11
            L61:
                r9.durationUs = r11
                boolean r11 = r10.isDynamic
                if (r11 == 0) goto L76
                if (r0 == 0) goto L77
                long r11 = r10.durationUs
                int r11 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
                if (r11 == 0) goto L76
                long r10 = r10.durationUs
                int r10 = (r13 > r10 ? 1 : (r13 == r10 ? 0 : -1))
                if (r10 != 0) goto L76
                goto L77
            L76:
                r1 = r2
            L77:
                r9.isDynamic = r1
                return
            L7a:
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException r10 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException
                r10.<init>(r2)
                throw r10
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r13, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r14, boolean r15) {
                r12 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r13 = r12.timeline
                r0 = 0
                r13.getPeriod(r0, r14, r15)
                long r0 = r14.getPositionInWindowUs()
                long r2 = r12.startUs
                long r10 = r0 - r2
                long r0 = r12.durationUs
                r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r13 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r13 != 0) goto L1b
                r8 = r2
                goto L1d
            L1b:
                long r0 = r0 - r10
                r8 = r0
            L1d:
                java.lang.Object r5 = r14.id
                java.lang.Object r6 = r14.uid
                r7 = 0
                r4 = r14
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r13 = r4.set(r5, r6, r7, r8, r10)
                return r13
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r7, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r8, boolean r9, long r10) {
                r6 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r6.timeline
                r1 = 0
                r4 = 0
                r2 = r8
                r3 = r9
                r0.getWindow(r1, r2, r3, r4)
                long r9 = r8.positionInFirstPeriodUs
                long r0 = r6.startUs
                long r9 = r9 + r0
                r8.positionInFirstPeriodUs = r9
                long r9 = r6.durationUs
                r8.durationUs = r9
                boolean r7 = r6.isDynamic
                r8.isDynamic = r7
                long r9 = r8.defaultPositionUs
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r7 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r7 == 0) goto L46
                long r9 = r8.defaultPositionUs
                long r2 = r6.startUs
                long r9 = java.lang.Math.max(r9, r2)
                r8.defaultPositionUs = r9
                long r9 = r6.endUs
                int r7 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                long r9 = r8.defaultPositionUs
                if (r7 != 0) goto L37
                goto L3d
            L37:
                long r2 = r6.endUs
                long r9 = java.lang.Math.min(r9, r2)
            L3d:
                r8.defaultPositionUs = r9
                long r9 = r8.defaultPositionUs
                long r2 = r6.startUs
                long r9 = r9 - r2
                r8.defaultPositionUs = r9
            L46:
                long r9 = r6.startUs
                long r9 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r9)
                long r2 = r8.presentationStartTimeMs
                int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r7 == 0) goto L57
                long r2 = r8.presentationStartTimeMs
                long r2 = r2 + r9
                r8.presentationStartTimeMs = r2
            L57:
                long r2 = r8.windowStartTimeMs
                int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r7 == 0) goto L62
                long r0 = r8.windowStartTimeMs
                long r0 = r0 + r9
                r8.windowStartTimeMs = r0
            L62:
                return r8
        }
    }

    public static final class IllegalClippingException extends java.io.IOException {
        public static final int REASON_INVALID_PERIOD_COUNT = 0;
        public static final int REASON_NOT_SEEKABLE_TO_START = 1;
        public static final int REASON_START_EXCEEDS_END = 2;
        public final int reason;

        public @interface Reason {
        }

        public IllegalClippingException(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Illegal clipping: "
                r0.append(r1)
                java.lang.String r1 = getReasonDescription(r3)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0)
                r2.reason = r3
                return
        }

        private static java.lang.String getReasonDescription(int r1) {
                if (r1 == 0) goto L11
                r0 = 1
                if (r1 == r0) goto Le
                r0 = 2
                if (r1 == r0) goto Lb
                java.lang.String r1 = "unknown"
                return r1
            Lb:
                java.lang.String r1 = "start exceeds end"
                return r1
            Le:
                java.lang.String r1 = "not seekable to start"
                return r1
            L11:
                java.lang.String r1 = "invalid period count"
                return r1
        }
    }

    public ClippingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r10, long r11) {
            r9 = this;
            r2 = 0
            r6 = 1
            r7 = 0
            r8 = 1
            r0 = r9
            r1 = r10
            r4 = r11
            r0.<init>(r1, r2, r4, r6, r7, r8)
            return
    }

    public ClippingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r10, long r11, long r13) {
            r9 = this;
            r6 = 1
            r7 = 0
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r4 = r13
            r0.<init>(r1, r2, r4, r6, r7, r8)
            return
    }

    public ClippingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r10, long r11, long r13, boolean r15) {
            r9 = this;
            r7 = 0
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r4 = r13
            r6 = r15
            r0.<init>(r1, r2, r4, r6, r7, r8)
            return
    }

    public ClippingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, long r4, long r6, boolean r8, boolean r9, boolean r10) {
            r2 = this;
            r2.<init>()
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            java.lang.Object r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource) r3
            r2.mediaSource = r3
            r2.startUs = r4
            r2.endUs = r6
            r2.enableInitialDiscontinuity = r8
            r2.allowDynamicClippingUpdates = r9
            r2.relativeToDefaultPosition = r10
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.mediaPeriods = r3
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r3 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r3.<init>()
            r2.window = r3
            return
    }

    private void refreshClippedTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r16) {
            r15 = this;
            r1 = r15
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r1.window
            r2 = 0
            r4 = r16
            r4.getWindow(r2, r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r1.window
            long r5 = r0.getPositionInFirstPeriodUs()
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$ClippingTimeline r0 = r1.clippingTimeline
            r7 = -9223372036854775808
            if (r0 == 0) goto L31
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> r0 = r1.mediaPeriods
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L31
            boolean r0 = r1.allowDynamicClippingUpdates
            if (r0 == 0) goto L22
            goto L31
        L22:
            long r2 = r1.periodStartUs
            long r2 = r2 - r5
            long r9 = r1.endUs
            int r0 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r0 != 0) goto L2c
            goto L2f
        L2c:
            long r7 = r1.periodEndUs
            long r7 = r7 - r5
        L2f:
            r5 = r2
            goto L6c
        L31:
            long r9 = r1.startUs
            long r11 = r1.endUs
            boolean r0 = r1.relativeToDefaultPosition
            if (r0 == 0) goto L41
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r1.window
            long r13 = r0.getDefaultPositionUs()
            long r9 = r9 + r13
            long r11 = r11 + r13
        L41:
            long r13 = r5 + r9
            r1.periodStartUs = r13
            long r13 = r1.endUs
            int r0 = (r13 > r7 ? 1 : (r13 == r7 ? 0 : -1))
            if (r0 != 0) goto L4c
            goto L4e
        L4c:
            long r7 = r5 + r11
        L4e:
            r1.periodEndUs = r7
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> r0 = r1.mediaPeriods
            int r0 = r0.size()
        L56:
            if (r2 >= r0) goto L6a
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> r3 = r1.mediaPeriods
            java.lang.Object r3 = r3.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod) r3
            long r5 = r1.periodStartUs
            long r7 = r1.periodEndUs
            r3.updateClipping(r5, r7)
            int r2 = r2 + 1
            goto L56
        L6a:
            r5 = r9
            r7 = r11
        L6c:
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$ClippingTimeline r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$ClippingTimeline     // Catch: com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource.IllegalClippingException -> L7c
            r3 = r0
            r4 = r16
            r3.<init>(r4, r5, r7)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource.IllegalClippingException -> L7c
            r1.clippingTimeline = r0     // Catch: com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource.IllegalClippingException -> L7c
            java.lang.Object r2 = r1.manifest
            r15.refreshSourceInfo(r0, r2)
            return
        L7c:
            r0 = move-exception
            r1.clippingError = r0
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r9, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r10) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r7 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r8.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r0.createPeriod(r9, r10)
            boolean r2 = r8.enableInitialDiscontinuity
            long r3 = r8.periodStartUs
            long r5 = r8.periodEndUs
            r0 = r7
            r0.<init>(r1, r2, r3, r5)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> r9 = r8.mediaPeriods
            r9.add(r7)
            return r7
    }

    @Override
    protected final long getMediaTimeForChildMediaTime(java.lang.Void r1, long r2) {
            r0 = this;
            java.lang.Void r1 = (java.lang.Void) r1
            long r1 = r0.getMediaTimeForChildMediaTime(r1, r2)
            return r1
    }

    protected final long getMediaTimeForChildMediaTime(java.lang.Void r7, long r8) {
            r6 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r7 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r7 != 0) goto La
            return r0
        La:
            long r0 = r6.startUs
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
            r2 = 0
            long r8 = r8 - r0
            long r7 = java.lang.Math.max(r2, r8)
            long r2 = r6.endUs
            r4 = -9223372036854775808
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 == 0) goto L28
            long r2 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r2)
            long r2 = r2 - r0
            long r7 = java.lang.Math.min(r2, r7)
        L28:
            return r7
    }

    @Override
    public final void maybeThrowSourceInfoRefreshError() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException r0 = r1.clippingError
            if (r0 != 0) goto L8
            super.maybeThrowSourceInfoRefreshError()
            return
        L8:
            throw r0
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
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$IllegalClippingException r1 = r0.clippingError
            if (r1 == 0) goto L5
            return
        L5:
            r0.manifest = r4
            r0.refreshClippedTimeline(r3)
            return
    }

    @Override
    public final void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, boolean r2) {
            r0 = this;
            super.prepareSourceInternal(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r0.mediaSource
            r2 = 0
            r0.prepareChildSource(r2, r1)
            return
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r2) {
            r1 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> r0 = r1.mediaPeriods
            boolean r0 = r0.remove(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r1.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod) r2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r2 = r2.mediaPeriod
            r0.releasePeriod(r2)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod> r2 = r1.mediaPeriods
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L25
            boolean r2 = r1.allowDynamicClippingUpdates
            if (r2 != 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaSource$ClippingTimeline r2 = r1.clippingTimeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r2.timeline
            r1.refreshClippedTimeline(r2)
        L25:
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r1 = this;
            super.releaseSourceInternal()
            r0 = 0
            r1.clippingError = r0
            r1.clippingTimeline = r0
            return
    }
}
