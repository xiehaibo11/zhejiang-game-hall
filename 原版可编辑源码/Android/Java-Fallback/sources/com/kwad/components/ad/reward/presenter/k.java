package com.kwad.components.ad.reward.presenter;

public final class k extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private com.kwad.components.core.video.l mVideoPlayStateListener;
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl oY;
    private com.kwad.components.ad.reward.m.g sm;
    private boolean sn;
    private com.kwad.components.core.widget.KsLogoView so;
    private com.kwad.components.ad.reward.m.l sp;



    public k() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.sn = r0
            com.kwad.components.ad.reward.presenter.k$1 r0 = new com.kwad.components.ad.reward.presenter.k$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.k r0) {
            r0.hC()
            return
    }

    static com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl b(com.kwad.components.ad.reward.presenter.k r0) {
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            return r0
    }

    private void hC() {
            r4 = this;
            boolean r0 = r4.sn
            if (r0 != 0) goto L1c
            com.kwad.components.ad.reward.m.g r0 = r4.sm
            if (r0 != 0) goto Lf
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r4.oY
            r1 = 0
            r0.Q(r1)
            goto L19
        Lf:
            com.kwad.components.ad.reward.presenter.k$2 r1 = new com.kwad.components.ad.reward.presenter.k$2
            r1.<init>(r4)
            r2 = 500(0x1f4, double:2.47E-321)
            r0.a(r1, r2)
        L19:
            r0 = 1
            r4.sn = r0
        L1c:
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r1, android.view.View r2) {
            r0 = this;
            com.kwad.components.ad.reward.m.l r1 = r0.sp
            if (r1 == 0) goto L7
            r1.ke()
        L7:
            return
    }

    @Override
    public final void ah() {
            r5 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r5.oY = r0
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r5.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r1 = com.kwad.sdk.core.response.b.b.bL(r0)
            boolean r1 = r1.displayWeakCard
            com.kwad.components.ad.reward.j r2 = r5.qx
            r2.B(r1)
            if (r1 == 0) goto L46
            com.kwad.components.ad.reward.m.g r1 = r5.sm
            if (r1 != 0) goto L30
            com.kwad.components.ad.reward.m.g r1 = new com.kwad.components.ad.reward.m.g
            com.kwad.components.ad.reward.j r2 = r5.qx
            r1.<init>(r2)
            r5.sm = r1
        L30:
            int r1 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r1 = r5.findViewById(r1)
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r1
            com.kwad.components.ad.reward.m.g r2 = r5.sm
            r2.f(r1)
            com.kwad.components.ad.reward.m.g r1 = r5.sm
            com.kwad.components.ad.reward.m.r r2 = com.kwad.components.ad.reward.m.r.C(r0)
            r1.b(r2)
        L46:
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.aN(r0)
            if (r2 == 0) goto L7b
            com.kwad.components.ad.reward.m.l r2 = r5.sp
            if (r2 != 0) goto L5d
            com.kwad.components.ad.reward.m.l r2 = new com.kwad.components.ad.reward.m.l
            com.kwad.components.ad.reward.j r3 = r5.qx
            r2.<init>(r3)
            r5.sp = r2
        L5d:
            com.kwad.components.ad.reward.m.l r2 = r5.sp
            com.kwad.components.ad.reward.j r3 = r5.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r3.mRootContainer
            r2.h(r3)
            com.kwad.components.ad.reward.m.l r2 = r5.sp
            com.kwad.components.ad.reward.m.r r0 = com.kwad.components.ad.reward.m.r.C(r0)
            r2.b(r0)
            android.content.Context r0 = r5.getContext()
            com.kwad.components.core.widget.KsLogoView r2 = r5.so
            int r3 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_logo_margin_bottom
            r4 = 0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.d.a(r0, r1, r2, r3, r4)
        L7b:
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r5)
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
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.b(r2)
            com.kwad.components.ad.reward.m.l r0 = r2.sp
            if (r0 == 0) goto L1a
            r0.onUnbind()
        L1a:
            return
    }
}
