package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

public final class e extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.c {
    private android.view.ViewGroup gg;
    private com.kwad.components.core.widget.KsLogoView so;
    private com.kwad.components.ad.reward.m.n uU;
    private int uV;
    private android.widget.FrameLayout.LayoutParams uW;
    private com.kwad.components.ad.reward.m.n.a uX;


    public e(android.view.ViewGroup r1, com.kwad.components.ad.reward.m.n.a r2) {
            r0 = this;
            r0.<init>()
            r0.gg = r1
            r0.uX = r2
            return
    }

    static android.content.Context a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.e r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.platdetail.actionbar.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r5 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r5)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.core.widget.KsLogoView r1 = r5.so
            int r1 = r1.getVisibility()
            r5.uV = r1
            android.content.Context r1 = r5.getContext()
            com.kwad.components.core.widget.KsLogoView r2 = r5.so
            int r3 = com.kwad.sdk.R.dimen.ksad_reward_order_logo_margin_bottom
            com.kwad.components.ad.reward.j r4 = r5.qx
            com.kwad.components.ad.reward.l.d r4 = r4.oV
            boolean r4 = r4.jR()
            r4 = r4 ^ 1
            android.widget.FrameLayout$LayoutParams r0 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.d.a(r1, r0, r2, r3, r4)
            r5.uW = r0
            com.kwad.components.ad.reward.m.n r0 = new com.kwad.components.ad.reward.m.n
            android.view.ViewGroup r1 = r5.gg
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.e$1 r2 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.e$1
            android.content.Context r3 = r5.getContext()
            com.kwad.components.ad.reward.j r4 = r5.qx
            r2.<init>(r5, r3, r4)
            r0.<init>(r1, r2)
            r5.uU = r0
            com.kwad.components.ad.reward.m.n$a r1 = r5.uX
            r0.a(r1)
            com.kwad.components.ad.reward.m.n r0 = r5.uU
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.reward.m.r r1 = com.kwad.components.ad.reward.m.r.C(r1)
            r0.b(r1)
            com.kwad.components.core.widget.e r0 = new com.kwad.components.core.widget.e
            r0.<init>()
            com.kwad.components.ad.reward.m.n r1 = r5.uU
            android.view.ViewGroup r1 = r1.gQ()
            com.kwad.components.core.t.g.a(r0, r1)
            return
    }

    @Override
    public final void e(com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r3) {
            r2 = this;
            android.view.ViewGroup r0 = r2.gg
            r1 = 0
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r2.gg
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORDER
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.a(r3, r0, r1)
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
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.widget.KsLogoView r0 = r2.so
            int r1 = r2.uV
            r0.setVisibility(r1)
            android.widget.FrameLayout$LayoutParams r0 = r2.uW
            if (r0 == 0) goto L13
            com.kwad.components.core.widget.KsLogoView r1 = r2.so
            r1.setLayoutParams(r0)
        L13:
            return
    }
}
