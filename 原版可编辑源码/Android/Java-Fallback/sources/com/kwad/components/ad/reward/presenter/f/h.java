package com.kwad.components.ad.reward.presenter.f;

public class h extends com.kwad.components.ad.reward.presenter.f.a implements com.kwad.components.ad.reward.e.h, com.kwad.components.core.i.a.a {
    private com.kwad.components.core.webview.b.f lu;
    private final com.kwad.components.core.webview.b.e.a pg;
    private java.util.List<com.kwad.components.core.i.c> tk;
    private android.widget.FrameLayout wM;
    private android.widget.FrameLayout wN;
    private android.widget.FrameLayout wO;
    protected android.widget.FrameLayout wg;
    private boolean wh;








    public h() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.wh = r0
            com.kwad.components.ad.reward.presenter.f.h$1 r0 = new com.kwad.components.ad.reward.presenter.f.h$1
            r0.<init>(r1)
            r1.pg = r0
            return
    }

    private void X(boolean r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "fullTK: "
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TkRewardPagePresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            android.widget.FrameLayout r0 = r4.wg
            if (r0 != 0) goto L18
            return
        L18:
            r1 = 0
            r2 = 8
            if (r5 == 0) goto L1f
            r3 = r1
            goto L20
        L1f:
            r3 = r2
        L20:
            r0.setVisibility(r3)
            android.widget.FrameLayout r0 = r4.wM
            if (r5 == 0) goto L29
            r3 = r2
            goto L2a
        L29:
            r3 = r1
        L2a:
            r0.setVisibility(r3)
            android.widget.FrameLayout r0 = r4.wN
            if (r5 == 0) goto L33
            r3 = r2
            goto L34
        L33:
            r3 = r1
        L34:
            r0.setVisibility(r3)
            android.widget.FrameLayout r0 = r4.wO
            if (r5 == 0) goto L3c
            r1 = r2
        L3c:
            r0.setVisibility(r1)
            return
    }

    static com.kwad.components.core.webview.b.f a(com.kwad.components.ad.reward.presenter.f.h r0) {
            com.kwad.components.core.webview.b.f r0 = r0.lu
            return r0
    }

    private static java.util.List<com.kwad.sdk.core.response.model.AdTemplate> a(java.util.List<com.kwad.components.core.i.c> r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r2)
            java.util.List r1 = com.kwad.components.core.i.c.j(r1)
            r0.addAll(r1)
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.f.h r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.f.h r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.f.h r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.reward.presenter.f.h r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private com.kwad.components.core.webview.b.c ei() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.h$6 r0 = new com.kwad.components.ad.reward.presenter.f.h$6
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.b.f ej() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.h$5 r0 = new com.kwad.components.ad.reward.presenter.f.h$5
            r0.<init>(r1)
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.f.h r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.playable.PlayableSource r1, com.kwad.components.ad.reward.e.l r2) {
            r0 = this;
            boolean r1 = r0.wh
            if (r1 != 0) goto Ld
            android.widget.FrameLayout r1 = r0.wg
            if (r1 == 0) goto Ld
            r2 = 8
            r1.setVisibility(r2)
        Ld:
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.b.t r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onSkipClick: "
            r0.<init>(r1)
            long r1 = r5.Xf
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TkRewardPagePresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.ad.reward.j r0 = r4.qx
            if (r0 == 0) goto L2b
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            if (r0 == 0) goto L2b
            long r0 = r5.Xf
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            com.kwad.components.ad.reward.j r5 = r4.qx
            com.kwad.components.ad.reward.e.b r5 = r5.mAdOpenInteractionListener
            r5.onVideoSkipToEnd(r0)
        L2b:
            com.kwad.components.ad.reward.j r5 = r4.qx
            com.kwad.components.ad.reward.presenter.e.v(r5)
            com.kwad.components.ad.reward.j r5 = r4.qx
            java.util.List<com.kwad.components.ad.reward.j.a> r5 = r5.pd
            com.kwad.components.ad.reward.presenter.f.h$7 r0 = new com.kwad.components.ad.reward.presenter.f.h$7
            r0.<init>(r4)
            com.kwad.components.ad.reward.j.a(r5, r0)
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.ad.reward.c.f r3 = new com.kwad.components.ad.reward.c.f
            com.kwad.components.ad.reward.presenter.f.h$2 r0 = new com.kwad.components.ad.reward.presenter.f.h$2
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            com.kwad.components.core.webview.b.f r3 = r1.ej()
            r1.lu = r3
            com.kwad.components.ad.reward.j r3 = r1.qx
            com.kwad.components.core.webview.b.e.a r0 = r1.pg
            r3.a(r0)
            com.kwad.components.core.webview.b.f r3 = r1.lu
            r2.c(r3)
            com.kwad.components.core.webview.b.b r3 = new com.kwad.components.core.webview.b.b
            com.kwad.components.ad.reward.presenter.f.h$3 r0 = new com.kwad.components.ad.reward.presenter.f.h$3
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            com.kwad.components.core.webview.b.c r3 = r1.ei()
            r2.c(r3)
            com.kwad.components.core.webview.jshandler.e r3 = new com.kwad.components.core.webview.jshandler.e
            com.kwad.components.ad.reward.presenter.f.h$4 r0 = new com.kwad.components.ad.reward.presenter.f.h$4
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r5) {
            r4 = this;
            if (r5 == 0) goto L21
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            long r1 = r5.creativeId
            int r3 = r5.adStyle
            boolean r0 = com.kwad.sdk.core.response.b.d.b(r0, r1, r3)
            if (r0 == 0) goto L11
            goto L21
        L11:
            java.util.List<com.kwad.components.core.i.c> r0 = r4.tk
            long r1 = r5.creativeId
            com.kwad.components.core.i.c r5 = com.kwad.components.ad.reward.j.a(r0, r1)
            if (r5 == 0) goto L20
            com.kwad.components.ad.reward.j r0 = r4.qx
            r0.a(r5)
        L20:
            return
        L21:
            com.kwad.components.ad.reward.j r5 = r4.qx
            com.kwad.components.ad.reward.e.b r5 = r5.mAdOpenInteractionListener
            r5.bE()
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            boolean r0 = r3.wh
            r1 = 1
            if (r0 != 0) goto Lb
            r3.X(r1)
        Lb:
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r2 = r3.wh
            r1 = r1 ^ r2
            r0.pk = r1
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.a(r3)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r3)
            return
    }

    @Override
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            super.b(r1)
            return
    }

    @Override
    public final void bS() {
            r2 = this;
            boolean r0 = r2.wh
            if (r0 != 0) goto Lc
            android.widget.FrameLayout r0 = r2.wg
            if (r0 == 0) goto Lc
            r1 = 0
            r0.setVisibility(r1)
        Lc:
            return
    }

    @Override
    public final void bT() {
            r0 = this;
            return
    }

    @Override
    public final void c(java.util.List<com.kwad.components.core.i.c> r2) {
            r1 = this;
            if (r2 == 0) goto L33
            int r0 = r2.size()
            if (r0 == 0) goto L33
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            if (r0 != 0) goto Ld
            goto L33
        Ld:
            r1.tk = r2
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List r2 = a(r2, r0)
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            com.kwad.sdk.core.webview.b r0 = r0.rG()
            if (r0 == 0) goto L22
            r0.setAdTemplateList(r2)
        L22:
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            com.kwad.components.ad.reward.j.l r0 = r0.ju()
            if (r0 == 0) goto L2e
            r0.e(r2)
            return
        L2e:
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            r0.f(r2)
        L33:
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            super.cc()
            java.lang.String r0 = "TkRewardPagePresenter"
            java.lang.String r1 = "onTkLoadFailed"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r0 = 1
            r2.wh = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 0
            r0.pk = r1
            r2.X(r1)
            return
    }

    public final com.kwad.components.ad.reward.page.BackPressHandleResult gA() {
            r1 = this;
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            if (r0 != 0) goto L7
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED
            return r0
        L7:
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            return r0
    }

    @Override
    public android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.wg
            return r0
    }

    public java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-neo-video-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_reward_card
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wg = r0
            int r0 = com.kwad.sdk.R.id.ksad_js_top
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wM = r0
            int r0 = com.kwad.sdk.R.id.ksad_js_middle
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wN = r0
            int r0 = com.kwad.sdk.R.id.ksad_js_bottom
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.wO = r0
            return
    }

    @Override
    public final void onError(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void onRequestResult(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r1.qx
            r0.b(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r1)
            return
    }
}
