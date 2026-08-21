package com.kwad.components.ad.splashscreen.c;

public final class f extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.components.core.widget.ComplianceTextView bZ;

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            android.view.ViewGroup r0 = r0.p(r1)
            int r1 = com.kwad.sdk.R.id.ksad_compliance_view
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.ComplianceTextView r0 = (com.kwad.components.core.widget.ComplianceTextView) r0
            r2.bZ = r0
            r1 = 0
            r0.setBackgroundColor(r1)
            com.kwad.components.core.widget.ComplianceTextView r0 = r2.bZ
            r0.setVisibility(r1)
            com.kwad.components.core.widget.ComplianceTextView r0 = r2.bZ
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.setAdTemplate(r1)
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }
}
