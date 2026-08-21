package com.kwad.sdk.core.video.videoview;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.media.AudioManager;
import android.util.AttributeSet;
import android.view.Surface;
import android.view.TextureView;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.video.a.c;
import com.kwad.sdk.core.video.a.e;
import com.kwad.sdk.core.video.a.f;
import com.kwad.sdk.core.view.AdBasePvFrameLayout;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.g;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.y;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
@Deprecated
public final class a extends AdBasePvFrameLayout implements TextureView.SurfaceTextureListener, c {
    private static AtomicBoolean awa = new AtomicBoolean(false);
    private int RV;
    private com.kwad.sdk.core.video.a.c RW;
    private int RX;
    private long RY;
    private com.kwad.sdk.contentalliance.a.a.b Sa;
    private c.e Sh;
    private c.h Si;
    private c.b Sj;
    private c.InterfaceC0216c Sk;
    private c.d Sl;
    private c.a Sm;
    private SurfaceTexture St;
    private Surface Su;
    private AudioManager avW;
    private com.kwad.sdk.core.video.a avX;
    private b avY;
    private boolean avZ;
    private boolean awb;
    private boolean awc;
    private ImageView awd;
    private com.kwad.sdk.contentalliance.a.a.a cT;
    private FrameLayout hk;
    private Context mContext;
    private Map<String, String> mHeaders;
    private String mUrl;

    public a(Context context) {
        this(context, null);
    }

    private a(Context context, AttributeSet attributeSet) {
        super(context, null);
        this.RV = 0;
        this.avZ = false;
        this.awb = false;
        this.awc = false;
        this.Sh = new c.e() { // from class: com.kwad.sdk.core.video.videoview.a.1
            @Override // com.kwad.sdk.core.video.a.c.e
            public final void a(com.kwad.sdk.core.video.a.c cVar) {
                a.this.RV = 2;
                a.this.avY.onPlayStateChanged(a.this.RV);
                com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "onPrepared ——> STATE_PREPARED");
                cVar.start();
                if (a.this.avZ) {
                    cVar.seekTo((int) y.Q(a.this.mContext, a.this.mUrl));
                }
                if (a.this.RY != 0) {
                    cVar.seekTo((int) a.this.RY);
                }
            }
        };
        this.Si = new c.h() { // from class: com.kwad.sdk.core.video.videoview.a.2
            @Override // com.kwad.sdk.core.video.a.c.h
            public final void i(int i, int i2) {
                if (!a.this.awc || i2 <= i) {
                    a.this.avX.adaptVideoSize(i, i2);
                    com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "onVideoSizeChanged ——> width：" + i + "， height：" + i2);
                }
            }
        };
        this.Sj = new c.b() { // from class: com.kwad.sdk.core.video.videoview.a.3
            @Override // com.kwad.sdk.core.video.a.c.b
            public final void os() {
                if (a.this.RV != 9) {
                    a.this.RV = 9;
                    a.this.avY.onPlayStateChanged(a.this.RV);
                    com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "onCompletion ——> STATE_COMPLETED");
                    a.this.hk.setKeepScreenOn(false);
                }
            }
        };
        this.Sk = new c.InterfaceC0216c() { // from class: com.kwad.sdk.core.video.videoview.a.4
            @Override // com.kwad.sdk.core.video.a.c.InterfaceC0216c
            public final boolean j(int i, int i2) {
                if (i == -38) {
                    return true;
                }
                a.this.RV = -1;
                a.this.avY.m(i, i2);
                a.this.avY.onPlayStateChanged(a.this.RV);
                com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "onError ——> STATE_ERROR ———— what：" + i + ", extra: " + i2);
                return true;
            }
        };
        this.Sl = new c.d() { // from class: com.kwad.sdk.core.video.videoview.a.5
            @Override // com.kwad.sdk.core.video.a.c.d
            public final boolean k(int i, int i2) {
                String str;
                String str2;
                if (i == 3) {
                    a.this.RV = 4;
                    a.this.avY.onPlayStateChanged(a.this.RV);
                    str = "onInfo ——> MEDIA_INFO_VIDEO_RENDERING_START：STATE_PLAYING";
                } else {
                    if (i == 701) {
                        if (a.this.RV == 5 || a.this.RV == 7) {
                            a.this.RV = 7;
                            str2 = "onInfo ——> MEDIA_INFO_BUFFERING_START：STATE_BUFFERING_PAUSED";
                        } else {
                            a.this.RV = 6;
                            str2 = "onInfo ——> MEDIA_INFO_BUFFERING_START：STATE_BUFFERING_PLAYING";
                        }
                        com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", str2);
                        a.this.avY.onPlayStateChanged(a.this.RV);
                        return true;
                    }
                    if (i == 702) {
                        if (a.this.RV == 6) {
                            a.this.RV = 4;
                            a.this.avY.onPlayStateChanged(a.this.RV);
                            com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "onInfo ——> MEDIA_INFO_BUFFERING_END： STATE_PLAYING");
                        }
                        if (a.this.RV != 7) {
                            return true;
                        }
                        a.this.RV = 5;
                        a.this.avY.onPlayStateChanged(a.this.RV);
                        str = "onInfo ——> MEDIA_INFO_BUFFERING_END： STATE_PAUSED";
                    } else if (i == 10001) {
                        if (a.this.avX == null) {
                            return true;
                        }
                        a.this.avX.setRotation(i2);
                        str = "视频旋转角度：" + i2;
                    } else if (i == 801) {
                        str = "视频不能seekTo，为直播视频";
                    } else {
                        str = "onInfo ——> what：" + i;
                    }
                }
                com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", str);
                return true;
            }
        };
        this.Sm = new c.a() { // from class: com.kwad.sdk.core.video.videoview.a.6
            @Override // com.kwad.sdk.core.video.a.c.a
            public final void aw(int i) {
                a.this.RX = i;
            }
        };
        this.mContext = context;
        init();
    }

    private void DA() {
        AudioManager audioManager = this.avW;
        if (audioManager != null) {
            audioManager.abandonAudioFocus(null);
            this.avW = null;
        }
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            cVar.release();
            this.RW = null;
        }
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.sdk.core.video.videoview.a.7
            @Override // java.lang.Runnable
            public final void run() {
                a.this.hk.removeView(a.this.avX);
            }
        });
        Surface surface = this.Su;
        if (surface != null) {
            surface.release();
            this.Su = null;
        }
        SurfaceTexture surfaceTexture = this.St;
        if (surfaceTexture != null) {
            surfaceTexture.release();
            this.St = null;
        }
        this.RV = 0;
    }

    private ImageView Du() {
        ImageView imageView = new ImageView(this.mContext);
        addView(imageView, new FrameLayout.LayoutParams(-1, -1));
        return imageView;
    }

    private boolean Dv() {
        return this.RV == 6;
    }

    private void Dx() {
        if (this.RW == null) {
            f fVar = (f) ServiceProvider.get(f.class);
            com.kwad.sdk.core.video.a.c cVarA = e.a(this.mContext, false, fVar != null && fVar.xs(), fVar != null && fVar.xt());
            this.RW = cVarA;
            cVarA.setAudioStreamType(3);
            if (this.awb) {
                return;
            }
            this.RW.setVolume(0.0f, 0.0f);
        }
    }

    private void Dy() {
        this.hk.removeView(this.avX);
        this.hk.addView(this.avX, 0, new FrameLayout.LayoutParams(-1, -1, 17));
    }

    private void Dz() {
        this.hk.setKeepScreenOn(true);
        this.RW.b(this.Sh);
        this.RW.a(this.Si);
        this.RW.a(this.Sj);
        this.RW.a(this.Sk);
        this.RW.c(this.Sl);
        this.RW.a(this.Sm);
        try {
            if (this.Sa != null && this.cT != null) {
                this.Sa.aka = this.cT;
            }
            this.RW.a(this.Sa);
            if (this.Su == null) {
                this.Su = new Surface(this.St);
            }
            this.RW.setSurface(this.Su);
            if (this.RW.prepareAsync()) {
                this.RV = 1;
                this.avY.onPlayStateChanged(1);
                com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "STATE_PREPARING");
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            com.kwad.sdk.core.e.c.e("KSVideoPlayerViewView", "打开播放器发生错误", e);
        }
    }

    private void cx(AdTemplate adTemplate) {
        g gVar = (g) ServiceProvider.get(g.class);
        if (gVar != null) {
            gVar.load(this.awd, d.ck(adTemplate), adTemplate);
        }
    }

    private void init() {
        this.awd = Du();
        this.hk = new FrameLayout(this.mContext);
        addView(this.hk, new FrameLayout.LayoutParams(-1, -1));
    }

    private void qJ() {
        if (this.avX == null) {
            com.kwad.sdk.core.video.a aVar = new com.kwad.sdk.core.video.a(this.mContext);
            this.avX = aVar;
            aVar.setSurfaceTextureListener(this);
        }
    }

    private void setPlayType(int i) {
        com.kwad.sdk.contentalliance.a.a.b bVar = this.Sa;
        if (bVar == null || bVar.videoPlayerStatus == null) {
            return;
        }
        this.Sa.videoPlayerStatus.mVideoPlayerType = i;
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final boolean Dw() {
        return this.RV == 7;
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b bVar, Map<String, String> map) {
        this.Sa = bVar;
        this.mUrl = bVar.videoUrl;
        this.mHeaders = null;
        cx(bVar.adTemplate);
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final int getBufferPercentage() {
        return this.RX;
    }

    public final b getController() {
        return this.avY;
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final long getCurrentPosition() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getCurrentPosition();
        }
        return 0L;
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final long getDuration() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getDuration();
        }
        return 0L;
    }

    public final int getMaxVolume() {
        AudioManager audioManager = this.avW;
        if (audioManager != null) {
            return audioManager.getStreamMaxVolume(3);
        }
        return 0;
    }

    public final b getVideoController() {
        return this.avY;
    }

    public final int getVolume() {
        AudioManager audioManager = this.avW;
        if (audioManager != null) {
            return audioManager.getStreamVolume(3);
        }
        return 0;
    }

    public final boolean isCompleted() {
        return this.RV == 9;
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final boolean isIdle() {
        return this.RV == 0;
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final boolean isPaused() {
        return this.RV == 5;
    }

    public final boolean isPlaying() {
        return this.RV == 4;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
        SurfaceTexture surfaceTexture2 = this.St;
        if (surfaceTexture2 != null) {
            this.avX.setSurfaceTexture(surfaceTexture2);
        } else {
            this.St = surfaceTexture;
            Dz();
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
        return false;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final void pause() {
        String str;
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar == null) {
            return;
        }
        int i = this.RV;
        if (i == 4) {
            cVar.pause();
            this.RV = 5;
            this.avY.onPlayStateChanged(5);
            str = "STATE_PAUSED";
        } else {
            if (i != 6) {
                return;
            }
            cVar.pause();
            this.RV = 7;
            this.avY.onPlayStateChanged(7);
            str = "STATE_BUFFERING_PAUSED";
        }
        com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", str);
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final void release() {
        Context context;
        String str;
        long currentPosition;
        if (this.avZ) {
            if (isPlaying() || Dv() || Dw() || isPaused()) {
                context = this.mContext;
                str = this.mUrl;
                currentPosition = getCurrentPosition();
            } else if (isCompleted()) {
                context = this.mContext;
                str = this.mUrl;
                currentPosition = 0;
            }
            y.e(context, str, currentPosition);
        }
        DA();
        b bVar = this.avY;
        if (bVar != null) {
            bVar.reset();
        }
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final void restart() {
        int i = this.RV;
        if (i == 5) {
            this.RW.start();
            this.RV = 4;
            this.avY.onPlayStateChanged(4);
            setPlayType(2);
            com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "STATE_PLAYING");
            return;
        }
        if (i == 7) {
            this.RW.start();
            this.RV = 6;
            this.avY.onPlayStateChanged(6);
            com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "STATE_BUFFERING_PLAYING");
            return;
        }
        if (i == 9 || i == -1) {
            this.RW.reset();
            Dz();
            setPlayType(3);
        } else {
            com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "KSVideoPlayer在状态为 " + this.RV + " 时不能调用restart()方法.");
        }
    }

    public final void seekTo(int i) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            cVar.seekTo(i);
        }
    }

    public final void setController(b bVar) {
        this.hk.removeView(this.avY);
        this.avY = bVar;
        bVar.reset();
        this.hk.addView(this.avY, new FrameLayout.LayoutParams(-1, -1));
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final void setKsPlayLogParam(com.kwad.sdk.contentalliance.a.a.a aVar) {
        this.cT = aVar;
    }

    public final void setLooping(boolean z) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            cVar.setLooping(z);
        }
    }

    public final void setPortraitFullscreen(boolean z) {
        this.awc = z;
    }

    public final void setVideoSoundEnable(boolean z) {
        this.awb = z;
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            if (z) {
                cVar.setVolume(1.0f, 1.0f);
            } else {
                cVar.setVolume(0.0f, 0.0f);
            }
        }
    }

    public final void setVolume(int i) {
        AudioManager audioManager = this.avW;
        if (audioManager != null) {
            audioManager.setStreamVolume(3, i, 0);
        }
    }

    @Override // com.kwad.sdk.core.video.videoview.c
    public final void start() {
        if (this.RV != 0) {
            com.kwad.sdk.core.e.c.i("KSVideoPlayerViewView", "KSVideoPlayer只有在状态为STATE_IDLE时才能调用start方法.");
            return;
        }
        Dx();
        qJ();
        Dy();
        com.kwad.sdk.contentalliance.a.a.b bVar = this.Sa;
        if (bVar == null || bVar.videoPlayerStatus == null) {
            return;
        }
        setPlayType(this.Sa.videoPlayerStatus.mVideoPlayerType == 0 ? 1 : 3);
    }
}
