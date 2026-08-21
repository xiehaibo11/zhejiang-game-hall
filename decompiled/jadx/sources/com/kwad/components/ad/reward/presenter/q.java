package com.kwad.components.ad.reward.presenter;

import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class q extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f, com.kwad.components.ad.reward.e.h, ah.b {
    private com.kwad.components.core.webview.b.e.e gk;
    private boolean sO;
    private a sP;
    private p sQ;
    private n sR;
    private o sS;
    private int sT;
    private boolean sU;
    private boolean sV;
    private boolean sW;
    private float sz;

    class a extends com.kwad.components.core.video.l {
        private long sY;
        private long videoDuration;

        private a() {
        }

        /* synthetic */ a(q qVar, byte b) {
            this();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            this.sY = j2;
            this.videoDuration = j;
            if (q.this.qx.fO()) {
                return;
            }
            q.this.a(j, j2, false);
        }
    }

    public q(AdTemplate adTemplate) {
        this(adTemplate, true, true);
    }

    public q(AdTemplate adTemplate, boolean z, boolean z2) {
        this.sT = 0;
        this.sU = false;
        this.sV = true;
        this.sW = true;
        this.sV = z;
        this.sW = z2;
        if (com.kwad.sdk.core.response.b.a.bv(com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
            o oVar = new o();
            this.sS = oVar;
            a(oVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(com.kwad.components.ad.reward.e.f fVar) {
        return getPriority() - fVar.getPriority();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(long j, long j2, boolean z) {
        p pVar;
        if (hN() && j2 >= com.heytap.mcssdk.constant.a.q && ((float) j2) >= ((float) j) * this.sz) {
            if (!com.kwad.components.ad.reward.a.b.gK()) {
                n nVar = this.sR;
                if (nVar != null) {
                    nVar.J(!z);
                    this.sT = 2;
                    return;
                }
                return;
            }
            if (this.sU || (pVar = this.sQ) == null) {
                return;
            }
            pVar.hI();
            this.sT = 1;
            this.sU = true;
        }
    }

    private com.kwad.components.core.webview.b.e.e bO() {
        if (this.gk == null) {
            this.gk = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.reward.presenter.q.2
                @Override // com.kwad.components.core.webview.b.e.b
                public final void q(String str) {
                    q.this.hM();
                }
            };
        }
        return this.gk;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void hM() {
        if (this.sW) {
            p pVar = new p(this);
            this.sQ = pVar;
            a((Presenter) pVar, true);
        }
        if (this.sV) {
            n nVar = new n(this);
            this.sR = nVar;
            a((Presenter) nVar, true);
        }
    }

    private boolean hN() {
        return this.sO;
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void a(PlayableSource playableSource, com.kwad.components.ad.reward.e.l lVar) {
        n nVar;
        p pVar;
        this.qx.A(true);
        if (this.sT == 1 && (pVar = this.sQ) != null) {
            pVar.hJ();
        } else {
            if (this.sT != 2 || (nVar = this.sR) == null) {
                return;
            }
            nVar.hide();
        }
    }

    @Override // com.kwad.components.core.webview.jshandler.ah.b
    public final void a(ah.a aVar) {
        a aVar2;
        boolean zIsSuccess = aVar.isSuccess();
        this.sO = zIsSuccess;
        if (!zIsSuccess || (aVar2 = this.sP) == null) {
            return;
        }
        a(aVar2.videoDuration, this.sP.sY, false);
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        if (com.kwad.sdk.core.response.b.a.bv(adInfoCg)) {
            if (this.qx.pk) {
                com.kwad.components.core.webview.b.d.b.sf().a(bO());
            } else {
                bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.q.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        q.this.hM();
                    }
                }, 100L);
            }
        } else if (!com.kwad.sdk.core.response.b.a.by(adInfoCg)) {
            com.kwad.components.core.o.a.pA().V(this.qx.mAdTemplate);
        }
        this.qx.b(this);
        if (this.qx.oX != null) {
            this.qx.oX.a(this);
        }
        boolean zGJ = com.kwad.components.ad.reward.a.b.gJ();
        this.sz = com.kwad.components.ad.reward.a.b.gI();
        if (zGJ) {
            this.sP = new a(this, (byte) 0);
            this.qx.oV.a(this.sP);
        }
        com.kwad.components.ad.reward.b.fp().a(this);
    }

    @Override // com.kwad.components.ad.reward.e.f
    public final void bD() {
        RewardActionBarControl.ShowActionBarResult showActionBarResultIn = this.qx.oY.in();
        if (showActionBarResultIn != null) {
            showActionBarResultIn.equals(RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_PLAYABLE_PORTRAIT);
        }
        if (this.sS == null || this.qx.fX()) {
            return;
        }
        if (hN()) {
            this.sS.e(PlayableSource.PLAY_FINISHED_NORMAL);
        } else {
            this.sS.hH();
        }
    }

    public final boolean bP() {
        boolean zGa = this.qx.ga();
        if (!this.qx.fO() || zGa) {
            return false;
        }
        com.kwad.components.ad.reward.b.fp().fq();
        this.qx.A(false);
        return true;
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bS() {
        this.qx.A(false);
        a aVar = this.sP;
        if (aVar == null || this.sT != 2) {
            return;
        }
        a(aVar.videoDuration, this.sP.sY, true);
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bT() {
    }

    @Override // com.kwad.components.ad.reward.e.f
    public final int getPriority() {
        return 0;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.c(this);
        if (this.qx.oX != null) {
            this.qx.oX.b(this);
        }
        if (this.sP != null) {
            this.qx.oV.b(this.sP);
        }
        com.kwad.components.ad.reward.b.fp().b(this);
        com.kwad.components.core.webview.b.d.b.sf().b(this.gk);
    }
}
