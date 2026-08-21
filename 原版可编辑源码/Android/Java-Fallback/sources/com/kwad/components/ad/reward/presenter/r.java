package com.kwad.components.ad.reward.presenter;

public final class r extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f, com.kwad.components.core.i.a.a, com.kwad.components.core.webview.jshandler.n.b {
    private com.kwad.sdk.core.webview.d.a.a cH;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.video.l mVideoPlayStateListener;
    private com.kwad.components.ad.reward.g pb;
    private android.widget.ImageView rY;
    private int sZ;
    private long showTime;
    private android.view.View ta;
    private com.kwad.components.core.widget.KsLogoView tb;
    private com.kwad.components.core.video.DetailVideoView tc;
    private int td;
    private android.view.View te;
    private android.widget.FrameLayout tf;
    private android.animation.Animator tg;
    private android.animation.Animator th;
    private android.animation.Animator ti;
    private com.kwad.sdk.core.response.model.AdTemplate tj;
    private java.util.List<com.kwad.components.core.i.c> tk;
    private long tl;
    private long tm;
    private float tn;
    private float to;
    private float tp;
    private boolean tq;
    private long tr;
    private boolean ts;






    public r() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.sZ = r0
            r0 = 500(0x1f4, double:2.47E-321)
            r2.tl = r0
            r0 = 50
            r2.tm = r0
            r0 = 1067244765(0x3f9cdcdd, float:1.2254902)
            r2.tn = r0
            r0 = 1062076979(0x3f4e0233, float:0.80472106)
            r2.to = r0
            r0 = 0
            r2.tp = r0
            r0 = 0
            r2.tq = r0
            r0 = -1
            r2.showTime = r0
            r2.tr = r0
            com.kwad.components.ad.reward.presenter.r$1 r0 = new com.kwad.components.ad.reward.presenter.r$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.reward.presenter.r$5 r0 = new com.kwad.components.ad.reward.presenter.r$5
            r0.<init>(r2)
            r2.cH = r0
            return
    }

    private boolean K(boolean r9) {
            r8 = this;
            float r0 = r8.hP()
            int r0 = r8.b(r0)
            r8.M(r0)
            com.kwad.components.ad.reward.g r1 = r8.pb
            r2 = 0
            if (r1 == 0) goto L15
            boolean r1 = r1.ap()
            goto L16
        L15:
            r1 = r2
        L16:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "webLoadSuccess: "
            r3.<init>(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "RewardPreEndCardPresenter"
            com.kwad.sdk.core.e.c.d(r4, r3)
            if (r1 != 0) goto L2c
            return r2
        L2c:
            float r1 = r8.hP()
            int r5 = r8.a(r1)
            int r0 = -r0
            float r4 = (float) r0
            r8.tp = r4
            r3 = 1
            r6 = 1
            r2 = r8
            r7 = r9
            android.animation.Animator r9 = r2.a(r3, r4, r5, r6, r7)
            r8.tg = r9
            r9.start()
            android.animation.Animator r9 = r8.hO()
            r8.ti = r9
            r9.start()
            r9 = 2
            r8.sZ = r9
            r9 = 1
            return r9
    }

    private void L(boolean r9) {
            r8 = this;
            float r0 = r8.hP()
            float r1 = r8.hQ()
            float r0 = r0 - r1
            float r1 = r8.tp
            float r4 = r0 + r1
            float r0 = r8.hQ()
            int r5 = r8.a(r0)
            r3 = 0
            r6 = 0
            r2 = r8
            r7 = r9
            android.animation.Animator r9 = r2.a(r3, r4, r5, r6, r7)
            r8.th = r9
            r9.start()
            com.kwad.sdk.core.d.a.AW()
            com.kwad.sdk.core.response.model.AdTemplate r9 = r8.tj
            com.kwad.sdk.core.d.a.ar(r9)
            r9 = 3
            r8.sZ = r9
            com.kwad.components.ad.reward.g r9 = r8.pb
            if (r9 == 0) goto L34
            r9.fC()
        L34:
            return
    }

    private void M(int r3) {
            r2 = this;
            android.view.View r0 = r2.ta
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.FrameLayout.LayoutParams
            if (r1 == 0) goto L12
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.height = r3
            int r3 = -r3
            r0.bottomMargin = r3
            return
        L12:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r3)
            r0.height = r3
            int r3 = -r3
            r0.bottomMargin = r3
            android.view.View r3 = r2.ta
            r3.setLayoutParams(r0)
            return
    }

    private int a(float r2) {
            r1 = this;
            android.app.Activity r0 = r1.getActivity()
            int r0 = com.kwad.sdk.d.a.a.e(r0)
            float r0 = (float) r0
            float r0 = r0 - r2
            int r2 = (int) r0
            return r2
    }

    private int a(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            int r0 = r1.getPriority()
            int r2 = r2.getPriority()
            int r0 = r0 - r2
            return r0
    }

    private android.animation.Animator a(boolean r8, float r9, int r10, boolean r11, boolean r12) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getUpAnimator: translationY0: "
            r0.<init>(r1)
            r0.append(r9)
            java.lang.String r1 = ", videoTargetHeight: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardPreEndCardPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r0 = 2
            r1 = 1
            r2 = 0
            if (r8 == 0) goto L2d
            android.view.View r8 = r7.ta
            float[] r3 = new float[r1]
            r3[r2] = r9
            java.lang.String r9 = "translationY"
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r8, r9, r3)
            goto L50
        L2d:
            android.view.View r8 = r7.ta
            int r8 = r8.getHeight()
            android.view.View r3 = r7.ta
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            float[] r4 = new float[r0]
            float r8 = (float) r8
            r4[r2] = r8
            float r8 = java.lang.Math.abs(r9)
            r4[r1] = r8
            android.animation.ValueAnimator r8 = android.animation.ValueAnimator.ofFloat(r4)
            com.kwad.components.ad.reward.presenter.r$3 r9 = new com.kwad.components.ad.reward.presenter.r$3
            r9.<init>(r7, r3)
            r8.addUpdateListener(r9)
        L50:
            r9 = 0
            if (r11 == 0) goto L60
            com.kwad.components.core.widget.KsLogoView r9 = r7.tb
            float[] r11 = new float[r0]
            r11 = {x00be: FILL_ARRAY_DATA , data: [0, 1132396544} // fill-array
            java.lang.String r3 = "alpha"
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r9, r3, r11)
        L60:
            android.widget.ImageView r11 = r7.rY
            android.view.ViewGroup$LayoutParams r11 = r11.getLayoutParams()
            com.kwad.components.core.video.DetailVideoView r3 = r7.tc
            com.kwad.sdk.core.response.model.AdTemplate r4 = r7.mAdTemplate
            com.kwad.components.ad.reward.presenter.r$4 r5 = new com.kwad.components.ad.reward.presenter.r$4
            r5.<init>(r7, r11)
            android.animation.ValueAnimator r10 = r3.a(r4, r10, r5)
            if (r12 == 0) goto L78
            long r3 = r7.tl
            goto L7a
        L78:
            long r3 = r7.tm
        L7a:
            r11 = 1058306785(0x3f147ae1, float:0.58)
            r5 = 1065353216(0x3f800000, float:1.0)
            r6 = 0
            android.view.animation.Interpolator r11 = android.support.v4.view.animation.PathInterpolatorCompat.create(r6, r6, r11, r5)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            r5.setDuration(r3)
            r5.setInterpolator(r11)
            if (r9 == 0) goto Laa
            if (r12 == 0) goto La0
            r11 = 3
            android.animation.Animator[] r11 = new android.animation.Animator[r11]
            r11[r2] = r8
            r11[r1] = r9
            r11[r0] = r10
            r5.playTogether(r11)
            goto Lbd
        La0:
            android.animation.Animator[] r10 = new android.animation.Animator[r0]
            r10[r2] = r8
            r10[r1] = r9
            r5.playTogether(r10)
            goto Lbd
        Laa:
            if (r12 == 0) goto Lb6
            android.animation.Animator[] r9 = new android.animation.Animator[r0]
            r9[r2] = r8
            r9[r1] = r10
            r5.playTogether(r9)
            goto Lbd
        Lb6:
            android.animation.Animator[] r9 = new android.animation.Animator[r1]
            r9[r2] = r8
            r5.playTogether(r9)
        Lbd:
            return r5
    }

    static android.view.View a(com.kwad.components.ad.reward.presenter.r r0) {
            android.view.View r0 = r0.ta
            return r0
    }

    static void a(com.kwad.components.ad.reward.presenter.r r0, long r1) {
            r0.f(r1)
            return
    }

    private int b(float r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_reward_middle_end_card_logo_view_height
            int r0 = r0.getDimensionPixelSize(r1)
            android.content.Context r1 = r3.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_middle_end_card_logo_view_margin_bottom
            int r1 = r1.getDimensionPixelSize(r2)
            float r0 = (float) r0
            float r4 = r4 + r0
            float r0 = (float) r1
            float r4 = r4 + r0
            int r4 = (int) r4
            return r4
    }

    static android.widget.ImageView b(com.kwad.components.ad.reward.presenter.r r0) {
            android.widget.ImageView r0 = r0.rY
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.reward.presenter.r r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static java.util.List d(com.kwad.components.ad.reward.presenter.r r0) {
            java.util.List<com.kwad.components.core.i.c> r0 = r0.tk
            return r0
    }

    private void d(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r8) {
            r7 = this;
            com.kwad.components.ad.reward.g r0 = new com.kwad.components.ad.reward.g
            com.kwad.components.ad.reward.j r1 = r7.qx
            org.json.JSONObject r1 = r1.mReportExtData
            r0.<init>(r8, r1, r7)
            r7.pb = r0
            com.kwad.components.ad.reward.j r8 = r7.qx
            com.kwad.components.ad.reward.g r0 = r7.pb
            r8.pb = r0
            com.kwad.components.ad.reward.g r8 = r7.pb
            com.kwad.sdk.core.response.model.AdTemplate r0 = r7.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.b.be(r0)
            r8.z(r0)
            com.kwad.components.ad.reward.g r8 = r7.pb
            com.kwad.sdk.core.webview.d.a.a r0 = r7.cH
            r8.a(r0)
            com.kwad.components.ad.reward.g r1 = r7.pb
            android.widget.FrameLayout r2 = r7.tf
            com.kwad.components.ad.reward.j r8 = r7.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r8.mRootContainer
            com.kwad.sdk.core.response.model.AdTemplate r4 = r7.mAdTemplate
            com.kwad.components.ad.reward.j r8 = r7.qx
            com.kwad.components.core.e.d.c r5 = r8.mApkDownloadHelper
            com.kwad.components.ad.reward.j r8 = r7.qx
            int r6 = r8.mScreenOrientation
            r1.a(r2, r3, r4, r5, r6)
            java.lang.String r8 = "RewardPreEndCardPresenter"
            java.lang.String r0 = "startPreloadWebView"
            com.kwad.sdk.core.e.c.d(r8, r0)
            com.kwad.components.ad.reward.g r8 = r7.pb
            com.kwad.components.ad.reward.presenter.r$2 r0 = new com.kwad.components.ad.reward.presenter.r$2
            r0.<init>(r7)
            r8.a(r0)
            return
    }

    private void f(long r8) {
            r7 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r7.tj
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r7.ts
            if (r1 == 0) goto La
            return
        La:
            long r1 = r7.showTime
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L23
            long r0 = com.kwad.sdk.core.response.b.b.bb(r0)
            r7.showTime = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r7.tj
            long r0 = com.kwad.sdk.core.response.b.b.ba(r0)
            long r5 = r7.showTime
            long r0 = r0 + r5
            r7.tr = r0
        L23:
            long r0 = r7.showTime
            int r2 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            r5 = 1
            if (r2 <= 0) goto L55
            boolean r2 = r7.tq
            if (r2 != 0) goto L55
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r0 <= 0) goto L55
            boolean r0 = r7.K(r5)
            r0 = r0 ^ r5
            r7.ts = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showError: "
            r0.<init>(r1)
            boolean r1 = r7.ts
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardPreEndCardPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r7.ts
            if (r0 == 0) goto L53
            return
        L53:
            r7.tq = r5
        L55:
            int r0 = r7.sZ
            r1 = 3
            if (r0 != r1) goto L5c
            r0 = r5
            goto L5d
        L5c:
            r0 = 0
        L5d:
            long r1 = r7.tr
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 <= 0) goto L6c
            if (r0 != 0) goto L6c
            int r8 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r8 <= 0) goto L6c
            r7.L(r5)
        L6c:
            return
    }

    private android.animation.Animator hO() {
            r4 = this;
            android.view.View r0 = r4.te
            r1 = 2
            float[] r1 = new float[r1]
            r1 = {x0022: FILL_ARRAY_DATA , data: [1132396544, 0} // fill-array
            java.lang.String r2 = "alpha"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r2, r1)
            r1 = 1048576000(0x3e800000, float:0.25)
            r2 = 1036831949(0x3dcccccd, float:0.1)
            r3 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r2, r1, r3)
            r0.setInterpolator(r1)
            r1 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r1)
            return r0
    }

    private float hP() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            int r0 = com.kwad.sdk.d.a.a.d(r0)
            float r0 = (float) r0
            float r1 = r2.tn
            float r0 = r0 / r1
            return r0
    }

    private float hQ() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            int r0 = com.kwad.sdk.d.a.a.d(r0)
            float r0 = (float) r0
            float r1 = r2.to
            float r0 = r0 / r1
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.b(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.a(r2)
            com.kwad.components.core.video.DetailVideoView r0 = r2.tc
            int r0 = com.kwad.sdk.d.a.a.E(r0)
            r2.td = r0
            com.kwad.components.core.video.DetailVideoView r0 = r2.tc
            r1 = 49
            com.kwad.sdk.d.a.a.n(r0, r1)
            com.kwad.components.core.widget.KsLogoView r0 = r2.tb
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.aa(r1)
            return
    }

    @Override
    public final void bD() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.tj
            if (r0 == 0) goto L1b
            int r0 = r3.sZ
            r1 = 3
            if (r0 != r1) goto La
            goto L1b
        La:
            r1 = 1
            if (r0 != r1) goto L15
            r0 = 0
            r3.K(r0)
            r3.L(r0)
            return
        L15:
            r2 = 2
            if (r0 != r2) goto L1b
            r3.L(r1)
        L1b:
            return
    }

    @Override
    public final void c(java.util.List<com.kwad.components.core.i.c> r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onInnerAdLoad: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardPreEndCardPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            if (r3 == 0) goto L3f
            int r0 = r3.size()
            if (r0 != 0) goto L1c
            goto L3f
        L1c:
            r0 = 0
            java.lang.Object r0 = r3.get(r0)
            com.kwad.components.core.i.c r0 = (com.kwad.components.core.i.c) r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            r2.tj = r0
            r2.tk = r3
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.add(r1)
            java.util.List r3 = com.kwad.components.core.i.c.j(r3)
            r0.addAll(r3)
            r2.d(r0)
        L3f:
            return
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
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_middle_end_card
            android.view.View r0 = r1.findViewById(r0)
            r1.ta = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r1.tc = r0
            int r0 = com.kwad.sdk.R.id.ksad_splash_logo_container
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r1.tb = r0
            int r0 = com.kwad.sdk.R.id.ksad_blur_video_cover
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.rY = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_web_card_webView
            android.view.View r0 = r1.findViewById(r0)
            r1.te = r0
            int r0 = com.kwad.sdk.R.id.ksad_middle_end_card_webview_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.tf = r0
            return
    }

    @Override
    public final void onError(int r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "onError : msg "
            r2.<init>(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "RewardPreEndCardPresenter"
            com.kwad.sdk.core.e.c.w(r3, r2)
            return
    }

    @Override
    public final void onRequestResult(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onRequestResult : adNumber "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "RewardPreEndCardPresenter"
            com.kwad.sdk.core.e.c.w(r0, r3)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 0
            r0.pz = r1
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.c(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.b(r2)
            com.kwad.components.ad.reward.g r0 = r2.pb
            if (r0 == 0) goto L22
            r0.lI()
        L22:
            android.animation.Animator r0 = r2.ti
            if (r0 == 0) goto L29
            r0.cancel()
        L29:
            com.kwad.components.core.video.DetailVideoView r0 = r2.tc
            if (r0 == 0) goto L32
            int r1 = r2.td
            com.kwad.sdk.d.a.a.n(r0, r1)
        L32:
            android.animation.Animator r0 = r2.tg
            if (r0 == 0) goto L39
            r0.cancel()
        L39:
            r0 = 0
            r2.ti = r0
            r2.tg = r0
            return
    }

    @Override
    public final void y(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            com.kwad.components.core.i.c r0 = new com.kwad.components.core.i.c
            int r1 = com.kwad.components.core.i.e.AGGREGATION
            r0.<init>(r3, r1)
            com.kwad.components.ad.reward.j r3 = r2.qx
            if (r3 == 0) goto L10
            com.kwad.components.ad.reward.j r3 = r2.qx
            r3.b(r0)
        L10:
            return
    }
}
