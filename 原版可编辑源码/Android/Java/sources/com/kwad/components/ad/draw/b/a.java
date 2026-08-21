package com.kwad.components.ad.draw.b;

import com.kwad.components.core.widget.ComplianceTextView;
import com.kwad.sdk.R;

public final class a extends com.kwad.components.ad.draw.a.a {
    private ComplianceTextView bZ;

    @Override
    public final void ah() {
        super.ah();
        this.bZ.setVisibility(0);
        this.bZ.setAdTemplate(this.bE.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.bZ = (ComplianceTextView) findViewById(R.id.ksad_compliance_view);
    }
}
