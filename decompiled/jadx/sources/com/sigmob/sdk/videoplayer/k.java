package com.sigmob.sdk.videoplayer;

import android.graphics.SurfaceTexture;
import android.media.MediaPlayer;
import android.media.PlaybackParams;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.Surface;
import com.czhj.sdk.logger.SigmobLog;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class k extends j implements MediaPlayer.OnBufferingUpdateListener, MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener, MediaPlayer.OnInfoListener, MediaPlayer.OnPreparedListener, MediaPlayer.OnSeekCompleteListener, MediaPlayer.OnVideoSizeChangedListener {
    private static final String g = "VideoPlayerMediaSystem";
    public MediaPlayer f;
    private boolean h;

    public k(i iVar) {
        super(iVar);
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void a() {
        if (this.c == null) {
            return;
        }
        this.c.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.6
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.f == null) {
                    return;
                }
                k.this.f.start();
            }
        });
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void a(final float f) {
        if (this.c == null) {
            return;
        }
        this.c.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.10
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.f == null) {
                    return;
                }
                MediaPlayer mediaPlayer = k.this.f;
                float f2 = f;
                mediaPlayer.setVolume(f2, f2);
            }
        });
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void a(final long j) {
        if (this.c == null) {
            return;
        }
        this.c.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.8
            @Override // java.lang.Runnable
            public void run() {
                try {
                    if (k.this.f == null) {
                        return;
                    }
                    k.this.f.seekTo((int) j);
                } catch (IllegalStateException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void a(Surface surface) {
        SigmobLog.d("setSurface() called with: surface = [" + surface + "]");
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return;
        }
        mediaPlayer.setSurface(surface);
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void b() {
        c();
        this.h = true;
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void b(float f) {
        if (this.f != null && Build.VERSION.SDK_INT >= 23) {
            PlaybackParams playbackParams = this.f.getPlaybackParams();
            playbackParams.setSpeed(f);
            this.f.setPlaybackParams(playbackParams);
        }
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void c() {
        if (this.h && this.f != null && this.f5258a != null) {
            this.h = false;
            this.f.setSurface(new Surface(this.f5258a));
            return;
        }
        f();
        this.b = new HandlerThread(g);
        this.b.start();
        this.c = new Handler(this.b.getLooper());
        this.d = new Handler();
        this.c.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    h videoPlayerDataSource = k.this.e.getVideoPlayerDataSource();
                    k.this.f = new MediaPlayer();
                    k.this.f.setAudioStreamType(3);
                    k.this.f.setLooping(videoPlayerDataSource.e);
                    k.this.f.setOnPreparedListener(k.this);
                    k.this.f.setOnCompletionListener(k.this);
                    k.this.f.setOnBufferingUpdateListener(k.this);
                    k.this.f.setScreenOnWhilePlaying(true);
                    k.this.f.setOnSeekCompleteListener(k.this);
                    k.this.f.setOnErrorListener(k.this);
                    k.this.f.setOnInfoListener(k.this);
                    k.this.f.setOnVideoSizeChangedListener(k.this);
                    MediaPlayer.class.getDeclaredMethod("setDataSource", String.class, Map.class).invoke(k.this.f, videoPlayerDataSource.a().toString(), videoPlayerDataSource.d);
                    k.this.f.prepareAsync();
                    if (k.this.f5258a != null) {
                        k.this.h = false;
                        k.this.f.setSurface(new Surface(k.this.f5258a));
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void d() {
        if (this.c == null || this.f == null) {
            return;
        }
        this.c.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.7
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.f == null) {
                    return;
                }
                k.this.f.pause();
            }
        });
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public boolean e() {
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return false;
        }
        return mediaPlayer.isPlaying();
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public void f() {
        if (this.c == null || this.b == null || this.f == null) {
            return;
        }
        final HandlerThread handlerThread = this.b;
        final MediaPlayer mediaPlayer = this.f;
        this.c.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.9
            @Override // java.lang.Runnable
            public void run() {
                mediaPlayer.setSurface(null);
                mediaPlayer.release();
                handlerThread.quit();
                k.this.c = null;
            }
        });
        this.f = null;
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public long g() {
        if (this.f != null) {
            return r0.getCurrentPosition();
        }
        return 0L;
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public int h() {
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return 0;
        }
        mediaPlayer.getVideoWidth();
        return 0;
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public int i() {
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return 0;
        }
        mediaPlayer.getVideoHeight();
        return 0;
    }

    @Override // com.sigmob.sdk.videoplayer.j
    public long j() {
        if (this.f != null) {
            return r0.getDuration();
        }
        return 0L;
    }

    @Override // android.media.MediaPlayer.OnBufferingUpdateListener
    public void onBufferingUpdate(MediaPlayer mediaPlayer, final int i) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.13
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.setBufferProgress(i);
            }
        });
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public void onCompletion(MediaPlayer mediaPlayer) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.12
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.o();
            }
        });
    }

    @Override // android.media.MediaPlayer.OnErrorListener
    public boolean onError(MediaPlayer mediaPlayer, final int i, final int i2) {
        if (this.d == null) {
            return false;
        }
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.3
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.a(i, i2);
            }
        });
        return true;
    }

    @Override // android.media.MediaPlayer.OnInfoListener
    public boolean onInfo(MediaPlayer mediaPlayer, final int i, final int i2) {
        if (this.d != null && this.e != null) {
            this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.4
                @Override // java.lang.Runnable
                public void run() {
                    if (k.this.e == null) {
                        return;
                    }
                    k.this.e.b(i, i2);
                }
            });
        }
        return false;
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public void onPrepared(MediaPlayer mediaPlayer) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.11
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.n();
            }
        });
    }

    @Override // android.media.MediaPlayer.OnSeekCompleteListener
    public void onSeekComplete(MediaPlayer mediaPlayer) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.2
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.p();
            }
        });
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
        if (this.e == null) {
            return;
        }
        SigmobLog.d("onSurfaceTextureAvailable() called with: surface = [" + surfaceTexture + "], width = [" + i + "], height = [" + i2 + "]");
        if (this.f5258a != null) {
            this.e.setSurfaceTexture(this.f5258a);
        } else {
            this.f5258a = surfaceTexture;
            c();
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
        SigmobLog.d("onSurfaceTextureDestroyed() called with: surface = [" + surfaceTexture + "]");
        return false;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
        SigmobLog.d("onSurfaceTextureSizeChanged() called with: surface = [" + surfaceTexture + "], width = [" + i + "], height = [" + i2 + "]");
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
    }

    @Override // android.media.MediaPlayer.OnVideoSizeChangedListener
    public void onVideoSizeChanged(MediaPlayer mediaPlayer, final int i, final int i2) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.videoplayer.k.5
            @Override // java.lang.Runnable
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.c(i, i2);
            }
        });
    }
}
