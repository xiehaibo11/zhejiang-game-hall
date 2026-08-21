package com.kwad.components.ad.reward;

import android.text.TextUtils;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.page.BackPressHandleResult;
import com.kwad.components.ad.reward.presenter.s;
import com.kwad.components.ad.reward.presenter.t;
import com.kwad.components.ad.reward.presenter.u;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.ai;

public final class o extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f {
    private ViewGroup gg;
    private com.kwad.components.core.l.b gh;
    private com.kwad.components.ad.reward.presenter.q gi;
    private com.kwad.components.ad.reward.presenter.f.b gj;
    private com.kwad.components.ad.reward.presenter.e.a gl;
    private com.kwad.components.ad.reward.presenter.f.h gm;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            String strB = com.kwad.components.core.webview.b.j.b("ksad-neo-video-card", o.this.qx.mAdTemplate);
            String strB2 = com.kwad.components.core.webview.b.j.b("ksad-live-video-card", o.this.qx.mAdTemplate);
            com.kwad.sdk.core.e.c.d("RewardPresenter", "onTkLoadFailed, rewardPageTemplateId: " + strB + ", templateId: " + str);
            String strB3 = com.kwad.components.core.webview.b.j.b("ksad-image-video-card", o.this.qx.mAdTemplate);
            if (TextUtils.equals(strB, str) || TextUtils.equals(strB2, str)) {
                j.a(o.this.getContext(), o.this.qx, o.this.mPlayLayout);
                o.this.qx.a(RewardRenderResult.DEFAULT);
                o oVar = o.this;
                oVar.a(oVar.gh, o.this.mModel);
                return;
            }
            if (TextUtils.equals(strB3, str)) {
                o.this.qx.a(RewardRenderResult.DEFAULT);
                o oVar2 = o.this;
                oVar2.a(oVar2.gh, o.this.mModel);
            }
        }
    };
    private com.kwad.components.ad.reward.model.c mModel;
    private FrameLayout mPlayLayout;
    private j qx;
    private a qy;

    public interface a {
        void onUnbind();
    }

    public o(com.kwad.components.core.l.b bVar, ViewGroup viewGroup, com.kwad.components.ad.reward.model.c cVar, j jVar) {
        this.gg = viewGroup;
        this.mModel = cVar;
        this.qx = jVar;
        this.gh = bVar;
        a(cVar);
        AdInfo adInfoBB = cVar.bB();
        boolean zDF = com.kwad.sdk.core.response.b.b.dF(adInfoBB);
        boolean z = com.kwad.sdk.core.response.b.a.cw(adInfoBB) || com.kwad.sdk.core.response.b.a.aV(adInfoBB) || j.t(cVar.getAdTemplate());
        boolean zCF = com.kwad.sdk.core.response.b.a.cF(adInfoBB);
        com.kwad.sdk.core.e.c.d("RewardPresenter", "notFullTk: " + z + ", mLoadStrategy: " + this.qx.pM);
        if (zCF) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            jVar.a(RewardRenderResult.LIVE_TK);
            bK();
        } else if (zDF) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            jVar.a(RewardRenderResult.TK_IMAGE);
            bL();
        } else if (z || !this.qx.pM.equals(LoadStrategy.FULL_TK)) {
            jVar.a(RewardRenderResult.DEFAULT);
            a(bVar, cVar);
        } else {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            jVar.a(RewardRenderResult.NEO_TK);
            gz();
        }
    }

    @Override
    private int compareTo(com.kwad.components.ad.reward.e.f fVar) {
        return getPriority() - fVar.getPriority();
    }

    private void a(com.kwad.components.ad.reward.model.c cVar) {
        AdTemplate adTemplate = cVar.getAdTemplate();
        AdInfo adInfoBB = cVar.bB();
        if (j.g(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.f());
        }
        if (com.kwad.sdk.core.response.b.a.aG(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.h.a());
        }
        if (com.kwad.sdk.core.response.b.b.cM(adInfoBB)) {
            a(new com.kwad.components.ad.reward.presenter.f.j());
        }
        com.kwad.components.ad.reward.presenter.q qVar = new com.kwad.components.ad.reward.presenter.q(adTemplate);
        this.gi = qVar;
        a((Presenter) qVar, true);
        if (com.kwad.sdk.core.response.b.b.dC(adInfoBB) && ai.IO()) {
            com.kwad.components.ad.reward.presenter.e.a aVar = new com.kwad.components.ad.reward.presenter.e.a();
            this.gl = aVar;
            a(aVar);
        }
    }

    private void a(com.kwad.components.core.l.b bVar, com.kwad.components.ad.reward.model.c cVar) {
        com.kwad.components.ad.reward.model.c cVar2 = this.mModel;
        if (cVar2 == null) {
            return;
        }
        AdInfo adInfoBB = cVar2.bB();
        AdTemplate adTemplate = this.mModel.getAdTemplate();
        a((Presenter) new u(), true);
        if (com.kwad.sdk.core.response.b.a.aH(adInfoBB)) {
            a((Presenter) new com.kwad.components.ad.reward.presenter.c(), true);
        }
        a((Presenter) new com.kwad.components.ad.reward.presenter.l(), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.g(), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.platdetail.c(), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.platdetail.a.e(), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.f.e(), true);
        boolean zHr = cVar.hr();
        boolean zHs = cVar.hs();
        boolean z = cVar.bC() && !ai.IO();
        if (!zHr && !zHs && !z) {
            a((Presenter) new com.kwad.components.ad.reward.presenter.platdetail.actionbar.c(), true);
        }
        a((Presenter) new com.kwad.components.ad.reward.presenter.m(), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.b(adInfoBB), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.d.b(adTemplate, true), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.c.a(), true);
        a((Presenter) new t(), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.d(adTemplate, adInfoBB, this.gg), true);
        a((Presenter) new com.kwad.components.ad.reward.presenter.k(), true);
        if (this.qx.pj && com.kwad.components.ad.reward.d.a.b(this.qx.mContext, com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
            a((Presenter) new com.kwad.components.ad.reward.presenter.a.a(), true);
        }
        if (com.kwad.sdk.core.response.b.b.bO(adTemplate)) {
            a((Presenter) new s(), true);
        }
        if (com.kwad.sdk.core.response.b.a.aV(adInfoBB)) {
            a((Presenter) new com.kwad.components.ad.reward.presenter.platdetail.b(), true);
        }
        if (com.kwad.sdk.core.response.b.a.cw(adInfoBB)) {
            a((Presenter) new com.kwad.components.ad.reward.presenter.b.c(), true);
            a((Presenter) new com.kwad.components.ad.reward.presenter.b.a(), true);
            a((Presenter) new com.kwad.components.ad.reward.presenter.b.b(), true);
            a((Presenter) new com.kwad.components.ad.reward.presenter.j(), true);
        }
        a((Presenter) new com.kwad.components.ad.reward.presenter.i(), true);
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

    private void gz() {
        com.kwad.components.ad.reward.presenter.f.h hVar = new com.kwad.components.ad.reward.presenter.f.h();
        this.gm = hVar;
        a(hVar);
    }

    public final void a(a aVar) {
        this.qy = aVar;
    }

    @Override
    public final void ah() {
        super.ah();
        this.qx.b(this);
        com.kwad.components.ad.reward.c.a.gW().setCallerContext(this.qx);
    }

    @Override
    public final void bD() {
        this.qx.E(true);
    }

    public final BackPressHandleResult gA() {
        com.kwad.components.ad.reward.presenter.q qVar = this.gi;
        if (qVar != null && qVar.bP()) {
            return BackPressHandleResult.HANDLED;
        }
        com.kwad.components.ad.reward.presenter.e.a aVar = this.gl;
        if (aVar != null && aVar.gA() == BackPressHandleResult.HANDLED) {
            return BackPressHandleResult.HANDLED;
        }
        com.kwad.components.ad.reward.presenter.f.b bVar = this.gj;
        if (bVar != null) {
            return bVar.gA();
        }
        com.kwad.components.ad.reward.presenter.f.h hVar = this.gm;
        return hVar != null ? hVar.gA() : BackPressHandleResult.NOT_HANDLED;
    }

    @Override
    public final int getPriority() {
        return 0;
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.mPlayLayout = (FrameLayout) this.gg.findViewById(R.id.ksad_reward_play_layout);
        if (RewardRenderResult.DEFAULT.equals(this.qx.fZ())) {
            j.a(getContext(), this.qx, this.mPlayLayout);
        }
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
        this.gh = null;
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.qx.c(this);
        a aVar = this.qy;
        if (aVar != null) {
            aVar.onUnbind();
        }
        com.kwad.components.ad.reward.c.a.gW().reset();
    }
}
