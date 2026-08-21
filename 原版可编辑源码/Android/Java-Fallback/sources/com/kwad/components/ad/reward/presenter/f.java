package com.kwad.components.ad.reward.presenter;

public final class f extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.core.i.a.a {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r3.mAdTemplate = r0
            boolean r0 = com.kwad.sdk.core.d.a.AX()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "onBind localCheckResult: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "RewardInnerAdLoadPresenter"
            com.kwad.sdk.core.e.c.d(r2, r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r1 = r1.mAdScene
            if (r1 == 0) goto L2f
            if (r0 == 0) goto L2f
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.internal.api.SceneImpl r0 = r0.mAdScene
            com.kwad.components.core.i.a.a(r0, r3)
        L2f:
            return
    }

    @Override
    public final void c(java.util.List<com.kwad.components.core.i.c> r6) {
            r5 = this;
            if (r6 == 0) goto L58
            int r0 = r6.size()
            if (r0 != 0) goto L9
            goto L58
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onInnerAdLoad: "
            r0.<init>(r1)
            int r1 = r6.size()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardInnerAdLoadPresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r0 = 0
            java.lang.Object r0 = r6.get(r0)
            com.kwad.components.core.i.c r0 = (com.kwad.components.core.i.c) r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            boolean r1 = com.kwad.sdk.core.response.b.b.bf(r0)
            com.kwad.components.ad.reward.j r2 = r5.qx
            java.util.List r2 = r2.fY()
            if (r1 == 0) goto L58
            int r1 = com.kwad.sdk.core.response.b.b.bc(r0)
            long r3 = com.kwad.sdk.core.response.b.b.bd(r0)
            com.kwad.sdk.core.d.a.f(r1, r3)
            if (r2 == 0) goto L58
            java.util.Iterator r0 = r2.iterator()
        L48:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L58
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.i.a$a r1 = (com.kwad.components.core.i.a.a) r1
            r1.c(r6)
            goto L48
        L58:
            return
    }

    @Override
    public final void onError(int r3, java.lang.String r4) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.List r0 = r0.fY()
            if (r0 == 0) goto L1c
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.i.a$a r1 = (com.kwad.components.core.i.a.a) r1
            r1.onError(r3, r4)
            goto Lc
        L1c:
            return
    }

    @Override
    public final void onRequestResult(int r3) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.List r0 = r0.fY()
            if (r0 == 0) goto L1c
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.i.a$a r1 = (com.kwad.components.core.i.a.a) r1
            r1.onRequestResult(r3)
            goto Lc
        L1c:
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            return
    }
}
