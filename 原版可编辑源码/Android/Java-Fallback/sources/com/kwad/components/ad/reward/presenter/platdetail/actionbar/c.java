package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

public final class c extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;


    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.c$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.c$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.f r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.f
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.b r0 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.b
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.reward.presenter.f.g r0 = new com.kwad.components.ad.reward.presenter.f.g
            r0.<init>()
            r1.a(r0)
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.platdetail.actionbar.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.platdetail.actionbar.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.platdetail.actionbar.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.platdetail.actionbar.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void io() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.d(r0)
            if (r0 == 0) goto L11
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
        L11:
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1.mAdTemplate = r0
            com.kwad.components.ad.reward.j r0 = r1.qx
            android.content.Context r0 = r0.mContext
            r1.mContext = r0
            r1.io()
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            return
    }
}
