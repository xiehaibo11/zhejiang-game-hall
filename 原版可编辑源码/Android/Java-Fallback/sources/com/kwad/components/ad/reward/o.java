package com.kwad.components.ad.reward;

public final class o extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f {
    private android.view.ViewGroup gg;
    private com.kwad.components.core.l.b gh;
    private com.kwad.components.ad.reward.presenter.q gi;
    private com.kwad.components.ad.reward.presenter.f.b gj;
    private com.kwad.components.ad.reward.presenter.e.a gl;
    private com.kwad.components.ad.reward.presenter.f.h gm;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.components.ad.reward.model.c mModel;
    private android.widget.FrameLayout mPlayLayout;
    private com.kwad.components.ad.reward.j qx;
    private com.kwad.components.ad.reward.o.a qy;


    public interface a {
        void onUnbind();
    }

    public o(com.kwad.components.core.l.b r5, android.view.ViewGroup r6, com.kwad.components.ad.reward.model.c r7, com.kwad.components.ad.reward.j r8) {
            r4 = this;
            r4.<init>()
            com.kwad.components.ad.reward.o$1 r0 = new com.kwad.components.ad.reward.o$1
            r0.<init>(r4)
            r4.gt = r0
            r4.gg = r6
            r4.mModel = r7
            r4.qx = r8
            r4.gh = r5
            r4.a(r7)
            com.kwad.sdk.core.response.model.AdInfo r6 = r7.bB()
            boolean r0 = com.kwad.sdk.core.response.b.b.dF(r6)
            boolean r1 = com.kwad.sdk.core.response.b.a.cw(r6)
            if (r1 != 0) goto L36
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r6)
            if (r1 != 0) goto L36
            com.kwad.sdk.core.response.model.AdTemplate r1 = r7.getAdTemplate()
            boolean r1 = com.kwad.components.ad.reward.j.t(r1)
            if (r1 == 0) goto L34
            goto L36
        L34:
            r1 = 0
            goto L37
        L36:
            r1 = 1
        L37:
            boolean r6 = com.kwad.sdk.core.response.b.a.cF(r6)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "notFullTk: "
            r2.<init>(r3)
            r2.append(r1)
            java.lang.String r3 = ", mLoadStrategy: "
            r2.append(r3)
            com.kwad.components.ad.reward.j r3 = r4.qx
            com.kwad.components.ad.reward.LoadStrategy r3 = r3.pM
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "RewardPresenter"
            com.kwad.sdk.core.e.c.d(r3, r2)
            if (r6 == 0) goto L6e
            com.kwad.components.core.webview.b.d.b r5 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r6 = r4.gt
            r5.a(r6)
            com.kwad.components.ad.reward.RewardRenderResult r5 = com.kwad.components.ad.reward.RewardRenderResult.LIVE_TK
            r8.a(r5)
            r4.bK()
            return
        L6e:
            if (r0 == 0) goto L82
            com.kwad.components.core.webview.b.d.b r5 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r6 = r4.gt
            r5.a(r6)
            com.kwad.components.ad.reward.RewardRenderResult r5 = com.kwad.components.ad.reward.RewardRenderResult.TK_IMAGE
            r8.a(r5)
            r4.bL()
            return
        L82:
            if (r1 != 0) goto La2
            com.kwad.components.ad.reward.j r6 = r4.qx
            com.kwad.components.ad.reward.LoadStrategy r6 = r6.pM
            com.kwad.components.ad.reward.LoadStrategy r0 = com.kwad.components.ad.reward.LoadStrategy.FULL_TK
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto La2
            com.kwad.components.core.webview.b.d.b r5 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r6 = r4.gt
            r5.a(r6)
            com.kwad.components.ad.reward.RewardRenderResult r5 = com.kwad.components.ad.reward.RewardRenderResult.NEO_TK
            r8.a(r5)
            r4.gz()
            return
        La2:
            com.kwad.components.ad.reward.RewardRenderResult r6 = com.kwad.components.ad.reward.RewardRenderResult.DEFAULT
            r8.a(r6)
            r4.a(r5, r7)
            return
    }

    private int a(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            int r0 = r1.getPriority()
            int r2 = r2.getPriority()
            int r0 = r0 - r2
            return r0
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.o r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void a(com.kwad.components.ad.reward.model.c r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r3 = r3.bB()
            boolean r1 = com.kwad.components.ad.reward.j.g(r3)
            if (r1 == 0) goto L16
            com.kwad.components.ad.reward.presenter.f r1 = new com.kwad.components.ad.reward.presenter.f
            r1.<init>()
            r2.a(r1)
        L16:
            boolean r1 = com.kwad.sdk.core.response.b.a.aG(r3)
            if (r1 == 0) goto L24
            com.kwad.components.ad.reward.presenter.h.a r1 = new com.kwad.components.ad.reward.presenter.h.a
            r1.<init>()
            r2.a(r1)
        L24:
            boolean r1 = com.kwad.sdk.core.response.b.b.cM(r3)
            if (r1 == 0) goto L32
            com.kwad.components.ad.reward.presenter.f.j r1 = new com.kwad.components.ad.reward.presenter.f.j
            r1.<init>()
            r2.a(r1)
        L32:
            com.kwad.components.ad.reward.presenter.q r1 = new com.kwad.components.ad.reward.presenter.q
            r1.<init>(r0)
            r2.gi = r1
            r0 = 1
            r2.a(r1, r0)
            boolean r3 = com.kwad.sdk.core.response.b.b.dC(r3)
            if (r3 == 0) goto L53
            boolean r3 = com.kwad.sdk.utils.ai.IO()
            if (r3 == 0) goto L53
            com.kwad.components.ad.reward.presenter.e.a r3 = new com.kwad.components.ad.reward.presenter.e.a
            r3.<init>()
            r2.gl = r3
            r2.a(r3)
        L53:
            return
    }

    static void a(com.kwad.components.ad.reward.o r0, com.kwad.components.core.l.b r1, com.kwad.components.ad.reward.model.c r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.kwad.components.core.l.b r5, com.kwad.components.ad.reward.model.c r6) {
            r4 = this;
            com.kwad.components.ad.reward.model.c r5 = r4.mModel
            if (r5 != 0) goto L5
            return
        L5:
            com.kwad.sdk.core.response.model.AdInfo r5 = r5.bB()
            com.kwad.components.ad.reward.model.c r0 = r4.mModel
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            com.kwad.components.ad.reward.presenter.u r1 = new com.kwad.components.ad.reward.presenter.u
            r1.<init>()
            r2 = 1
            r4.a(r1, r2)
            boolean r1 = com.kwad.sdk.core.response.b.a.aH(r5)
            if (r1 == 0) goto L26
            com.kwad.components.ad.reward.presenter.c r1 = new com.kwad.components.ad.reward.presenter.c
            r1.<init>()
            r4.a(r1, r2)
        L26:
            com.kwad.components.ad.reward.presenter.l r1 = new com.kwad.components.ad.reward.presenter.l
            r1.<init>()
            r4.a(r1, r2)
            com.kwad.components.ad.reward.presenter.g r1 = new com.kwad.components.ad.reward.presenter.g
            r1.<init>()
            r4.a(r1, r2)
            com.kwad.components.ad.reward.presenter.platdetail.c r1 = new com.kwad.components.ad.reward.presenter.platdetail.c
            r1.<init>()
            r4.a(r1, r2)
            com.kwad.components.ad.reward.presenter.platdetail.a.e r1 = new com.kwad.components.ad.reward.presenter.platdetail.a.e
            r1.<init>()
            r4.a(r1, r2)
            com.kwad.components.ad.reward.presenter.f.e r1 = new com.kwad.components.ad.reward.presenter.f.e
            r1.<init>()
            r4.a(r1, r2)
            boolean r1 = r6.hr()
            boolean r3 = r6.hs()
            boolean r6 = r6.bC()
            if (r6 == 0) goto L64
            boolean r6 = com.kwad.sdk.utils.ai.IO()
            if (r6 != 0) goto L64
            r6 = r2
            goto L65
        L64:
            r6 = 0
        L65:
            if (r1 != 0) goto L73
            if (r3 != 0) goto L73
            if (r6 != 0) goto L73
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.c r6 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.c
            r6.<init>()
            r4.a(r6, r2)
        L73:
            com.kwad.components.ad.reward.presenter.m r6 = new com.kwad.components.ad.reward.presenter.m
            r6.<init>()
            r4.a(r6, r2)
            com.kwad.components.ad.reward.presenter.b r6 = new com.kwad.components.ad.reward.presenter.b
            r6.<init>(r5)
            r4.a(r6, r2)
            com.kwad.components.ad.reward.presenter.d.b r6 = new com.kwad.components.ad.reward.presenter.d.b
            r6.<init>(r0, r2)
            r4.a(r6, r2)
            com.kwad.components.ad.reward.presenter.c.a r6 = new com.kwad.components.ad.reward.presenter.c.a
            r6.<init>()
            r4.a(r6, r2)
            com.kwad.components.ad.reward.presenter.t r6 = new com.kwad.components.ad.reward.presenter.t
            r6.<init>()
            r4.a(r6, r2)
            com.kwad.components.ad.reward.presenter.d r6 = new com.kwad.components.ad.reward.presenter.d
            android.view.ViewGroup r1 = r4.gg
            r6.<init>(r0, r5, r1)
            r4.a(r6, r2)
            com.kwad.components.ad.reward.presenter.k r6 = new com.kwad.components.ad.reward.presenter.k
            r6.<init>()
            r4.a(r6, r2)
            com.kwad.components.ad.reward.j r6 = r4.qx
            boolean r6 = r6.pj
            if (r6 == 0) goto Lc9
            com.kwad.components.ad.reward.j r6 = r4.qx
            android.content.Context r6 = r6.mContext
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r6 = com.kwad.components.ad.reward.d.a.b(r6, r1)
            if (r6 == 0) goto Lc9
            com.kwad.components.ad.reward.presenter.a.a r6 = new com.kwad.components.ad.reward.presenter.a.a
            r6.<init>()
            r4.a(r6, r2)
        Lc9:
            boolean r6 = com.kwad.sdk.core.response.b.b.bO(r0)
            if (r6 == 0) goto Ld7
            com.kwad.components.ad.reward.presenter.s r6 = new com.kwad.components.ad.reward.presenter.s
            r6.<init>()
            r4.a(r6, r2)
        Ld7:
            boolean r6 = com.kwad.sdk.core.response.b.a.aV(r5)
            if (r6 == 0) goto Le5
            com.kwad.components.ad.reward.presenter.platdetail.b r6 = new com.kwad.components.ad.reward.presenter.platdetail.b
            r6.<init>()
            r4.a(r6, r2)
        Le5:
            boolean r5 = com.kwad.sdk.core.response.b.a.cw(r5)
            if (r5 == 0) goto L10b
            com.kwad.components.ad.reward.presenter.b.c r5 = new com.kwad.components.ad.reward.presenter.b.c
            r5.<init>()
            r4.a(r5, r2)
            com.kwad.components.ad.reward.presenter.b.a r5 = new com.kwad.components.ad.reward.presenter.b.a
            r5.<init>()
            r4.a(r5, r2)
            com.kwad.components.ad.reward.presenter.b.b r5 = new com.kwad.components.ad.reward.presenter.b.b
            r5.<init>()
            r4.a(r5, r2)
            com.kwad.components.ad.reward.presenter.j r5 = new com.kwad.components.ad.reward.presenter.j
            r5.<init>()
            r4.a(r5, r2)
        L10b:
            com.kwad.components.ad.reward.presenter.i r5 = new com.kwad.components.ad.reward.presenter.i
            r5.<init>()
            r4.a(r5, r2)
            return
    }

    static android.content.Context b(com.kwad.components.ad.reward.o r0) {
            android.content.Context r0 = r0.getContext()
            return r0
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

    static android.widget.FrameLayout c(com.kwad.components.ad.reward.o r0) {
            android.widget.FrameLayout r0 = r0.mPlayLayout
            return r0
    }

    static com.kwad.components.core.l.b d(com.kwad.components.ad.reward.o r0) {
            com.kwad.components.core.l.b r0 = r0.gh
            return r0
    }

    static com.kwad.components.ad.reward.model.c e(com.kwad.components.ad.reward.o r0) {
            com.kwad.components.ad.reward.model.c r0 = r0.mModel
            return r0
    }

    private void gz() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.h r0 = new com.kwad.components.ad.reward.presenter.f.h
            r0.<init>()
            r1.gm = r0
            r1.a(r0)
            return
    }

    public final void a(com.kwad.components.ad.reward.o.a r1) {
            r0 = this;
            r0.qy = r1
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.b(r2)
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.gW()
            com.kwad.components.ad.reward.j r1 = r2.qx
            r0.setCallerContext(r1)
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

    @Override
    public final int compareTo(com.kwad.components.ad.reward.e.f r1) {
            r0 = this;
            com.kwad.components.ad.reward.e.f r1 = (com.kwad.components.ad.reward.e.f) r1
            int r1 = r0.a(r1)
            return r1
    }

    public final com.kwad.components.ad.reward.page.BackPressHandleResult gA() {
            r2 = this;
            com.kwad.components.ad.reward.presenter.q r0 = r2.gi
            if (r0 == 0) goto Ld
            boolean r0 = r0.bP()
            if (r0 == 0) goto Ld
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            return r0
        Ld:
            com.kwad.components.ad.reward.presenter.e.a r0 = r2.gl
            if (r0 == 0) goto L1c
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            com.kwad.components.ad.reward.page.BackPressHandleResult r1 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            if (r0 != r1) goto L1c
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.HANDLED
            return r0
        L1c:
            com.kwad.components.ad.reward.presenter.f.b r0 = r2.gj
            if (r0 == 0) goto L25
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            return r0
        L25:
            com.kwad.components.ad.reward.presenter.f.h r0 = r2.gm
            if (r0 == 0) goto L2e
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            return r0
        L2e:
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED
            return r0
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
    public final void onDestroy() {
            r2 = this;
            super.onDestroy()
            r0 = 0
            r2.gh = r0
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r1.qx
            r0.c(r1)
            com.kwad.components.ad.reward.o$a r0 = r1.qy
            if (r0 == 0) goto Lf
            r0.onUnbind()
        Lf:
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.gW()
            r0.reset()
            return
    }
}
