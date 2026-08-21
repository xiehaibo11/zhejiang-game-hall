package com.kwad.components.ad.fullscreen.c;

public final class b extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f {
    private com.kwad.components.ad.fullscreen.b gf;
    private android.view.ViewGroup gg;
    private com.kwad.components.core.l.b gh;
    private com.kwad.components.ad.reward.presenter.q gi;
    private com.kwad.components.ad.reward.presenter.f.b gj;
    private com.kwad.components.core.webview.b.e.e gk;
    private com.kwad.components.ad.reward.presenter.e.a gl;
    private com.kwad.components.ad.reward.presenter.f.h gm;
    private android.widget.FrameLayout mPlayLayout;


    public b(com.kwad.components.core.l.b r1, android.view.ViewGroup r2, com.kwad.components.ad.fullscreen.b r3, com.kwad.components.ad.reward.j r4) {
            r0 = this;
            r0.<init>()
            r0.gh = r1
            r0.gf = r3
            r0.gg = r2
            r0.qx = r4
            r0.bI()
            return
    }

    private int a(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            int r0 = r1.getPriority()
            int r2 = r2.getPriority()
            int r0 = r0 - r2
            return r0
    }

    static android.content.Context a(com.kwad.components.ad.fullscreen.c.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.fullscreen.c.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void bI() {
            r2 = this;
            com.kwad.components.ad.fullscreen.b r0 = r2.gf
            if (r0 != 0) goto L5
            return
        L5:
            r2.bN()
            com.kwad.components.ad.fullscreen.b r0 = r2.gf
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.bB()
            boolean r1 = com.kwad.sdk.core.response.b.a.cF(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.dF(r0)
            if (r1 == 0) goto L2e
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.LIVE_TK
            r0.a(r1)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.bO()
            r0.a(r1)
            r2.bK()
            return
        L2e:
            if (r0 == 0) goto L46
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.bO()
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.TK_IMAGE
            r0.a(r1)
            r2.bL()
            return
        L46:
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.a(r0)
            if (r0 == 0) goto L64
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.FULLSCREEN_TK
            r0.a(r1)
            r2.bM()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.bO()
            r0.a(r1)
            return
        L64:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.RewardRenderResult r1 = com.kwad.components.ad.reward.RewardRenderResult.DEFAULT
            r0.a(r1)
            r2.bJ()
            return
    }

    private void bJ() {
            r5 = this;
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r5.gk
            r0.b(r1)
            com.kwad.components.ad.fullscreen.b r0 = r5.gf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.components.ad.fullscreen.b r1 = r5.gf
            com.kwad.sdk.core.response.model.AdInfo r1 = r1.bB()
            com.kwad.components.ad.fullscreen.b r2 = r5.gf
            boolean r2 = r2.bC()
            r3 = 1
            if (r2 == 0) goto L26
            boolean r2 = com.kwad.sdk.utils.ai.IO()
            if (r2 != 0) goto L26
            r2 = r3
            goto L27
        L26:
            r2 = 0
        L27:
            com.kwad.components.ad.reward.presenter.u r4 = new com.kwad.components.ad.reward.presenter.u
            r4.<init>()
            r5.a(r4, r3)
            boolean r4 = com.kwad.sdk.core.response.b.a.aH(r1)
            if (r4 == 0) goto L3d
            com.kwad.components.ad.reward.presenter.c r4 = new com.kwad.components.ad.reward.presenter.c
            r4.<init>()
            r5.a(r4, r3)
        L3d:
            com.kwad.components.ad.reward.presenter.l r4 = new com.kwad.components.ad.reward.presenter.l
            r4.<init>()
            r5.a(r4, r3)
            com.kwad.components.ad.reward.presenter.platdetail.c r4 = new com.kwad.components.ad.reward.presenter.platdetail.c
            r4.<init>()
            r5.a(r4, r3)
            com.kwad.components.ad.reward.presenter.f.e r4 = new com.kwad.components.ad.reward.presenter.f.e
            r4.<init>()
            r5.a(r4, r3)
            boolean r4 = com.kwad.sdk.core.response.b.b.cM(r1)
            if (r4 == 0) goto L63
            com.kwad.components.ad.reward.presenter.f.j r4 = new com.kwad.components.ad.reward.presenter.f.j
            r4.<init>()
            r5.a(r4, r3)
        L63:
            if (r2 != 0) goto L6d
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.c r2 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.c
            r2.<init>()
            r5.a(r2, r3)
        L6d:
            com.kwad.components.ad.reward.presenter.c.a r2 = new com.kwad.components.ad.reward.presenter.c.a
            r2.<init>()
            r5.a(r2, r3)
            boolean r0 = com.kwad.sdk.core.response.b.b.bN(r0)
            if (r0 == 0) goto L83
            com.kwad.components.ad.fullscreen.c.a.f r0 = new com.kwad.components.ad.fullscreen.c.a.f
            r0.<init>()
            r5.a(r0, r3)
        L83:
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r1)
            if (r0 == 0) goto L91
            com.kwad.components.ad.reward.presenter.platdetail.b r0 = new com.kwad.components.ad.reward.presenter.platdetail.b
            r0.<init>()
            r5.a(r0, r3)
        L91:
            com.kwad.components.ad.reward.presenter.k r0 = new com.kwad.components.ad.reward.presenter.k
            r0.<init>()
            r5.a(r0, r3)
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r1)
            if (r0 == 0) goto Lbf
            com.kwad.components.ad.reward.presenter.b.c r0 = new com.kwad.components.ad.reward.presenter.b.c
            r0.<init>()
            r5.a(r0, r3)
            com.kwad.components.ad.reward.presenter.b.b r0 = new com.kwad.components.ad.reward.presenter.b.b
            r0.<init>()
            r5.a(r0, r3)
            com.kwad.components.ad.reward.presenter.j r0 = new com.kwad.components.ad.reward.presenter.j
            r0.<init>()
            r5.a(r0, r3)
            com.kwad.components.ad.reward.presenter.b.a r0 = new com.kwad.components.ad.reward.presenter.b.a
            r0.<init>()
            r5.a(r0, r3)
        Lbf:
            com.kwad.components.ad.fullscreen.c.c r0 = new com.kwad.components.ad.fullscreen.c.c
            r0.<init>()
            r5.a(r0, r3)
            com.kwad.components.ad.reward.presenter.i r0 = new com.kwad.components.ad.reward.presenter.i
            r0.<init>()
            r5.a(r0, r3)
            return
    }

    private void bK() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.b r0 = new com.kwad.components.ad.reward.presenter.f.b
            r0.<init>()
            r1.gj = r0
            r1.a(r0)
            return
    }

    private void bL() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.c r0 = new com.kwad.components.ad.reward.presenter.f.c
            r0.<init>()
            r1.gm = r0
            r1.a(r0)
            return
    }

    private void bM() {
            r2 = this;
            com.kwad.components.ad.fullscreen.c.c.b r0 = new com.kwad.components.ad.fullscreen.c.c.b
            r0.<init>()
            r1 = 1
            r2.a(r0, r1)
            return
    }

    private void bN() {
            r5 = this;
            com.kwad.components.ad.fullscreen.b r0 = r5.gf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.components.ad.fullscreen.b r1 = r5.gf
            com.kwad.sdk.core.response.model.AdInfo r1 = r1.bB()
            com.kwad.components.ad.fullscreen.c.a r2 = new com.kwad.components.ad.fullscreen.c.a
            r2.<init>()
            r3 = 1
            r5.a(r2, r3)
            com.kwad.components.ad.reward.presenter.d.b r2 = new com.kwad.components.ad.reward.presenter.d.b
            r4 = 0
            r2.<init>(r0, r4)
            r5.a(r2, r3)
            com.kwad.components.ad.reward.presenter.q r2 = new com.kwad.components.ad.reward.presenter.q
            r2.<init>(r0, r4, r4)
            r5.gi = r2
            r5.a(r2, r3)
            com.kwad.components.ad.reward.presenter.d r2 = new com.kwad.components.ad.reward.presenter.d
            android.view.ViewGroup r4 = r5.gg
            r2.<init>(r0, r1, r4)
            r5.a(r2, r3)
            boolean r0 = com.kwad.sdk.core.response.b.b.dC(r1)
            if (r0 == 0) goto L48
            boolean r0 = com.kwad.sdk.utils.ai.IO()
            if (r0 == 0) goto L48
            com.kwad.components.ad.reward.presenter.e.a r0 = new com.kwad.components.ad.reward.presenter.e.a
            r0.<init>()
            r5.gl = r0
            r5.a(r0, r3)
        L48:
            return
    }

    private com.kwad.components.core.webview.b.e.e bO() {
            r4 = this;
            com.kwad.components.core.webview.b.e.e r0 = r4.gk
            if (r0 != 0) goto L2b
            com.kwad.components.ad.fullscreen.b r0 = r4.gf
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            java.lang.String r1 = "ksad-fullscreen-video-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            java.lang.String r2 = "ksad-live-video-card"
            java.lang.String r1 = com.kwad.components.core.webview.b.j.b(r2, r1)
            com.kwad.components.ad.reward.j r2 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            java.lang.String r3 = "ksad-image-video-card"
            java.lang.String r2 = com.kwad.components.core.webview.b.j.b(r3, r2)
            com.kwad.components.ad.fullscreen.c.b$1 r3 = new com.kwad.components.ad.fullscreen.c.b$1
            r3.<init>(r4, r0, r1, r2)
            r4.gk = r3
        L2b:
            com.kwad.components.core.webview.b.e.e r0 = r4.gk
            return r0
    }

    static android.widget.FrameLayout c(com.kwad.components.ad.fullscreen.c.b r0) {
            android.widget.FrameLayout r0 = r0.mPlayLayout
            return r0
    }

    static void d(com.kwad.components.ad.fullscreen.c.b r0) {
            r0.bJ()
            return
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.fullscreen.c.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r1.qx
            r0.b(r1)
            return
    }

    @Override
    public final void bD() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 1
            r0.E(r1)
            return
    }

    public final boolean bP() {
            r4 = this;
            com.kwad.components.ad.reward.presenter.q r0 = r4.gi
            r1 = 1
            if (r0 == 0) goto Lc
            boolean r0 = r0.bP()
            if (r0 == 0) goto Lc
            return r1
        Lc:
            com.kwad.components.ad.reward.presenter.e.a r0 = r4.gl
            if (r0 == 0) goto L19
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            com.kwad.components.ad.reward.page.BackPressHandleResult r2 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            if (r0 != r2) goto L19
            return r1
        L19:
            com.kwad.components.ad.reward.presenter.f.b r0 = r4.gj
            r2 = 0
            if (r0 == 0) goto L27
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            com.kwad.components.ad.reward.page.BackPressHandleResult r3 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            if (r0 != r3) goto L27
            return r1
        L27:
            return r2
    }

    @Override
    public final int compareTo(com.kwad.components.ad.reward.e.f r1) {
            r0 = this;
            com.kwad.components.ad.reward.e.f r1 = (com.kwad.components.ad.reward.e.f) r1
            int r1 = r0.a(r1)
            return r1
    }

    @Override
    public final int getPriority() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void onCreate() {
            r3 = this;
            super.onCreate()
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_play_layout
            android.view.View r0 = r0.findViewById(r1)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r3.mPlayLayout = r0
            com.kwad.components.ad.reward.RewardRenderResult r0 = com.kwad.components.ad.reward.RewardRenderResult.DEFAULT
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.components.ad.reward.RewardRenderResult r1 = r1.fZ()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L28
            android.content.Context r0 = r3.getContext()
            com.kwad.components.ad.reward.j r1 = r3.qx
            android.widget.FrameLayout r2 = r3.mPlayLayout
            com.kwad.components.ad.reward.j.a(r0, r1, r2)
        L28:
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.c(r2)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gk
            r0.b(r1)
            return
    }
}
