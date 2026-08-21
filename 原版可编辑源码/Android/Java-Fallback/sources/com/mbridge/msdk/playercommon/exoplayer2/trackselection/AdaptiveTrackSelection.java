package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public class AdaptiveTrackSelection extends com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection {
    public static final float DEFAULT_BANDWIDTH_FRACTION = 0.75f;
    public static final float DEFAULT_BUFFERED_FRACTION_TO_LIVE_EDGE_FOR_QUALITY_INCREASE = 0.75f;
    public static final int DEFAULT_MAX_DURATION_FOR_QUALITY_DECREASE_MS = 25000;
    public static final int DEFAULT_MIN_DURATION_FOR_QUALITY_INCREASE_MS = 10000;
    public static final int DEFAULT_MIN_DURATION_TO_RETAIN_AFTER_DISCARD_MS = 25000;
    public static final long DEFAULT_MIN_TIME_BETWEEN_BUFFER_REEVALUTATION_MS = 2000;
    private final float bandwidthFraction;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter bandwidthMeter;
    private final float bufferedFractionToLiveEdgeForQualityIncrease;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
    private long lastBufferEvaluationMs;
    private final long maxDurationForQualityDecreaseUs;
    private final long minDurationForQualityIncreaseUs;
    private final long minDurationToRetainAfterDiscardUs;
    private final long minTimeBetweenBufferReevaluationMs;
    private float playbackSpeed;
    private int reason;
    private int selectedIndex;

    public static final class Factory implements com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory {
        private final float bandwidthFraction;
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter bandwidthMeter;
        private final float bufferedFractionToLiveEdgeForQualityIncrease;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
        private final int maxDurationForQualityDecreaseMs;
        private final int minDurationForQualityIncreaseMs;
        private final int minDurationToRetainAfterDiscardMs;
        private final long minTimeBetweenBufferReevaluationMs;

        public Factory(com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r11) {
                r10 = this;
                com.mbridge.msdk.playercommon.exoplayer2.util.Clock r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
                r2 = 10000(0x2710, float:1.4013E-41)
                r3 = 25000(0x61a8, float:3.5032E-41)
                r4 = 25000(0x61a8, float:3.5032E-41)
                r5 = 1061158912(0x3f400000, float:0.75)
                r6 = 1061158912(0x3f400000, float:0.75)
                r7 = 2000(0x7d0, double:9.88E-321)
                r0 = r10
                r1 = r11
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9)
                return
        }

        public Factory(com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r11, int r12, int r13, int r14, float r15) {
                r10 = this;
                com.mbridge.msdk.playercommon.exoplayer2.util.Clock r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
                r6 = 1061158912(0x3f400000, float:0.75)
                r7 = 2000(0x7d0, double:9.88E-321)
                r0 = r10
                r1 = r11
                r2 = r12
                r3 = r13
                r4 = r14
                r5 = r15
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9)
                return
        }

        public Factory(com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r1, int r2, int r3, int r4, float r5, float r6, long r7, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r9) {
                r0 = this;
                r0.<init>()
                r0.bandwidthMeter = r1
                r0.minDurationForQualityIncreaseMs = r2
                r0.maxDurationForQualityDecreaseMs = r3
                r0.minDurationToRetainAfterDiscardMs = r4
                r0.bandwidthFraction = r5
                r0.bufferedFractionToLiveEdgeForQualityIncrease = r6
                r0.minTimeBetweenBufferReevaluationMs = r7
                r0.clock = r9
                return
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.AdaptiveTrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r18, int... r19) {
                r17 = this;
                r0 = r17
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.AdaptiveTrackSelection r16 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.AdaptiveTrackSelection
                com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r4 = r0.bandwidthMeter
                int r1 = r0.minDurationForQualityIncreaseMs
                long r5 = (long) r1
                int r1 = r0.maxDurationForQualityDecreaseMs
                long r7 = (long) r1
                int r1 = r0.minDurationToRetainAfterDiscardMs
                long r9 = (long) r1
                float r11 = r0.bandwidthFraction
                float r12 = r0.bufferedFractionToLiveEdgeForQualityIncrease
                long r13 = r0.minTimeBetweenBufferReevaluationMs
                com.mbridge.msdk.playercommon.exoplayer2.util.Clock r15 = r0.clock
                r1 = r16
                r2 = r18
                r3 = r19
                r1.<init>(r2, r3, r4, r5, r7, r9, r11, r12, r13, r15)
                return r16
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int[] r2) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.AdaptiveTrackSelection r1 = r0.createTrackSelection(r1, r2)
                return r1
        }
    }

    public AdaptiveTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r16, int[] r17, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r18) {
            r15 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r14 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
            r4 = 10000(0x2710, double:4.9407E-320)
            r6 = 25000(0x61a8, double:1.23516E-319)
            r8 = 25000(0x61a8, double:1.23516E-319)
            r10 = 1061158912(0x3f400000, float:0.75)
            r11 = 1061158912(0x3f400000, float:0.75)
            r12 = 2000(0x7d0, double:9.88E-321)
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r0.<init>(r1, r2, r3, r4, r6, r8, r10, r11, r12, r14)
            return
    }

    public AdaptiveTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int[] r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r3, long r4, long r6, long r8, float r10, float r11, long r12, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r14) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.bandwidthMeter = r3
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r1
            r0.minDurationForQualityIncreaseUs = r4
            long r6 = r6 * r1
            r0.maxDurationForQualityDecreaseUs = r6
            long r8 = r8 * r1
            r0.minDurationToRetainAfterDiscardUs = r8
            r0.bandwidthFraction = r10
            r0.bufferedFractionToLiveEdgeForQualityIncrease = r11
            r0.minTimeBetweenBufferReevaluationMs = r12
            r0.clock = r14
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.playbackSpeed = r1
            r1 = 1
            r0.reason = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.lastBufferEvaluationMs = r1
            r1 = -9223372036854775808
            int r1 = r0.determineIdealSelectedIndex(r1)
            r0.selectedIndex = r1
            return
    }

    private int determineIdealSelectedIndex(long r7) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter r0 = r6.bandwidthMeter
            long r0 = r0.getBitrateEstimate()
            float r0 = (float) r0
            float r1 = r6.bandwidthFraction
            float r0 = r0 * r1
            long r0 = (long) r0
            r2 = 0
            r3 = r2
        Ld:
            int r4 = r6.length
            if (r2 >= r4) goto L35
            r4 = -9223372036854775808
            int r4 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r4 == 0) goto L1d
            boolean r4 = r6.isBlacklisted(r2, r7)
            if (r4 != 0) goto L32
        L1d:
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r6.getFormat(r2)
            int r3 = r3.bitrate
            float r3 = (float) r3
            float r4 = r6.playbackSpeed
            float r3 = r3 * r4
            int r3 = java.lang.Math.round(r3)
            long r3 = (long) r3
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L31
            return r2
        L31:
            r3 = r2
        L32:
            int r2 = r2 + 1
            goto Ld
        L35:
            return r3
    }

    private long minDurationForQualityIncreaseUs(long r3) {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L11
            long r0 = r2.minDurationForQualityIncreaseUs
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            if (r0 == 0) goto L1a
            float r3 = (float) r3
            float r4 = r2.bufferedFractionToLiveEdgeForQualityIncrease
            float r3 = r3 * r4
            long r3 = (long) r3
            goto L1c
        L1a:
            long r3 = r2.minDurationForQualityIncreaseUs
        L1c:
            return r3
    }

    @Override
    public void enable() {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.lastBufferEvaluationMs = r0
            return
    }

    @Override
    public int evaluateQueueSize(long r10, java.util.List<? extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk> r12) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r0 = r9.clock
            long r0 = r0.elapsedRealtime()
            long r2 = r9.lastBufferEvaluationMs
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L1e
            long r2 = r0 - r2
            long r4 = r9.minTimeBetweenBufferReevaluationMs
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L1e
            int r10 = r12.size()
            return r10
        L1e:
            r9.lastBufferEvaluationMs = r0
            boolean r2 = r12.isEmpty()
            r3 = 0
            if (r2 == 0) goto L28
            return r3
        L28:
            int r2 = r12.size()
            int r4 = r2 + (-1)
            java.lang.Object r4 = r12.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk) r4
            long r4 = r4.startTimeUs
            long r4 = r4 - r10
            float r6 = r9.playbackSpeed
            long r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPlayoutDurationForMediaDuration(r4, r6)
            long r6 = r9.minDurationToRetainAfterDiscardUs
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 >= 0) goto L44
            return r2
        L44:
            int r0 = r9.determineIdealSelectedIndex(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r9.getFormat(r0)
        L4c:
            if (r3 >= r2) goto L8a
            java.lang.Object r1 = r12.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk) r1
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r1.trackFormat
            long r5 = r1.startTimeUs
            long r5 = r5 - r10
            float r1 = r9.playbackSpeed
            long r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPlayoutDurationForMediaDuration(r5, r1)
            long r7 = r9.minDurationToRetainAfterDiscardUs
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 < 0) goto L87
            int r1 = r4.bitrate
            int r5 = r0.bitrate
            if (r1 >= r5) goto L87
            int r1 = r4.height
            r5 = -1
            if (r1 == r5) goto L87
            int r1 = r4.height
            r6 = 720(0x2d0, float:1.009E-42)
            if (r1 >= r6) goto L87
            int r1 = r4.width
            if (r1 == r5) goto L87
            int r1 = r4.width
            r5 = 1280(0x500, float:1.794E-42)
            if (r1 >= r5) goto L87
            int r1 = r4.height
            int r4 = r0.height
            if (r1 >= r4) goto L87
            return r3
        L87:
            int r3 = r3 + 1
            goto L4c
        L8a:
            return r2
    }

    @Override
    public int getSelectedIndex() {
            r1 = this;
            int r0 = r1.selectedIndex
            return r0
    }

    @Override
    public java.lang.Object getSelectionData() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int getSelectionReason() {
            r1 = this;
            int r0 = r1.reason
            return r0
    }

    @Override
    public void onPlaybackSpeed(float r1) {
            r0 = this;
            r0.playbackSpeed = r1
            return
    }

    @Override
    public void updateSelectedTrack(long r4, long r6, long r8) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r4 = r3.clock
            long r4 = r4.elapsedRealtime()
            int r0 = r3.selectedIndex
            int r1 = r3.determineIdealSelectedIndex(r4)
            r3.selectedIndex = r1
            if (r1 != r0) goto L11
            return
        L11:
            boolean r4 = r3.isBlacklisted(r0, r4)
            if (r4 != 0) goto L40
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r3.getFormat(r0)
            int r5 = r3.selectedIndex
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r3.getFormat(r5)
            int r1 = r5.bitrate
            int r2 = r4.bitrate
            if (r1 <= r2) goto L32
            long r8 = r3.minDurationForQualityIncreaseUs(r8)
            int r8 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r8 >= 0) goto L32
            r3.selectedIndex = r0
            goto L40
        L32:
            int r5 = r5.bitrate
            int r4 = r4.bitrate
            if (r5 >= r4) goto L40
            long r4 = r3.maxDurationForQualityDecreaseUs
            int r4 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r4 < 0) goto L40
            r3.selectedIndex = r0
        L40:
            int r4 = r3.selectedIndex
            if (r4 == r0) goto L47
            r4 = 3
            r3.reason = r4
        L47:
            return
    }
}
