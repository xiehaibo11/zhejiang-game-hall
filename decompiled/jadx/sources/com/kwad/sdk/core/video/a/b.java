package com.kwad.sdk.core.video.a;

import android.content.Context;
import android.media.MediaDataSource;
import android.media.MediaPlayer;
import android.media.PlaybackParams;
import android.media.TimedText;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.view.Surface;
import android.view.SurfaceHolder;
import com.kwad.sdk.service.ServiceProvider;
import com.sigmob.sdk.base.h;
import cz.msebera.android.httpclient.client.cache.HeaderConstants;
import java.io.FileDescriptor;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.sdk.core.video.a.a {
    private final MediaPlayer avE;
    private final a avF;
    private String avG;
    private MediaDataSource avH;
    private final Object avI;
    private boolean avJ;

    static class a implements MediaPlayer.OnBufferingUpdateListener, MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener, MediaPlayer.OnInfoListener, MediaPlayer.OnPreparedListener, MediaPlayer.OnSeekCompleteListener, MediaPlayer.OnTimedTextListener, MediaPlayer.OnVideoSizeChangedListener {
        final WeakReference<b> mWeakMediaPlayer;

        a(b bVar) {
            this.mWeakMediaPlayer = new WeakReference<>(bVar);
        }

        @Override // android.media.MediaPlayer.OnBufferingUpdateListener
        public final void onBufferingUpdate(MediaPlayer mediaPlayer, int i) {
            b bVar = this.mWeakMediaPlayer.get();
            if (bVar != null) {
                bVar.notifyOnBufferingUpdate(i);
            }
        }

        @Override // android.media.MediaPlayer.OnCompletionListener
        public final void onCompletion(MediaPlayer mediaPlayer) {
            b bVar = this.mWeakMediaPlayer.get();
            if (bVar != null) {
                bVar.notifyOnCompletion();
            }
        }

        @Override // android.media.MediaPlayer.OnErrorListener
        public final boolean onError(MediaPlayer mediaPlayer, int i, int i2) {
            b bVar = this.mWeakMediaPlayer.get();
            return bVar != null && bVar.notifyOnError(i, i2);
        }

        @Override // android.media.MediaPlayer.OnInfoListener
        public final boolean onInfo(MediaPlayer mediaPlayer, int i, int i2) {
            b bVar = this.mWeakMediaPlayer.get();
            return bVar != null && bVar.notifyOnInfo(i, i2);
        }

        @Override // android.media.MediaPlayer.OnPreparedListener
        public final void onPrepared(MediaPlayer mediaPlayer) {
            b bVar = this.mWeakMediaPlayer.get();
            if (bVar != null) {
                bVar.notifyOnPrepared();
            }
        }

        @Override // android.media.MediaPlayer.OnSeekCompleteListener
        public final void onSeekComplete(MediaPlayer mediaPlayer) {
            b bVar = this.mWeakMediaPlayer.get();
            if (bVar != null) {
                bVar.notifyOnSeekComplete();
            }
        }

        @Override // android.media.MediaPlayer.OnTimedTextListener
        public final void onTimedText(MediaPlayer mediaPlayer, TimedText timedText) {
            b bVar = this.mWeakMediaPlayer.get();
            if (bVar != null) {
                bVar.b(timedText);
            }
        }

        @Override // android.media.MediaPlayer.OnVideoSizeChangedListener
        public final void onVideoSizeChanged(MediaPlayer mediaPlayer, int i, int i2) {
            b bVar = this.mWeakMediaPlayer.get();
            if (bVar != null) {
                bVar.u(i, i2);
            }
        }
    }

    public b() {
        MediaPlayer mediaPlayer;
        Object obj = new Object();
        this.avI = obj;
        synchronized (obj) {
            mediaPlayer = new MediaPlayer();
            this.avE = mediaPlayer;
        }
        mediaPlayer.setAudioStreamType(3);
        this.avF = new a(this);
        Dn();
        setLooping(false);
    }

    private void Dm() {
        MediaDataSource mediaDataSource = this.avH;
        if (mediaDataSource != null) {
            try {
                mediaDataSource.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
            this.avH = null;
        }
    }

    private void Dn() {
        this.avE.setOnPreparedListener(this.avF);
        this.avE.setOnBufferingUpdateListener(this.avF);
        this.avE.setOnCompletionListener(this.avF);
        this.avE.setOnSeekCompleteListener(this.avF);
        this.avE.setOnVideoSizeChangedListener(this.avF);
        this.avE.setOnErrorListener(this.avF);
        this.avE.setOnInfoListener(this.avF);
        this.avE.setOnTimedTextListener(this.avF);
    }

    private void Do() {
        this.avE.setOnPreparedListener(null);
        this.avE.setOnBufferingUpdateListener(null);
        this.avE.setOnCompletionListener(null);
        this.avE.setOnSeekCompleteListener(null);
        this.avE.setOnVideoSizeChangedListener(null);
        this.avE.setOnErrorListener(null);
        this.avE.setOnInfoListener(null);
        this.avE.setOnTimedTextListener(null);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void a(com.kwad.sdk.contentalliance.a.a.b bVar) throws IOException {
        if (!bVar.isNoCache) {
            setDataSource(bVar.videoUrl);
            return;
        }
        HashMap map = new HashMap();
        map.put("Content-Type", "video/mp4");
        map.put("Accept-Ranges", "bytes");
        map.put("Status", "206");
        map.put("Cache-control", HeaderConstants.CACHE_CONTROL_NO_CACHE);
        setDataSource(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext(), Uri.parse(bVar.videoUrl), map);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getAudioSessionId() {
        return this.avE.getAudioSessionId();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final String getCurrentPlayingUrl() {
        return "";
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final long getCurrentPosition() {
        try {
            return this.avE.getCurrentPosition();
        } catch (IllegalStateException unused) {
            return 0L;
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final String getDataSource() {
        return this.avG;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final long getDuration() {
        try {
            return this.avE.getDuration();
        } catch (IllegalStateException unused) {
            return 0L;
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getMediaPlayerType() {
        return 1;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getVideoHeight() {
        return this.avE.getVideoHeight();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getVideoWidth() {
        return this.avE.getVideoWidth();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final boolean isLooping() {
        return this.avE.isLooping();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final boolean isPlaying() {
        try {
            return this.avE.isPlaying();
        } catch (IllegalStateException unused) {
            return false;
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void pause() {
        this.avE.pause();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final boolean prepareAsync() {
        this.avE.prepareAsync();
        return true;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void release() {
        try {
            this.avJ = true;
            this.avE.release();
            Dm();
            resetListeners();
            Do();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void reset() {
        try {
            this.avE.reset();
        } catch (IllegalStateException unused) {
        }
        Dm();
        resetListeners();
        Dn();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void seekTo(long j) {
        if (Build.VERSION.SDK_INT >= 26) {
            this.avE.seekTo((int) j, 3);
        } else {
            this.avE.seekTo((int) j);
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setAudioStreamType(int i) {
        this.avE.setAudioStreamType(i);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(Context context, Uri uri) throws IOException {
        this.avE.setDataSource(context, uri);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(Context context, Uri uri, Map<String, String> map) throws IOException {
        this.avE.setDataSource(context, uri, map);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(FileDescriptor fileDescriptor) throws IOException {
        this.avE.setDataSource(fileDescriptor);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(String str) throws IOException {
        this.avG = str;
        Uri uri = Uri.parse(str);
        String scheme = uri.getScheme();
        if (TextUtils.isEmpty(scheme) || !scheme.equalsIgnoreCase(h.x)) {
            this.avE.setDataSource(str);
        } else {
            this.avE.setDataSource(uri.getPath());
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDisplay(SurfaceHolder surfaceHolder) {
        synchronized (this.avI) {
            if (!this.avJ) {
                this.avE.setDisplay(surfaceHolder);
            }
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setLooping(boolean z) {
        this.avE.setLooping(z);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setScreenOnWhilePlaying(boolean z) {
        this.avE.setScreenOnWhilePlaying(z);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setSpeed(float f) {
        if (Build.VERSION.SDK_INT >= 23) {
            PlaybackParams playbackParams = this.avE.getPlaybackParams();
            if (playbackParams == null) {
                playbackParams = new PlaybackParams();
            }
            playbackParams.setSpeed(f);
            this.avE.setPlaybackParams(playbackParams);
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setSurface(Surface surface) {
        this.avE.setSurface(surface);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setVolume(float f, float f2) {
        this.avE.setVolume(f, f2);
        f(f);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void start() {
        this.avE.start();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void stop() {
        this.avE.stop();
    }
}
