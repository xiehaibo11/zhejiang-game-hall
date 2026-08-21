package com.kwad.components.ad.reward.presenter.f;

public final class e extends com.kwad.components.ad.reward.presenter.f.d implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private com.kwad.components.core.webview.b.f lu;
    private final com.kwad.components.core.webview.b.e.a pg;
    private android.view.ViewGroup wA;
    private android.view.ViewGroup wB;
    private android.view.View wC;
    private android.view.ViewGroup wD;
    private android.widget.FrameLayout wE;
    private android.view.ViewGroup wz;








    public e() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.f.e$4 r0 = new com.kwad.components.ad.reward.presenter.f.e$4
            r0.<init>(r1)
            r1.pg = r0
            return
    }

    private void R(int r5) {
            r4 = this;
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            com.kwad.components.ad.reward.presenter.f.e$3 r1 = new com.kwad.components.ad.reward.presenter.f.e$3
            r1.<init>(r4, r5)
            r2 = 800(0x320, double:3.953E-321)
            r0.postDelayed(r1, r2)
            return
    }

    private int S(int r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.wA
            if (r0 == 0) goto L11
            int r0 = r0.getHeight()
            if (r0 <= 0) goto L11
            android.view.ViewGroup r2 = r1.wA
            int r2 = r2.getHeight()
            return r2
        L11:
            android.view.ViewGroup r0 = r1.wD
            if (r0 == 0) goto L22
            int r0 = r0.getHeight()
            if (r0 <= 0) goto L22
            android.view.ViewGroup r2 = r1.wD
            int r2 = r2.getHeight()
            return r2
        L22:
            if (r2 <= 0) goto L25
            return r2
        L25:
            android.content.Context r2 = r1.getContext()
            r0 = 1123024896(0x42f00000, float:120.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r0)
            return r2
    }

    static int a(com.kwad.components.ad.reward.presenter.f.e r0, int r1) {
            int r0 = r0.S(r1)
            return r0
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static int d(com.kwad.components.ad.reward.presenter.f.e r0) {
            int r0 = r0.je()
            return r0
    }

    static android.widget.FrameLayout e(com.kwad.components.ad.reward.presenter.f.e r0) {
            android.widget.FrameLayout r0 = r0.wE
            return r0
    }

    private com.kwad.components.core.webview.b.c ei() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.e$7 r0 = new com.kwad.components.ad.reward.presenter.f.e$7
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.b.f ej() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.e$6 r0 = new com.kwad.components.ad.reward.presenter.f.e$6
            r0.<init>(r1)
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.core.webview.b.f g(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.core.webview.b.f r0 = r0.lu
            return r0
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j i(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j j(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private int je() {
            r2 = this;
            android.view.ViewGroup r0 = r2.wz
            int r0 = r0.getHeight()
            if (r0 <= 0) goto Lf
            android.view.ViewGroup r0 = r2.wz
        La:
            int r0 = r0.getHeight()
            return r0
        Lf:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aH(r0)
            if (r0 == 0) goto L33
            android.view.View r0 = r2.wC
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            int r0 = r0.topMargin
            int r0 = r0 + 0
            android.view.View r1 = r2.wC
            int r1 = r1.getHeight()
            int r0 = r0 + r1
            if (r0 <= 0) goto L33
            return r0
        L33:
            android.view.ViewGroup r0 = r2.wB
            goto La
    }

    private com.kwad.components.core.webview.b.e jf() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.e$5 r0 = new com.kwad.components.ad.reward.presenter.f.e$5
            r0.<init>(r1)
            return r0
    }

    static com.kwad.components.ad.reward.j k(com.kwad.components.ad.reward.presenter.f.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r1, android.view.View r2) {
            r0 = this;
            android.view.ViewGroup$LayoutParams r1 = r2.getLayoutParams()
            if (r1 == 0) goto L16
            boolean r2 = r1 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r2 == 0) goto L13
            r2 = r1
            android.view.ViewGroup$MarginLayoutParams r2 = (android.view.ViewGroup.MarginLayoutParams) r2
            int r2 = r2.bottomMargin
            int r1 = r1.height
            int r2 = r2 + r1
            goto L17
        L13:
            int r2 = r1.height
            goto L17
        L16:
            r2 = 0
        L17:
            r0.R(r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.core.webview.b.f r3 = r1.ej()
            r1.lu = r3
            com.kwad.components.ad.reward.j r3 = r1.qx
            com.kwad.components.core.webview.b.e.a r0 = r1.pg
            r3.a(r0)
            com.kwad.components.core.webview.b.f r3 = r1.lu
            r2.c(r3)
            com.kwad.components.core.webview.b.e r3 = r1.jf()
            r2.c(r3)
            com.kwad.components.core.webview.b.b r3 = new com.kwad.components.core.webview.b.b
            com.kwad.components.ad.reward.presenter.f.e$1 r0 = new com.kwad.components.ad.reward.presenter.f.e$1
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            com.kwad.components.core.webview.b.c r3 = r1.ei()
            r2.c(r3)
            com.kwad.components.core.webview.jshandler.e r3 = new com.kwad.components.core.webview.jshandler.e
            com.kwad.components.ad.reward.presenter.f.e$2 r0 = new com.kwad.components.ad.reward.presenter.f.e$2
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r2)
            android.widget.FrameLayout r0 = r2.wE
            r1 = 0
            r0.setVisibility(r1)
            r2.R(r1)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r1) {
            r0 = this;
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            super.cc()
            android.widget.FrameLayout r0 = r2.wE
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    protected final boolean cd() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.wE
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-video-middle-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_middle
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wE = r0
            int r0 = com.kwad.sdk.R.id.ksad_js_top
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.wz = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_detail_top_toolbar
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.wB = r0
            int r0 = com.kwad.sdk.R.id.ksad_js_bottom
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.wA = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_web_card_webView
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.wD = r0
            int r0 = com.kwad.sdk.R.id.ksad_compliance_view
            android.view.View r0 = r1.findViewById(r0)
            r1.wC = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.b(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 0
            r0.a(r1)
            return
    }
}
