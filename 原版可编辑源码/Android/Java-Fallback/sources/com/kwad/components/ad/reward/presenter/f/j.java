package com.kwad.components.ad.reward.presenter.f;

public final class j extends com.kwad.components.ad.reward.presenter.f.d implements com.kwad.components.ad.reward.e.h, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private com.kwad.components.core.webview.jshandler.am wH;
    private boolean wI;
    private boolean wJ;
    private android.widget.FrameLayout wT;
    private android.view.View wU;
    private boolean wV;
    private com.kwad.components.ad.reward.j.a wW;




    public j() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.wV = r0
            com.kwad.components.ad.reward.presenter.f.j$1 r0 = new com.kwad.components.ad.reward.presenter.f.j$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            com.kwad.components.ad.reward.presenter.f.j$2 r0 = new com.kwad.components.ad.reward.presenter.f.j$2
            r0.<init>(r1)
            r1.wW = r0
            return
    }

    static android.widget.FrameLayout a(com.kwad.components.ad.reward.presenter.f.j r0) {
            android.widget.FrameLayout r0 = r0.wT
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.presenter.f.j r0, boolean r1) {
            r0.wJ = r1
            return r1
    }

    static void b(com.kwad.components.ad.reward.presenter.f.j r0) {
            r0.jg()
            return
    }

    static com.kwad.components.core.webview.jshandler.am c(com.kwad.components.ad.reward.presenter.f.j r0) {
            com.kwad.components.core.webview.jshandler.am r0 = r0.wH
            return r0
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.f.j r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context e(com.kwad.components.ad.reward.presenter.f.j r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.view.View f(com.kwad.components.ad.reward.presenter.f.j r0) {
            android.view.View r0 = r0.wU
            return r0
    }

    static android.content.Context g(com.kwad.components.ad.reward.presenter.f.j r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.content.Context h(com.kwad.components.ad.reward.presenter.f.j r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void jg() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto L1b
            boolean r1 = r2.wJ
            if (r1 == 0) goto L1b
            boolean r1 = r2.wI
            if (r1 != 0) goto L18
            r0.rz()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rA()
            r0 = 1
            r2.wI = r0
            return
        L18:
            r0.rD()
        L1b:
            return
    }

    private com.kwad.components.core.webview.b.a.e.b ji() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.j$3 r0 = new com.kwad.components.ad.reward.presenter.f.j$3
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r1, android.view.View r2) {
            r0 = this;
            r0.wU = r2
            return
    }

    @Override
    public final void a(com.kwad.components.core.playable.PlayableSource r1, com.kwad.components.ad.reward.e.l r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            super.a(r1)
            r0.wH = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.core.webview.b.a.e r3 = new com.kwad.components.core.webview.b.a.e
            com.kwad.components.core.webview.b.a.e$b r0 = r1.ji()
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.j$a r1 = r2.wW
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r2)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r5) {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r4.getContext()
            int r1 = com.kwad.sdk.d.a.a.getScreenHeight(r1)
            float r1 = (float) r1
            android.content.Context r2 = r4.getContext()
            int r2 = com.kwad.sdk.d.a.a.getScreenWidth(r2)
            float r2 = (float) r2
            float r2 = r2 / r0
            r3 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r3
            int r2 = (int) r2
            r5.width = r2
            float r1 = r1 / r0
            float r1 = r1 + r3
            int r0 = (int) r1
            r5.height = r0
            return
    }

    @Override
    public final void bS() {
            r2 = this;
            boolean r0 = r2.wV
            if (r0 == 0) goto La
            android.widget.FrameLayout r0 = r2.wT
            r1 = 0
            r0.setVisibility(r1)
        La:
            return
    }

    @Override
    public final void bT() {
            r2 = this;
            boolean r0 = r2.wV
            if (r0 == 0) goto Lb
            android.widget.FrameLayout r0 = r2.wT
            r1 = 8
            r0.setVisibility(r1)
        Lb:
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rC()
        Lc:
            r0 = 0
            r2.wV = r0
            android.widget.FrameLayout r0 = r2.wT
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    protected final boolean cd() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void eh() {
            r2 = this;
            super.eh()
            r2.jg()
            r0 = 1
            r2.wV = r0
            android.widget.FrameLayout r0 = r2.wT
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.wT
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-video-topfloor"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_topfloor
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wT = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rC()
        Lc:
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.j$a r1 = r2.wW
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.b(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 0
            r0.a(r1)
            return
    }
}
