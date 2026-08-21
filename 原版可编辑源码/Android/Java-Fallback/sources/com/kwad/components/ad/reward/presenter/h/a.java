package com.kwad.components.ad.reward.presenter.h;

public final class a extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.core.webview.b.i {
    private android.widget.FrameLayout lr;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private final com.kwad.components.core.l.a.a sk;
    private boolean tG;
    private boolean tH;
    private com.kwad.components.ad.reward.j.b tI;
    private com.kwad.components.ad.reward.j.a.d wk;
    private boolean xn;
    private com.kwad.components.core.webview.b.g xo;
    private long xp;







    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.h.a$1 r0 = new com.kwad.components.ad.reward.presenter.h.a$1
            r0.<init>(r1)
            r1.tI = r0
            com.kwad.components.ad.reward.presenter.h.a$2 r0 = new com.kwad.components.ad.reward.presenter.h.a$2
            r0.<init>(r1)
            r1.sk = r0
            com.kwad.components.ad.reward.presenter.h.a$3 r0 = new com.kwad.components.ad.reward.presenter.h.a$3
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static android.widget.FrameLayout a(com.kwad.components.ad.reward.presenter.h.a r0) {
            android.widget.FrameLayout r0 = r0.lr
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.presenter.h.a r0, boolean r1) {
            r0.xn = r1
            return r1
    }

    static com.kwad.components.core.webview.b.g b(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.core.webview.b.g r0 = r0.xo
            return r0
    }

    static boolean b(com.kwad.components.ad.reward.presenter.h.a r0, boolean r1) {
            r1 = 1
            r0.tG = r1
            return r1
    }

    static com.kwad.sdk.core.response.model.AdInfo c(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static android.content.Context d(com.kwad.components.ad.reward.presenter.h.a r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static long e(com.kwad.components.ad.reward.presenter.h.a r2) {
            long r0 = r2.xp
            return r0
    }

    static boolean f(com.kwad.components.ad.reward.presenter.h.a r0) {
            boolean r0 = r0.tG
            return r0
    }

    static android.content.Context g(com.kwad.components.ad.reward.presenter.h.a r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void hE() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = com.kwad.components.ad.reward.presenter.h.A(r0)
            if (r0 == 0) goto L13
            com.kwad.components.ad.reward.presenter.h.a$6 r0 = new com.kwad.components.ad.reward.presenter.h.a$6
            r0.<init>(r3)
            r1 = 200(0xc8, double:9.9E-322)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
        L13:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            if (r0 == 0) goto L20
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.onRewardVerify()
        L20:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            r0.pause()
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.fR()
            return
    }

    static com.kwad.components.ad.reward.j i(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j j(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private com.kwad.components.core.webview.b.g jl() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.h.a$5 r0 = new com.kwad.components.ad.reward.presenter.h.a$5
            r0.<init>(r1)
            return r0
    }

    static com.kwad.components.ad.reward.j.a.d k(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j.a.d r0 = r0.wk
            return r0
    }

    static android.content.Context l(com.kwad.components.ad.reward.presenter.h.a r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j m(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j n(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j o(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j p(com.kwad.components.ad.reward.presenter.h.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.o r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.p r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.b.t r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            com.kwad.components.core.webview.b.g r2 = r0.jl()
            r0.xo = r2
            r1.c(r2)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r3) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aG(r0)
            if (r0 == 0) goto L51
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            int r1 = r3.azc
            r0.aE(r1)
            int r3 = r3.azc
            r0 = -1
            if (r3 != r0) goto L2d
            com.kwad.components.core.r.a r3 = com.kwad.components.core.r.a.pS()
            r0 = 0
            r3.aI(r0)
        L25:
            com.kwad.components.core.r.a r3 = com.kwad.components.core.r.a.pS()
            r3.aF(r0)
            return
        L2d:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            boolean r3 = com.kwad.sdk.core.response.b.a.ax(r3)
            r0 = 1
            if (r3 == 0) goto L4a
            com.kwad.components.core.r.a r3 = com.kwad.components.core.r.a.pS()
            int r3 = r3.pX()
            r1 = 2
            if (r3 != r1) goto L25
            com.kwad.components.core.r.a r3 = com.kwad.components.core.r.a.pS()
            r0 = 3
            r3.aF(r0)
            goto L51
        L4a:
            com.kwad.components.core.r.a r3 = com.kwad.components.core.r.a.pS()
            r3.aI(r0)
        L51:
            return
    }

    @Override
    public final void ah() {
            r7 = this;
            super.ah()
            r0 = 0
            r7.xn = r0
            java.lang.String r0 = "TkRewardVideoTaskPresenter"
            java.lang.String r1 = "onBind: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.j.a.d r0 = r7.wk
            if (r0 != 0) goto L26
            com.kwad.components.ad.reward.j.a.d r0 = new com.kwad.components.ad.reward.j.a.d
            com.kwad.components.ad.reward.j r2 = r7.qx
            r3 = -1
            android.content.Context r5 = r7.getContext()
            com.kwad.components.ad.reward.presenter.h.a$4 r6 = new com.kwad.components.ad.reward.presenter.h.a$4
            r6.<init>(r7)
            r1 = r0
            r1.<init>(r2, r3, r5, r6)
            r7.wk = r0
        L26:
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r7.mAdInfo = r0
            int r0 = com.kwad.sdk.core.response.b.a.aD(r0)
            long r0 = (long) r0
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            r7.xp = r0
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r7.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r7.qx
            com.kwad.components.ad.reward.j$b r1 = r7.tI
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r7.qx
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            com.kwad.components.core.l.a.a r1 = r7.sk
            r0.add(r1)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
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
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r3) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 1
            if (r3 == 0) goto Lb
            boolean r3 = r3.interactSuccess
            if (r3 == 0) goto Lb
            r3 = r1
            goto Lc
        Lb:
            r3 = 0
        Lc:
            r0.pm = r3
            com.kwad.components.ad.reward.j r3 = r2.qx
            boolean r3 = r3.pm
            if (r3 == 0) goto L28
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.l.d r3 = r3.oV
            r3.jO()
            com.kwad.components.core.r.a r3 = com.kwad.components.core.r.a.pS()
            int r3 = r3.pT()
            if (r3 != r1) goto L28
            r2.hE()
        L28:
            boolean r3 = r2.tH
            if (r3 == 0) goto L37
            boolean r3 = r2.xn
            if (r3 != 0) goto L37
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.l.d r3 = r3.oV
            r3.resume()
        L37:
            android.widget.FrameLayout r3 = r2.lr
            r0 = 8
            r3.setVisibility(r0)
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            java.lang.String r0 = "TkRewardVideoTaskPresenter"
            java.lang.String r1 = "onTkLoadFailed: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void eh() {
            r2 = this;
            java.lang.String r0 = "TkRewardVideoTaskPresenter"
            java.lang.String r1 = "onTkLoadSuccess: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            r2.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L20
            android.widget.FrameLayout r0 = r2.lr
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            r0.pause()
            r0 = 1
            r2.tH = r0
        L20:
            return
    }

    @Override
    public final void em() {
            r0 = this;
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
            java.lang.String r0 = "TkRewardVideoTaskPresenter"
            java.lang.String r1 = "getTkTemplateId: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-video-task-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            return r0
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            java.lang.String r0 = "TkRewardVideoTaskPresenter"
            java.lang.String r1 = "onCreate: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            int r0 = com.kwad.sdk.R.id.ksad_js_task
            android.view.View r0 = r2.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r2.lr = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.j$b r1 = r2.tI
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            com.kwad.components.core.l.a.a r1 = r2.sk
            r0.remove(r1)
            com.kwad.components.ad.reward.j.a.d r0 = r2.wk
            r0.jv()
            r0 = 0
            r2.wk = r0
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.core.r.a r0 = com.kwad.components.core.r.a.pS()
            r0.clear()
            r0 = 0
            r2.tG = r0
            r2.tH = r0
            r2.xn = r0
            return
    }
}
