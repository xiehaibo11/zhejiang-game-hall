package com.kwad.components.ad.reward.presenter.f;

import android.text.TextUtils;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.components.l;
import com.kwad.sdk.utils.be;

public final class g extends d implements RewardActionBarControl.d {
    private FrameLayout lr;
    private int wK = 0;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            g.this.hide();
        }
    };

    private void hide() {
        this.lr.setVisibility(8);
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(new com.kwad.components.ad.reward.c.f(new com.kwad.components.ad.reward.c.d() {
            @Override
            public final void a(com.kwad.components.ad.reward.c.b bVar2) {
                com.kwad.sdk.core.e.c.d("TkRewardActionBarPresenter", "onUpdateExtraReward : " + bVar2.gZ());
                g.this.a(bVar2);
            }
        }));
        lVar.c(new com.kwad.components.core.webview.jshandler.e(new com.kwad.components.core.webview.jshandler.i() {
            @Override
            public final void a(com.kwad.components.core.webview.jshandler.e eVar, String str) {
                if (TextUtils.equals(str, "getExtraReward")) {
                    eVar.a(com.kwad.components.ad.reward.c.a.gW().gX());
                    com.kwad.components.ad.reward.c.a.gW().a(eVar);
                }
            }
        }));
    }

    @Override
    public final void ah() {
        super.ah();
        if (cd()) {
            this.wK = this.lr.getVisibility();
            getRootView().findViewById(R.id.ksad_video_play_bar_h5).setVisibility(8);
            this.qx.b(this.mPlayEndPageListener);
            this.qx.oY.a(this);
        }
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override
    public final void cc() {
        super.cc();
        this.lr.setVisibility(8);
    }

    @Override
    protected final boolean cd() {
        return com.kwad.components.ad.reward.j.d(this.qx) && !this.qx.oV.jR();
    }

    @Override
    public final void f(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a aVar) {
        this.lr.setVisibility(0);
        RewardActionBarControl.a(aVar, this.lr, RewardActionBarControl.ShowActionBarResult.TK);
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.lr;
    }

    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-video-bottom-card-v2", this.qx.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.lr = (FrameLayout) findViewById(R.id.ksad_js_bottom);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        if (cd()) {
            this.qx.c(this.mPlayEndPageListener);
            this.lr.setVisibility(this.wK);
            this.qx.oY.a((RewardActionBarControl.d) null);
        }
    }
}
