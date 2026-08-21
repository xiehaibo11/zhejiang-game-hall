package com.kwad.components.ad.splashscreen.e;

import android.content.Context;
import com.kwad.components.ad.j.b;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.h.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.b.f;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.VideoPlayerStatus;
import com.kwad.sdk.core.video.a.c;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.utils.h;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class a extends b implements c {
    private boolean EG;
    private Context mContext;
    private KsVideoPlayConfig mVideoPlayConfig;
    private VideoPlayerStatus mVideoPlayerStatus;
    private boolean nw;
    private String yb;
    private final List<h.a> ye;
    private OfflineOnAudioConflictListener yg;

    public a(AdTemplate adTemplate, final DetailVideoView detailVideoView, KsVideoPlayConfig ksVideoPlayConfig) {
        super(adTemplate, detailVideoView);
        this.ye = new ArrayList();
        this.yg = new OfflineOnAudioConflictListener() {
            @Override
            public final void onAudioBeOccupied() {
                synchronized (a.this.ye) {
                    Iterator it = a.this.ye.iterator();
                    while (it.hasNext()) {
                        ((h.a) it.next()).onAudioBeOccupied();
                    }
                }
            }

            @Override
            public final void onAudioBeReleased() {
                synchronized (a.this.ye) {
                    Iterator it = a.this.ye.iterator();
                    while (it.hasNext()) {
                        ((h.a) it.next()).onAudioBeReleased();
                    }
                }
            }
        };
        this.mVideoPlayConfig = ksVideoPlayConfig;
        this.mContext = detailVideoView.getContext();
        String strAS = com.kwad.sdk.core.response.b.a.aS(d.cg(adTemplate));
        this.mVideoPlayerStatus = adTemplate.mVideoPlayerStatus;
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strAS);
        if (fileBR != null && fileBR.exists()) {
            this.yb = fileBR.getAbsolutePath();
        }
        this.GL.a(new c.e() {
            @Override
            public final void a(com.kwad.sdk.core.video.a.c cVar) {
                boolean zA = bm.a(detailVideoView, 50, true);
                com.kwad.sdk.core.e.c.d("SplashPlayModule", " onPrepared" + zA);
                if (zA) {
                    a.this.GL.start();
                }
            }
        });
        com.kwad.components.core.t.a.al(this.mContext).a(this.yg);
    }

    private void aJ() {
        this.GL.a(new b.a(this.mAdTemplate).a(this.mVideoPlayerStatus).cn(this.yb).co(f.b(d.ch(this.mAdTemplate))).b(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate)).yS(), this.mDetailVideoView);
        KsVideoPlayConfig ksVideoPlayConfig = this.mVideoPlayConfig;
        if (ksVideoPlayConfig != null) {
            setAudioEnabled(ksVideoPlayConfig.isVideoSoundEnable(), false);
        }
        this.GL.prepareAsync();
    }

    public final void a(h.a aVar) {
        this.ye.add(aVar);
    }

    @Override
    public final void aK() {
        resume();
    }

    @Override
    public final void aL() {
        pause();
    }

    public final void ag(boolean z) {
        this.EG = true;
    }

    public final void b(h.a aVar) {
        this.ye.remove(aVar);
    }

    public final long getCurrentPosition() {
        return this.GL.getCurrentPosition();
    }

    public final void lB() {
        if (this.GL.qD() == null) {
            aJ();
        }
        this.GL.start();
    }

    @Override
    public final void release() {
        super.release();
        com.kwad.components.core.t.a.al(this.mContext).b(this.yg);
    }

    @Override
    public final void resume() {
        super.resume();
        if (this.nw && this.EG) {
            com.kwad.components.core.t.a.al(this.mContext).aJ(false);
            if (com.kwad.components.core.t.a.al(this.mContext).qh()) {
                this.nw = false;
                setAudioEnabled(false, false);
            }
        }
    }

    @Override
    public final void setAudioEnabled(boolean z, boolean z2) {
        this.nw = z;
        if (z && z2) {
            com.kwad.components.core.t.a.al(this.mContext).aJ(true);
        }
        this.GL.setAudioEnabled(z);
    }
}
