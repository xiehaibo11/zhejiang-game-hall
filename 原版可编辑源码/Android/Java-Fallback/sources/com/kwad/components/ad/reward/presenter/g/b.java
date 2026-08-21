package com.kwad.components.ad.reward.presenter.g;

public final class b extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.m.c.a, com.kwad.sdk.b.a, com.kwad.sdk.core.webview.d.a.a, com.kwad.sdk.widget.c {
    private static float xf = 0.4548105f;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private com.kwad.components.ad.reward.k.b.a pA;
    private android.view.ViewGroup wY;
    private com.kwad.components.ad.reward.m.q wZ;
    private android.view.ViewGroup xa;
    private com.kwad.components.ad.reward.m.e xb;
    private com.kwad.components.ad.reward.m.c xc;
    private com.kwad.components.ad.reward.m.c xd;
    private int xg;
    private long xh;
    private boolean xi;
    private com.kwad.sdk.core.c.c xj;





    static {
            return
    }

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 15
            r2.xg = r0
            r0 = -1
            r2.xh = r0
            r0 = 0
            r2.xi = r0
            com.kwad.components.ad.reward.presenter.g.b$3 r0 = new com.kwad.components.ad.reward.presenter.g.b$3
            r0.<init>(r2)
            r2.mRewardVerifyListener = r0
            com.kwad.components.ad.reward.presenter.g.b$4 r0 = new com.kwad.components.ad.reward.presenter.g.b$4
            r0.<init>(r2)
            r2.xj = r0
            return
    }

    private void Y(boolean r4) {
            r3 = this;
            com.kwad.components.ad.reward.k.b.a r0 = r3.pA
            android.content.Context r1 = r3.getContext()
            com.kwad.components.ad.reward.j r2 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.components.ad.reward.k.b.a.a(r0, r1, r2)
            com.kwad.components.ad.reward.k.b.a r0 = r3.pA
            boolean r0 = r0.jM()
            if (r0 == 0) goto L3d
            if (r4 == 0) goto L36
            boolean r4 = r3.jk()
            if (r4 == 0) goto L32
            com.kwad.components.ad.reward.k.b.a r0 = r3.pA
            if (r0 == 0) goto L32
            r0.jL()
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            r0.notifyRewardVerify()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.onRewardVerify()
        L32:
            r3.Z(r4)
            return
        L36:
            long r0 = java.lang.System.currentTimeMillis()
            r3.xh = r0
            return
        L3d:
            if (r4 == 0) goto L43
            r4 = 0
            r3.Z(r4)
        L43:
            return
    }

    private void Z(boolean r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showTaskToast hasShowCompletedToast: "
            r0.<init>(r1)
            boolean r1 = r3.xi
            r0.append(r1)
            java.lang.String r1 = " completed: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LaunchAppTaskPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r3.xi
            if (r0 == 0) goto L22
            return
        L22:
            if (r4 == 0) goto L27
            java.lang.String r0 = "恭喜！任务达标啦，成功获取奖励~"
            goto L29
        L27:
            java.lang.String r0 = "哎呀，差一点就达标啦，再试一次~"
        L29:
            android.content.Context r1 = r3.getContext()
            r2 = 0
            com.kwad.sdk.utils.v.d(r1, r0, r2)
            if (r4 == 0) goto L36
            r4 = 1
            r3.xi = r4
        L36:
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.g.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void a(com.kwad.components.ad.reward.presenter.g.b r0, boolean r1) {
            r0.Y(r1)
            return
    }

    private void a(com.kwad.sdk.core.view.AdBaseFrameLayout r5) {
            r4 = this;
            r4.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L11
            java.lang.String r5 = "LaunchAppTaskPresenter"
            java.lang.String r0 = "initBottomActionBar screen is horizontal"
            com.kwad.sdk.core.e.c.d(r5, r0)
            return
        L11:
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_stub
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            r0.inflate()
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_native_container
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.xa = r0
            r1 = 1
            r0.setClickable(r1)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r4.xa
            r0.<init>(r1, r4)
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_root
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            android.content.Context r1 = r4.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_apk_info_card_step_icon_radius
            float r1 = r1.getDimension(r2)
            r0.setRadius(r1)
            android.content.Context r1 = r4.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_apk_info_card_height
            float r1 = r1.getDimension(r2)
            com.kwad.components.ad.reward.presenter.g.b$1 r2 = new com.kwad.components.ad.reward.presenter.g.b$1
            r2.<init>(r4, r0, r1)
            r0.post(r2)
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_native_container
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.xa = r0
            com.kwad.components.ad.reward.m.c r1 = new com.kwad.components.ad.reward.m.c
            r1.<init>(r0)
            r4.xc = r1
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r1.a(r0)
            com.kwad.components.ad.reward.m.c r0 = r4.xc
            r0.a(r4)
            com.kwad.components.ad.reward.m.c r0 = r4.xc
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r2 = 0
            r0.c(r1, r2)
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_h5
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            com.kwad.components.ad.reward.m.e r1 = new com.kwad.components.ad.reward.m.e
            android.view.ViewGroup r2 = r4.xa
            com.kwad.components.ad.reward.j r3 = r4.qx
            com.kwad.components.core.e.d.c r3 = r3.mApkDownloadHelper
            r1.<init>(r0, r2, r3, r4)
            r4.xb = r1
            com.kwad.components.ad.reward.presenter.g.b$2 r0 = new com.kwad.components.ad.reward.presenter.g.b$2
            r0.<init>(r4)
            r1.a(r0)
            com.kwad.components.ad.reward.m.e r0 = r4.xb
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.a(r1, r5)
            return
    }

    private void aa(boolean r4) {
            r3 = this;
            r0 = 1
            if (r4 == 0) goto L5
            r4 = r0
            goto L7
        L5:
            r4 = 153(0x99, float:2.14E-43)
        L7:
            com.kwad.components.ad.reward.j r1 = r3.qx
            android.content.Context r2 = r3.getContext()
            r1.a(r0, r2, r4, r0)
            return
    }

    static com.kwad.components.ad.reward.m.c b(com.kwad.components.ad.reward.presenter.g.b r0) {
            com.kwad.components.ad.reward.m.c r0 = r0.xc
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.g.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.m.c d(com.kwad.components.ad.reward.presenter.g.b r0) {
            com.kwad.components.ad.reward.m.c r0 = r0.xd
            return r0
    }

    private boolean jk() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "checkUseAppTime appBackgroundTimestamp: "
            r0.<init>(r1)
            long r1 = r6.xh
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LaunchAppTaskPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            long r0 = r6.xh
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 >= 0) goto L1f
            return r1
        L1f:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.xh
            long r2 = r2 - r4
            int r0 = r6.xg
            int r0 = r0 * 1000
            long r4 = (long) r0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L31
            r0 = 1
            return r0
        L31:
            return r1
    }

    @Override
    public final void S(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aq(r0)
            boolean r3 = android.text.TextUtils.equals(r0, r3)
            if (r3 != 0) goto Ld
            return
        Ld:
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.b.a r3 = r3.pA
            if (r3 == 0) goto L33
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.mAdTemplate
            boolean r3 = com.kwad.components.ad.reward.j.r(r3)
            if (r3 == 0) goto L33
            com.kwad.components.ad.reward.j r3 = r2.qx
            com.kwad.components.ad.reward.k.b.a r3 = r3.pA
            r3.jJ()
            com.kwad.sdk.core.c.b.AU()
            boolean r3 = com.kwad.sdk.core.c.b.isAppOnForeground()
            if (r3 != 0) goto L33
            long r0 = java.lang.System.currentTimeMillis()
            r2.xh = r0
        L33:
            return
    }

    @Override
    public final void a(android.view.View r1) {
            r0 = this;
            r1 = 1
            r0.aa(r1)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r5 = this;
            super.ah()
            java.lang.String r0 = "LaunchAppTaskPresenter"
            java.lang.String r1 = "onBind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.r(r0)
            if (r0 != 0) goto L15
            return
        L15:
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r5.mAdInfo = r0
            int r0 = com.kwad.components.ad.reward.a.b.gE()
            r5.xg = r0
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.c r0 = r5.xj
            com.kwad.sdk.core.c.b.a(r0)
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r5.mRewardVerifyListener
            r0.a(r1)
            com.kwad.components.ad.reward.k.b.a r0 = com.kwad.components.ad.reward.k.d.jE()
            r5.pA = r0
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.k.b.a r1 = r5.pA
            r0.pA = r1
            com.kwad.components.ad.reward.k.b.a r0 = r5.pA
            android.content.Context r1 = r5.getContext()
            com.kwad.components.ad.reward.j r2 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.components.ad.reward.k.b.a.a(r0, r1, r2)
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r5.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            int r1 = com.kwad.sdk.R.id.ksad_activity_apk_info_area_native
            android.view.View r1 = r5.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r5.wY = r1
            if (r1 == 0) goto Lae
            r2 = 8
            r1.setVisibility(r2)
            com.kwad.components.ad.reward.m.c r1 = new com.kwad.components.ad.reward.m.c
            android.view.ViewGroup r2 = r5.wY
            r1.<init>(r2)
            r5.xd = r1
            com.kwad.components.ad.reward.j r2 = r5.qx
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            r1.a(r2)
            com.kwad.components.ad.reward.m.c r1 = r5.xd
            r1.a(r5)
            com.kwad.components.ad.reward.m.c r1 = r5.xd
            com.kwad.components.ad.reward.j r2 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r3 = 0
            r1.c(r2, r3)
            int r1 = com.kwad.sdk.R.id.ksad_right_area_webview_container
            android.view.View r1 = r5.findViewById(r1)
            com.kwad.sdk.widget.KSFrameLayout r1 = (com.kwad.sdk.widget.KSFrameLayout) r1
            r1.setWidthBasedRatio(r3)
            int r1 = com.kwad.sdk.R.id.ksad_right_area_webview
            android.view.View r1 = r5.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = (com.kwad.sdk.core.webview.KsAdWebView) r1
            com.kwad.components.ad.reward.m.q r2 = new com.kwad.components.ad.reward.m.q
            android.view.ViewGroup r3 = r5.wY
            com.kwad.components.ad.reward.j r4 = r5.qx
            com.kwad.components.core.e.d.c r4 = r4.mApkDownloadHelper
            r2.<init>(r1, r3, r4, r5)
            r5.wZ = r2
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r2.a(r1, r0)
        Lae:
            com.kwad.sdk.b.b r1 = com.kwad.sdk.b.b.yB()
            r1.a(r5)
            r5.a(r0)
            return
    }

    @Override
    public final void b(android.view.View r1) {
            r0 = this;
            com.kwad.components.ad.reward.j r1 = r0.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.c.bV(r1)
            if (r1 == 0) goto Le
            r1 = 0
            r0.aa(r1)
        Le:
            return
    }

    @Override
    public final void c(boolean r3, int r4) {
            r2 = this;
            r4 = 1
            if (r3 == 0) goto L5
            r3 = r4
            goto L7
        L5:
            r3 = 153(0x99, float:2.14E-43)
        L7:
            com.kwad.components.ad.reward.j r0 = r2.qx
            android.content.Context r1 = r2.getContext()
            r0.b(r4, r1, r3, r4)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            java.lang.String r0 = "LaunchAppTaskPresenter"
            java.lang.String r1 = "onUnbind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.c r0 = r2.xj
            com.kwad.sdk.core.c.b.b(r0)
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r2.mRewardVerifyListener
            r0.b(r1)
            com.kwad.sdk.b.b r0 = com.kwad.sdk.b.b.yB()
            r0.b(r2)
            com.kwad.components.ad.reward.m.e r0 = r2.xb
            r1 = 0
            if (r0 == 0) goto L2c
            r0.jX()
            r2.xb = r1
        L2c:
            com.kwad.components.ad.reward.m.c r0 = r2.xd
            if (r0 == 0) goto L33
            r0.jU()
        L33:
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.pA = r1
            return
    }
}
