package com.kwad.sdk.core.video.a;

public interface c {

    public interface a {
        void aw(int r1);
    }

    public interface b {
        void os();
    }

    public interface c {
        boolean j(int r1, int r2);
    }

    public interface d {
        boolean k(int r1, int r2);
    }

    public interface e {
        void a(com.kwad.sdk.core.video.a.c r1);
    }

    public interface f {
        void ot();
    }

    public interface g {
        void a(android.media.TimedText r1);
    }

    public interface h {
        void i(int r1, int r2);
    }

    void a(com.kwad.sdk.contentalliance.a.a.b r1);

    void a(com.kwad.sdk.core.video.a.c.a r1);

    void a(com.kwad.sdk.core.video.a.c.b r1);

    void a(com.kwad.sdk.core.video.a.c.c r1);

    void a(com.kwad.sdk.core.video.a.c.f r1);

    void a(com.kwad.sdk.core.video.a.c.g r1);

    void a(com.kwad.sdk.core.video.a.c.h r1);

    void b(com.kwad.sdk.core.video.a.c.e r1);

    void c(com.kwad.sdk.core.video.a.c.d r1);

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

    void setDataSource(java.io.FileDescriptor r1);

    void setDataSource(java.lang.String r1);

    void setDisplay(android.view.SurfaceHolder r1);

    void setLooping(boolean r1);

    void setScreenOnWhilePlaying(boolean r1);

    void setSpeed(float r1);

    void setSurface(android.view.Surface r1);

    void setVolume(float r1, float r2);

    void start();

    void stop();
}
