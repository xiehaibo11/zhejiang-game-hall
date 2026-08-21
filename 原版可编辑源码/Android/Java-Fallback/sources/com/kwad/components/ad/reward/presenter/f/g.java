package com.kwad.components.ad.reward.presenter.f;

public final class g extends com.kwad.components.ad.reward.presenter.f.d implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.d {
    private android.widget.FrameLayout lr;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private int wK;




    public g() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.wK = r0
            com.kwad.components.ad.reward.presenter.f.g$1 r0 = new com.kwad.components.ad.reward.presenter.f.g$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.f.g r0) {
            r0.hide()
            return
    }

    private void hide() {
            r2 = this;
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.ad.reward.c.f r3 = new com.kwad.components.ad.reward.c.f
            com.kwad.components.ad.reward.presenter.f.g$2 r0 = new com.kwad.components.ad.reward.presenter.f.g$2
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            com.kwad.components.core.webview.jshandler.e r3 = new com.kwad.components.core.webview.jshandler.e
            com.kwad.components.ad.reward.presenter.f.g$3 r0 = new com.kwad.components.ad.reward.presenter.f.g$3
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            boolean r0 = r2.cd()
            if (r0 != 0) goto La
            return
        La:
            android.widget.FrameLayout r0 = r2.lr
            int r0 = r0.getVisibility()
            r2.wK = r0
            android.view.View r0 = r2.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_video_play_bar_h5
            android.view.View r0 = r0.findViewById(r1)
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r2)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r3.getContext()
            int r1 = com.kwad.sdk.utils.be.getScreenWidth(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            int r1 = (int) r1
            r4.width = r1
            android.content.Context r1 = r3.getContext()
            int r1 = com.kwad.sdk.utils.be.getScreenHeight(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            float r1 = r1 + r2
            int r0 = (int) r1
            r4.height = r0
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            super.cc()
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    protected final boolean cd() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = com.kwad.components.ad.reward.j.d(r0)
            if (r0 == 0) goto L14
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 != 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final void f(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r3) {
            r2 = this;
            android.widget.FrameLayout r0 = r2.lr
            r1 = 0
            r0.setVisibility(r1)
            android.widget.FrameLayout r0 = r2.lr
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.TK
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a(r3, r0, r1)
            return
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.lr
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-video-bottom-card-v2"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_bottom
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.lr = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            boolean r0 = r2.cd()
            if (r0 != 0) goto La
            return
        La:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            android.widget.FrameLayout r0 = r2.lr
            int r1 = r2.wK
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r1 = 0
            r0.a(r1)
            return
    }
}
