package com.kwad.components.core.offline.init.c;

import android.content.Context;
import android.view.Surface;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.components.offline.api.core.video.IKsMediaPlayer;
import com.kwad.components.offline.api.core.video.IKsMediaPlayerView;
import com.kwad.components.offline.api.core.video.IMediaPlayer;
import com.kwad.components.offline.api.core.video.listener.OfflineVideoPlayStateListener;
import com.kwad.components.offline.api.core.video.listener.ReleaseCallback;
import com.kwad.components.offline.api.core.video.listener.VideoMuteStateChangeListener;
import com.kwad.components.offline.api.core.video.mdoel.KsPlayerLogParams;
import com.kwad.components.offline.api.core.video.mdoel.PlayVideoInfo;
import com.kwad.sdk.utils.ao;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
final class a implements IKsMediaPlayer {
    private com.kwad.components.core.video.b LS;
    private c LT;
    private VideoMuteStateChangeListener LU;
    private boolean LV;
    private Context mContext;
    private DetailVideoView mDetailVideoView;
    private boolean yd;
    private OfflineOnAudioConflictListener yg;
    private boolean nw = true;
    private int LW = -1;

    a() {
    }

    static /* synthetic */ boolean a(a aVar, boolean z) {
        aVar.yd = true;
        return true;
    }

    private OfflineOnAudioConflictListener op() {
        if (this.yg == null) {
            this.yg = new OfflineOnAudioConflictListener() { // from class: com.kwad.components.core.offline.init.c.a.2
                @Override // com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener
                public final void onAudioBeOccupied() {
                    a.a(a.this, true);
                    bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.offline.init.c.a.2.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            a.this.LS.setAudioEnabled(false);
                            if (a.this.LU != null) {
                                a.this.LU.onMuteStateChanged(true);
                            }
                        }
                    });
                }

                @Override // com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener
                public final void onAudioBeReleased() {
                }
            };
        }
        return this.yg;
    }

    public final a a(com.kwad.components.core.video.b bVar) {
        ao.checkNotNull(bVar);
        this.LS = bVar;
        return this;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void addOnInfoListener(IMediaPlayer.OnInfoListener onInfoListener) {
        this.LS.a(d.a(getMediaPlayer(), onInfoListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void addOnPreparedListener(IMediaPlayer.OnPreparedListener onPreparedListener) {
        this.LS.a(d.a(getMediaPlayer(), onPreparedListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void clear() {
        this.LS.clear();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final int getBufferPercentage() {
        return this.LS.getBufferPercentage();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final String getCurrentPlayingUrl() {
        return this.LS.getCurrentPlayingUrl();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final long getCurrentPosition() {
        return this.LS.getCurrentPosition();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final long getDuration() {
        return this.LS.getDuration();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final int getMaxVolume() {
        return 0;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final IMediaPlayer getMediaPlayer() {
        com.kwad.sdk.core.video.a.c cVarQD = this.LS.qD();
        if (cVarQD == null) {
            return null;
        }
        c cVar = this.LT;
        if (cVar == null || cVar.or() != cVarQD) {
            this.LT = new c().b(cVarQD);
        }
        return this.LT;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final int getMediaPlayerType() {
        return this.LS.getMediaPlayerType();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final long getPlayDuration() {
        return this.LS.getPlayDuration();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final String getStateString(int i) {
        return com.kwad.components.core.video.b.getStateString(i);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final int getVideoHeight() {
        return this.LS.getVideoHeight();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final int getVideoWidth() {
        return this.LS.getVideoWidth();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final int getVolume() {
        return 0;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void initMediaPlayer(PlayVideoInfo playVideoInfo, IKsMediaPlayerView iKsMediaPlayerView) {
        if (!(iKsMediaPlayerView instanceof b)) {
            com.kwad.sdk.core.e.c.e("KsMediaPlayer", "videoView not instanceof KsMediaPlayerView");
            return;
        }
        DetailVideoView detailVideoViewOq = ((b) iKsMediaPlayerView).oq();
        this.mDetailVideoView = detailVideoViewOq;
        this.mContext = detailVideoViewOq.getContext().getApplicationContext();
        this.LS.a(d.a(playVideoInfo), this.mDetailVideoView);
        int i = this.LW;
        if (i != -1) {
            setVideoAdaptStrategy(i);
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void initMediaPlayer(PlayVideoInfo playVideoInfo, boolean z, boolean z2, IKsMediaPlayerView iKsMediaPlayerView) {
        if (iKsMediaPlayerView instanceof b) {
            this.LS.a(d.a(playVideoInfo), z, z2, ((b) iKsMediaPlayerView).oq());
        } else {
            com.kwad.sdk.core.e.c.e("KsMediaPlayer", "videoView not instanceof KsMediaPlayerView");
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final boolean isPlaying() {
        return this.LS.isPlaying();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final boolean isPrepared() {
        return this.LS.isPrepared();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final boolean isPreparing() {
        return this.LS.isPreparing();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void notifyOnInfoListener(IMediaPlayer iMediaPlayer, int i, int i2) {
        if (iMediaPlayer instanceof c) {
            this.LS.a(((c) iMediaPlayer).or(), i, i2);
        } else {
            com.kwad.sdk.core.e.c.e("KsMediaPlayer", "videoView not instanceof KsMediaPlayerView");
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void onPlayStateChanged(int i) {
        this.LS.onPlayStateChanged(i);
    }

    public final com.kwad.components.core.video.b oo() {
        return this.LS;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final boolean pause() {
        return this.LS.pause();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void prepareAsync() {
        this.LS.prepareAsync();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void registerVideoMuteStateListener(VideoMuteStateChangeListener videoMuteStateChangeListener) {
        this.LU = videoMuteStateChangeListener;
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void registerVideoPlayStateListener(OfflineVideoPlayStateListener offlineVideoPlayStateListener) {
        this.LS.c(d.a(offlineVideoPlayStateListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void release() {
        this.LS.release();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void release(ReleaseCallback releaseCallback) {
        this.LS.a(d.a(releaseCallback));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void release(ReleaseCallback releaseCallback, boolean z) {
        this.LS.a(d.a(releaseCallback), z);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void releaseSync() {
        this.LS.releaseSync();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void removeInfoListener(IMediaPlayer.OnInfoListener onInfoListener) {
        this.LS.b(d.a(getMediaPlayer(), onInfoListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void resetAndPlay(PlayVideoInfo playVideoInfo) {
        com.kwad.components.core.video.b bVar = this.LS;
        d.a(playVideoInfo);
        bVar.qG();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void restart() {
        this.LS.restart();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void resume() {
        this.LS.resume();
        if (this.nw || (this.LV && this.yd)) {
            com.kwad.components.core.t.a.al(this.mContext).aJ(this.LV);
            if (this.LV && this.yd) {
                this.yd = false;
                setAudioEnabled(true);
                this.nw = true;
            } else if (com.kwad.components.core.t.a.al(this.mContext).qh()) {
                this.nw = false;
                setAudioEnabled(false);
            }
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void seekTo(long j) {
        this.LS.seekTo(j);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setAudioEnabled(final boolean z) {
        if (z) {
            com.kwad.components.core.t.a.al(this.mContext).aJ(true);
        }
        if (z == this.nw) {
            com.kwad.sdk.core.video.a.a.a.dI("autoVoice");
        } else {
            this.nw = z;
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.offline.init.c.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    a.this.LS.setAudioEnabled(z);
                    if (a.this.LU != null) {
                        a.this.LU.onMuteStateChanged(!z);
                    }
                }
            });
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setDataSource(PlayVideoInfo playVideoInfo) {
        this.LS.a(d.a(playVideoInfo));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setForceGetAudioFocus(boolean z) {
        this.LV = z;
        Context context = this.mContext;
        if (context != null) {
            com.kwad.components.core.t.a.al(context).a(op());
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setRadius(float f, float f2, float f3, float f4) {
        this.LS.setRadius(f, f2, f3, f4);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setSpeed(float f) {
        this.LS.setSpeed(f);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setSurface(Surface surface) {
        this.LS.setSurface(surface);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setVideoAdaptStrategy(int i) {
        this.LW = i;
        DetailVideoView detailVideoView = this.mDetailVideoView;
        if (detailVideoView != null) {
            detailVideoView.f(true, i);
        }
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void setVolume(float f, float f2) {
        this.LS.setVolume(f, f2);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void start() {
        this.LS.start();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void start(long j) {
        this.LS.start(j);
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void stopAndPrepareAsync() {
        this.LS.stopAndPrepareAsync();
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void unRegisterVideoPlayStateListener(OfflineVideoPlayStateListener offlineVideoPlayStateListener) {
        this.LS.d(d.a(offlineVideoPlayStateListener));
    }

    @Override // com.kwad.components.offline.api.core.video.IKsMediaPlayer
    public final void updateKsPlayLogParam(KsPlayerLogParams ksPlayerLogParams) {
        this.LS.a(d.a(ksPlayerLogParams));
    }
}
