package com.kwad.components.ad.reward.presenter.d.a;

public final class b extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.core.webview.jshandler.ah.b {
    private com.kwad.components.ad.k.b bY;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private boolean sO;
    private com.kwad.components.ad.reward.widget.tailframe.TailFrameView vB;
    private volatile boolean vC;
    private boolean vD;
    private com.kwad.components.ad.reward.m.k vE;
    private int vF;
    private int vG;
    private android.graphics.drawable.Drawable vH;




    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.sO = r0
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.vF = r0
            r1.vG = r0
            com.kwad.components.ad.reward.presenter.d.a.b$1 r0 = new com.kwad.components.ad.reward.presenter.d.a.b$1
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            com.kwad.components.ad.reward.presenter.d.a.b$2 r0 = new com.kwad.components.ad.reward.presenter.d.a.b$2
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            return
    }

    private void M(boolean r5) {
            r4 = this;
            if (r5 == 0) goto L4
            r5 = 2
            goto L6
        L4:
            r5 = 153(0x99, float:2.14E-43)
        L6:
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            com.kwad.sdk.core.report.j r5 = r0.cg(r5)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            r1 = 0
            com.kwad.components.ad.reward.j r2 = r4.qx
            org.json.JSONObject r2 = r2.mReportExtData
            java.lang.String r3 = "native_id"
            com.kwad.components.ad.reward.i.b.a(r0, r3, r1, r5, r2)
            com.kwad.components.ad.reward.j r5 = r4.qx
            com.kwad.components.ad.reward.e.b r5 = r5.mAdOpenInteractionListener
            r5.bE()
            return
    }

    private void O(int r2) {
            r1 = this;
            com.kwad.components.core.video.DetailVideoView r0 = r1.mDetailVideoView
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            if (r0 == 0) goto Lf
            r0.width = r2
            com.kwad.components.core.video.DetailVideoView r2 = r1.mDetailVideoView
            r2.setLayoutParams(r0)
        Lf:
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            r0.iB()
            return
    }

    static boolean a(com.kwad.components.ad.reward.presenter.d.a.b r0, boolean r1) {
            r0.vD = r1
            return r1
    }

    private void aG() {
            r2 = this;
            r2.iB()
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r2.vB
            com.kwad.components.ad.reward.presenter.d.a.b$3 r1 = new com.kwad.components.ad.reward.presenter.d.a.b$3
            r1.<init>(r2)
            r0.a(r1)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r2.vB
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    static com.kwad.components.ad.reward.widget.tailframe.TailFrameView b(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r0.vB
            return r0
    }

    static void b(com.kwad.components.ad.reward.presenter.d.a.b r0, boolean r1) {
            r0.M(r1)
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean d(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            boolean r0 = r0.sO
            return r0
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j g(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.k.b h(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.k.b r0 = r0.bY
            return r0
    }

    static com.kwad.components.ad.reward.j i(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void iB() {
            r1 = this;
            boolean r0 = r1.vC
            if (r0 == 0) goto L5
            return
        L5:
            r1.iC()
            return
    }

    private void iC() {
            r5 = this;
            java.lang.String r0 = "RewardPlayEndNativeCardPresenter"
            java.lang.String r1 = "initTailView"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r5.vB
            android.content.Context r1 = r5.getContext()
            com.kwad.components.ad.reward.j r2 = r5.qx
            int r2 = r2.mScreenOrientation
            r3 = 1
            if (r2 != 0) goto L16
            r2 = r3
            goto L17
        L16:
            r2 = 0
        L17:
            boolean r4 = r5.iF()
            r0.a(r1, r2, r4)
            r5.vC = r3
            return
    }

    private void iE() {
            r2 = this;
            boolean r0 = r2.vD
            if (r0 == 0) goto L18
            r2.iB()
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r2.vB
            r0.destroy()
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r2.vB
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.m.k r0 = r2.vE
            r0.hide()
        L18:
            return
    }

    private boolean iF() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aN(r0)
            int r1 = r0.height
            int r0 = r0.width
            if (r1 <= r0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    static boolean j(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            boolean r0 = r0.vD
            return r0
    }

    static com.kwad.components.ad.reward.j k(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j l(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j m(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void n(com.kwad.components.ad.reward.presenter.d.a.b r0) {
            r0.aG()
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.ah.a r1) {
            r0 = this;
            boolean r1 = r1.isSuccess()
            r0.sO = r1
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            if (r0 == 0) goto L10
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            r0.a(r3)
        L10:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r3.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r3.mAdInfo = r0
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.l r0 = r0.oZ
            r3.bY = r0
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.f r1 = r3.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r3.mRewardVerifyListener
            r0.a(r1)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = r3.vB
            com.kwad.components.ad.reward.j r1 = r3.qx
            r0.setCallerContext(r1)
            int r0 = com.kwad.sdk.R.id.ksad_playend_native_jinniu
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L4d
            com.kwad.components.ad.reward.m.k r1 = new com.kwad.components.ad.reward.m.k
            com.kwad.components.ad.reward.j r2 = r3.qx
            r1.<init>(r2, r0)
        L4a:
            r3.vE = r1
            return
        L4d:
            int r0 = com.kwad.sdk.R.id.ksad_reward_jinniu_end_card_root
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.kwad.components.ad.reward.m.k r1 = new com.kwad.components.ad.reward.m.k
            com.kwad.components.ad.reward.j r2 = r3.qx
            r1.<init>(r2, r0)
            goto L4a
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_tail_frame
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView r0 = (com.kwad.components.ad.reward.widget.tailframe.TailFrameView) r0
            r2.vB = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r2.mDetailVideoView = r0
            android.animation.LayoutTransition r0 = r0.getLayoutTransition()
            if (r0 == 0) goto L27
            com.kwad.components.core.video.DetailVideoView r0 = r2.mDetailVideoView
            android.animation.LayoutTransition r0 = r0.getLayoutTransition()
            r1 = 4
            r0.enableTransitionType(r1)
        L27:
            return
    }

    @Override
    public final void onUnbind() {
            r3 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            if (r0 == 0) goto L10
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            r0.b(r3)
        L10:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r3.mRewardVerifyListener
            r0.b(r1)
            r3.iE()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.f r1 = r3.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.core.video.DetailVideoView r0 = r3.mDetailVideoView
            if (r0 == 0) goto L55
            int r1 = r3.vG
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 == r2) goto L30
            r0.updateTextureViewGravity(r1)
        L30:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onUnbind:  videoOriginalWidth :"
            r0.<init>(r1)
            int r1 = r3.vF
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardPlayEndNativeCardPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r0 = r3.vF
            if (r0 == r2) goto L4c
            r3.O(r0)
        L4c:
            android.graphics.drawable.Drawable r0 = r3.vH
            if (r0 == 0) goto L55
            com.kwad.components.core.video.DetailVideoView r1 = r3.mDetailVideoView
            r1.setBackground(r0)
        L55:
            return
    }
}
