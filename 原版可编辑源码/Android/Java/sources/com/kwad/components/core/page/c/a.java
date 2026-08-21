package com.kwad.components.core.page.c;

import android.content.Context;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.b;
import com.kwad.components.core.video.k;
import com.kwad.components.core.video.l;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.b.f;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.VideoPlayerStatus;
import com.kwad.sdk.core.video.a.c;
import com.kwad.sdk.utils.h;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class a implements com.kwad.components.core.l.a.a {
    private b GL;
    private AdTemplate mAdTemplate;
    private Context mContext;
    private DetailVideoView mDetailVideoView;
    private KsVideoPlayConfig mVideoPlayConfig;
    private VideoPlayerStatus mVideoPlayerStatus;
    private boolean nw;
    private l ny;
    private String yb;
    private boolean yd = false;
    private final List<h.a> ye = new ArrayList();
    private OfflineOnAudioConflictListener yg = new OfflineOnAudioConflictListener() {
        @Override
        public final void onAudioBeOccupied() {
            a.a(a.this, true);
            if (a.this.GL != null) {
                a.this.GL.setAudioEnabled(false);
            }
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

    public a(final AdTemplate adTemplate, DetailVideoView detailVideoView, KsVideoPlayConfig ksVideoPlayConfig) {
        this.mVideoPlayConfig = ksVideoPlayConfig;
        this.mAdTemplate = adTemplate;
        this.mContext = detailVideoView.getContext();
        this.mVideoPlayerStatus = adTemplate.mVideoPlayerStatus;
        String strF = com.kwad.sdk.core.response.b.a.F(d.cg(adTemplate));
        int iZz = com.kwad.sdk.core.config.d.zz();
        if (iZz < 0) {
            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
            if (fileBR != null && fileBR.exists()) {
                strF = fileBR.getAbsolutePath();
            }
            this.mDetailVideoView = detailVideoView;
            this.GL = new b(detailVideoView);
            aJ();
            l lVar = new l() {
                @Override
                public final void onMediaPlayError(int i, int i2) {
                    super.onMediaPlayError(i, i2);
                    com.kwad.components.core.o.a.pA().b(adTemplate, i, i2);
                }
            };
            this.ny = lVar;
            this.GL.c(lVar);
            this.GL.a(new c.e() {
                @Override
                public final void a(c cVar) {
                    a.this.GL.start();
                }
            });
            com.kwad.components.core.t.a.al(this.mContext).a(this.yg);
        }
        if (iZz != 0) {
            strF = com.kwad.sdk.core.videocache.c.a.bj(detailVideoView.getContext()).dN(strF);
        }
        this.yb = strF;
        this.mDetailVideoView = detailVideoView;
        this.GL = new b(detailVideoView);
        aJ();
        l lVar2 = new l() {
            @Override
            public final void onMediaPlayError(int i, int i2) {
                super.onMediaPlayError(i, i2);
                com.kwad.components.core.o.a.pA().b(adTemplate, i, i2);
            }
        };
        this.ny = lVar2;
        this.GL.c(lVar2);
        this.GL.a(new c.e() {
            @Override
            public final void a(c cVar) {
                a.this.GL.start();
            }
        });
        com.kwad.components.core.t.a.al(this.mContext).a(this.yg);
    }

    static boolean a(a aVar, boolean z) {
        aVar.yd = true;
        return true;
    }

    private void aJ() {
        this.GL.a(new b.a(this.mAdTemplate).cn(this.yb).co(f.b(d.ch(this.mAdTemplate))).a(this.mVideoPlayerStatus).b(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate)).yS(), this.mDetailVideoView);
        KsVideoPlayConfig ksVideoPlayConfig = this.mVideoPlayConfig;
        if (ksVideoPlayConfig != null) {
            setAudioEnabled(ksVideoPlayConfig.isVideoSoundEnable(), false);
        }
        this.GL.prepareAsync();
    }

    private void pause() {
        if (this.mAdTemplate.mXiaomiAppStoreDetailViewOpen && this.mAdTemplate.mAdScene != null && this.mAdTemplate.mAdScene.getAdStyle() == 2) {
            return;
        }
        this.GL.pause();
    }

    private void resume() {
        this.GL.resume();
    }

    private void setAudioEnabled(boolean z, boolean z2) {
        this.nw = z;
        this.GL.setAudioEnabled(z);
    }

    public final void a(k kVar) {
        if (kVar == null) {
            return;
        }
        this.GL.c(kVar);
    }

    public final void b(k kVar) {
        if (kVar == null) {
            return;
        }
        this.GL.d(kVar);
    }

    @Override
    public final void c(com.kwad.components.core.n.c cVar) {
        resume();
    }

    @Override
    public final void d(com.kwad.components.core.n.c cVar) {
        pause();
    }

    @Override
    public final void ge() {
        this.yd = false;
        if (this.GL.qD() == null) {
            aJ();
        }
    }

    @Override
    public final void gf() {
        this.yd = false;
        com.kwad.components.core.video.b bVar = this.GL;
        if (bVar != null) {
            bVar.d(this.ny);
            this.GL.release();
        }
    }

    public final void release() {
        com.kwad.components.core.video.b bVar = this.GL;
        if (bVar != null) {
            bVar.clear();
            this.GL.release();
        }
        com.kwad.components.core.t.a.al(this.mContext).b(this.yg);
    }
}
