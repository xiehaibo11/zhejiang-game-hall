package com.kwad.components.ad.reward.presenter.f;

import android.widget.FrameLayout;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.ad.reward.n;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class i extends d implements com.kwad.components.ad.reward.e.h {
    private FrameLayout hi;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private long rD;
    private com.kwad.components.core.webview.b.e wQ;
    private com.kwad.components.ad.reward.l.b wR = new com.kwad.components.ad.reward.l.b() { // from class: com.kwad.components.ad.reward.presenter.f.i.1
        @Override // com.kwad.components.ad.reward.l.b
        public final void jh() {
            if (i.this.wQ != null) {
                com.kwad.components.core.webview.b.b.i iVar = new com.kwad.components.core.webview.b.b.i();
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(i.this.qx.mAdTemplate);
                iVar.rewardTime = i.this.qx.pm ? com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.components.core.r.a.pS().pT() == 0 ? com.kwad.sdk.core.response.b.a.aE(adInfoCg) : com.kwad.sdk.core.response.b.a.aC(adInfoCg) : 0;
                i.this.wQ.b(iVar);
            }
        }
    };
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.f.i.2
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            if (com.kwad.sdk.core.response.b.a.ak(com.kwad.sdk.core.response.b.d.cg(i.this.qx.mAdTemplate))) {
                i.this.hi.setVisibility(8);
            }
        }
    };

    private com.kwad.components.core.webview.b.e jf() {
        return new com.kwad.components.core.webview.b.e() { // from class: com.kwad.components.ad.reward.presenter.f.i.3
            @Override // com.kwad.components.core.webview.b.e, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.i iVar = new com.kwad.components.core.webview.b.b.i();
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(i.this.qx.mAdTemplate);
                iVar.rewardTime = i.this.qx.pm ? com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.components.core.r.a.pS().pT() == 0 ? com.kwad.sdk.core.response.b.a.aE(adInfoCg) : com.kwad.sdk.core.response.b.a.aC(adInfoCg) : 0;
                cVar.a(iVar);
            }
        };
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d
    public final void a(long j, long j2) {
        super.a(j, j2);
        n.a(this.qx, j2, this.rD, (com.kwad.sdk.core.response.b.a.aG(this.mAdInfo) && com.kwad.components.core.r.a.pS().pT() == 0 ? com.kwad.sdk.core.response.b.a.aE(this.mAdInfo) : com.kwad.sdk.core.response.b.a.aC(this.mAdInfo)) * (this.qx.pm ? 1000 : 0));
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void a(PlayableSource playableSource, l lVar) {
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.components.l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        com.kwad.components.core.webview.b.e eVarJf = jf();
        this.wQ = eVarJf;
        lVar.c(eVarJf);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (cd() && !this.qx.oV.jR()) {
            AdTemplate adTemplate = this.qx.mAdTemplate;
            this.mAdTemplate = adTemplate;
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
            this.mAdInfo = adInfoCg;
            this.rD = Math.min(com.kwad.sdk.core.response.b.a.H(adInfoCg), com.kwad.sdk.core.response.b.a.Y(this.mAdInfo));
            this.qx.b(this.mPlayEndPageListener);
            this.qx.oV.a(this.wR);
            com.kwad.components.ad.reward.b.fp().a(this);
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / com.kwad.sdk.d.a.a.aH(getContext())) + 0.5f);
        aVar.height = 44;
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bS() {
        if (this.qx.pl) {
            this.hi.setVisibility(8);
        }
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bT() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        if (!this.qx.pl || com.kwad.sdk.core.response.b.a.ak(adInfoCg)) {
            return;
        }
        this.hi.setVisibility(0);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void cc() {
        super.cc();
        this.qx.pl = false;
        this.qx.C(false);
        this.hi.setVisibility(8);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d
    protected final boolean cd() {
        return com.kwad.components.ad.reward.j.b(this.qx) && !this.qx.oV.jR();
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this.hi;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-video-top-bar", this.qx.mAdTemplate);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        FrameLayout frameLayout = (FrameLayout) findViewById(R.id.ksad_js_top);
        this.hi = frameLayout;
        frameLayout.setVisibility(0);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        if (cd()) {
            this.qx.c(this.mPlayEndPageListener);
            this.qx.oV.b(this.wR);
            com.kwad.components.ad.reward.b.fp().b(this);
        }
    }
}
