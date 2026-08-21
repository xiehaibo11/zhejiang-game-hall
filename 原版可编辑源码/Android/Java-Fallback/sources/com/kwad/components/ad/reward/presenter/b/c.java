package com.kwad.components.ad.reward.presenter.b;

public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl oY;
    private com.kwad.components.core.video.l ss;
    private com.kwad.components.ad.reward.m.o tQ;


    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.b.c$1 r0 = new com.kwad.components.ad.reward.presenter.b.c$1
            r0.<init>(r1)
            r1.ss = r0
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.b.c r0) {
            r0.hC()
            return
    }

    private void hC() {
            r2 = this;
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r2.oY
            r1 = 0
            r0.Q(r1)
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult r1, android.view.View r2) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r4.oY = r0
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r4.ss
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.cw(r1)
            if (r2 == 0) goto L4e
            com.kwad.components.ad.reward.m.o r2 = r4.tQ
            if (r2 != 0) goto L2d
            com.kwad.components.ad.reward.m.o r2 = new com.kwad.components.ad.reward.m.o
            com.kwad.components.ad.reward.j r3 = r4.qx
            r2.<init>(r3)
            r4.tQ = r2
        L2d:
            com.kwad.components.ad.reward.m.o r2 = r4.tQ
            com.kwad.components.ad.reward.j r3 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r3.mRootContainer
            int r1 = com.kwad.sdk.core.response.b.a.aX(r1)
            r2.a(r3, r1)
            com.kwad.components.ad.reward.m.o r1 = r4.tQ
            com.kwad.components.ad.reward.m.r r0 = com.kwad.components.ad.reward.m.r.C(r0)
            r1.b(r0)
            int r0 = com.kwad.sdk.R.id.ksad_reward_origin_live_root
            android.view.View r0 = r4.findViewById(r0)
            r1 = 8
            r0.setVisibility(r1)
        L4e:
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.a(r4)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.ss
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            r0.b(r2)
            com.kwad.components.ad.reward.m.o r0 = r2.tQ
            if (r0 == 0) goto L1a
            r0.onUnbind()
        L1a:
            return
    }
}
