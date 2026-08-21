package com.mbridge.msdk.playercommon.exoplayer2;

public interface Player {
    public static final int DISCONTINUITY_REASON_AD_INSERTION = 3;
    public static final int DISCONTINUITY_REASON_INTERNAL = 4;
    public static final int DISCONTINUITY_REASON_PERIOD_TRANSITION = 0;
    public static final int DISCONTINUITY_REASON_SEEK = 1;
    public static final int DISCONTINUITY_REASON_SEEK_ADJUSTMENT = 2;
    public static final int REPEAT_MODE_ALL = 2;
    public static final int REPEAT_MODE_OFF = 0;
    public static final int REPEAT_MODE_ONE = 1;
    public static final int STATE_BUFFERING = 2;
    public static final int STATE_ENDED = 4;
    public static final int STATE_IDLE = 1;
    public static final int STATE_READY = 3;
    public static final int TIMELINE_CHANGE_REASON_DYNAMIC = 2;
    public static final int TIMELINE_CHANGE_REASON_PREPARED = 0;
    public static final int TIMELINE_CHANGE_REASON_RESET = 1;

    public static abstract class DefaultEventListener implements com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener {
        public DefaultEventListener() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onLoadingChanged(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1) {
                r0 = this;
                return
        }

        @Override
        public void onPlayerError(com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r1) {
                r0 = this;
                return
        }

        @Override
        public void onPlayerStateChanged(boolean r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public void onPositionDiscontinuity(int r1) {
                r0 = this;
                return
        }

        @Override
        public void onRepeatModeChanged(int r1) {
                r0 = this;
                return
        }

        @Override
        public void onSeekProcessed() {
                r0 = this;
                return
        }

        @Override
        public void onShuffleModeEnabledChanged(boolean r1) {
                r0 = this;
                return
        }

        public void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2) {
                r0 = this;
                return
        }

        @Override
        public void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2, int r3) {
                r0 = this;
                r0.onTimelineChanged(r1, r2)
                return
        }

        @Override
        public void onTracksChanged(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2) {
                r0 = this;
                return
        }
    }

    public @interface DiscontinuityReason {
    }

    public interface EventListener {
        void onLoadingChanged(boolean r1);

        void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1);

        void onPlayerError(com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r1);

        void onPlayerStateChanged(boolean r1, int r2);

        void onPositionDiscontinuity(int r1);

        void onRepeatModeChanged(int r1);

        void onSeekProcessed();

        void onShuffleModeEnabledChanged(boolean r1);

        void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2, int r3);

        void onTracksChanged(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2);
    }

    public @interface RepeatMode {
    }

    public interface TextComponent {
        void addTextOutput(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r1);

        void removeTextOutput(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r1);
    }

    public @interface TimelineChangeReason {
    }

    public interface VideoComponent {
        void addVideoListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener r1);

        void clearVideoSurface();

        void clearVideoSurface(android.view.Surface r1);

        void clearVideoSurfaceHolder(android.view.SurfaceHolder r1);

        void clearVideoSurfaceView(android.view.SurfaceView r1);

        void clearVideoTextureView(android.view.TextureView r1);

        int getVideoScalingMode();

        void removeVideoListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener r1);

        void setVideoScalingMode(int r1);

        void setVideoSurface(android.view.Surface r1);

        void setVideoSurfaceHolder(android.view.SurfaceHolder r1);

        void setVideoSurfaceView(android.view.SurfaceView r1);

        void setVideoTextureView(android.view.TextureView r1);
    }

    void addListener(com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener r1);

    int getBufferedPercentage();

    long getBufferedPosition();

    long getContentPosition();

    int getCurrentAdGroupIndex();

    int getCurrentAdIndexInAdGroup();

    java.lang.Object getCurrentManifest();

    int getCurrentPeriodIndex();

    long getCurrentPosition();

    java.lang.Object getCurrentTag();

    com.mbridge.msdk.playercommon.exoplayer2.Timeline getCurrentTimeline();

    com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getCurrentTrackGroups();

    com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray getCurrentTrackSelections();

    int getCurrentWindowIndex();

    long getDuration();

    int getNextWindowIndex();

    boolean getPlayWhenReady();

    com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException getPlaybackError();

    com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters();

    int getPlaybackState();

    int getPreviousWindowIndex();

    int getRendererCount();

    int getRendererType(int r1);

    int getRepeatMode();

    boolean getShuffleModeEnabled();

    com.mbridge.msdk.playercommon.exoplayer2.Player.TextComponent getTextComponent();

    com.mbridge.msdk.playercommon.exoplayer2.Player.VideoComponent getVideoComponent();

    boolean isCurrentWindowDynamic();

    boolean isCurrentWindowSeekable();

    boolean isLoading();

    boolean isPlayingAd();

    void release();

    void removeListener(com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener r1);

    void seekTo(int r1, long r2);

    void seekTo(long r1);

    void seekToDefaultPosition();

    void seekToDefaultPosition(int r1);

    void setPlayWhenReady(boolean r1);

    void setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1);

    void setRepeatMode(int r1);

    void setShuffleModeEnabled(boolean r1);

    void stop();

    void stop(boolean r1);
}
