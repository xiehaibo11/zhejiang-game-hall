package com.kwad.components.offline.api.core.video;

public interface IMediaPlayer {

    public interface OnBufferingUpdateListener {
        void onBufferingUpdate(com.kwad.components.offline.api.core.video.IMediaPlayer r1, int r2);
    }

    public interface OnCompletionListener {
        void onCompletion(com.kwad.components.offline.api.core.video.IMediaPlayer r1);
    }

    public interface OnErrorListener {
        boolean onError(com.kwad.components.offline.api.core.video.IMediaPlayer r1, int r2, int r3);
    }

    public interface OnInfoListener {
        boolean onInfo(com.kwad.components.offline.api.core.video.IMediaPlayer r1, int r2, int r3);
    }

    public interface OnPreparedListener {
        void onPrepared(com.kwad.components.offline.api.core.video.IMediaPlayer r1);
    }

    public interface OnSeekCompleteListener {
        void onSeekComplete(com.kwad.components.offline.api.core.video.IMediaPlayer r1);
    }

    public interface OnTimedTextListener {
        void onTimedText(com.kwad.components.offline.api.core.video.IMediaPlayer r1, android.media.TimedText r2);
    }

    public interface OnVideoSizeChangedListener {
        void onVideoSizeChanged(com.kwad.components.offline.api.core.video.IMediaPlayer r1, int r2, int r3);
    }

    int getAudioSessionId();

    java.lang.String getCurrentPlayingUrl();

    long getCurrentPosition();

    java.lang.String getDataSource();

    long getDuration();

    int getMediaPlayerType();

    int getVideoHeight();

    int getVideoWidth();

    boolean isLooping();

    boolean isPlaying();

    void pause();

    boolean prepareAsync();

    void release();

    void reset();

    void seekTo(long r1);

    void setAudioStreamType(int r1);

    void setDataSource(android.content.Context r1, android.net.Uri r2);

    void setDataSource(android.content.Context r1, android.net.Uri r2, java.util.Map<java.lang.String, java.lang.String> r3);

    void setDataSource(com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo r1);

    void setDataSource(java.io.FileDescriptor r1);

    void setDataSource(java.lang.String r1);

    void setDisplay(android.view.SurfaceHolder r1);

    void setLooping(boolean r1);

    void setOnBufferingUpdateListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnBufferingUpdateListener r1);

    void setOnCompletionListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnCompletionListener r1);

    void setOnErrorListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnErrorListener r1);

    void setOnInfoListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnInfoListener r1);

    void setOnPreparedListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnPreparedListener r1);

    void setOnSeekCompleteListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnSeekCompleteListener r1);

    void setOnTimedTextListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnTimedTextListener r1);

    void setOnVideoSizeChangedListener(com.kwad.components.offline.api.core.video.IMediaPlayer.OnVideoSizeChangedListener r1);

    void setScreenOnWhilePlaying(boolean r1);

    void setSpeed(float r1);

    void setSurface(android.view.Surface r1);

    void setVolume(float r1, float r2);

    void start();

    void stop();
}
