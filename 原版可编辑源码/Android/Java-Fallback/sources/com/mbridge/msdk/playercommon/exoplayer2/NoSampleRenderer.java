package com.mbridge.msdk.playercommon.exoplayer2;

public abstract class NoSampleRenderer implements com.mbridge.msdk.playercommon.exoplayer2.Renderer, com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities {
    private com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration configuration;
    private int index;
    private int state;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream stream;
    private boolean streamIsFinal;

    public NoSampleRenderer() {
            r0 = this;
            r0.<init>()
            return
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

    @Override
    public final int getTrackType() {
            r1 = this;
            r0 = 5
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
            r0 = 1
            return r0
    }

    @Override
    public final boolean isCurrentStreamFinal() {
            r1 = this;
            boolean r0 = r1.streamIsFinal
            return r0
    }

    @Override
    public boolean isEnded() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean isReady() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void maybeThrowStreamError() throws java.io.IOException {
            r0 = this;
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

    protected void onRendererOffsetChanged(long r1) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
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

    @Override
    public final void replaceStream(com.mbridge.msdk.playercommon.exoplayer2.Format[] r1, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r2, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            boolean r1 = r0.streamIsFinal
            r1 = r1 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            r0.stream = r2
            r0.onRendererOffsetChanged(r3)
            return
    }

    @Override
    public final void resetPosition(long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r0 = 0
            r1.streamIsFinal = r0
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
    public int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r1) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int supportsMixedMimeTypeAdaptation() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r0 = 0
            return r0
    }
}
