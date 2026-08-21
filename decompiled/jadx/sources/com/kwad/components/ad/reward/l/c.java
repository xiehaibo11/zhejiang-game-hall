package com.kwad.components.ad.reward.l;

import android.content.Context;
import com.kwad.components.ad.reward.j;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.l;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.response.b.f;
import com.kwad.sdk.core.response.model.VideoPlayerStatus;
import com.kwad.sdk.core.video.a.c;
import com.kwad.sdk.utils.h;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.j.b implements j.a {
    private boolean kU;
    private Context mContext;
    private KsVideoPlayConfig mVideoPlayConfig;
    private VideoPlayerStatus mVideoPlayerStatus;
    private boolean nw;
    private l ny;
    private j qx;
    private String yb;
    private AtomicBoolean yc;
    private boolean yd;
    private final List<h.a> ye;
    private final List<b> yf;
    private OfflineOnAudioConflictListener yg;

    public c(j jVar, DetailVideoView detailVideoView) {
        super(jVar.mAdTemplate, detailVideoView);
        this.yc = new AtomicBoolean(false);
        this.yd = false;
        this.kU = false;
        this.ye = new ArrayList();
        this.yf = new ArrayList();
        this.yg = new OfflineOnAudioConflictListener() { // from class: com.kwad.components.ad.reward.l.c.1
            @Override // com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener
            public final void onAudioBeOccupied() {
                c.a(c.this, true);
                if (c.this.GL != null) {
                    c.this.GL.setAudioEnabled(false);
                }
                synchronized (c.this.ye) {
                    Iterator it = c.this.ye.iterator();
                    while (it.hasNext()) {
                        ((h.a) it.next()).onAudioBeOccupied();
                    }
                }
            }

            @Override // com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener
            public final void onAudioBeReleased() {
                synchronized (c.this.ye) {
                    Iterator it = c.this.ye.iterator();
                    while (it.hasNext()) {
                        ((h.a) it.next()).onAudioBeReleased();
                    }
                }
            }
        };
        this.qx = jVar;
        this.mContext = jVar.mContext;
        this.mVideoPlayConfig = jVar.mVideoPlayConfig;
        this.mVideoPlayerStatus = this.mAdTemplate.mVideoPlayerStatus;
        this.yb = getVideoUrl();
    }

    static /* synthetic */ boolean a(c cVar, boolean z) {
        cVar.yd = true;
        return true;
    }

    private void aJ() {
        if (jP()) {
            return;
        }
        this.GL.a(new b.a(this.mAdTemplate).cn(this.yb).co(f.b(com.kwad.sdk.core.response.b.d.ch(this.mAdTemplate))).a(this.mVideoPlayerStatus).b(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate)).yS(), this.mDetailVideoView);
        KsVideoPlayConfig ksVideoPlayConfig = this.mVideoPlayConfig;
        if (ksVideoPlayConfig != null) {
            setAudioEnabled(ksVideoPlayConfig.isVideoSoundEnable(), false);
        }
        this.GL.prepareAsync();
    }

    private String getVideoUrl() {
        if (jP()) {
            return "";
        }
        String strF = com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
        return (fileBR == null || !fileBR.exists()) ? com.kwad.sdk.core.config.d.zz() > 0 ? com.kwad.sdk.core.videocache.c.a.bj(this.mContext).dN(strF) : strF : fileBR.getAbsolutePath();
    }

    private boolean jP() {
        return com.kwad.sdk.core.response.b.a.cw(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate));
    }

    private void stop() {
        pause();
        this.kU = true;
    }

    public final void a(b bVar) {
        this.yf.add(bVar);
    }

    public final void a(h.a aVar) {
        this.ye.add(aVar);
    }

    public final void b(b bVar) {
        this.yf.remove(bVar);
    }

    public final void b(h.a aVar) {
        this.ye.remove(aVar);
    }

    @Override // com.kwad.components.ad.j.b, com.kwad.components.ad.j.a
    public final long getPlayDuration() {
        if (this.yc.get()) {
            return super.getPlayDuration();
        }
        return 0L;
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gj() {
        this.yd = false;
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gk() {
        if (this.kU) {
            return;
        }
        resume();
        if (this.nw || (com.kwad.components.ad.reward.a.b.gF() && this.yd)) {
            com.kwad.components.core.t.a.al(this.mContext).aJ(com.kwad.components.ad.reward.a.b.gF());
            if (com.kwad.components.ad.reward.a.b.gF() && this.yd) {
                this.yd = false;
                this.nw = true;
                setAudioEnabled(true, false);
            } else {
                if (this.qx.oU || !com.kwad.components.core.t.a.al(this.mContext).qh()) {
                    return;
                }
                this.nw = false;
                setAudioEnabled(false, false);
            }
        }
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gl() {
        pause();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gm() {
        this.yd = false;
        if (!this.yc.get() || this.GL == null) {
            return;
        }
        this.GL.d(this.ny);
        this.GL.release();
    }

    public final void jN() {
        if (this.yc.get()) {
            return;
        }
        this.yc.set(true);
        aJ();
        this.ny = new l() { // from class: com.kwad.components.ad.reward.l.c.2
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayError(int i, int i2) {
                super.onMediaPlayError(i, i2);
                com.kwad.components.core.o.a.pA().b(c.this.mAdTemplate, i, i2);
            }
        };
        this.GL.c(this.ny);
        this.GL.a(new c.e() { // from class: com.kwad.components.ad.reward.l.c.3
            @Override // com.kwad.sdk.core.video.a.c.e
            public final void a(com.kwad.sdk.core.video.a.c cVar) {
                com.kwad.sdk.core.c.b.AU();
                if (com.kwad.sdk.core.c.b.isAppOnForeground()) {
                    c.this.GL.start();
                }
            }
        });
        com.kwad.components.core.t.a.al(this.mContext).a(this.yg);
    }

    public final void jO() {
        Iterator<b> it = this.yf.iterator();
        while (it.hasNext()) {
            it.next().jh();
        }
    }

    @Override // com.kwad.components.ad.j.b, com.kwad.components.ad.j.a
    public final void pause() {
        if (!this.yc.get() || this.GL == null || jP() || j.e(this.qx)) {
            return;
        }
        super.pause();
    }

    @Override // com.kwad.components.ad.j.b, com.kwad.components.ad.j.a
    public final void release() {
        super.release();
        com.kwad.components.core.t.a.al(this.mContext).b(this.yg);
    }

    @Override // com.kwad.components.ad.j.b, com.kwad.components.ad.j.a
    public final void resume() {
        this.kU = false;
        if (!this.yc.get() || this.GL == null || jP() || j.e(this.qx)) {
            return;
        }
        super.resume();
    }

    @Override // com.kwad.components.ad.j.a
    public final void setAudioEnabled(boolean z, boolean z2) {
        this.nw = z;
        if (!this.yc.get() || this.GL == null) {
            return;
        }
        if (z && z2) {
            com.kwad.components.core.t.a.al(this.mContext).aJ(true);
        }
        this.GL.setAudioEnabled(z);
    }

    @Override // com.kwad.components.ad.j.a
    @Deprecated
    public final void skipToEnd() {
        if (!this.yc.get() || this.GL == null) {
            return;
        }
        this.GL.onPlayStateChanged(9);
        stop();
    }
}
