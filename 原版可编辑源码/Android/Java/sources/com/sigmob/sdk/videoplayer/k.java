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

public class k extends j implements MediaPlayer.OnBufferingUpdateListener, MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener, MediaPlayer.OnInfoListener, MediaPlayer.OnPreparedListener, MediaPlayer.OnSeekCompleteListener, MediaPlayer.OnVideoSizeChangedListener {
    private static final String g = "VideoPlayerMediaSystem";
    public MediaPlayer f;
    private boolean h;

    public k(i iVar) {
        super(iVar);
    }

    @Override
    public void a() {
        if (this.c == null) {
            return;
        }
        this.c.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.f == null) {
                    return;
                }
                k.this.f.start();
            }
        });
    }

    @Override
    public void a(final float f) {
        if (this.c == null) {
            return;
        }
        this.c.post(new Runnable() {
            @Override
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

    @Override
    public void a(final long j) {
        if (this.c == null) {
            return;
        }
        this.c.post(new Runnable() {
            @Override
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

    @Override
    public void a(Surface surface) {
        SigmobLog.d("setSurface() called with: surface = [" + surface + "]");
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return;
        }
        mediaPlayer.setSurface(surface);
    }

    @Override
    public void b() {
        c();
        this.h = true;
    }

    @Override
    public void b(float f) {
        if (this.f != null && Build.VERSION.SDK_INT >= 23) {
            PlaybackParams playbackParams = this.f.getPlaybackParams();
            playbackParams.setSpeed(f);
            this.f.setPlaybackParams(playbackParams);
        }
    }

    @Override
    public void c() {
        if (this.h && this.f != null && this.a != null) {
            this.h = false;
            this.f.setSurface(new Surface(this.a));
            return;
        }
        f();
        this.b = new HandlerThread(g);
        this.b.start();
        this.c = new Handler(this.b.getLooper());
        this.d = new Handler();
        this.c.post(new Runnable() {
            @Override
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
                    if (k.this.a != null) {
                        k.this.h = false;
                        k.this.f.setSurface(new Surface(k.this.a));
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    @Override
    public void d() {
        if (this.c == null || this.f == null) {
            return;
        }
        this.c.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.f == null) {
                    return;
                }
                k.this.f.pause();
            }
        });
    }

    @Override
    public boolean e() {
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return false;
        }
        return mediaPlayer.isPlaying();
    }

    @Override
    public void f() {
        if (this.c == null || this.b == null || this.f == null) {
            return;
        }
        final HandlerThread handlerThread = this.b;
        final MediaPlayer mediaPlayer = this.f;
        this.c.post(new Runnable() {
            @Override
            public void run() {
                mediaPlayer.setSurface(null);
                mediaPlayer.release();
                handlerThread.quit();
                k.this.c = null;
            }
        });
        this.f = null;
    }

    @Override
    public long g() {
        if (this.f != null) {
            return r0.getCurrentPosition();
        }
        return 0L;
    }

    @Override
    public int h() {
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return 0;
        }
        mediaPlayer.getVideoWidth();
        return 0;
    }

    @Override
    public int i() {
        MediaPlayer mediaPlayer = this.f;
        if (mediaPlayer == null) {
            return 0;
        }
        mediaPlayer.getVideoHeight();
        return 0;
    }

    @Override
    public long j() {
        if (this.f != null) {
            return r0.getDuration();
        }
        return 0L;
    }

    @Override
    public void onBufferingUpdate(MediaPlayer mediaPlayer, final int i) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.setBufferProgress(i);
            }
        });
    }

    @Override
    public void onCompletion(MediaPlayer mediaPlayer) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.o();
            }
        });
    }

    @Override
    public boolean onError(MediaPlayer mediaPlayer, final int i, final int i2) {
        if (this.d == null) {
            return false;
        }
        this.d.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.a(i, i2);
            }
        });
        return true;
    }

    @Override
    public boolean onInfo(MediaPlayer mediaPlayer, final int i, final int i2) {
        if (this.d != null && this.e != null) {
            this.d.post(new Runnable() {
                @Override
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

    @Override
    public void onPrepared(MediaPlayer mediaPlayer) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.n();
            }
        });
    }

    @Override
    public void onSeekComplete(MediaPlayer mediaPlayer) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.p();
            }
        });
    }

    @Override
    public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
        if (this.e == null) {
            return;
        }
        SigmobLog.d("onSurfaceTextureAvailable() called with: surface = [" + surfaceTexture + "], width = [" + i + "], height = [" + i2 + "]");
        if (this.a != null) {
            this.e.setSurfaceTexture(this.a);
        } else {
            this.a = surfaceTexture;
            c();
        }
    }

    @Override
    public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
        SigmobLog.d("onSurfaceTextureDestroyed() called with: surface = [" + surfaceTexture + "]");
        return false;
    }

    @Override
    public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
        SigmobLog.d("onSurfaceTextureSizeChanged() called with: surface = [" + surfaceTexture + "], width = [" + i + "], height = [" + i2 + "]");
    }

    @Override
    public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
    }

    @Override
    public void onVideoSizeChanged(MediaPlayer mediaPlayer, final int i, final int i2) {
        if (this.d == null) {
            return;
        }
        this.d.post(new Runnable() {
            @Override
            public void run() {
                if (k.this.e == null) {
                    return;
                }
                k.this.e.c(i, i2);
            }
        });
    }
}
