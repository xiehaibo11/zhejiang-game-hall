package com.kwad.components.ad.fullscreen.c;

import android.text.TextUtils;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.RewardRenderResult;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.j;
import com.kwad.components.ad.reward.page.BackPressHandleResult;
import com.kwad.components.ad.reward.presenter.d;
import com.kwad.components.ad.reward.presenter.f.h;
import com.kwad.components.ad.reward.presenter.i;
import com.kwad.components.ad.reward.presenter.k;
import com.kwad.components.ad.reward.presenter.l;
import com.kwad.components.ad.reward.presenter.q;
import com.kwad.components.ad.reward.presenter.u;
import com.kwad.components.core.webview.b.e.e;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ai;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a implements f {
    private com.kwad.components.ad.fullscreen.b gf;
    private ViewGroup gg;
    private com.kwad.components.core.l.b gh;
    private q gi;
    private com.kwad.components.ad.reward.presenter.f.b gj;
    private e gk;
    private com.kwad.components.ad.reward.presenter.e.a gl;
    private h gm;
    private FrameLayout mPlayLayout;

    public b(com.kwad.components.core.l.b bVar, ViewGroup viewGroup, com.kwad.components.ad.fullscreen.b bVar2, j jVar) {
        this.gh = bVar;
        this.gf = bVar2;
        this.gg = viewGroup;
        this.qx = jVar;
        bI();
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(f fVar) {
        return getPriority() - fVar.getPriority();
    }

    private void bI() {
        if (this.gf == null) {
            return;
        }
        bN();
        AdInfo adInfoBB = this.gf.bB();
        boolean zCF = com.kwad.sdk.core.response.b.a.cF(adInfoBB);
        boolean zDF = com.kwad.sdk.core.response.b.b.dF(adInfoBB);
        if (zCF) {
            this.qx.a(RewardRenderResult.LIVE_TK);
            com.kwad.components.core.webview.b.d.b.sf().a(bO());
            bK();
        } else if (zDF) {
            com.kwad.components.core.webview.b.d.b.sf().a(bO());
            this.qx.a(RewardRenderResult.TK_IMAGE);
            bL();
        } else if (!j.a(this.qx)) {
            this.qx.a(RewardRenderResult.DEFAULT);
            bJ();
        } else {
            this.qx.a(RewardRenderResult.FULLSCREEN_TK);
            bM();
            com.kwad.components.core.webview.b.d.b.sf().a(bO());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bJ() {
        com.kwad.components.core.webview.b.d.b.sf().b(this.gk);
        AdTemplate adTemplate = this.gf.getAdTemplate();
        AdInfo adInfoBB = this.gf.bB();
        boolean z = this.gf.bC() && !ai.IO();
        a(new u(), true);
        if (com.kwad.sdk.core.response.b.a.aH(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.c(), true);
        }
        a(new l(), true);
        a(new com.kwad.components.ad.reward.presenter.platdetail.c(), true);
        a(new com.kwad.components.ad.reward.presenter.f.e(), true);
        if (com.kwad.sdk.core.response.b.b.cM(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.f.j(), true);
        }
        if (!z) {
            a(new com.kwad.components.ad.reward.presenter.platdetail.actionbar.c(), true);
        }
        a(new com.kwad.components.ad.reward.presenter.c.a(), true);
        if (com.kwad.sdk.core.response.b.b.bN(adTemplate)) {
            a(new com.kwad.components.ad.fullscreen.c.a.f(), true);
        }
        if (com.kwad.sdk.core.response.b.a.aV(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.platdetail.b(), true);
        }
        a(new k(), true);
        if (com.kwad.sdk.core.response.b.a.cw(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.b.c(), true);
            a(new com.kwad.components.ad.reward.presenter.b.b(), true);
            a(new com.kwad.components.ad.reward.presenter.j(), true);
            a(new com.kwad.components.ad.reward.presenter.b.a(), true);
        }
        a(new c(), true);
        a(new i(), true);
    }

    private void bK() {
        com.kwad.components.ad.reward.presenter.f.b bVar = new com.kwad.components.ad.reward.presenter.f.b();
        this.gj = bVar;
        a(bVar);
    }

    private void bL() {
        com.kwad.components.ad.reward.presenter.f.c cVar = new com.kwad.components.ad.reward.presenter.f.c();
        this.gm = cVar;
        a(cVar);
    }

    private void bM() {
        a(new com.kwad.components.ad.fullscreen.c.c.b(), true);
    }

    private void bN() {
        AdTemplate adTemplate = this.gf.getAdTemplate();
        AdInfo adInfoBB = this.gf.bB();
        a(new a(), true);
        a(new com.kwad.components.ad.reward.presenter.d.b(adTemplate, false), true);
        q qVar = new q(adTemplate, false, false);
        this.gi = qVar;
        a(qVar, true);
        a(new d(adTemplate, adInfoBB, this.gg), true);
        if (com.kwad.sdk.core.response.b.b.dC(adInfoBB) && ai.IO()) {
            com.kwad.components.ad.reward.presenter.e.a aVar = new com.kwad.components.ad.reward.presenter.e.a();
            this.gl = aVar;
            a(aVar, true);
        }
    }

    private e bO() {
        if (this.gk == null) {
            final String strB = com.kwad.components.core.webview.b.j.b("ksad-fullscreen-video-card", this.gf.getAdTemplate());
            final String strB2 = com.kwad.components.core.webview.b.j.b("ksad-live-video-card", this.qx.mAdTemplate);
            final String strB3 = com.kwad.components.core.webview.b.j.b("ksad-image-video-card", this.qx.mAdTemplate);
            this.gk = new e() { // from class: com.kwad.components.ad.fullscreen.c.b.1
                @Override // com.kwad.components.core.webview.b.e.b
                public final void q(String str) {
                    if (strB.equals(str) || strB2.equals(str)) {
                        j.a(b.this.getContext(), b.this.qx, b.this.mPlayLayout);
                        b.this.bJ();
                    } else if (TextUtils.equals(strB3, str)) {
                        b.this.qx.a(RewardRenderResult.DEFAULT);
                        b.this.bJ();
                    }
                }
            };
        }
        return this.gk;
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.qx.b(this);
    }

    @Override // com.kwad.components.ad.reward.e.f
    public final void bD() {
        this.qx.E(true);
    }

    public final boolean bP() {
        q qVar = this.gi;
        if (qVar != null && qVar.bP()) {
            return true;
        }
        com.kwad.components.ad.reward.presenter.e.a aVar = this.gl;
        if (aVar != null && aVar.gA() == BackPressHandleResult.HANDLED) {
            return true;
        }
        com.kwad.components.ad.reward.presenter.f.b bVar = this.gj;
        return bVar != null && bVar.gA() == BackPressHandleResult.HANDLED;
    }

    @Override // com.kwad.components.ad.reward.e.f
    public final int getPriority() {
        return 0;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.mPlayLayout = (FrameLayout) this.gg.findViewById(R.id.ksad_reward_play_layout);
        if (RewardRenderResult.DEFAULT.equals(this.qx.fZ())) {
            j.a(getContext(), this.qx, this.mPlayLayout);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.c(this);
        com.kwad.components.core.webview.b.d.b.sf().b(this.gk);
    }
}
