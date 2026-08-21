package com.kwad.components.ad.reward.presenter.f;

import android.content.DialogInterface;
import com.kwad.components.ad.reward.RewardRenderResult;
import com.kwad.components.ad.reward.j.d;
import com.kwad.components.ad.reward.j.e;
import com.kwad.components.ad.reward.j.h;
import com.kwad.components.ad.reward.j.k;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.a.h;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.a.w;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.q;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.b.y;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.au;
import com.kwad.components.core.webview.jshandler.z;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.h;

/* JADX INFO: loaded from: classes2.dex */
public abstract class d extends com.kwad.components.ad.reward.presenter.a implements DialogInterface.OnDismissListener, com.kwad.components.ad.reward.j.a.e, w.a {
    protected com.kwad.components.ad.reward.j.a.d wk;
    private p wl;
    private o wm;
    private com.kwad.components.ad.reward.j.i wn;
    private com.kwad.components.ad.reward.j.j wo;
    private y wp;
    private boolean wq;
    private com.kwad.components.core.webview.b.a.h wr;
    protected f ws;
    private au.b wt = new au.b() { // from class: com.kwad.components.ad.reward.presenter.f.d.1
        @Override // com.kwad.components.core.webview.jshandler.au.b
        public final void P(int i) {
            z.b bVar = new z.b();
            bVar.jG = i;
            bVar.jI = d.this.qx.mRootContainer.getTouchCoords();
            com.kwad.components.core.e.d.a.a(new a.C0150a(d.this.getContext()).P(d.this.qx.mAdTemplate).b(d.this.qx.mApkDownloadHelper).am(false).a(bVar).ao(true));
        }
    };
    private final h.a gH = new h.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.5
        @Override // com.kwad.sdk.utils.h.a
        public final void onAudioBeOccupied() {
            if (d.this.wm == null || com.kwad.components.ad.reward.a.b.gF()) {
                return;
            }
            m mVar = new m();
            mVar.Xa = true;
            d.this.wm.c(mVar);
        }

        @Override // com.kwad.sdk.utils.h.a
        public final void onAudioBeReleased() {
        }
    };
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener = new com.kwad.components.ad.reward.e.j() { // from class: com.kwad.components.ad.reward.presenter.f.d.6
        @Override // com.kwad.components.ad.reward.e.j
        public final void onRewardVerify() {
            if (d.this.wn != null) {
                com.kwad.components.core.webview.b.b.h hVar = new com.kwad.components.core.webview.b.b.h();
                hVar.WV = 1;
                d.this.wn.a(hVar);
            }
        }
    };
    private final com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.7
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            if (d.this.wo != null) {
                bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.f.d.7.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        com.kwad.components.core.webview.b.b.o oVar = new com.kwad.components.core.webview.b.b.o();
                        oVar.Xb = 1;
                        d.this.wo.a(oVar);
                        if (d.this.wr != null) {
                            d.this.wr.aN(d.this.qx.pL);
                        }
                    }
                }, 0L);
            }
        }
    };
    private final l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.reward.presenter.f.d.8
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            d.this.hE();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayError(int i, int i2) {
            d.this.iZ();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            d.this.a(j, j2);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            d.this.g(0.0d);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPreparing() {
            d.this.g(0.0d);
        }
    };

    public d() {
        if (iR()) {
            this.ws = new f();
        }
    }

    private void c(long j, long j2) {
        if (j2 < Math.min(com.kwad.sdk.core.response.b.a.Y(this.qx.mAdTemplate.adInfoList.get(0)), j) - 800) {
            this.qx.pC = (int) (((r3 - j2) / 1000.0f) + 0.5f);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g(double d) {
        this.wp.Xk = false;
        this.wp.Xg = false;
        this.wp.nM = (int) ((d / 1000.0d) + 0.5d);
        ja();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void hE() {
        if (this.qx.po) {
            iZ();
        } else {
            iY();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iT() {
        com.kwad.sdk.core.report.a.b(this.qx.mAdTemplate, 17, this.qx.mReportExtData);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iU() {
        this.qx.G(jb());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iV() {
        com.kwad.components.ad.reward.i.b.a(this.qx.mAdTemplate, jb(), "endTopBar", new com.kwad.sdk.core.report.j().cg(39).c(this.qx.mRootContainer.getTouchCoords()), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iW() {
        com.kwad.components.ad.reward.i.b.a(this.qx.mAdTemplate, jb(), (String) null, new com.kwad.sdk.core.report.j().cg(40).c(this.qx.mRootContainer.getTouchCoords()), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iX() {
        com.kwad.components.ad.reward.i.b.a(this.qx.mAdTemplate, jb(), (String) null, new com.kwad.sdk.core.report.j().cg(41).c(this.qx.mRootContainer.getTouchCoords()), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    private void iY() {
        this.wp.Xg = true;
        this.wp.Xk = false;
        this.wp.nM = com.kwad.sdk.core.response.b.a.G(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate));
        ja();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iZ() {
        this.wp.Xk = true;
        this.wp.Xg = false;
        ja();
    }

    private void ja() {
        y yVar;
        p pVar = this.wl;
        if (pVar == null || (yVar = this.wp) == null) {
            return;
        }
        pVar.a(yVar);
    }

    private String jb() {
        com.kwad.components.ad.reward.j.a.d dVar = this.wk;
        if (dVar == null) {
            return null;
        }
        return dVar.getTkTemplateId();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRewardVerify() {
        this.qx.mAdOpenInteractionListener.onRewardVerify();
    }

    public void a(long j, long j2) {
        c(j, j2);
        g(j2);
    }

    public final void a(com.kwad.components.ad.reward.c.b bVar) {
        if (this.qx != null) {
            this.qx.b(bVar);
        }
    }

    public void a(o oVar) {
        this.wm = oVar;
        this.qx.oV.a(this.gH);
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.f.d.4
            @Override // java.lang.Runnable
            public final void run() {
                boolean z = com.kwad.components.core.t.a.al(d.this.getContext()).qh() || !d.this.qx.mVideoPlayConfig.isVideoSoundEnable();
                m mVar = new m();
                mVar.Xa = z;
                d.this.wm.c(mVar);
                d.this.qx.oV.setAudioEnabled(!z, false);
            }
        });
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(p pVar) {
        this.wl = pVar;
        this.qx.oV.a(this.mVideoPlayStateListener);
    }

    public void a(t tVar) {
        com.kwad.components.ad.reward.presenter.e.a(this.qx, false);
    }

    public void a(am amVar) {
        f fVar = this.ws;
        if (fVar != null) {
            fVar.b(amVar);
        }
    }

    public void a(com.kwad.sdk.components.l lVar, com.kwad.sdk.core.webview.b bVar) {
        k kVar = new k();
        kVar.a(new k.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.9
            @Override // com.kwad.components.ad.reward.j.k.a
            public final void d(q qVar) {
                com.kwad.components.ad.reward.d.fw().c(qVar);
            }
        });
        lVar.c(kVar);
        long j = this.qx.pE;
        lVar.c(new com.kwad.components.ad.reward.j.g(j > 0 ? ((int) j) / 1000 : 0));
        com.kwad.components.ad.reward.j.i iVar = new com.kwad.components.ad.reward.j.i();
        this.wn = iVar;
        lVar.c(iVar);
        com.kwad.components.ad.reward.j.j jVar = new com.kwad.components.ad.reward.j.j();
        this.wo = jVar;
        lVar.c(jVar);
        com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
        this.qx.b(this.mPlayEndPageListener);
        lVar.c(new com.kwad.components.core.webview.jshandler.z(new z.b() { // from class: com.kwad.components.ad.reward.presenter.f.d.10
            @Override // com.kwad.components.core.webview.jshandler.z.b
            public final void a(z.a aVar) {
                d.this.getTKContainer().setVisibility(8);
            }
        }));
        com.kwad.components.ad.reward.j.d dVar = new com.kwad.components.ad.reward.j.d();
        dVar.a(new d.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.11
            @Override // com.kwad.components.ad.reward.j.d.a
            public final void a(final com.kwad.components.core.webview.b.b.p pVar) {
                com.kwad.components.core.e.d.a.a(new a.C0150a(d.this.getContext()).P(d.this.qx.mAdTemplate).b(d.this.qx.mApkDownloadHelper).ao(1).a(new a.b() { // from class: com.kwad.components.ad.reward.presenter.f.d.11.1
                    @Override // com.kwad.components.core.e.d.a.b
                    public final void onAdClicked() {
                        if (pVar.Xc) {
                            d.this.iV();
                        } else {
                            d.this.iW();
                        }
                    }
                }));
            }
        });
        lVar.c(dVar);
        com.kwad.components.ad.reward.j.e eVar = new com.kwad.components.ad.reward.j.e();
        eVar.a(new e.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.12
            @Override // com.kwad.components.ad.reward.j.e.a
            public final void jc() {
                com.kwad.components.core.e.d.a.a(new a.C0150a(d.this.getContext()).P(d.this.qx.mAdTemplate).b(d.this.qx.mApkDownloadHelper).ao(2).a(new a.b() { // from class: com.kwad.components.ad.reward.presenter.f.d.12.1
                    @Override // com.kwad.components.core.e.d.a.b
                    public final void onAdClicked() {
                        d.this.iX();
                    }
                }));
            }
        });
        lVar.c(eVar);
        lVar.c(new com.kwad.components.ad.reward.j.h(new h.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.13
            @Override // com.kwad.components.ad.reward.j.h.a
            public final void Q(int i) {
                if (com.kwad.components.ad.reward.j.t(d.this.qx.mAdTemplate)) {
                    if (!com.kwad.components.ad.reward.j.r(d.this.qx.mAdTemplate) || d.this.qx.pA == null) {
                        if (com.kwad.components.ad.reward.j.s(d.this.qx.mAdTemplate) && d.this.qx.pB != null && !d.this.qx.pB.jH()) {
                            d.this.qx.pB.jG();
                        }
                    } else if (!d.this.qx.pA.jH()) {
                        d.this.qx.pA.jG();
                    }
                }
                if (d.this.qx.fZ() != RewardRenderResult.DEFAULT) {
                    d.this.qx.pr = i;
                }
                d.this.notifyRewardVerify();
            }
        }));
        lVar.c(new com.kwad.components.ad.reward.j.c() { // from class: com.kwad.components.ad.reward.presenter.f.d.14
            @Override // com.kwad.components.ad.reward.j.c
            public final void jd() {
                super.jd();
                d.this.iU();
            }
        });
        lVar.c(new com.kwad.components.ad.reward.j.f() { // from class: com.kwad.components.ad.reward.presenter.f.d.15
            @Override // com.kwad.components.ad.reward.j.f
            public final void W(boolean z) {
                super.W(z);
                com.kwad.components.ad.reward.presenter.e.w(d.this.qx);
            }
        });
        lVar.c(new com.kwad.components.ad.reward.j.b() { // from class: com.kwad.components.ad.reward.presenter.f.d.16
            @Override // com.kwad.components.ad.reward.j.b
            public final void jd() {
                super.jd();
                d.this.iT();
            }
        });
        lVar.c(new com.kwad.components.core.webview.b.a.q() { // from class: com.kwad.components.ad.reward.presenter.f.d.2
            @Override // com.kwad.components.core.webview.b.a.q, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.t.h.f(d.this.getContext(), d.this.qx.mAdTemplate);
            }
        });
        lVar.c(new com.kwad.components.ad.reward.h.b(getContext(), this.qx.mAdTemplate, PlayableSource.ACTIONBAR_CLICK));
        com.kwad.components.core.webview.b.a.h hVar = new com.kwad.components.core.webview.b.a.h();
        this.wr = hVar;
        hVar.a(new h.a() { // from class: com.kwad.components.ad.reward.presenter.f.d.3
            @Override // com.kwad.components.core.webview.b.a.h.a
            public final void a(com.kwad.components.core.webview.b.a.h hVar2) {
                hVar2.aN(d.this.qx.pL);
            }
        });
        lVar.c(this.wr);
        lVar.c(new com.kwad.components.core.webview.jshandler.w());
        lVar.c(new au(bVar, this.qx.mApkDownloadHelper, this.wt));
        lVar.c(new w(this));
    }

    @Override // com.kwad.components.core.webview.b.a.w.a
    public final void a(TKAdLiveShopItemInfo tKAdLiveShopItemInfo) {
        this.qx.mAdTemplate.tkLiveShopItemInfo = tKAdLiveShopItemInfo;
    }

    @Override // com.kwad.components.core.webview.b.i
    public void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        this.qx.mAdOpenInteractionListener.bE();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public void ah() {
        super.ah();
        boolean zCd = cd();
        this.wq = zCd;
        if (zCd) {
            this.qx.a(this);
            if (this.wk == null) {
                this.wk = new com.kwad.components.ad.reward.j.a.d(this.qx, -1L, getContext());
            }
            if (this.wp == null) {
                this.wp = new y();
            }
            this.wk.a(this.qx.getActivity(), this.qx.mAdTemplate, this);
            f fVar = this.ws;
            if (fVar != null) {
                fVar.B(this.qx);
            }
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(m mVar) {
        this.qx.oV.setAudioEnabled(!mVar.Xa, true);
    }

    @Override // com.kwad.components.core.webview.b.i
    public void b(WebCloseStatus webCloseStatus) {
    }

    public void cc() {
        f fVar = this.ws;
        if (fVar != null) {
            fVar.cc();
        }
    }

    protected abstract boolean cd();

    public void eh() {
        f fVar = this.ws;
        if (fVar != null) {
            fVar.eh();
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void em() {
    }

    @Override // com.kwad.components.core.webview.b.i
    public com.kwad.sdk.widget.e getTouchCoordsView() {
        return this.qx.mRootContainer;
    }

    protected boolean iR() {
        return false;
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        com.kwad.components.ad.reward.j.a.d dVar = this.wk;
        if (dVar == null || dVar.jt() == null) {
            return;
        }
        this.wk.jt().hb();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public void onUnbind() {
        super.onUnbind();
        if (this.wq) {
            f fVar = this.ws;
            if (fVar != null) {
                fVar.C(this.qx);
            }
            this.qx.b(this);
            this.wk.jv();
            this.qx.oV.b(this.mVideoPlayStateListener);
            this.qx.oV.b(this.gH);
            com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
            this.qx.c(this.mPlayEndPageListener);
        }
    }
}
