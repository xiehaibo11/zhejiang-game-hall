package com.kwad.components.ad.reward.presenter.f;

public abstract class d extends com.kwad.components.ad.reward.presenter.a implements android.content.DialogInterface.OnDismissListener, com.kwad.components.ad.reward.j.a.e, com.kwad.components.core.webview.b.a.w.a {
    private final com.kwad.sdk.utils.h.a gH;
    private final com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    protected com.kwad.components.ad.reward.j.a.d wk;
    private com.kwad.components.core.webview.b.a.p wl;
    private com.kwad.components.core.webview.b.a.o wm;
    private com.kwad.components.ad.reward.j.i wn;
    private com.kwad.components.ad.reward.j.j wo;
    private com.kwad.components.core.webview.b.b.y wp;
    private boolean wq;
    private com.kwad.components.core.webview.b.a.h wr;
    protected com.kwad.components.ad.reward.presenter.f.f ws;
    private com.kwad.components.core.webview.jshandler.au.b wt;

















    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.f.d$1 r0 = new com.kwad.components.ad.reward.presenter.f.d$1
            r0.<init>(r1)
            r1.wt = r0
            com.kwad.components.ad.reward.presenter.f.d$5 r0 = new com.kwad.components.ad.reward.presenter.f.d$5
            r0.<init>(r1)
            r1.gH = r0
            com.kwad.components.ad.reward.presenter.f.d$6 r0 = new com.kwad.components.ad.reward.presenter.f.d$6
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            com.kwad.components.ad.reward.presenter.f.d$7 r0 = new com.kwad.components.ad.reward.presenter.f.d$7
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            com.kwad.components.ad.reward.presenter.f.d$8 r0 = new com.kwad.components.ad.reward.presenter.f.d$8
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            boolean r0 = r1.iR()
            if (r0 == 0) goto L33
            com.kwad.components.ad.reward.presenter.f.f r0 = new com.kwad.components.ad.reward.presenter.f.f
            r0.<init>()
            r1.ws = r0
        L33:
            return
    }

    static com.kwad.components.ad.reward.j A(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void B(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.iT()
            return
    }

    static android.content.Context C(com.kwad.components.ad.reward.presenter.f.d r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j D(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j E(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context F(com.kwad.components.ad.reward.presenter.f.d r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j G(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.core.webview.b.a.o H(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.core.webview.b.a.o r0 = r0.wm
            return r0
    }

    static com.kwad.components.ad.reward.j I(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j.i J(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j.i r0 = r0.wn
            return r0
    }

    static com.kwad.components.ad.reward.j.j K(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j.j r0 = r0.wo
            return r0
    }

    static com.kwad.components.core.webview.b.a.h L(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.core.webview.b.a.h r0 = r0.wr
            return r0
    }

    static com.kwad.components.ad.reward.j M(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void N(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.hE()
            return
    }

    static void O(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.iZ()
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void a(com.kwad.components.ad.reward.presenter.f.d r0, double r1) {
            r1 = 0
            r0.g(r1)
            return
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void c(long r3, long r5) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = (com.kwad.sdk.core.response.model.AdInfo) r0
            long r0 = com.kwad.sdk.core.response.b.a.Y(r0)
            long r3 = java.lang.Math.min(r0, r3)
            r0 = 800(0x320, double:3.953E-321)
            long r0 = r3 - r0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 >= 0) goto L2a
            long r3 = r3 - r5
            float r3 = (float) r3
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            r4 = 1056964608(0x3f000000, float:0.5)
            float r3 = r3 + r4
            int r3 = (int) r3
            com.kwad.components.ad.reward.j r4 = r2.qx
            r4.pC = r3
        L2a:
            return
    }

    static android.content.Context d(com.kwad.components.ad.reward.presenter.f.d r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static void e(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.iV()
            return
    }

    static void f(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.iW()
            return
    }

    static com.kwad.components.ad.reward.j g(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void g(double r4) {
            r3 = this;
            com.kwad.components.core.webview.b.b.y r0 = r3.wp
            r1 = 0
            r0.Xk = r1
            com.kwad.components.core.webview.b.b.y r0 = r3.wp
            r0.Xg = r1
            com.kwad.components.core.webview.b.b.y r0 = r3.wp
            r1 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r4 = r4 / r1
            r1 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            double r4 = r4 + r1
            int r4 = (int) r4
            r0.nM = r4
            r3.ja()
            return
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void hE() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = r0.po
            if (r0 == 0) goto La
            r1.iZ()
            return
        La:
            r1.iY()
            return
    }

    static android.content.Context i(com.kwad.components.ad.reward.presenter.f.d r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void iT() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r3.qx
            org.json.JSONObject r1 = r1.mReportExtData
            r2 = 17
            com.kwad.sdk.core.report.a.b(r0, r2, r1)
            return
    }

    private void iU() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.lang.String r1 = r2.jb()
            r0.G(r1)
            return
    }

    private void iV() {
            r5 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 39
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            java.lang.String r2 = r5.jb()
            com.kwad.components.ad.reward.j r3 = r5.qx
            org.json.JSONObject r3 = r3.mReportExtData
            java.lang.String r4 = "endTopBar"
            com.kwad.components.ad.reward.i.b.a(r1, r2, r4, r0, r3)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    private void iW() {
            r5 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 40
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            java.lang.String r2 = r5.jb()
            com.kwad.components.ad.reward.j r3 = r5.qx
            org.json.JSONObject r3 = r3.mReportExtData
            r4 = 0
            com.kwad.components.ad.reward.i.b.a(r1, r2, r4, r0, r3)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    private void iX() {
            r5 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r1 = 41
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            java.lang.String r2 = r5.jb()
            com.kwad.components.ad.reward.j r3 = r5.qx
            org.json.JSONObject r3 = r3.mReportExtData
            r4 = 0
            com.kwad.components.ad.reward.i.b.a(r1, r2, r4, r0, r3)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    private void iY() {
            r2 = this;
            com.kwad.components.core.webview.b.b.y r0 = r2.wp
            r1 = 1
            r0.Xg = r1
            com.kwad.components.core.webview.b.b.y r0 = r2.wp
            r1 = 0
            r0.Xk = r1
            com.kwad.components.core.webview.b.b.y r0 = r2.wp
            com.kwad.components.ad.reward.j r1 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            int r1 = com.kwad.sdk.core.response.b.a.G(r1)
            r0.nM = r1
            r2.ja()
            return
    }

    private void iZ() {
            r2 = this;
            com.kwad.components.core.webview.b.b.y r0 = r2.wp
            r1 = 1
            r0.Xk = r1
            com.kwad.components.core.webview.b.b.y r0 = r2.wp
            r1 = 0
            r0.Xg = r1
            r2.ja()
            return
    }

    static void j(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.iX()
            return
    }

    private void ja() {
            r2 = this;
            com.kwad.components.core.webview.b.a.p r0 = r2.wl
            if (r0 == 0) goto Lb
            com.kwad.components.core.webview.b.b.y r1 = r2.wp
            if (r1 == 0) goto Lb
            r0.a(r1)
        Lb:
            return
    }

    private java.lang.String jb() {
            r1 = this;
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r0.getTkTemplateId()
            return r0
    }

    static com.kwad.components.ad.reward.j k(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j l(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context m(com.kwad.components.ad.reward.presenter.f.d r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j n(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void notifyRewardVerify() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.onRewardVerify()
            return
    }

    static com.kwad.components.ad.reward.j o(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j p(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j q(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j r(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j s(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j t(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j u(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j v(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j w(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j x(com.kwad.components.ad.reward.presenter.f.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void y(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.notifyRewardVerify()
            return
    }

    static void z(com.kwad.components.ad.reward.presenter.f.d r0) {
            r0.iU()
            return
    }

    public void a(long r1, long r3) {
            r0 = this;
            r0.c(r1, r3)
            double r1 = (double) r3
            r0.g(r1)
            return
    }

    public final void a(com.kwad.components.ad.reward.c.b r2) {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            if (r0 == 0) goto L9
            com.kwad.components.ad.reward.j r0 = r1.qx
            r0.b(r2)
        L9:
            return
    }

    public void a(com.kwad.components.core.webview.b.a.o r2) {
            r1 = this;
            r1.wm = r2
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.l.d r2 = r2.oV
            com.kwad.sdk.utils.h$a r0 = r1.gH
            r2.a(r0)
            com.kwad.components.ad.reward.presenter.f.d$4 r2 = new com.kwad.components.ad.reward.presenter.f.d$4
            r2.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r2)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.p r2) {
            r1 = this;
            r1.wl = r2
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.l.d r2 = r2.oV
            com.kwad.components.core.video.l r0 = r1.mVideoPlayStateListener
            r2.a(r0)
            return
    }

    public void a(com.kwad.components.core.webview.b.b.t r2) {
            r1 = this;
            com.kwad.components.ad.reward.j r2 = r1.qx
            r0 = 0
            com.kwad.components.ad.reward.presenter.e.a(r2, r0)
            return
    }

    public void a(com.kwad.components.core.webview.jshandler.am r2) {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.f r0 = r1.ws
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    public void a(com.kwad.sdk.components.l r6, com.kwad.sdk.core.webview.b r7) {
            r5 = this;
            com.kwad.components.ad.reward.j.k r0 = new com.kwad.components.ad.reward.j.k
            r0.<init>()
            com.kwad.components.ad.reward.presenter.f.d$9 r1 = new com.kwad.components.ad.reward.presenter.f.d$9
            r1.<init>(r5)
            r0.a(r1)
            r6.c(r0)
            com.kwad.components.ad.reward.j r0 = r5.qx
            long r0 = r0.pE
            com.kwad.components.ad.reward.j.g r2 = new com.kwad.components.ad.reward.j.g
            r3 = 0
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 <= 0) goto L20
            int r0 = (int) r0
            int r0 = r0 / 1000
            goto L21
        L20:
            r0 = 0
        L21:
            r2.<init>(r0)
            r6.c(r2)
            com.kwad.components.ad.reward.j.i r0 = new com.kwad.components.ad.reward.j.i
            r0.<init>()
            r5.wn = r0
            r6.c(r0)
            com.kwad.components.ad.reward.j.j r0 = new com.kwad.components.ad.reward.j.j
            r0.<init>()
            r5.wo = r0
            r6.c(r0)
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r5.mRewardVerifyListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.e.f r1 = r5.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.core.webview.jshandler.z r0 = new com.kwad.components.core.webview.jshandler.z
            com.kwad.components.ad.reward.presenter.f.d$10 r1 = new com.kwad.components.ad.reward.presenter.f.d$10
            r1.<init>(r5)
            r0.<init>(r1)
            r6.c(r0)
            com.kwad.components.ad.reward.j.d r0 = new com.kwad.components.ad.reward.j.d
            r0.<init>()
            com.kwad.components.ad.reward.presenter.f.d$11 r1 = new com.kwad.components.ad.reward.presenter.f.d$11
            r1.<init>(r5)
            r0.a(r1)
            r6.c(r0)
            com.kwad.components.ad.reward.j.e r0 = new com.kwad.components.ad.reward.j.e
            r0.<init>()
            com.kwad.components.ad.reward.presenter.f.d$12 r1 = new com.kwad.components.ad.reward.presenter.f.d$12
            r1.<init>(r5)
            r0.a(r1)
            r6.c(r0)
            com.kwad.components.ad.reward.j.h r0 = new com.kwad.components.ad.reward.j.h
            com.kwad.components.ad.reward.presenter.f.d$13 r1 = new com.kwad.components.ad.reward.presenter.f.d$13
            r1.<init>(r5)
            r0.<init>(r1)
            r6.c(r0)
            com.kwad.components.ad.reward.presenter.f.d$14 r0 = new com.kwad.components.ad.reward.presenter.f.d$14
            r0.<init>(r5)
            r6.c(r0)
            com.kwad.components.ad.reward.presenter.f.d$15 r0 = new com.kwad.components.ad.reward.presenter.f.d$15
            r0.<init>(r5)
            r6.c(r0)
            com.kwad.components.ad.reward.presenter.f.d$16 r0 = new com.kwad.components.ad.reward.presenter.f.d$16
            r0.<init>(r5)
            r6.c(r0)
            com.kwad.components.ad.reward.presenter.f.d$2 r0 = new com.kwad.components.ad.reward.presenter.f.d$2
            r0.<init>(r5)
            r6.c(r0)
            com.kwad.components.ad.reward.h.b r0 = new com.kwad.components.ad.reward.h.b
            android.content.Context r1 = r5.getContext()
            com.kwad.components.ad.reward.j r2 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.components.core.playable.PlayableSource r3 = com.kwad.components.core.playable.PlayableSource.ACTIONBAR_CLICK
            r0.<init>(r1, r2, r3)
            r6.c(r0)
            com.kwad.components.core.webview.b.a.h r0 = new com.kwad.components.core.webview.b.a.h
            r0.<init>()
            r5.wr = r0
            com.kwad.components.ad.reward.presenter.f.d$3 r1 = new com.kwad.components.ad.reward.presenter.f.d$3
            r1.<init>(r5)
            r0.a(r1)
            com.kwad.components.core.webview.b.a.h r0 = r5.wr
            r6.c(r0)
            com.kwad.components.core.webview.jshandler.w r0 = new com.kwad.components.core.webview.jshandler.w
            r0.<init>()
            r6.c(r0)
            com.kwad.components.core.webview.jshandler.au r0 = new com.kwad.components.core.webview.jshandler.au
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            com.kwad.components.core.webview.jshandler.au$b r2 = r5.wt
            r0.<init>(r7, r1, r2)
            r6.c(r0)
            com.kwad.components.core.webview.b.a.w r7 = new com.kwad.components.core.webview.b.a.w
            r7.<init>(r5)
            r6.c(r7)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.response.model.TKAdLiveShopItemInfo r2) {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r0.tkLiveShopItemInfo = r2
            return
    }

    @Override
    public void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            com.kwad.components.ad.reward.j r1 = r0.qx
            com.kwad.components.ad.reward.e.b r1 = r1.mAdOpenInteractionListener
            r1.bE()
            return
    }

    @Override
    public void ah() {
            r5 = this;
            super.ah()
            boolean r0 = r5.cd()
            r5.wq = r0
            if (r0 != 0) goto Lc
            return
        Lc:
            com.kwad.components.ad.reward.j r0 = r5.qx
            r0.a(r5)
            com.kwad.components.ad.reward.j.a.d r0 = r5.wk
            if (r0 != 0) goto L24
            com.kwad.components.ad.reward.j.a.d r0 = new com.kwad.components.ad.reward.j.a.d
            com.kwad.components.ad.reward.j r1 = r5.qx
            r2 = -1
            android.content.Context r4 = r5.getContext()
            r0.<init>(r1, r2, r4)
            r5.wk = r0
        L24:
            com.kwad.components.core.webview.b.b.y r0 = r5.wp
            if (r0 != 0) goto L2f
            com.kwad.components.core.webview.b.b.y r0 = new com.kwad.components.core.webview.b.b.y
            r0.<init>()
            r5.wp = r0
        L2f:
            com.kwad.components.ad.reward.j.a.d r0 = r5.wk
            com.kwad.components.ad.reward.j r1 = r5.qx
            android.app.Activity r1 = r1.getActivity()
            com.kwad.components.ad.reward.j r2 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.a(r1, r2, r5)
            com.kwad.components.ad.reward.presenter.f.f r0 = r5.ws
            if (r0 == 0) goto L47
            com.kwad.components.ad.reward.j r1 = r5.qx
            r0.B(r1)
        L47:
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r3) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r3 = r3.Xa
            r1 = 1
            r3 = r3 ^ r1
            r0.setAudioEnabled(r3, r1)
            return
    }

    @Override
    public void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            return
    }

    public void cc() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.f r0 = r1.ws
            if (r0 == 0) goto L7
            r0.cc()
        L7:
            return
    }

    protected abstract boolean cd();

    public void eh() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.f.f r0 = r1.ws
            if (r0 == 0) goto L7
            r0.eh()
        L7:
            return
    }

    @Override
    public final void em() {
            r0 = this;
            return
    }

    @Override
    public com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            return r0
    }

    protected boolean iR() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            com.kwad.components.ad.reward.j.a.d r1 = r0.wk
            if (r1 == 0) goto L13
            com.kwad.components.ad.reward.c.e r1 = r1.jt()
            if (r1 == 0) goto L13
            com.kwad.components.ad.reward.j.a.d r1 = r0.wk
            com.kwad.components.ad.reward.c.e r1 = r1.jt()
            r1.hb()
        L13:
            return
    }

    @Override
    public void onUnbind() {
            r2 = this;
            super.onUnbind()
            boolean r0 = r2.wq
            if (r0 != 0) goto L8
            return
        L8:
            com.kwad.components.ad.reward.presenter.f.f r0 = r2.ws
            if (r0 == 0) goto L11
            com.kwad.components.ad.reward.j r1 = r2.qx
            r0.C(r1)
        L11:
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.b(r2)
            com.kwad.components.ad.reward.j.a.d r0 = r2.wk
            r0.jv()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.sdk.utils.h$a r1 = r2.gH
            r0.b(r1)
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            return
    }
}
