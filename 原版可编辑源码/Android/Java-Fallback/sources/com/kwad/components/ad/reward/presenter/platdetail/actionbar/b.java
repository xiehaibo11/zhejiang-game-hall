package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private android.animation.ValueAnimator cL;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl oY;
    private com.kwad.components.core.widget.KsLogoView so;
    private final com.kwad.components.core.video.l ss;
    private boolean uA;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.b uB;
    private com.kwad.components.ad.reward.e.f uC;
    private com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape ur;
    private com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait us;
    private com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 ut;
    private boolean uu;
    private boolean uv;
    private android.view.ViewGroup uw;
    private android.view.ViewGroup ux;
    private android.view.ViewGroup uy;
    private com.kwad.components.ad.reward.m.h uz;













    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.uu = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$1
            r0.<init>(r1)
            r1.ss = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$5 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$5
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$6 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$6
            r0.<init>(r1)
            r1.uB = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$7 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$7
            r0.<init>(r1)
            r1.uC = r0
            return
    }

    private void N(boolean r5) {
            r4 = this;
            boolean r0 = r4.uu
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r4.uu = r0
            com.kwad.components.core.widget.KsLogoView r0 = r4.so
            r1 = 8
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r4.uw
            if (r0 == 0) goto L16
            r0.setVisibility(r1)
        L16:
            android.view.ViewGroup r0 = r4.uy
            if (r0 == 0) goto L1d
            r0.setVisibility(r1)
        L1d:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            r2 = 1119092736(0x42b40000, float:90.0)
            if (r0 == 0) goto L52
            com.kwad.components.ad.reward.j r0 = r4.qx
            int r0 = r0.mScreenOrientation
            r3 = 1
            if (r0 != r3) goto L38
            if (r5 == 0) goto L34
            r4.id()
            return
        L34:
            r4.ie()
            return
        L38:
            if (r5 == 0) goto L4a
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r5 = r4.us
            if (r5 == 0) goto L5c
        L3e:
            android.content.Context r0 = r4.getContext()
            int r0 = com.kwad.sdk.d.a.a.a(r0, r2)
            r4.g(r5, r0)
            return
        L4a:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r5 = r4.us
            if (r5 == 0) goto L5c
            r5.setVisibility(r1)
            return
        L52:
            if (r5 == 0) goto L57
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r5 = r4.ut
            goto L3e
        L57:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r5 = r4.ut
            r5.setVisibility(r1)
        L5c:
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0, boolean r1, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r2) {
            r0.a(r1, r2)
            return
    }

    private void a(boolean r5, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r6) {
            r4 = this;
            boolean r0 = r4.uu
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.uu = r0
            com.kwad.components.core.widget.KsLogoView r1 = r4.so
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            boolean r2 = com.kwad.sdk.core.response.b.a.cw(r2)
            r3 = 0
            if (r2 == 0) goto L16
            r2 = 8
            goto L17
        L16:
            r2 = r3
        L17:
            r1.setVisibility(r2)
            r4.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            r1 = r1 ^ r0
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            boolean r2 = com.kwad.sdk.core.response.b.a.aV(r2)
            if (r2 == 0) goto L66
            com.kwad.components.ad.reward.m.h r5 = r4.uz
            if (r5 != 0) goto L55
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$8 r5 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$8
            r5.<init>(r4, r1)
            r4.uz = r5
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$9 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$9
            r0.<init>(r4)
            r5.a(r0)
            com.kwad.components.ad.reward.m.h r5 = r4.uz
            android.view.View r0 = r4.getRootView()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r5.f(r0)
            com.kwad.components.ad.reward.m.h r5 = r4.uz
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.components.core.e.d.c r1 = r4.mApkDownloadHelper
            com.kwad.components.ad.reward.m.r r0 = com.kwad.components.ad.reward.m.r.a(r0, r1)
            r5.b(r0)
        L55:
            com.kwad.components.ad.reward.m.h r5 = r4.uz
            r5.show()
            com.kwad.components.ad.reward.m.h r5 = r4.uz
            android.view.ViewGroup r5 = r5.gQ()
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_PLAYABLE_PORTRAIT
        L62:
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a(r6, r5, r0)
            return
        L66:
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            int r1 = com.kwad.sdk.core.response.b.a.bL(r1)
            if (r1 != r0) goto L7a
            android.view.ViewGroup r1 = r4.uw
            if (r1 == 0) goto L7a
            r1.setVisibility(r3)
            android.view.ViewGroup r5 = r4.uw
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_JINNIU
            goto L62
        L7a:
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.cw(r1)
            if (r1 == 0) goto L9a
            int r1 = com.kwad.sdk.R.id.ksad_reward_origin_live_root
            android.view.View r1 = r4.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r4.uy = r1
            if (r1 == 0) goto L9a
            boolean r5 = r4.uA
            if (r5 != 0) goto L95
            r1.setVisibility(r3)
        L95:
            android.view.ViewGroup r5 = r4.uy
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORIGIN_LIVE
            goto L62
        L9a:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.a.aN(r1)
            if (r1 == 0) goto Lca
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_root
            android.view.View r1 = r4.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r4.ux = r1
            if (r1 == 0) goto Lca
            android.content.res.Resources r5 = r1.getResources()
            int r0 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_full_height
            float r0 = r5.getDimension(r0)
            int r1 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_margin
            float r5 = r5.getDimension(r1)
            float r0 = r0 + r5
            android.view.ViewGroup r5 = r4.ux
            int r0 = (int) r0
            r4.e(r5, r0)
            android.view.ViewGroup r5 = r4.ux
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_LIVE_SUBSCRIBE
            goto L62
        Lca:
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r1 == 0) goto Le0
            com.kwad.components.ad.reward.j r1 = r4.qx
            int r1 = r1.mScreenOrientation
            if (r1 != r0) goto Ldc
            r4.b(r5, r6)
            return
        Ldc:
            r4.c(r5, r6)
            return
        Le0:
            r4.d(r5, r6)
            return
    }

    static boolean a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0, boolean r1) {
            r0.uA = r1
            return r1
    }

    private void aE() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.cL
            if (r0 == 0) goto Lc
            r0.removeAllListeners()
            android.animation.ValueAnimator r0 = r1.cL
            r0.cancel()
        Lc:
            return
    }

    static android.view.ViewGroup b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.view.ViewGroup r0 = r0.uy
            return r0
    }

    private void b(boolean r5, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r6) {
            r4 = this;
            r4.ib()
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0 = r4.ur
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$10 r3 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$10
            r3.<init>(r4)
            r0.a(r1, r2, r3)
            if (r5 == 0) goto L23
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r5 = r4.ur
            android.content.Context r0 = r4.getContext()
            r1 = 1119092736(0x42b40000, float:90.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r4.f(r5, r0)
            goto L29
        L23:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r5 = r4.ur
            r0 = 0
            r5.setVisibility(r0)
        L29:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r5 = r4.ur
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a(r6, r5, r0)
            return
    }

    static boolean b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0, boolean r1) {
            r0.uv = r1
            return r1
    }

    private void bU() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            boolean r0 = com.kwad.sdk.core.response.b.a.cq(r0)
            if (r0 == 0) goto L1c
            int r0 = com.kwad.sdk.R.id.ksad_reward_jinniu_root
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.uw = r0
        L1c:
            com.kwad.components.core.widget.KsLogoView r0 = r2.so
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.aa(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r2.oY = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$b r1 = r2.uB
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.uC
            r0.b(r1)
            return
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0, boolean r1) {
            r1 = 0
            r0.N(r1)
            return
    }

    private void c(boolean r5, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r6) {
            r4 = this;
            r4.ic()
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0 = r4.us
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.components.core.e.d.c r2 = r4.mApkDownloadHelper
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$11 r3 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$11
            r3.<init>(r4)
            r0.a(r1, r2, r3)
            if (r5 == 0) goto L23
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r5 = r4.us
            android.content.Context r0 = r4.getContext()
            r1 = 1119092736(0x42b40000, float:90.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r4.f(r5, r0)
            goto L29
        L23:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r5 = r4.us
            r0 = 0
            r5.setVisibility(r0)
        L29:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r5 = r4.us
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a(r6, r5, r0)
            return
    }

    static void d(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            r0.bU()
            return
    }

    private void d(boolean r4, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r5) {
            r3 = this;
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r0 = r3.ut
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$12 r2 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$12
            r2.<init>(r3)
            r0.a(r1, r2)
            if (r4 == 0) goto L1e
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r4 = r3.ut
            android.content.Context r0 = r3.getContext()
            r1 = 1119092736(0x42b40000, float:90.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r3.f(r4, r0)
            goto L24
        L1e:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r4 = r3.ut
            r0 = 0
            r4.setVisibility(r0)
        L24:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r4 = r3.ut
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a(r5, r4, r0)
            return
    }

    static android.content.Context e(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void e(android.view.View r5, int r6) {
            r4 = this;
            r4.aE()
            r0 = 0
            r5.setVisibility(r0)
            r1 = 0
            r2 = 1058306785(0x3f147ae1, float:0.58)
            r3 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r1, r2, r3)
            android.animation.ValueAnimator r6 = com.kwad.components.core.t.m.c(r5, r6, r0)
            r4.cL = r6
            r6.setInterpolator(r1)
            android.animation.ValueAnimator r6 = r4.cL
            r0 = 500(0x1f4, double:2.47E-321)
            r6.setDuration(r0)
            android.animation.ValueAnimator r6 = r4.cL
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$2
            r0.<init>(r4, r5)
            r6.addListener(r0)
            android.animation.ValueAnimator r5 = r4.cL
            r5.start()
            return
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @java.lang.Deprecated
    private void f(android.view.View r3, int r4) {
            r2 = this;
            r2.aE()
            r0 = 0
            r3.setVisibility(r0)
            android.animation.ValueAnimator r4 = com.kwad.components.core.t.m.b(r3, r0, r4)
            r2.cL = r4
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r1 = 1073741824(0x40000000, float:2.0)
            r0.<init>(r1)
            r4.setInterpolator(r0)
            android.animation.ValueAnimator r4 = r2.cL
            r0 = 500(0x1f4, double:2.47E-321)
            r4.setDuration(r0)
            android.animation.ValueAnimator r4 = r2.cL
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$3 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$3
            r0.<init>(r2, r3)
            r4.addListener(r0)
            android.animation.ValueAnimator r3 = r2.cL
            r3.start()
            return
    }

    static android.content.Context g(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void g(android.view.View r3, int r4) {
            r2 = this;
            r2.aE()
            r0 = 0
            r3.setVisibility(r0)
            android.animation.ValueAnimator r4 = com.kwad.components.core.t.m.b(r3, r4, r0)
            r2.cL = r4
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r1 = 1073741824(0x40000000, float:2.0)
            r0.<init>(r1)
            r4.setInterpolator(r0)
            android.animation.ValueAnimator r4 = r2.cL
            r0 = 300(0x12c, double:1.48E-321)
            r4.setDuration(r0)
            android.animation.ValueAnimator r4 = r2.cL
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$4 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b$4
            r0.<init>(r2, r3)
            r4.addListener(r0)
            android.animation.ValueAnimator r3 = r2.cL
            r3.start()
            return
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context i(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void ib() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.view_stub_action_bar_landscape
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L13
            android.view.View r0 = r0.inflate()
        Le:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0 = (com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape) r0
            r1.ur = r0
            return
        L13:
            int r0 = com.kwad.sdk.R.id.ksad_video_play_bar_app_landscape
            android.view.View r0 = r1.findViewById(r0)
            goto Le
    }

    private void ic() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.view_stub_action_bar
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L13
            android.view.View r0 = r0.inflate()
        Le:
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0 = (com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait) r0
            r1.us = r0
            return
        L13:
            int r0 = com.kwad.sdk.R.id.ksad_video_play_bar_app_portrait
            android.view.View r0 = r1.findViewById(r0)
            goto Le
    }

    private void id() {
            r3 = this;
            r3.ic()
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0 = r3.us
            android.content.Context r1 = r3.getContext()
            r2 = 1119092736(0x42b40000, float:90.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            r3.f(r0, r1)
            return
    }

    private void ie() {
            r2 = this;
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0 = r2.us
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    static com.kwad.components.ad.reward.j j(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context k(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j l(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context m(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j n(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context o(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j p(com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    protected final void O(boolean r5) {
            r4 = this;
            if (r5 == 0) goto L4
            r5 = 1
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
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
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

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.d(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.ss
            r0.a(r1)
            r2.bU()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_ad_label_play_bar
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r1.so = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_play_bar_h5
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r0 = (com.kwad.components.ad.reward.widget.actionbar.ActionBarH5) r0
            r1.ut = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r2.oY
            if (r0 == 0) goto Lb
            r1 = 0
            r0.a(r1)
        Lb:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.ss
            r0.b(r1)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.uC
            r0.c(r1)
            r2.aE()
            return
    }
}
