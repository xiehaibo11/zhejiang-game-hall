package com.mbridge.msdk.playercommon.exoplayer2;

import com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;
import com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock;
import java.io.IOException;

public abstract class NoSampleRenderer implements Renderer, RendererCapabilities {
    private RendererConfiguration configuration;
    private int index;
    private int state;
    private SampleStream stream;
    private boolean streamIsFinal;

    @Override
    public final RendererCapabilities getCapabilities() {
        return this;
    }

    @Override
    public MediaClock getMediaClock() {
        return null;
    }

    @Override
    public final int getTrackType() {
        return 5;
    }

    @Override
    public void handleMessage(int i, Object obj) throws ExoPlaybackException {
    }

    @Override
    public final boolean hasReadStreamToEnd() {
        return true;
    }

    @Override
    public boolean isEnded() {
        return true;
    }

    @Override
    public boolean isReady() {
        return true;
    }

    @Override
    public final void maybeThrowStreamError() throws IOException {
    }

    protected void onDisabled() {
    }

    protected void onEnabled(boolean z) throws ExoPlaybackException {
    }

    protected void onPositionReset(long j, boolean z) throws ExoPlaybackException {
    }

    protected void onRendererOffsetChanged(long j) throws ExoPlaybackException {
    }

    protected void onStarted() throws ExoPlaybackException {
    }

    protected void onStopped() throws ExoPlaybackException {
    }

    @Override
    public int supportsFormat(Format format) throws ExoPlaybackException {
        return 0;
    }

    @Override
    public int supportsMixedMimeTypeAdaptation() throws ExoPlaybackException {
        return 0;
    }

    @Override
    public final void setIndex(int i) {
        this.index = i;
    }

    @Override
    public final int getState() {
        return this.state;
    }

    @Override
    public final void enable(RendererConfiguration rendererConfiguration, Format[] formatArr, SampleStream sampleStream, long j, boolean z, long j2) throws ExoPlaybackException {
        Assertions.checkState(this.state == 0);
        this.configuration = rendererConfiguration;
        this.state = 1;
        onEnabled(z);
        replaceStream(formatArr, sampleStream, j2);
        onPositionReset(j, z);
    }

    @Override
    public final void start() throws ExoPlaybackException {
        Assertions.checkState(this.state == 1);
        this.state = 2;
        onStarted();
    }

    @Override
    public final void replaceStream(Format[] formatArr, SampleStream sampleStream, long j) throws ExoPlaybackException {
        Assertions.checkState(!this.streamIsFinal);
        this.stream = sampleStream;
        onRendererOffsetChanged(j);
    }

    @Override
    public final SampleStream getStream() {
        return this.stream;
    }

    @Override
    public final void setCurrentStreamFinal() {
        this.streamIsFinal = true;
    }

    @Override
    public final boolean isCurrentStreamFinal() {
        return this.streamIsFinal;
    }

    @Override
    public final void resetPosition(long j) throws ExoPlaybackException {
        this.streamIsFinal = false;
        onPositionReset(j, false);
    }

    @Override
    public final void stop() throws ExoPlaybackException {
        Assertions.checkState(this.state == 2);
        this.state = 1;
        onStopped();
    }

    @Override
    public final void disable() {
        Assertions.checkState(this.state == 1);
        this.state = 0;
        this.stream = null;
        this.streamIsFinal = false;
        onDisabled();
    }

    protected final RendererConfiguration getConfiguration() {
        return this.configuration;
    }

    protected final int getIndex() {
        return this.index;
    }
}
