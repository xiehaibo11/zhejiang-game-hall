package com.kwad.sdk.core.video.a;

import android.content.Context;
import android.media.TimedText;
import android.net.Uri;
import android.view.Surface;
import android.view.SurfaceHolder;
import java.io.FileDescriptor;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public interface c {

    public interface a {
        void aw(int i);
    }

    public interface b {
        void os();
    }

    /* JADX INFO: renamed from: com.kwad.sdk.core.video.a.c$c, reason: collision with other inner class name */
    public interface InterfaceC0216c {
        boolean j(int i, int i2);
    }

    public interface d {
        boolean k(int i, int i2);
    }

    public interface e {
        void a(c cVar);
    }

    public interface f {
        void ot();
    }

    public interface g {
        void a(TimedText timedText);
    }

    public interface h {
        void i(int i, int i2);
    }

    void a(com.kwad.sdk.contentalliance.a.a.b bVar);

    void a(a aVar);

    void a(b bVar);

    void a(InterfaceC0216c interfaceC0216c);

    void a(f fVar);

    void a(g gVar);

    void a(h hVar);

    void b(e eVar);

    void c(d dVar);

    int getAudioSessionId();

    String getCurrentPlayingUrl();

    long getCurrentPosition();

    String getDataSource();

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

    void seekTo(long j);

    void setAudioStreamType(int i);

    void setDataSource(Context context, Uri uri);

    void setDataSource(Context context, Uri uri, Map<String, String> map);

    void setDataSource(FileDescriptor fileDescriptor);

    void setDataSource(String str);

    void setDisplay(SurfaceHolder surfaceHolder);

    void setLooping(boolean z);

    void setScreenOnWhilePlaying(boolean z);

    void setSpeed(float f2);

    void setSurface(Surface surface);

    void setVolume(float f2, float f3);

    void start();

    void stop();
}
