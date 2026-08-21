package com.mbridge.msdk.playercommon.exoplayer2;

public abstract class BaseRenderer implements com.mbridge.msdk.playercommon.exoplayer2.Renderer, com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities {
    private com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration configuration;
    private int index;
    private boolean readEndOfStream;
    private int state;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream stream;
    private com.mbridge.msdk.playercommon.exoplayer2.Format[] streamFormats;
    private boolean streamIsFinal;
    private long streamOffsetUs;
    private final int trackType;

    public BaseRenderer(int r1) {
            r0 = this;
            r0.<init>()
            r0.trackType = r1
            r1 = 1
            r0.readEndOfStream = r1
            return
    }

    protected static boolean supportsFormatDrm(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<?> r0, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1) {
            if (r1 != 0) goto L4
            r0 = 1
            return r0
        L4:
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            boolean r0 = r0.canAcquireSession(r1)
            return r0
    }

    @Override
    public final void disable() {
            r3 = this;
            int r0 = r3.state
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L7
            goto L8
        L7:
            r1 = r2
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            r3.state = r2
            r0 = 0
            r3.stream = r0
            r3.streamFormats = r0
            r3.streamIsFinal = r2
            r3.onDisabled()
            return
    }

    @Override
    public final void enable(com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r3, com.mbridge.msdk.playercommon.exoplayer2.Format[] r4, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r5, long r6, boolean r8, long r9) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            int r0 = r2.state
            r1 = 1
            if (r0 != 0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r2.configuration = r3
            r2.state = r1
            r2.onEnabled(r8)
            r2.replaceStream(r4, r5, r9)
            r2.onPositionReset(r6, r8)
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities getCapabilities() {
            r0 = this;
            return r0
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration getConfiguration() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r0 = r1.configuration
            return r0
    }

    protected final int getIndex() {
            r1 = this;
            int r0 = r1.index
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock getMediaClock() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final int getState() {
            r1 = this;
            int r0 = r1.state
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream getStream() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r1.stream
            return r0
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.Format[] getStreamFormats() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r1.streamFormats
            return r0
    }

    @Override
    public final int getTrackType() {
            r1 = this;
            int r0 = r1.trackType
            return r0
    }

    @Override
    public void handleMessage(int r1, java.lang.Object r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    @Override
    public final boolean hasReadStreamToEnd() {
            r1 = this;
            boolean r0 = r1.readEndOfStream
            return r0
    }

    @Override
    public final boolean isCurrentStreamFinal() {
            r1 = this;
            boolean r0 = r1.streamIsFinal
            return r0
    }

    protected final boolean isSourceReady() {
            r1 = this;
            boolean r0 = r1.readEndOfStream
            if (r0 == 0) goto L7
            boolean r0 = r1.streamIsFinal
            goto Ld
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r1.stream
            boolean r0 = r0.isReady()
        Ld:
            return r0
    }

    @Override
    public final void maybeThrowStreamError() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r1.stream
            r0.maybeThrowError()
            return
    }

    protected void onDisabled() {
            r0 = this;
            return
    }

    protected void onEnabled(boolean r1) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    protected void onPositionReset(long r1, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    protected void onStarted() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    protected void onStopped() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    protected void onStreamChanged(com.mbridge.msdk.playercommon.exoplayer2.Format[] r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    protected final int readSource(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r5, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r6, boolean r7) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r4.stream
            int r7 = r0.readData(r5, r6, r7)
            r0 = -4
            if (r7 != r0) goto L21
            boolean r5 = r6.isEndOfStream()
            if (r5 == 0) goto L19
            r5 = 1
            r4.readEndOfStream = r5
            boolean r5 = r4.streamIsFinal
            if (r5 == 0) goto L17
            goto L18
        L17:
            r0 = -3
        L18:
            return r0
        L19:
            long r0 = r6.timeUs
            long r2 = r4.streamOffsetUs
            long r0 = r0 + r2
            r6.timeUs = r0
            goto L3c
        L21:
            r6 = -5
            if (r7 != r6) goto L3c
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r5.format
            long r0 = r6.subsampleOffsetUs
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3c
            long r0 = r6.subsampleOffsetUs
            long r2 = r4.streamOffsetUs
            long r0 = r0 + r2
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r6.copyWithSubsampleOffsetUs(r0)
            r5.format = r6
        L3c:
            return r7
    }

    @Override
    public final void replaceStream(com.mbridge.msdk.playercommon.exoplayer2.Format[] r2, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r3, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            boolean r0 = r1.streamIsFinal
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.stream = r3
            r3 = 0
            r1.readEndOfStream = r3
            r1.streamFormats = r2
            r1.streamOffsetUs = r4
            r1.onStreamChanged(r2, r4)
            return
    }

    @Override
    public final void resetPosition(long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r0 = 0
            r1.streamIsFinal = r0
            r1.readEndOfStream = r0
            r1.onPositionReset(r2, r0)
            return
    }

    @Override
    public final void setCurrentStreamFinal() {
            r1 = this;
            r0 = 1
            r1.streamIsFinal = r0
            return
    }

    @Override
    public final void setIndex(int r1) {
            r0 = this;
            r0.index = r1
            return
    }

    protected int skipSource(long r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r3.stream
            long r1 = r3.streamOffsetUs
            long r4 = r4 - r1
            int r4 = r0.skipData(r4)
            return r4
    }

    @Override
    public final void start() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            int r0 = r2.state
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            r0 = 2
            r2.state = r0
            r2.onStarted()
            return
    }

    @Override
    public final void stop() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r3 = this;
            int r0 = r3.state
            r1 = 1
            r2 = 2
            if (r0 != r2) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r3.state = r1
            r3.onStopped()
            return
    }

    @Override
    public int supportsMixedMimeTypeAdaptation() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r0 = 0
            return r0
    }
}
