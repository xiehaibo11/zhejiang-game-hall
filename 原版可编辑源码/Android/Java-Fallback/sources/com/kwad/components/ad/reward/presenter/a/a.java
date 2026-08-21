package com.kwad.components.ad.reward.presenter.a;

public final class a extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.core.webview.b.i {
    private com.kwad.components.core.webview.b.h lp;
    private android.widget.FrameLayout lr;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private long tE;
    private long tF;
    private boolean tG;
    private boolean tH;
    private com.kwad.components.ad.reward.j.b tI;




    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.a.a$1 r0 = new com.kwad.components.ad.reward.presenter.a.a$1
            r0.<init>(r1)
            r1.tI = r0
            com.kwad.components.ad.reward.presenter.a.a$2 r0 = new com.kwad.components.ad.reward.presenter.a.a$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static android.widget.FrameLayout a(com.kwad.components.ad.reward.presenter.a.a r0) {
            android.widget.FrameLayout r0 = r0.lr
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.presenter.a.a r0, boolean r1) {
            r1 = 1
            r0.tG = r1
            return r1
    }

    static com.kwad.sdk.core.response.model.AdInfo b(com.kwad.components.ad.reward.presenter.a.a r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static long c(com.kwad.components.ad.reward.presenter.a.a r2) {
            long r0 = r2.tE
            return r0
    }

    static long d(com.kwad.components.ad.reward.presenter.a.a r2) {
            long r0 = r2.tF
            return r0
    }

    static boolean e(com.kwad.components.ad.reward.presenter.a.a r0) {
            boolean r0 = r0.tG
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j g(com.kwad.components.ad.reward.presenter.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.core.webview.b.h h(com.kwad.components.ad.reward.presenter.a.a r0) {
            com.kwad.components.core.webview.b.h r0 = r0.lp
            return r0
    }

    private com.kwad.components.core.webview.b.h hU() {
            r4 = this;
            com.kwad.components.core.webview.b.h r0 = new com.kwad.components.core.webview.b.h
            android.content.Context r1 = r4.getContext()
            r2 = -1
            r0.<init>(r2, r1)
            return r0
    }

    static com.kwad.components.ad.reward.j i(com.kwad.components.ad.reward.presenter.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j j(com.kwad.components.ad.reward.presenter.a.a r0) {
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
    public final void a(com.kwad.sdk.components.l r10, com.kwad.sdk.core.webview.b r11) {
            r9 = this;
            com.kwad.components.ad.reward.j.q r8 = new com.kwad.components.ad.reward.j.q
            com.kwad.components.ad.reward.j r0 = r9.qx
            com.kwad.components.core.e.d.c r2 = r0.mApkDownloadHelper
            com.kwad.components.ad.reward.j r3 = r9.qx
            com.kwad.components.ad.reward.presenter.a.a$3 r6 = new com.kwad.components.ad.reward.presenter.a.a$3
            r6.<init>(r9)
            r4 = -1
            r7 = 0
            r0 = r8
            r1 = r11
            r0.<init>(r1, r2, r3, r4, r6, r7)
            r10.c(r8)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.core.webview.b.h r0 = r4.lp
            if (r0 != 0) goto Ld
            com.kwad.components.core.webview.b.h r0 = r4.hU()
            r4.lp = r0
        Ld:
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            int r0 = com.kwad.sdk.core.response.b.a.aB(r0)
            long r0 = (long) r0
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            r4.tE = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.aC(r0)
            long r0 = (long) r0
            long r0 = r0 * r2
            r4.tF = r0
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r4.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.j$b r1 = r4.tI
            r0.a(r1)
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
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r2) {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            if (r2 == 0) goto La
            boolean r2 = r2.interactSuccess
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            r0.pm = r2
            com.kwad.components.ad.reward.j r2 = r1.qx
            boolean r2 = r2.pm
            if (r2 == 0) goto L1a
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.l.d r2 = r2.oV
            r2.jO()
        L1a:
            boolean r2 = r1.tH
            if (r2 == 0) goto L2f
            android.widget.FrameLayout r2 = r1.lr
            r0 = 30
            boolean r2 = com.kwad.sdk.utils.bm.o(r2, r0)
            if (r2 == 0) goto L2f
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.l.d r2 = r2.oV
            r2.resume()
        L2f:
            android.widget.FrameLayout r2 = r1.lr
            r0 = 8
            r2.setVisibility(r0)
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            java.lang.String r0 = "TkRewardInteractPresenter"
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
            java.lang.String r0 = "TkRewardInteractPresenter"
            java.lang.String r1 = "onTkLoadSuccess: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            r2.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L27
            android.widget.FrameLayout r0 = r2.lr
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            android.content.Context r0 = r0.mContext
            com.kwad.components.ad.reward.d.a.P(r0)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            r0.pause()
            r0 = 1
            r2.tH = r0
        L27:
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
            java.lang.String r0 = "TkRewardInteractPresenter"
            java.lang.String r1 = "getTkTemplateId: "
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-video-interact-card"
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
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_interact
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.lr = r0
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
            com.kwad.components.core.webview.b.h r0 = r2.lp
            r0.jv()
            r0 = 0
            r2.lp = r0
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            r0 = 0
            r2.tG = r0
            r2.tH = r0
            return
    }
}
