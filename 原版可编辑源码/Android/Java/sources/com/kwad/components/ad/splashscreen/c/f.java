package com.kwad.components.ad.splashscreen.c;

import com.kwad.components.core.widget.ComplianceTextView;
import com.kwad.sdk.R;

public final class f extends e {
    private ComplianceTextView bZ;

    @Override
    public final void ah() {
        super.ah();
        ComplianceTextView complianceTextView = (ComplianceTextView) this.CM.p(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate)).findViewById(R.id.ksad_compliance_view);
        this.bZ = complianceTextView;
        complianceTextView.setBackgroundColor(0);
        this.bZ.setVisibility(0);
        this.bZ.setAdTemplate(this.CM.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }
}
