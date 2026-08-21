package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class DeferredMediaPeriod implements com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback {
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator allocator;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback callback;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId id;
    private com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod.PrepareErrorListener listener;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod mediaPeriod;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    private boolean notifiedPrepareError;
    private long preparePositionOverrideUs;
    private long preparePositionUs;

    public interface PrepareErrorListener {
        void onPrepareError(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1, java.io.IOException r2);
    }

    public DeferredMediaPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r3) {
            r0 = this;
            r0.<init>()
            r0.id = r2
            r0.allocator = r3
            r0.mediaSource = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.preparePositionOverrideUs = r1
            return
    }

    @Override
    public final boolean continueLoading(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            if (r0 == 0) goto Lc
            boolean r2 = r0.continueLoading(r2)
            if (r2 == 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public final void createPeriod() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r3.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r3.id
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r2 = r3.allocator
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r0.createPeriod(r1, r2)
            r3.mediaPeriod = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r3.callback
            if (r1 == 0) goto L15
            long r1 = r3.preparePositionUs
            r0.prepare(r3, r1)
        L15:
            return
    }

    @Override
    public final void discardBuffer(long r2, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            r0.discardBuffer(r2, r4)
            return
    }

    @Override
    public final long getAdjustedSeekPositionUs(long r2, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            long r2 = r0.getAdjustedSeekPositionUs(r2, r4)
            return r2
    }

    @Override
    public final long getBufferedPositionUs() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r2.mediaPeriod
            long r0 = r0.getBufferedPositionUs()
            return r0
    }

    @Override
    public final long getNextLoadPositionUs() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r2.mediaPeriod
            long r0 = r0.getNextLoadPositionUs()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r0.getTrackGroups()
            return r0
    }

    @Override
    public final void maybeThrowPrepareError() throws java.io.IOException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r3.mediaPeriod     // Catch: java.io.IOException -> L10
            if (r0 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r3.mediaPeriod     // Catch: java.io.IOException -> L10
            r0.maybeThrowPrepareError()     // Catch: java.io.IOException -> L10
            goto L21
        La:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r3.mediaSource     // Catch: java.io.IOException -> L10
            r0.maybeThrowSourceInfoRefreshError()     // Catch: java.io.IOException -> L10
            goto L21
        L10:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod$PrepareErrorListener r1 = r3.listener
            if (r1 == 0) goto L22
            boolean r2 = r3.notifiedPrepareError
            if (r2 != 0) goto L21
            r2 = 1
            r3.notifiedPrepareError = r2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = r3.id
            r1.onPrepareError(r2, r0)
        L21:
            return
        L22:
            throw r0
    }

    public final void onContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
            return
    }

    @Override
    public final void onContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod) r1
            r0.onContinueLoadingRequested(r1)
            return
    }

    @Override
    public final void onPrepared(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r0.callback
            r1.onPrepared(r0)
            return
    }

    @Override
    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback r1, long r2) {
            r0 = this;
            r0.callback = r1
            r0.preparePositionUs = r2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r0.mediaPeriod
            if (r1 == 0) goto Lb
            r1.prepare(r0, r2)
        Lb:
            return
    }

    @Override
    public final long readDiscontinuity() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r2.mediaPeriod
            long r0 = r0.readDiscontinuity()
            return r0
    }

    @Override
    public final void reevaluateBuffer(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            r0.reevaluateBuffer(r2)
            return
    }

    public final void releasePeriod() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r2.mediaPeriod
            if (r0 == 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r2.mediaSource
            r1.releasePeriod(r0)
        L9:
            return
    }

    @Override
    public final long seekToUs(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            long r2 = r0.seekToUs(r2)
            return r2
    }

    @Override
    public final long selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r14, boolean[] r15, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r16, boolean[] r17, long r18) {
            r13 = this;
            r0 = r13
            long r1 = r0.preparePositionOverrideUs
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L16
            r5 = 0
            int r5 = (r18 > r5 ? 1 : (r18 == r5 ? 0 : -1))
            if (r5 != 0) goto L16
            r0.preparePositionOverrideUs = r3
            r11 = r1
            goto L18
        L16:
            r11 = r18
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r6 = r0.mediaPeriod
            r7 = r14
            r8 = r15
            r9 = r16
            r10 = r17
            long r1 = r6.selectTracks(r7, r8, r9, r10, r11)
            return r1
    }

    public final void setDefaultPreparePositionUs(long r5) {
            r4 = this;
            long r0 = r4.preparePositionUs
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 == 0) goto L10
            r4.preparePositionOverrideUs = r5
            r4.preparePositionUs = r5
        L10:
            return
    }

    public final void setPrepareErrorListener(com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod.PrepareErrorListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }
}
