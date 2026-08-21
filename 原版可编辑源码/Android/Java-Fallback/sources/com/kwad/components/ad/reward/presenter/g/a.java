package com.kwad.components.ad.reward.presenter.g;

public final class a extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.m.c.a, com.kwad.sdk.core.webview.d.a.a, com.kwad.sdk.widget.c {
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener;
    private com.kwad.components.ad.reward.k.a.a pB;
    private android.view.ViewGroup wY;
    private com.kwad.components.ad.reward.m.q wZ;
    private android.view.ViewGroup xa;
    private com.kwad.components.ad.reward.m.e xb;
    private com.kwad.components.ad.reward.m.c xc;
    private com.kwad.components.ad.reward.m.c xd;


    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.g.a$1 r0 = new com.kwad.components.ad.reward.presenter.g.a$1
            r0.<init>(r1)
            r1.mRewardVerifyListener = r0
            return
    }

    static com.kwad.components.ad.reward.m.c a(com.kwad.components.ad.reward.presenter.g.a r0) {
            com.kwad.components.ad.reward.m.c r0 = r0.xc
            return r0
    }

    private void a(com.kwad.sdk.core.view.AdBaseFrameLayout r5) {
            r4 = this;
            r4.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L11
            java.lang.String r5 = "LandPageOpenTaskPresenter"
            java.lang.String r0 = "initBottomActionBar screen is horizontal"
            com.kwad.sdk.core.e.c.d(r5, r0)
            return
        L11:
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_stub
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            r0.inflate()
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_root
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            android.content.Context r1 = r4.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_apk_info_card_step_icon_radius
            float r1 = r1.getDimension(r2)
            r0.setRadius(r1)
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            java.util.List r1 = com.kwad.sdk.core.response.b.c.bX(r1)
            int r1 = r1.size()
            r2 = 0
            r0.setRatio(r2)
            if (r1 != 0) goto L4e
            android.content.Context r1 = r4.getContext()
            r2 = 1124597760(0x43080000, float:136.0)
            goto L54
        L4e:
            android.content.Context r1 = r4.getContext()
            r2 = 1125842944(0x431b0000, float:155.0)
        L54:
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            com.kwad.sdk.d.a.a.m(r0, r1)
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_native_container
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.xa = r0
            r1 = 1
            r0.setClickable(r1)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r2 = r4.xa
            r0.<init>(r2, r4)
            com.kwad.components.ad.reward.m.c r0 = new com.kwad.components.ad.reward.m.c
            android.view.ViewGroup r2 = r4.xa
            r0.<init>(r2)
            r4.xc = r0
            r0.a(r4)
            com.kwad.components.ad.reward.m.c r0 = r4.xc
            com.kwad.components.ad.reward.j r2 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.c(r2, r1)
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_h5
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            com.kwad.components.ad.reward.m.e r1 = new com.kwad.components.ad.reward.m.e
            android.view.ViewGroup r2 = r4.xa
            r3 = 0
            r1.<init>(r0, r2, r3, r4)
            r4.xb = r1
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1.a(r0, r5)
            return
    }

    static com.kwad.components.ad.reward.m.c b(com.kwad.components.ad.reward.presenter.g.a r0) {
            com.kwad.components.ad.reward.m.c r0 = r0.xd
            return r0
    }

    private void c(android.view.View r2, boolean r3) {
            r1 = this;
            int r2 = r2.getId()
            int r0 = com.kwad.sdk.R.id.ksad_reward_apk_info_card_native_container
            if (r2 == r0) goto Lc
            int r0 = com.kwad.sdk.R.id.ksad_activity_apk_info_area_native
            if (r2 != r0) goto L10
        Lc:
            r2 = 2
            r1.d(r3, r2)
        L10:
            return
    }

    private void d(boolean r4, int r5) {
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
            r1.a(r0, r2, r4, r5)
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.c(r2, r0)
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
            java.lang.String r0 = "LandPageOpenTaskPresenter"
            java.lang.String r1 = "onBind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.s(r0)
            if (r0 != 0) goto L15
            return
        L15:
            com.kwad.components.ad.reward.k.a.a r0 = com.kwad.components.ad.reward.k.d.jF()
            r5.pB = r0
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.k.a.a r1 = r5.pB
            r0.pB = r1
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r1 = r5.mRewardVerifyListener
            r0.a(r1)
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r5.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            int r1 = com.kwad.sdk.R.id.ksad_activity_apk_info_area_native
            android.view.View r1 = r5.findViewById(r1)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r5.wY = r1
            if (r1 == 0) goto L8a
            r2 = 1
            r1.setClickable(r2)
            android.view.ViewGroup r1 = r5.wY
            r2 = 8
            r1.setVisibility(r2)
            com.kwad.sdk.widget.f r1 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r2 = r5.wY
            r1.<init>(r2, r5)
            com.kwad.components.ad.reward.m.c r1 = new com.kwad.components.ad.reward.m.c
            android.view.ViewGroup r2 = r5.wY
            r1.<init>(r2)
            r5.xd = r1
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
            r4 = 0
            r2.<init>(r1, r3, r4, r5)
            r5.wZ = r2
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r2.a(r1, r0)
        L8a:
            r5.a(r0)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Le
            r0 = 0
            r1.c(r2, r0)
        Le:
            return
    }

    @Override
    public final void c(boolean r1, int r2) {
            r0 = this;
            r2 = 1
            r0.d(r1, r2)
            return
    }

    @Override
    public final void onUnbind() {
            r3 = this;
            super.onUnbind()
            java.lang.String r0 = "LandPageOpenTaskPresenter"
            java.lang.String r1 = "onUnbind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.reward.m.e r0 = r3.xb
            r1 = 0
            if (r0 == 0) goto L14
            r0.jX()
            r3.xb = r1
        L14:
            com.kwad.components.ad.reward.m.c r0 = r3.xd
            if (r0 == 0) goto L1b
            r0.jU()
        L1b:
            com.kwad.components.ad.reward.c r0 = com.kwad.components.ad.reward.c.ft()
            com.kwad.components.ad.reward.e.j r2 = r3.mRewardVerifyListener
            r0.b(r2)
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.pB = r1
            return
    }
}
