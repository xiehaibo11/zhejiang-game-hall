package com.kwad.components.ad.reward.b;

public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.b.b.a {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private boolean rl;


    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.rl = r0
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.reward.b.c r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.b.c r0, boolean r1) {
            r1 = 1
            r0.rl = r1
            return r1
    }

    private static boolean l(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdProductInfo r0 = com.kwad.sdk.core.response.b.a.cy(r1)
            boolean r1 = com.kwad.components.ad.reward.a.b.i(r1)
            if (r1 == 0) goto L14
            if (r0 == 0) goto L14
            boolean r1 = r0.isCouponListEmpty()
            if (r1 != 0) goto L14
            r1 = 1
            return r1
        L14:
            r1 = 0
            return r1
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1.mAdTemplate = r0
            return
    }

    @Override
    public final void gU() {
            r4 = this;
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r1 = r4.getContext()
            r2 = 1
            r3 = 29
            r0.a(r2, r1, r3, r2)
            return
    }

    public final void showDialog() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onBind hasShown : "
            r0.<init>(r1)
            boolean r1 = r3.rl
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardCouponDialogPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r3.rl
            if (r0 == 0) goto L1a
            return
        L1a:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            int r2 = com.kwad.sdk.R.id.ksad_reward_order_coupon_list
            android.view.View r1 = r1.findViewById(r2)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            if (r1 != 0) goto L2f
            return
        L2f:
            int r2 = r1.getChildCount()
            if (r2 <= 0) goto L3a
            r2 = 0
            android.view.View r1 = r1.getChildAt(r2)
        L3a:
            int[] r2 = com.kwad.sdk.d.a.a.D(r1)
            boolean r0 = l(r0)
            if (r0 == 0) goto L4e
            if (r2 == 0) goto L4e
            com.kwad.components.ad.reward.b.c$1 r0 = new com.kwad.components.ad.reward.b.c$1
            r0.<init>(r3, r2)
            r1.post(r0)
        L4e:
            return
    }
}
