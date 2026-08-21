package com.kwad.components.ad.reward.presenter.h;

import android.content.DialogInterface;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.j.a.d;
import com.kwad.components.ad.reward.presenter.h;
import com.kwad.components.core.l.a.b;
import com.kwad.components.core.n.c;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.b.v;
import com.kwad.components.core.webview.b.g;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.ak;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.widget.e;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a implements i {
    private FrameLayout lr;
    private AdInfo mAdInfo;
    private boolean tG;
    private boolean tH;
    private d wk;
    private boolean xn;
    private g xo;
    private long xp;
    private j.b tI = new j.b() { // from class: com.kwad.components.ad.reward.presenter.h.a.1
        @Override // com.kwad.components.ad.reward.j.b
        public final boolean interceptPlayCardResume() {
            return a.this.lr != null && a.this.lr.getVisibility() == 0;
        }
    };
    private final com.kwad.components.core.l.a.a sk = new b() { // from class: com.kwad.components.ad.reward.presenter.h.a.2
        @Override // com.kwad.components.core.l.a.b, com.kwad.components.core.l.a.a
        public final void c(c cVar) {
            int i = 0;
            a.this.xn = false;
            if (a.this.xo == null) {
                return;
            }
            v vVar = new v();
            if (com.kwad.components.core.r.a.pS().pY()) {
                com.kwad.components.core.r.a.pS().aI(false);
                if (com.kwad.sdk.core.response.b.a.aF(a.this.mAdInfo) == 0 || com.kwad.components.core.r.a.pS().pU()) {
                    vVar.Xh = 1;
                }
                a.this.xo.b(vVar);
            }
            if (com.kwad.components.core.r.a.pS().pW() && com.kwad.sdk.core.response.b.a.aF(a.this.mAdInfo) == 1) {
                if (com.kwad.components.core.r.a.pS().pX() == 1) {
                    if (ak.ak(a.this.getContext(), com.kwad.sdk.core.response.b.a.aq(a.this.mAdInfo))) {
                        i = 2;
                        vVar.Xh = 2;
                    }
                } else if (com.kwad.components.core.r.a.pS().pX() != 3) {
                    return;
                } else {
                    vVar.Xh = 1;
                }
                com.kwad.components.core.r.a.pS().aF(i);
                a.this.xo.b(vVar);
                return;
            }
            return;
            vVar.Xh = 0;
            a.this.xo.b(vVar);
        }

        @Override // com.kwad.components.core.l.a.b, com.kwad.components.core.l.a.a
        public final void d(c cVar) {
            super.d(cVar);
            a.this.xn = true;
        }
    };
    private final l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.reward.presenter.h.a.3
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            long jA = j.a(j, a.this.mAdInfo);
            long jAE = ((long) com.kwad.sdk.core.response.b.a.aE(a.this.mAdInfo)) * 1000;
            if (j2 <= a.this.xp || jA - j2 <= jAE || a.this.tG) {
                return;
            }
            if (com.kwad.sdk.core.response.b.a.aF(a.this.mAdInfo) == 1) {
                if (ak.ak(a.this.getContext(), com.kwad.sdk.core.response.b.a.aq(a.this.mAdInfo))) {
                    return;
                }
            } else if (a.this.qx.fz) {
                return;
            }
            a.b(a.this, true);
            a.this.wk.a(a.this.qx.getActivity(), a.this.qx.mAdTemplate, a.this);
        }
    };

    static /* synthetic */ boolean b(a aVar, boolean z) {
        aVar.tG = true;
        return true;
    }

    private void hE() {
        if (h.A(this.qx)) {
            bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.h.a.6
                @Override // java.lang.Runnable
                public final void run() {
                    if (a.this.qx.mAdOpenInteractionListener != null) {
                        a.this.qx.mAdOpenInteractionListener.onRewardVerify();
                    }
                    a.this.qx.oV.pause();
                    a.this.qx.fR();
                }
            }, 200L);
            return;
        }
        if (this.qx.mAdOpenInteractionListener != null) {
            this.qx.mAdOpenInteractionListener.onRewardVerify();
        }
        this.qx.oV.pause();
        this.qx.fR();
    }

    private g jl() {
        return new g() { // from class: com.kwad.components.ad.reward.presenter.h.a.5
            @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
            }
        };
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(o oVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(p pVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(t tVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(am amVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.components.l lVar, com.kwad.sdk.core.webview.b bVar) {
        g gVarJl = jl();
        this.xo = gVarJl;
        lVar.c(gVarJl);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        int i;
        this.qx.mAdOpenInteractionListener.bE();
        if (com.kwad.sdk.core.response.b.a.aG(this.mAdInfo)) {
            com.kwad.components.core.r.a.pS().aE(aVar.azc);
            if (aVar.azc == -1) {
                i = 0;
                com.kwad.components.core.r.a.pS().aI(false);
            } else {
                i = 1;
                if (!com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
                    com.kwad.components.core.r.a.pS().aI(true);
                    return;
                } else if (com.kwad.components.core.r.a.pS().pX() == 2) {
                    com.kwad.components.core.r.a.pS().aF(3);
                    return;
                }
            }
            com.kwad.components.core.r.a.pS().aF(i);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.xn = false;
        com.kwad.sdk.core.e.c.d("TkRewardVideoTaskPresenter", "onBind: ");
        if (this.wk == null) {
            this.wk = new d(this.qx, -1L, getContext(), new DialogInterface.OnDismissListener() { // from class: com.kwad.components.ad.reward.presenter.h.a.4
                @Override // android.content.DialogInterface.OnDismissListener
                public final void onDismiss(DialogInterface dialogInterface) {
                    if (a.this.xo == null) {
                        return;
                    }
                    v vVar = new v();
                    if (com.kwad.components.core.r.a.pS().pY()) {
                        com.kwad.components.core.r.a.pS().aI(false);
                        if (com.kwad.sdk.core.response.b.a.aF(a.this.mAdInfo) == 0 || com.kwad.components.core.r.a.pS().pU()) {
                            vVar.Xh = 1;
                        } else {
                            vVar.Xh = 0;
                        }
                        a.this.xo.b(vVar);
                        return;
                    }
                    if (com.kwad.components.core.r.a.pS().pW() && com.kwad.sdk.core.response.b.a.aF(a.this.mAdInfo) == 1) {
                        if (com.kwad.components.core.r.a.pS().pX() == 1) {
                            if (ak.ak(a.this.getContext(), com.kwad.sdk.core.response.b.a.aq(a.this.mAdInfo))) {
                                return;
                            }
                            vVar.Xh = 0;
                            a.this.xo.b(vVar);
                            return;
                        }
                        if (com.kwad.components.core.r.a.pS().pX() == 3) {
                            vVar.Xh = 1;
                            com.kwad.components.core.r.a.pS().aF(0);
                            a.this.xo.b(vVar);
                        }
                    }
                }
            });
        }
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        this.mAdInfo = adInfoCg;
        this.xp = ((long) com.kwad.sdk.core.response.b.a.aD(adInfoCg)) * 1000;
        this.qx.oV.a(this.mVideoPlayStateListener);
        this.qx.a(this.tI);
        this.qx.Lg.add(this.sk);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(m mVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(WebCloseStatus webCloseStatus) {
        this.qx.pm = webCloseStatus != null && webCloseStatus.interactSuccess;
        if (this.qx.pm) {
            this.qx.oV.jO();
            if (com.kwad.components.core.r.a.pS().pT() == 1) {
                hE();
            }
        }
        if (this.tH && !this.xn) {
            this.qx.oV.resume();
        }
        this.lr.setVisibility(8);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void cc() {
        com.kwad.sdk.core.e.c.d("TkRewardVideoTaskPresenter", "onTkLoadFailed: ");
        this.lr.setVisibility(8);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void eh() {
        com.kwad.sdk.core.e.c.d("TkRewardVideoTaskPresenter", "onTkLoadSuccess: ");
        getContext();
        if (ai.IN()) {
            this.lr.setVisibility(0);
            this.qx.oV.pause();
            this.tH = true;
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void em() {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this.lr;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        com.kwad.sdk.core.e.c.d("TkRewardVideoTaskPresenter", "getTkTemplateId: ");
        return com.kwad.components.core.webview.b.j.b("ksad-video-task-card", this.qx.mAdTemplate);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final e getTouchCoordsView() {
        return this.qx.mRootContainer;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        com.kwad.sdk.core.e.c.d("TkRewardVideoTaskPresenter", "onCreate: ");
        this.lr = (FrameLayout) findViewById(R.id.ksad_js_task);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.qx.b(this.tI);
        this.qx.Lg.remove(this.sk);
        this.wk.jv();
        this.wk = null;
        this.lr.setVisibility(8);
        com.kwad.components.core.r.a.pS().clear();
        this.tG = false;
        this.tH = false;
        this.xn = false;
    }
}
