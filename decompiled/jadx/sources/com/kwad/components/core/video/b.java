package com.kwad.components.core.video;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.view.Surface;
import com.kwad.sdk.core.video.a.c;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private static boolean RT;
    private static final AtomicInteger RU = new AtomicInteger(0);
    private int RE;
    private int RF;
    private com.kwad.sdk.core.video.a.c RW;
    private int RX;
    private long RY;
    private Runnable RZ;
    private com.kwad.sdk.contentalliance.a.a.b Sa;
    private Context mContext;
    private DetailVideoView mDetailVideoView;
    private String TAG = "MediaPlayerImpl";
    private volatile int RV = 0;
    private Handler mHandler = new Handler(Looper.getMainLooper());
    private long mStartTime = 0;
    private int Sb = 0;
    private List<c.d> Sc = new CopyOnWriteArrayList();
    private final AtomicBoolean Sd = new AtomicBoolean(false);
    private boolean Se = false;
    private volatile List<k> Sf = new CopyOnWriteArrayList();
    private volatile List<c.e> Sg = new CopyOnWriteArrayList();
    private c.e Sh = new c.e() { // from class: com.kwad.components.core.video.b.1
        @Override // com.kwad.sdk.core.video.a.c.e
        public final void a(com.kwad.sdk.core.video.a.c cVar) {
            com.kwad.sdk.core.e.c.i(b.this.TAG, "onPrepared:" + b.getStateString(b.this.RV) + "->STATE_PREPARED");
            b.this.RV = 2;
            b bVar = b.this;
            bVar.onPlayStateChanged(bVar.RV);
            Iterator it = b.this.Sg.iterator();
            while (it.hasNext()) {
                ((c.e) it.next()).a(b.this.RW);
            }
        }
    };
    private c.h Si = new c.h() { // from class: com.kwad.components.core.video.b.3
        @Override // com.kwad.sdk.core.video.a.c.h
        public final void i(int i, int i2) {
            if (b.this.mDetailVideoView != null) {
                b.this.mDetailVideoView.adaptVideoSize(i, i2);
            }
            com.kwad.sdk.core.e.c.i(b.this.TAG, "onVideoSizeChanged ——> width：" + i + "， height：" + i2);
        }
    };
    private c.b Sj = new c.b() { // from class: com.kwad.components.core.video.b.4
        @Override // com.kwad.sdk.core.video.a.c.b
        public final void os() {
            b.this.RV = 9;
            b bVar = b.this;
            bVar.onPlayStateChanged(bVar.RV);
            com.kwad.sdk.core.video.a.a.a.dI("videoFinishPlay");
        }
    };
    private c.InterfaceC0216c Sk = new c.InterfaceC0216c() { // from class: com.kwad.components.core.video.b.5
        @Override // com.kwad.sdk.core.video.a.c.InterfaceC0216c
        public final boolean j(int i, int i2) {
            if (i == -38) {
                return true;
            }
            b.this.RV = -1;
            b.this.RE = i;
            b.this.RF = i2;
            b bVar = b.this;
            bVar.onPlayStateChanged(bVar.RV);
            com.kwad.sdk.core.video.a.a.a.dI("videoPlayError");
            com.kwad.sdk.core.e.c.i(b.this.TAG, "onError ——> STATE_ERROR ———— what：" + i + ", extra: " + i2);
            return true;
        }
    };
    private c.d Sl = new c.d() { // from class: com.kwad.components.core.video.b.6
        @Override // com.kwad.sdk.core.video.a.c.d
        public final boolean k(int i, int i2) {
            String str;
            StringBuilder sb;
            String string;
            String str2;
            String str3;
            if (i != 3) {
                if (i == 701) {
                    if (b.this.RV == 5 || b.this.RV == 7) {
                        b.this.RV = 7;
                        str2 = b.this.TAG;
                        str3 = "onInfo ——> MEDIA_INFO_BUFFERING_START：STATE_BUFFERING_PAUSED";
                    } else {
                        b.this.RV = 6;
                        str2 = b.this.TAG;
                        str3 = "onInfo ——> MEDIA_INFO_BUFFERING_START：STATE_BUFFERING_PLAYING";
                    }
                    com.kwad.sdk.core.e.c.i(str2, str3);
                    b bVar = b.this;
                    bVar.onPlayStateChanged(bVar.RV);
                } else if (i == 702) {
                    if (b.this.RV == 6) {
                        b.this.RV = 4;
                        b bVar2 = b.this;
                        bVar2.onPlayStateChanged(bVar2.RV);
                        com.kwad.sdk.core.e.c.i(b.this.TAG, "onInfo ——> MEDIA_INFO_BUFFERING_END： STATE_PLAYING");
                    }
                    if (b.this.RV == 7) {
                        b.this.RV = 5;
                        b bVar3 = b.this;
                        bVar3.onPlayStateChanged(bVar3.RV);
                        str = b.this.TAG;
                        string = "onInfo ——> MEDIA_INFO_BUFFERING_END： STATE_PAUSED";
                        com.kwad.sdk.core.e.c.i(str, string);
                    }
                } else if (i != 10001) {
                    if (i == 801) {
                        str = b.this.TAG;
                        string = "视频不能seekTo，为直播视频";
                        com.kwad.sdk.core.e.c.i(str, string);
                    } else {
                        str = b.this.TAG;
                        sb = new StringBuilder("onInfo ——> what：");
                        sb.append(i);
                    }
                }
                b bVar4 = b.this;
                bVar4.a(bVar4.RW, i, i2);
                return true;
            }
            b.this.RV = 4;
            b bVar5 = b.this;
            bVar5.onPlayStateChanged(bVar5.RV);
            str = b.this.TAG;
            sb = new StringBuilder("onInfo ——> MEDIA_INFO_VIDEO_RENDERING_START：STATE_PLAYING, TIME ELAPSED: ");
            sb.append(System.currentTimeMillis() - b.this.mStartTime);
            string = sb.toString();
            com.kwad.sdk.core.e.c.i(str, string);
            b bVar42 = b.this;
            bVar42.a(bVar42.RW, i, i2);
            return true;
        }
    };
    private c.a Sm = new c.a() { // from class: com.kwad.components.core.video.b.7
        @Override // com.kwad.sdk.core.video.a.c.a
        public final void aw(int i) {
            b.this.RX = i;
        }
    };

    public interface a {
        void onReleaseSuccess();
    }

    public b(DetailVideoView detailVideoView) {
        this.mDetailVideoView = detailVideoView;
        if (detailVideoView != null) {
            this.mContext = detailVideoView.getContext().getApplicationContext();
        }
    }

    private void a(com.kwad.sdk.contentalliance.a.a.b bVar, boolean z, DetailVideoView detailVideoView, com.kwad.sdk.core.video.a.c cVar) {
        com.kwad.sdk.core.e.c.i(this.TAG, "initMediaPlayer");
        if (bVar == null || detailVideoView == null || cVar == null) {
            return;
        }
        if (this.mContext == null) {
            this.mContext = detailVideoView.getContext().getApplicationContext();
        }
        this.Se = z;
        this.Sa = bVar;
        DetailVideoView detailVideoView2 = this.mDetailVideoView;
        if (detailVideoView2 != detailVideoView) {
            com.kwad.sdk.core.e.c.i(this.TAG, "initMediaPlayer videoView changed");
            if (detailVideoView2 != null) {
                detailVideoView2.setMediaPlayer(null);
                detailVideoView.setKeepScreenOn(detailVideoView2.getKeepScreenOn());
                detailVideoView2.setKeepScreenOn(false);
            }
            this.mDetailVideoView = detailVideoView;
        }
        detailVideoView.setMediaPlayer(this);
        if (this.RW != cVar) {
            com.kwad.sdk.core.e.c.i(this.TAG, "initMediaPlayer mediaPlayer changed");
            com.kwad.sdk.core.video.a.c cVar2 = this.RW;
            if (cVar2 != null) {
                cVar.setLooping(cVar2.isLooping());
                qF();
                this.RW.release();
            }
            this.RW = cVar;
            reset();
            qE();
            cVar.setAudioStreamType(3);
        } else {
            com.kwad.sdk.core.e.c.i(this.TAG, "initMediaPlayer mediaPlayer not changed");
            reset();
            qF();
            qE();
        }
        this.RW.setSurface(detailVideoView.Su);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void a(com.kwad.sdk.core.video.a.c cVar, a aVar) {
        if (cVar == null) {
            return;
        }
        try {
            cVar.release();
            if (aVar != null) {
                aVar.onReleaseSuccess();
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    public static String getStateString(int i) {
        switch (i) {
            case -1:
                return "STATE_ERROR";
            case 0:
                return "STATE_IDLE";
            case 1:
                return "STATE_PREPARING";
            case 2:
                return "STATE_PREPARED";
            case 3:
                return "STATE_STARTED";
            case 4:
                return "STATE_PLAYING";
            case 5:
                return "STATE_PAUSED";
            case 6:
                return "STATE_BUFFERING_PLAYING";
            case 7:
                return "STATE_BUFFERING_PAUSED";
            case 8:
                return "PLAYER_STATE_STOPPED";
            case 9:
                return "STATE_COMPLETED";
            default:
                return "STATE_UNKNOWN";
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void qB() {
        long currentPosition = getCurrentPosition();
        long duration = getDuration();
        if (this.Sf != null) {
            Iterator<k> it = this.Sf.iterator();
            while (it.hasNext()) {
                it.next().onMediaPlayProgress(duration, currentPosition);
            }
        }
    }

    private void qE() {
        this.RW.b(this.Sh);
        this.RW.a(this.Si);
        this.RW.a(this.Sj);
        this.RW.a(this.Sk);
        this.RW.c(this.Sl);
        this.RW.a(this.Sm);
    }

    private void qF() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar == null) {
            return;
        }
        cVar.a((c.InterfaceC0216c) null);
        this.RW.a((c.b) null);
        this.RW.b(null);
        this.RW.a((c.h) null);
        this.RW.c(null);
        this.RW.a((c.f) null);
        this.RW.a((c.a) null);
    }

    private void qH() {
        qI();
        if (this.RZ == null) {
            this.RZ = new Runnable() { // from class: com.kwad.components.core.video.b.2
                @Override // java.lang.Runnable
                public final void run() {
                    b.this.qB();
                    if (b.this.RZ != null) {
                        b.this.mHandler.postDelayed(b.this.RZ, 500L);
                    }
                }
            };
        }
        this.mHandler.post(this.RZ);
    }

    private void qI() {
        Runnable runnable = this.RZ;
        if (runnable != null) {
            this.mHandler.removeCallbacks(runnable);
            this.RZ = null;
        }
    }

    private void reset() {
        com.kwad.sdk.core.e.c.i(this.TAG, "reset:" + getStateString(this.RV) + "->STATE_IDLE");
        this.RW.reset();
        this.RV = 0;
    }

    private void setKeepScreenOn(boolean z) {
        DetailVideoView detailVideoView = this.mDetailVideoView;
        if (detailVideoView != null) {
            detailVideoView.setKeepScreenOn(z);
        }
    }

    private void setPlayType(int i) {
        com.kwad.sdk.contentalliance.a.a.b bVar = this.Sa;
        if (bVar == null || bVar.videoPlayerStatus == null) {
            return;
        }
        this.Sa.videoPlayerStatus.mVideoPlayerType = i;
    }

    public final void a(a aVar) {
        a(aVar, true);
    }

    public final void a(final a aVar, boolean z) {
        if (this.RW == null) {
            return;
        }
        setKeepScreenOn(false);
        this.mHandler.removeCallbacksAndMessages(null);
        qI();
        qF();
        this.mDetailVideoView = null;
        final com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            if (z) {
                com.kwad.sdk.utils.g.execute(new Runnable() { // from class: com.kwad.components.core.video.b.10
                    @Override // java.lang.Runnable
                    public final void run() {
                        b bVar = b.this;
                        b.a(cVar, aVar);
                    }
                });
            } else {
                a(cVar, aVar);
            }
            this.RW = null;
        }
        com.kwad.sdk.core.e.c.i(this.TAG, "release:" + getStateString(this.RV) + "->STATE_IDLE");
        this.RV = 0;
        this.Sb = 0;
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.a aVar) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar instanceof com.kwad.sdk.core.video.a.d) {
            ((com.kwad.sdk.core.video.a.d) cVar).a(aVar);
        }
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b bVar) {
        try {
            if (TextUtils.isEmpty(bVar.videoUrl)) {
                com.kwad.sdk.core.e.c.e(this.TAG, "videoUrl is null");
                return;
            }
            com.kwad.sdk.core.e.c.d(this.TAG, "videoUrl=" + bVar.videoUrl);
            this.RW.a(bVar);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b bVar, DetailVideoView detailVideoView) {
        a(bVar, true, false, detailVideoView);
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.b bVar, boolean z, boolean z2, DetailVideoView detailVideoView) {
        com.kwad.sdk.core.e.c.i(this.TAG, "initMediaPlayer enablePreLoad:" + z);
        if (bVar == null || detailVideoView == null) {
            return;
        }
        com.kwad.sdk.core.video.a.c cVarA = com.kwad.sdk.core.video.a.e.a(this.mContext, z, com.kwad.sdk.core.config.d.xs(), com.kwad.sdk.core.config.d.xt());
        cVarA.setLooping(false);
        a(bVar, z2, detailVideoView, cVarA);
    }

    public final void a(c.d dVar) {
        if (dVar == null) {
            return;
        }
        this.Sc.add(dVar);
    }

    public final void a(c.e eVar) {
        this.Sg.add(eVar);
    }

    public final void a(com.kwad.sdk.core.video.a.c cVar, int i, int i2) {
        Iterator<c.d> it = this.Sc.iterator();
        while (it.hasNext()) {
            c.d next = it.next();
            if (next == null) {
                it.remove();
            } else {
                next.k(i, i2);
            }
        }
    }

    public final void b(c.d dVar) {
        if (dVar == null) {
            return;
        }
        this.Sc.remove(dVar);
    }

    public final void c(k kVar) {
        this.Sf.add(kVar);
    }

    public final void clear() {
        this.Sf.clear();
    }

    public final void d(k kVar) {
        this.Sf.remove(kVar);
    }

    public final int getBufferPercentage() {
        return this.RX;
    }

    public final String getCurrentPlayingUrl() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        return cVar == null ? "" : cVar.getCurrentPlayingUrl();
    }

    public final long getCurrentPosition() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getCurrentPosition();
        }
        return 0L;
    }

    public final long getDuration() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getDuration();
        }
        return 0L;
    }

    public final int getMediaPlayerType() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getMediaPlayerType();
        }
        return 0;
    }

    public final long getPlayDuration() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getCurrentPosition();
        }
        return 0L;
    }

    public final int getVideoHeight() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getVideoHeight();
        }
        return 0;
    }

    public final int getVideoWidth() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.getVideoWidth();
        }
        return 0;
    }

    public final boolean isPlaying() {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            return cVar.isPlaying();
        }
        return false;
    }

    public final boolean isPrepared() {
        return this.RV == 2 || this.RV == 3 || this.RV == 5 || this.RV == 8 || this.RV == 9;
    }

    public final boolean isPreparing() {
        return this.RV == 1;
    }

    public final void onPlayStateChanged(int i) {
        if (this.Sf == null) {
            return;
        }
        for (k kVar : this.Sf) {
            if (kVar != null) {
                switch (i) {
                    case -1:
                        setKeepScreenOn(false);
                        qI();
                        kVar.onMediaPlayError(this.RE, this.RF);
                        break;
                    case 1:
                        kVar.onMediaPreparing();
                        break;
                    case 2:
                        kVar.onMediaPrepared();
                        break;
                    case 3:
                        setKeepScreenOn(true);
                        kVar.onMediaPlayStart();
                        break;
                    case 4:
                        setKeepScreenOn(true);
                        kVar.onMediaPlaying();
                        break;
                    case 5:
                        setKeepScreenOn(false);
                        kVar.onMediaPlayPaused();
                        break;
                    case 6:
                        kVar.onVideoPlayBufferingPlaying();
                        break;
                    case 7:
                        kVar.onVideoPlayBufferingPaused();
                        break;
                    case 9:
                        try {
                            if (this.RW != null && !this.RW.isLooping()) {
                                setKeepScreenOn(false);
                                qI();
                            }
                            kVar.onMediaPlayCompleted();
                        } catch (Exception e) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                        }
                        break;
                }
            }
        }
    }

    public final boolean pause() {
        boolean z;
        com.kwad.sdk.core.e.c.i(this.TAG, "pause mCurrentState: " + getStateString(this.RV));
        if (this.RV == 4) {
            this.RW.pause();
            com.kwad.sdk.core.e.c.i(this.TAG, "pause STATE_PLAYING->STATE_PAUSED");
            this.RV = 5;
            onPlayStateChanged(this.RV);
            com.kwad.sdk.core.video.a.a.a.dI("videoPausePlay");
            z = true;
        } else {
            z = false;
        }
        if (this.RV == 6) {
            this.RW.pause();
            com.kwad.sdk.core.e.c.i(this.TAG, "pause STATE_BUFFERING_PLAYING->STATE_PAUSED");
            this.RV = 7;
            onPlayStateChanged(this.RV);
            z = true;
        }
        if (this.RV == 3) {
            this.RW.pause();
            com.kwad.sdk.core.e.c.i(this.TAG, "pause STATE_STARTED->STATE_PAUSED");
            this.RV = 5;
            onPlayStateChanged(this.RV);
            com.kwad.sdk.core.video.a.a.a.dI("videoPausePlay");
            z = true;
        }
        if (this.RV != 9 || !this.RW.isLooping()) {
            return z;
        }
        this.RW.pause();
        com.kwad.sdk.core.e.c.i(this.TAG, "pause " + getStateString(this.RV) + "->STATE_PAUSED");
        this.RV = 5;
        onPlayStateChanged(this.RV);
        return true;
    }

    public final void prepareAsync() {
        if (this.RW == null) {
            return;
        }
        if (this.Se) {
            if (this.Sd.compareAndSet(false, true)) {
                com.kwad.sdk.utils.g.execute(new Runnable() { // from class: com.kwad.components.core.video.b.8
                    @Override // java.lang.Runnable
                    public final void run() {
                        boolean zPrepareAsync;
                        com.kwad.sdk.core.e.c.i(b.this.TAG, "prepareAsync now:" + b.getStateString(b.this.RV));
                        if (b.this.RW == null) {
                            return;
                        }
                        try {
                            synchronized (b.this.RW) {
                                b.this.a(b.this.Sa);
                                zPrepareAsync = b.this.RW.prepareAsync();
                                com.kwad.sdk.core.e.c.i(b.this.TAG, "prepareAsync:" + b.getStateString(b.this.RV) + "->STATE_PREPARING, success: " + zPrepareAsync);
                                b.this.RV = 1;
                            }
                            if (zPrepareAsync) {
                                b.this.mHandler.post(new Runnable() { // from class: com.kwad.components.core.video.b.8.1
                                    @Override // java.lang.Runnable
                                    public final void run() {
                                        b.this.onPlayStateChanged(b.this.RV);
                                    }
                                });
                            } else {
                                com.kwad.sdk.core.e.c.e(b.this.TAG, "prepareAsync failed");
                            }
                        } finally {
                            try {
                            } finally {
                            }
                        }
                        try {
                            synchronized (b.this.Sd) {
                                b.this.Sd.notifyAll();
                            }
                        } catch (Exception e) {
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                        }
                    }
                });
                return;
            }
            return;
        }
        try {
            a(this.Sa);
            if (!this.RW.prepareAsync()) {
                com.kwad.sdk.core.e.c.e(this.TAG, "prepareAsync failed");
                return;
            }
            com.kwad.sdk.core.e.c.i(this.TAG, "prepareAsync:" + getStateString(this.RV) + "->STATE_PREPARING");
            this.RV = 1;
            onPlayStateChanged(this.RV);
        } catch (Throwable th) {
            if (getMediaPlayerType() != 2) {
                int i = this.Sb;
                this.Sb = i + 1;
                if (i <= 4) {
                    qG();
                }
            }
            com.kwad.sdk.core.e.c.i(this.TAG, "prepareAsync Exception:" + getStateString(this.RV));
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }

    public final com.kwad.sdk.core.video.a.c qD() {
        return this.RW;
    }

    public final void qG() {
        if (this.RW == null) {
            com.kwad.sdk.core.e.c.w("resetAndPlay", "mMediaPlayer is null");
            return;
        }
        if (this.RV == 2 || this.RV == 3 || this.RV == 4 || this.RV == 5) {
            com.kwad.sdk.core.e.c.w("resetAndPlay", "can not resetAndPlay in sate:" + this.RV);
        } else {
            reset();
            qF();
            qE();
            prepareAsync();
        }
    }

    public final void release() {
        a((a) null);
    }

    public final void releaseSync() {
        a((a) null, false);
    }

    public final void restart() {
        if (this.RW != null && this.RV == 9) {
            start();
        }
        setPlayType(3);
    }

    public final void resume() {
        if (this.RW == null) {
            com.kwad.sdk.core.e.c.e(this.TAG, "resume but mMediaPlayer is null");
            return;
        }
        com.kwad.sdk.core.e.c.i(this.TAG, "resume mCurrentState: " + getStateString(this.RV));
        if (this.RV == 2 || this.RV == 0) {
            com.kwad.sdk.core.e.c.i(this.TAG, "resume:" + getStateString(this.RV) + "->start()");
            start();
            return;
        }
        if (this.RV == 5) {
            this.RW.start();
            com.kwad.sdk.core.e.c.i(this.TAG, "resume:" + getStateString(this.RV) + "->STATE_PLAYING");
            this.RV = 4;
            onPlayStateChanged(this.RV);
            setPlayType(2);
            com.kwad.sdk.core.video.a.a.a.dI("videoResumePlay");
            return;
        }
        if (this.RV != 7) {
            if (this.RV != 1) {
                com.kwad.sdk.core.e.c.w(this.TAG, "resume: " + getStateString(this.RV) + " 此时不能调用resume()方法.");
                return;
            }
            return;
        }
        this.RW.start();
        com.kwad.sdk.core.e.c.i(this.TAG, "resume:" + getStateString(this.RV) + "->STATE_BUFFERING_PLAYING");
        this.RV = 6;
        onPlayStateChanged(this.RV);
    }

    public final void seekTo(long j) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            cVar.seekTo(j);
        }
    }

    public final void setAudioEnabled(boolean z) {
        float f = z ? 1.0f : 0.0f;
        setVolume(f, f);
    }

    public final void setRadius(float f, float f2, float f3, float f4) {
        this.mDetailVideoView.setRadius(f, f2, f3, f4);
    }

    public final void setSpeed(float f) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar == null) {
            return;
        }
        cVar.setSpeed(f);
    }

    public final void setSurface(Surface surface) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar != null) {
            cVar.setSurface(surface);
        }
    }

    public final void setVolume(float f, float f2) {
        com.kwad.sdk.core.video.a.c cVar = this.RW;
        if (cVar == null) {
            return;
        }
        try {
            cVar.setVolume(f, f2);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00b1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void start() {
        /*
            r6 = this;
            java.lang.String r0 = r6.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "start mCurrentState: "
            r1.<init>(r2)
            int r2 = r6.RV
            java.lang.String r2 = getStateString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            int r0 = r6.RV
            java.lang.String r1 = "videoStartPlay"
            r2 = 2
            if (r0 != 0) goto L4e
            java.lang.String r0 = r6.TAG
            java.lang.String r3 = "start, still not prepared well, prepare again"
            com.kwad.sdk.core.e.c.i(r0, r3)
            r6.prepareAsync()
            int r0 = r6.getMediaPlayerType()
            if (r0 != r2) goto L4d
            boolean r0 = r6.Se
            if (r0 == 0) goto L45
            java.util.concurrent.atomic.AtomicBoolean r0 = r6.Sd
            boolean r0 = r0.get()
            if (r0 == 0) goto L45
            com.kwad.components.core.video.b$9 r0 = new com.kwad.components.core.video.b$9
            r0.<init>()
            com.kwad.sdk.utils.g.execute(r0)
            return
        L45:
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.start()
            com.kwad.sdk.core.video.a.a.a.dI(r1)
        L4d:
            return
        L4e:
            int r0 = r6.RV
            r3 = 9
            if (r0 == r2) goto L58
            int r0 = r6.RV
            if (r0 != r3) goto Lbe
        L58:
            long r4 = java.lang.System.currentTimeMillis()
            r6.mStartTime = r4
            com.kwad.sdk.core.video.a.c r0 = r6.RW
            r0.start()
            com.kwad.sdk.core.video.a.a.a.dI(r1)
            long r0 = r6.RY
            r4 = 0
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 == 0) goto L75
            com.kwad.sdk.core.video.a.c r4 = r6.RW
            int r0 = (int) r0
            long r0 = (long) r0
            r4.seekTo(r0)
        L75:
            java.lang.String r0 = r6.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "start:"
            r1.<init>(r4)
            int r4 = r6.RV
            java.lang.String r4 = getStateString(r4)
            r1.append(r4)
            java.lang.String r4 = "->STATE_STARTED"
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.i(r0, r1)
            com.kwad.sdk.contentalliance.a.a.b r0 = r6.Sa
            r1 = 3
            if (r0 == 0) goto Lb4
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            if (r0 == 0) goto Lb4
            int r0 = r6.RV
            if (r0 != r2) goto Lad
            com.kwad.sdk.contentalliance.a.a.b r0 = r6.Sa
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
            int r0 = r0.mVideoPlayerType
            if (r0 != 0) goto Lb1
            r0 = 1
            r6.setPlayType(r0)
            goto Lb4
        Lad:
            int r0 = r6.RV
            if (r0 != r3) goto Lb4
        Lb1:
            r6.setPlayType(r1)
        Lb4:
            r6.RV = r1
            int r0 = r6.RV
            r6.onPlayStateChanged(r0)
            r6.qH()
        Lbe:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.core.video.b.start():void");
    }

    public final void start(long j) {
        this.RY = j;
        start();
    }

    public final void stopAndPrepareAsync() {
        com.kwad.sdk.core.e.c.i(this.TAG, "stopAndPrepareAsync mCurrentState:" + this.RV);
        if (this.RV == 1 || this.RV == 2) {
            return;
        }
        if (this.RV != 3 && this.RV != 4 && this.RV != 5 && this.RV != 6 && this.RV != 7 && this.RV != 8 && this.RV != 9) {
            release();
            return;
        }
        try {
            this.RW.stop();
            this.RV = 8;
            onPlayStateChanged(this.RV);
            prepareAsync();
        } catch (Exception unused) {
            release();
            com.kwad.sdk.core.e.c.e(this.TAG, "stopAndPrepareAsync mCurrentState:" + this.RV);
        }
    }
}
