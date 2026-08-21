package com.kwad.components.ad.draw.b;

public final class a extends com.kwad.components.ad.draw.a.a {
    private com.kwad.components.core.widget.ComplianceTextView bZ;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.widget.ComplianceTextView r0 = r2.bZ
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.core.widget.ComplianceTextView r0 = r2.bZ
            com.kwad.components.ad.draw.a.b r1 = r2.bE
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
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
}
