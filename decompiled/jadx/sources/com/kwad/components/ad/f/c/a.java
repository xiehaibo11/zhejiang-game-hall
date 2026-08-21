package com.kwad.components.ad.f.c;

import android.content.Context;
import com.kwad.components.ad.j.b;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.components.core.j.a;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.l;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.h.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.b.f;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.video.a.c;
import com.kwad.sdk.utils.ag;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends b {
    private com.kwad.components.core.widget.a.b bG;
    private final c cV;
    private KsAdVideoPlayConfig dJ;
    private boolean eA;
    private a.b eI;
    private OfflineOnAudioConflictListener eK;
    private boolean hasNoCache;
    private final AdInfo mAdInfo;
    private Context mContext;
    private boolean nw;
    private boolean nx;
    private l ny;

    public a(final AdTemplate adTemplate, com.kwad.components.core.widget.a.b bVar, DetailVideoView detailVideoView, KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        super(adTemplate, detailVideoView);
        this.hasNoCache = false;
        this.cV = new c() { // from class: com.kwad.components.ad.f.c.a.3
            @Override // com.kwad.sdk.core.h.c
            public final void aK() {
                com.kwad.components.core.j.a.oa().a(a.this.getCurrentVoiceItem());
                a.this.resume();
            }

            @Override // com.kwad.sdk.core.h.c
            public final void aL() {
                com.kwad.components.core.j.a.oa().c(a.this.eI);
                a.this.pause();
            }
        };
        this.eK = new OfflineOnAudioConflictListener() { // from class: com.kwad.components.ad.f.c.a.5
            @Override // com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener
            public final void onAudioBeOccupied() {
                a.c(a.this, false);
                a.this.setAudioEnabled(false);
            }

            @Override // com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener
            public final void onAudioBeReleased() {
            }
        };
        this.bG = bVar;
        this.mAdInfo = d.cg(this.mAdTemplate);
        this.nw = (!(ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) || ((KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig).getVideoSoundValue() == 0) ? com.kwad.sdk.core.response.b.a.bH(this.mAdInfo) : ksAdVideoPlayConfig.isVideoSoundEnable();
        this.dJ = ksAdVideoPlayConfig;
        this.mContext = detailVideoView.getContext();
        if (ksAdVideoPlayConfig != null) {
            try {
                this.hasNoCache = ksAdVideoPlayConfig.isNoCache();
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
        this.ny = new l() { // from class: com.kwad.components.ad.f.c.a.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayError(int i, int i2) {
                super.onMediaPlayError(i, i2);
                com.kwad.components.core.o.a.pA().b(adTemplate, i, i2);
            }
        };
        this.GL.c(this.ny);
        aJ();
        this.GL.a(new c.e() { // from class: com.kwad.components.ad.f.c.a.2
            @Override // com.kwad.sdk.core.video.a.c.e
            public final void a(com.kwad.sdk.core.video.a.c cVar) {
                if (a.this.eU() && a.this.bG.ep()) {
                    a.this.GL.a(com.kwad.sdk.contentalliance.a.a.a.ap(a.this.mAdTemplate));
                    com.kwad.components.core.j.a.oa().a(a.this.getCurrentVoiceItem());
                    a.this.GL.start();
                }
            }
        });
    }

    private void aJ() {
        this.GL.a(new b.a(this.mAdTemplate).cn(d.ci(this.mAdTemplate)).co(f.b(d.ch(this.mAdTemplate))).a(this.mAdTemplate.mVideoPlayerStatus).bd(this.hasNoCache).b(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate)).yS(), true, true, this.mDetailVideoView);
        setAudioEnabled(g(this.nw));
        if (eU()) {
            this.GL.prepareAsync();
            com.kwad.components.core.t.a.al(this.mContext).a(this.eK);
        }
    }

    static /* synthetic */ boolean c(a aVar, boolean z) {
        aVar.eA = false;
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean eU() {
        if (this.nx) {
            return true;
        }
        KsAdVideoPlayConfig ksAdVideoPlayConfig = this.dJ;
        if (ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) {
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig;
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 1) {
                return ag.isNetworkConnected(this.mContext);
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 2) {
                return ag.isWifiConnected(this.mContext);
            }
            if (kSAdVideoPlayConfigImpl.getVideoAutoPlayType() == 3) {
                return false;
            }
            if (kSAdVideoPlayConfigImpl.getDataFlowAutoStartValue() != 0) {
                return ag.isWifiConnected(this.mContext) || (kSAdVideoPlayConfigImpl.isDataFlowAutoStart() && ag.isMobileConnected(this.mContext));
            }
        }
        if (com.kwad.sdk.core.response.b.a.bI(this.mAdInfo) && ag.isNetworkConnected(this.mContext)) {
            return true;
        }
        return com.kwad.sdk.core.response.b.a.bJ(this.mAdInfo) && ag.isWifiConnected(this.mContext);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean g(boolean z) {
        if (!z) {
            return false;
        }
        if (this.eI != null) {
            com.kwad.components.core.j.a.oa();
            if (!com.kwad.components.core.j.a.b(this.eI)) {
                return false;
            }
        }
        if (!com.kwad.sdk.core.config.d.gF()) {
            return !com.kwad.components.core.t.a.al(this.mContext).qi() ? com.kwad.components.core.t.a.al(this.mContext).aJ(false) : !com.kwad.components.core.t.a.al(this.mContext).qh();
        }
        if (!this.eA) {
            this.eA = com.kwad.components.core.t.a.al(this.mContext).aJ(true);
        }
        return this.eA;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public a.b getCurrentVoiceItem() {
        if (this.eI == null) {
            this.eI = new a.b(new a.c() { // from class: com.kwad.components.ad.f.c.a.4
                @Override // com.kwad.components.core.j.a.c
                public final void bi() {
                    a aVar = a.this;
                    aVar.setAudioEnabled(aVar.g(aVar.nw));
                }
            });
        }
        return this.eI;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setAudioEnabled(boolean z) {
        this.GL.setAudioEnabled(z);
    }

    public final void aH() {
        com.kwad.sdk.utils.l.cB(this.mAdTemplate);
        if (this.GL.qD() == null) {
            aJ();
        }
        if (eU() && this.bG.ep()) {
            this.GL.a(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate));
            com.kwad.components.core.j.a.oa().a(getCurrentVoiceItem());
            this.GL.start();
        }
        this.bG.a(this.cV);
    }

    public final void aI() {
        com.kwad.sdk.utils.l.cz(this.mAdTemplate);
        this.bG.b(this.cV);
        this.GL.release();
        com.kwad.components.core.j.a.oa().c(this.eI);
        com.kwad.components.core.t.a.al(this.mContext).b(this.eK);
    }

    public final void eV() {
        this.nx = true;
        if (this.bG.ep()) {
            com.kwad.sdk.utils.l.cA(this.mAdTemplate);
            this.GL.a(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate));
            com.kwad.components.core.j.a.oa().a(getCurrentVoiceItem());
            this.GL.start();
        }
    }

    @Override // com.kwad.components.ad.j.b, com.kwad.components.ad.j.a
    public final void resume() {
        com.kwad.components.core.j.a.oa().a(getCurrentVoiceItem());
        setAudioEnabled(g(this.nw));
        if (eU()) {
            super.resume();
        }
    }
}
