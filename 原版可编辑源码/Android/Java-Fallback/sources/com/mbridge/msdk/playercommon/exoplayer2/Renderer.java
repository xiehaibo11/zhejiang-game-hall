package com.mbridge.msdk.playercommon.exoplayer2;

public interface Renderer extends com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target {
    public static final int STATE_DISABLED = 0;
    public static final int STATE_ENABLED = 1;
    public static final int STATE_STARTED = 2;

    public @interface State {
    }

    void disable();

    void enable(com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r1, com.mbridge.msdk.playercommon.exoplayer2.Format[] r2, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r3, long r4, boolean r6, long r7) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities getCapabilities();

    com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock getMediaClock();

    int getState();

    com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream getStream();

    int getTrackType();

    boolean hasReadStreamToEnd();

    boolean isCurrentStreamFinal();

    boolean isEnded();

    boolean isReady();

    void maybeThrowStreamError() throws java.io.IOException;

    void render(long r1, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    void replaceStream(com.mbridge.msdk.playercommon.exoplayer2.Format[] r1, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r2, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    void resetPosition(long r1) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    void setCurrentStreamFinal();

    void setIndex(int r1);

    void start() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    void stop() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;
}
