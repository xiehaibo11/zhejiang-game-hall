package com.kwad.sdk.core.video.a;

import android.content.Context;
import android.media.MediaDataSource;
import android.net.Uri;
import android.text.TextUtils;
import android.view.Surface;
import android.view.SurfaceHolder;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwai.video.ksvodplayerkit.IKSVodPlayer;
import com.kwai.video.ksvodplayerkit.KSVodPlayerWrapper;
import com.kwai.video.ksvodplayerkit.KSVodVideoContext;
import com.kwai.video.player.IKwaiMediaPlayer;
import java.io.FileDescriptor;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.sdk.core.video.a.a {
    private static volatile boolean avO;
    private static final Queue<d> avP = new ConcurrentLinkedQueue();
    private com.kwad.sdk.contentalliance.a.a.b Sa;
    private String avG;
    private MediaDataSource avH;
    private final Object avI;
    private boolean avJ;
    private final KSVodPlayerWrapper avK;
    private final a avL;
    private boolean avM;
    private boolean avN;
    private boolean avQ;
    private int mSarDen;
    private int mSarNum;

    static class a implements IKSVodPlayer.OnBufferingUpdateListener, IKSVodPlayer.OnErrorListener, IKSVodPlayer.OnEventListener, IKSVodPlayer.OnPreparedListener, IKSVodPlayer.OnVideoSizeChangedListener, IKSVodPlayer.OnVodPlayerReleaseListener {
        final WeakReference<d> mWeakMediaPlayer;

        a(d dVar) {
            this.mWeakMediaPlayer = new WeakReference<>(dVar);
        }

        private d Dr() {
            return this.mWeakMediaPlayer.get();
        }

        public final void onBufferingUpdate(int i) {
            d dVarDr = Dr();
            if (dVarDr != null) {
                dVarDr.notifyOnBufferingUpdate(i);
            }
        }

        public final void onError(int i, int i2) {
            d dVarDr = Dr();
            if (dVarDr != null) {
                d.a(dVarDr, false);
                dVarDr.notifyOnError(i, i2);
            }
        }

        public final void onEvent(int i, int i2) {
            com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "onEvent, what: " + i);
            d dVarDr = Dr();
            if (dVarDr != null) {
                if (i == 10100) {
                    dVarDr.notifyOnSeekComplete();
                } else {
                    if (i == 10101) {
                        dVarDr.notifyOnCompletion();
                        return;
                    }
                    if (i == 10209) {
                        dVarDr.Dq();
                    }
                    dVarDr.notifyOnInfo(i, i2);
                }
            }
        }

        public final void onPlayerRelease() {
            com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "onPlayerRelease");
        }

        public final void onPrepared() {
            com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "onPrepared");
            d dVarDr = Dr();
            if (dVarDr != null) {
                dVarDr.notifyOnPrepared();
            }
        }

        public final void onVideoSizeChanged(int i, int i2, int i3, int i4) {
            com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "onVideoSizeChanged width: " + i + ", height: " + i2 + ", sarNum:" + i3 + ", sarDen:" + i4);
            d dVarDr = Dr();
            if (dVarDr != null) {
                dVarDr.u(i, i2);
                dVarDr.mSarNum = i3;
                dVarDr.mSarDen = i4;
            }
        }
    }

    public d() {
        Object obj = new Object();
        this.avI = obj;
        this.avN = false;
        this.avQ = true;
        synchronized (obj) {
            this.avK = new KSVodPlayerWrapper(l.KT());
        }
        this.avL = new a(this);
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
        this.avK.setOnPreparedListener(this.avL);
        this.avK.setBufferingUpdateListener(this.avL);
        this.avK.setOnEventListener(this.avL);
        this.avK.setVideoSizeChangedListener(this.avL);
        this.avK.setOnErrorListener(this.avL);
    }

    private void Do() {
        this.avK.setOnPreparedListener((IKSVodPlayer.OnPreparedListener) null);
        this.avK.setBufferingUpdateListener((IKSVodPlayer.OnBufferingUpdateListener) null);
        this.avK.setOnEventListener((IKSVodPlayer.OnEventListener) null);
        this.avK.setVideoSizeChangedListener((IKSVodPlayer.OnVideoSizeChangedListener) null);
        this.avK.setOnErrorListener((IKSVodPlayer.OnErrorListener) null);
    }

    private void Dp() {
        if (this.avN) {
            return;
        }
        try {
            com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "realPrepare: ret: " + this.avK.prepareAsync());
        } catch (IllegalStateException e) {
            com.kwad.sdk.core.e.c.e("KwaiMediaPlayer", "realPrepare failed", e);
        }
        this.avN = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void Dq() {
        Queue<d> queue;
        Iterator<d> it = avP.iterator();
        int i = 0;
        int i2 = 0;
        while (true) {
            if (!it.hasNext()) {
                i2 = 0;
                break;
            } else if (it.next() == this) {
                break;
            } else {
                i2++;
            }
        }
        com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "preloadNextPlayer next player index: " + i2);
        int i3 = i2 + 1;
        if (i3 < avP.size()) {
            com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "----------------preloadNextPlayer prepare next player----------------");
            while (true) {
                queue = avP;
                if (i >= i3) {
                    break;
                }
                queue.poll();
                i++;
            }
            d dVarPoll = queue.poll();
            avP.clear();
            if (dVarPoll != null) {
                dVarPoll.prepareAsync();
            } else {
                com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "----------------preloadNextPlayer prepareAsync next player is null----------------");
            }
        }
    }

    static /* synthetic */ boolean a(d dVar, boolean z) {
        dVar.avN = false;
        return false;
    }

    private void setDataSource(String str, Map<String, String> map) {
        this.avG = str;
        this.avK.setDataSource(str, (Map) null);
    }

    public final void a(com.kwad.sdk.contentalliance.a.a.a aVar) {
        if (this.avK == null || aVar == null) {
            return;
        }
        KSVodVideoContext kSVodVideoContext = new KSVodVideoContext();
        kSVodVideoContext.mVideoId = String.valueOf(aVar.photoId);
        kSVodVideoContext.mClickTime = aVar.clickTime;
        kSVodVideoContext.mExtra = aVar.yR();
        this.avK.updateVideoContext(kSVodVideoContext);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void a(com.kwad.sdk.contentalliance.a.a.b bVar) {
        this.Sa = bVar;
        a(bVar.aka);
        f fVar = (f) ServiceProvider.get(f.class);
        setDataSource((TextUtils.isEmpty(bVar.manifest) || fVar == null || !fVar.sD()) ? bVar.videoUrl : bVar.manifest, (Map<String, String>) null);
    }

    public final void bf(boolean z) {
        this.avQ = z;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getAudioSessionId() {
        return this.avK.getKwaiMediaPlayer().getAudioSessionId();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final String getCurrentPlayingUrl() {
        KSVodPlayerWrapper kSVodPlayerWrapper = this.avK;
        return kSVodPlayerWrapper == null ? "" : kSVodPlayerWrapper.getCurrentPlayUrl();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final long getCurrentPosition() {
        try {
            return this.avK.getCurrentPosition();
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
            return this.avK.getDuration();
        } catch (IllegalStateException unused) {
            return 0L;
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getMediaPlayerType() {
        return 2;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getVideoHeight() {
        return this.avK.getKwaiMediaPlayer().getVideoHeight();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final int getVideoWidth() {
        return this.avK.getKwaiMediaPlayer().getVideoWidth();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final boolean isLooping() {
        return this.avM;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final boolean isPlaying() {
        try {
            return this.avK.isPlaying();
        } catch (IllegalStateException unused) {
            return false;
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void pause() {
        this.avK.pause();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final boolean prepareAsync() {
        if (!this.avQ) {
            Dp();
            return true;
        }
        if (!avP.contains(this)) {
            avP.offer(this);
        }
        if (avP.size() != 1) {
            return false;
        }
        Dp();
        com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "prepareAsync first");
        return true;
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void release() {
        com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "release remote player ret: " + avP.remove(this) + ", player list size: " + avP.size());
        this.avJ = true;
        this.avK.releaseAsync(new IKSVodPlayer.OnVodPlayerReleaseListener() { // from class: com.kwad.sdk.core.video.a.d.1
            public final void onPlayerRelease() {
                com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "onPlayerRelease");
            }
        });
        Dm();
        resetListeners();
        Do();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void reset() {
        this.avN = false;
        try {
            IKwaiMediaPlayer kwaiMediaPlayer = this.avK.getKwaiMediaPlayer();
            if (kwaiMediaPlayer != null) {
                kwaiMediaPlayer.reset();
            }
        } catch (IllegalStateException unused) {
        }
        Dm();
        resetListeners();
        Dn();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void seekTo(long j) {
        this.avK.seekTo((int) j);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setAudioStreamType(int i) {
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(Context context, Uri uri) {
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(Context context, Uri uri, Map<String, String> map) {
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(FileDescriptor fileDescriptor) {
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDataSource(String str) {
        setDataSource(str, (Map<String, String>) null);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setDisplay(SurfaceHolder surfaceHolder) {
        synchronized (this.avI) {
            if (!this.avJ) {
                this.avK.setDisplay(surfaceHolder);
            }
        }
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setLooping(boolean z) {
        this.avM = z;
        this.avK.setLooping(z);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setScreenOnWhilePlaying(boolean z) {
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setSpeed(float f) {
        this.avK.setSpeed(f);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setSurface(Surface surface) {
        this.avK.setSurface(surface);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void setVolume(float f, float f2) {
        this.avK.setVolume(f, f2);
        f(f);
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void start() {
        com.kwad.sdk.core.e.c.i("KwaiMediaPlayer", "start");
        Dp();
        this.avK.start();
    }

    @Override // com.kwad.sdk.core.video.a.c
    public final void stop() {
        this.avK.stop();
    }
}
