package com.kwad.components.ad.reward.presenter;

public final class g extends com.kwad.components.ad.reward.presenter.a implements com.kwad.sdk.b.a {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void S(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aq(r0)
            boolean r2 = android.text.TextUtils.equals(r0, r2)
            if (r2 != 0) goto Ld
            return
        Ld:
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r0 = com.kwad.sdk.core.response.b.a.aG(r2)
            if (r0 == 0) goto L22
            int r2 = com.kwad.sdk.core.response.b.a.aF(r2)
            r0 = 1
            if (r2 == r0) goto L3b
        L22:
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.e.b r2 = r2.mAdOpenInteractionListener
            if (r2 == 0) goto L2f
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.e.b r2 = r2.mAdOpenInteractionListener
            r2.onRewardVerify()
        L2f:
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.l.d r2 = r2.oV
            r2.pause()
            com.kwad.components.ad.reward.j r2 = r1.qx
            r2.fR()
        L3b:
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r1.mAdInfo = r0
            com.kwad.sdk.b.b r0 = com.kwad.sdk.b.b.yB()
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.sdk.b.b r0 = com.kwad.sdk.b.b.yB()
            r0.b(r1)
            return
    }
}
