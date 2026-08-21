package com.kwad.components.ad.reward.presenter;

public final class c extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.core.widget.ComplianceTextView bZ;
    private com.kwad.components.core.webview.b.e.e gt;


    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.c$1 r0 = new com.kwad.components.ad.reward.presenter.c$1
            r0.<init>(r1)
            r1.gt = r0
            return
    }

    static com.kwad.components.core.widget.ComplianceTextView a(com.kwad.components.ad.reward.presenter.c r0) {
            com.kwad.components.core.widget.ComplianceTextView r0 = r0.bZ
            return r0
    }

    private boolean hA() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = r0.pj
            if (r0 == 0) goto Ld
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            return r0
        Ld:
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            boolean r0 = r2.hA()
            if (r0 != 0) goto L21
            com.kwad.components.core.widget.ComplianceTextView r0 = r2.bZ
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.core.widget.ComplianceTextView r0 = r2.bZ
            com.kwad.components.ad.reward.j r1 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
        L21:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_compliance_view
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.widget.ComplianceTextView r0 = (com.kwad.components.core.widget.ComplianceTextView) r0
            r1.bZ = r0
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
