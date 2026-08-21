package com.mbridge.msdk.playercommon.exoplayer2;

final class MediaPeriodHolder {
    private static final java.lang.String TAG = "MediaPeriodHolder";
    public boolean hasEnabledTracks;
    public com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo info;
    public final boolean[] mayRetainStreamFlags;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod mediaPeriod;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    public com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder next;
    private com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult periodTrackSelectorResult;
    public boolean prepared;
    private final com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] rendererCapabilities;
    public long rendererPositionOffsetUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] sampleStreams;
    public com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray trackGroups;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector trackSelector;
    public com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult trackSelectorResult;
    public final java.lang.Object uid;

    public MediaPeriodHolder(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r3, long r4, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r6, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r7, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r8, java.lang.Object r9, com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r10) {
            r2 = this;
            r2.<init>()
            r2.rendererCapabilities = r3
            long r0 = r10.startPositionUs
            long r4 = r4 - r0
            r2.rendererPositionOffsetUs = r4
            r2.trackSelector = r6
            r2.mediaSource = r8
            java.lang.Object r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r9)
            r2.uid = r4
            r2.info = r10
            int r4 = r3.length
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[r4]
            r2.sampleStreams = r4
            int r3 = r3.length
            boolean[] r3 = new boolean[r3]
            r2.mayRetainStreamFlags = r3
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r10.id
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r5 = r8.createPeriod(r3, r7)
            long r3 = r10.endPositionUs
            r6 = -9223372036854775808
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 == 0) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod
            r6 = 1
            r7 = 0
            long r9 = r10.endPositionUs
            r4 = r3
            r4.<init>(r5, r6, r7, r9)
            r5 = r3
        L3a:
            r2.mediaPeriod = r5
            return
    }

    private void associateNoSampleRenderersWithEmptySampleStream(com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r4) {
            r3 = this;
            r0 = 0
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r1 = r3.rendererCapabilities
            int r2 = r1.length
            if (r0 >= r2) goto L21
            r1 = r1[r0]
            int r1 = r1.getTrackType()
            r2 = 5
            if (r1 != r2) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r3.trackSelectorResult
            boolean r1 = r1.isRendererEnabled(r0)
            if (r1 == 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.source.EmptySampleStream r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.EmptySampleStream
            r1.<init>()
            r4[r0] = r1
        L1e:
            int r0 = r0 + 1
            goto L1
        L21:
            return
    }

    private void disableTrackSelectionsInResult(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L19
            boolean r1 = r4.isRendererEnabled(r0)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2 = r4.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r2 = r2.get(r0)
            if (r1 == 0) goto L16
            if (r2 == 0) goto L16
            r2.disable()
        L16:
            int r0 = r0 + 1
            goto L1
        L19:
            return
    }

    private void disassociateNoSampleRenderersWithEmptySampleStream(com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r4) {
            r3 = this;
            r0 = 0
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r1 = r3.rendererCapabilities
            int r2 = r1.length
            if (r0 >= r2) goto L15
            r1 = r1[r0]
            int r1 = r1.getTrackType()
            r2 = 5
            if (r1 != r2) goto L12
            r1 = 0
            r4[r0] = r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            return
    }

    private void enableTrackSelectionsInResult(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L19
            boolean r1 = r4.isRendererEnabled(r0)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2 = r4.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r2 = r2.get(r0)
            if (r1 == 0) goto L16
            if (r2 == 0) goto L16
            r2.enable()
        L16:
            int r0 = r0 + 1
            goto L1
        L19:
            return
    }

    private void updatePeriodTrackSelectorResult(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = r1.periodTrackSelectorResult
            if (r0 == 0) goto L7
            r1.disableTrackSelectionsInResult(r0)
        L7:
            r1.periodTrackSelectorResult = r2
            if (r2 == 0) goto Le
            r1.enableTrackSelectionsInResult(r2)
        Le:
            return
    }

    public final long applyTrackSelection(long r2, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r0 = r1.rendererCapabilities
            int r0 = r0.length
            boolean[] r0 = new boolean[r0]
            long r2 = r1.applyTrackSelection(r2, r4, r0)
            return r2
    }

    public final long applyTrackSelection(long r12, boolean r14, boolean[] r15) {
            r11 = this;
            r0 = 0
            r1 = r0
        L2:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r2 = r11.trackSelectorResult
            int r2 = r2.length
            r3 = 1
            if (r1 >= r2) goto L1e
            boolean[] r2 = r11.mayRetainStreamFlags
            if (r14 != 0) goto L18
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4 = r11.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r5 = r11.periodTrackSelectorResult
            boolean r4 = r4.isEquivalent(r5, r1)
            if (r4 == 0) goto L18
            goto L19
        L18:
            r3 = r0
        L19:
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r14 = r11.sampleStreams
            r11.disassociateNoSampleRenderersWithEmptySampleStream(r14)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r14 = r11.trackSelectorResult
            r11.updatePeriodTrackSelectorResult(r14)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r14 = r11.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r14 = r14.selections
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r4 = r11.mediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r5 = r14.getAll()
            boolean[] r6 = r11.mayRetainStreamFlags
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r7 = r11.sampleStreams
            r8 = r15
            r9 = r12
            long r12 = r4.selectTracks(r5, r6, r7, r8, r9)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r15 = r11.sampleStreams
            r11.associateNoSampleRenderersWithEmptySampleStream(r15)
            r11.hasEnabledTracks = r0
            r15 = r0
        L44:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r1 = r11.sampleStreams
            int r2 = r1.length
            if (r15 >= r2) goto L73
            r1 = r1[r15]
            if (r1 == 0) goto L64
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r11.trackSelectorResult
            boolean r1 = r1.isRendererEnabled(r15)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r1 = r11.rendererCapabilities
            r1 = r1[r15]
            int r1 = r1.getTrackType()
            r2 = 5
            if (r1 == r2) goto L70
            r11.hasEnabledTracks = r3
            goto L70
        L64:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r1 = r14.get(r15)
            if (r1 != 0) goto L6c
            r1 = r3
            goto L6d
        L6c:
            r1 = r0
        L6d:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
        L70:
            int r15 = r15 + 1
            goto L44
        L73:
            return r12
    }

    public final void continueLoading(long r2) {
            r1 = this;
            long r2 = r1.toPeriodTime(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            r0.continueLoading(r2)
            return
    }

    public final long getBufferedPositionUs(boolean r5) {
            r4 = this;
            boolean r0 = r4.prepared
            if (r0 != 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r4.info
            long r0 = r5.startPositionUs
            return r0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r4.mediaPeriod
            long r0 = r0.getBufferedPositionUs()
            r2 = -9223372036854775808
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L1b
            if (r5 == 0) goto L1b
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r4.info
            long r0 = r5.durationUs
        L1b:
            return r0
    }

    public final long getDurationUs() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r2.info
            long r0 = r0.durationUs
            return r0
    }

    public final long getNextLoadPositionUs() {
            r2 = this;
            boolean r0 = r2.prepared
            if (r0 != 0) goto L7
            r0 = 0
            goto Ld
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r2.mediaPeriod
            long r0 = r0.getNextLoadPositionUs()
        Ld:
            return r0
    }

    public final long getRendererOffset() {
            r2 = this;
            long r0 = r2.rendererPositionOffsetUs
            return r0
    }

    public final void handlePrepared(float r7) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r6 = this;
            r0 = 1
            r6.prepared = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r6.mediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r0.getTrackGroups()
            r6.trackGroups = r0
            r6.selectTracks(r7)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r7 = r6.info
            long r0 = r7.startPositionUs
            r7 = 0
            long r0 = r6.applyTrackSelection(r0, r7)
            long r2 = r6.rendererPositionOffsetUs
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r7 = r6.info
            long r4 = r7.startPositionUs
            long r4 = r4 - r0
            long r2 = r2 + r4
            r6.rendererPositionOffsetUs = r2
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r7 = r6.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r7 = r7.copyWithStartPositionUs(r0)
            r6.info = r7
            return
    }

    public final boolean isFullyBuffered() {
            r4 = this;
            boolean r0 = r4.prepared
            if (r0 == 0) goto L16
            boolean r0 = r4.hasEnabledTracks
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r4.mediaPeriod
            long r0 = r0.getBufferedPositionUs()
            r2 = -9223372036854775808
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L16
        L14:
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public final void reevaluateBuffer(long r2) {
            r1 = this;
            boolean r0 = r1.prepared
            if (r0 == 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            long r2 = r1.toPeriodTime(r2)
            r0.reevaluateBuffer(r2)
        Ld:
            return
    }

    public final void release() {
            r4 = this;
            r0 = 0
            r4.updatePeriodTrackSelectorResult(r0)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r4.info     // Catch: java.lang.RuntimeException -> L22
            long r0 = r0.endPositionUs     // Catch: java.lang.RuntimeException -> L22
            r2 = -9223372036854775808
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1a
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r4.mediaSource     // Catch: java.lang.RuntimeException -> L22
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r4.mediaPeriod     // Catch: java.lang.RuntimeException -> L22
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod) r1     // Catch: java.lang.RuntimeException -> L22
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r1.mediaPeriod     // Catch: java.lang.RuntimeException -> L22
            r0.releasePeriod(r1)     // Catch: java.lang.RuntimeException -> L22
            goto L2a
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r4.mediaSource     // Catch: java.lang.RuntimeException -> L22
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r4.mediaPeriod     // Catch: java.lang.RuntimeException -> L22
            r0.releasePeriod(r1)     // Catch: java.lang.RuntimeException -> L22
            goto L2a
        L22:
            r0 = move-exception
            java.lang.String r1 = "MediaPeriodHolder"
            java.lang.String r2 = "Period release failed."
            android.util.Log.e(r1, r2, r0)
        L2a:
            return
    }

    public final boolean selectTracks(float r5) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r0 = r4.trackSelector
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r1 = r4.rendererCapabilities
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r4.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = r0.selectTracks(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r4.periodTrackSelectorResult
            boolean r1 = r0.isEquivalent(r1)
            r2 = 0
            if (r1 == 0) goto L14
            return r2
        L14:
            r4.trackSelectorResult = r0
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r0 = r0.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r0 = r0.getAll()
            int r1 = r0.length
        L1d:
            if (r2 >= r1) goto L29
            r3 = r0[r2]
            if (r3 == 0) goto L26
            r3.onPlaybackSpeed(r5)
        L26:
            int r2 = r2 + 1
            goto L1d
        L29:
            r5 = 1
            return r5
    }

    public final long toPeriodTime(long r3) {
            r2 = this;
            long r0 = r2.getRendererOffset()
            long r3 = r3 - r0
            return r3
    }

    public final long toRendererTime(long r3) {
            r2 = this;
            long r0 = r2.getRendererOffset()
            long r3 = r3 + r0
            return r3
    }
}
