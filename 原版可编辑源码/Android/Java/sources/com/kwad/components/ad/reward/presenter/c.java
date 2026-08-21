package com.kwad.components.ad.reward.presenter;

import com.kwad.components.core.widget.ComplianceTextView;
import com.kwad.sdk.R;

public final class c extends a {
    private ComplianceTextView bZ;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (com.kwad.components.core.webview.b.j.b("ksad-video-top-bar", c.this.qx.mAdTemplate).equals(str)) {
                c.this.bZ.setVisibility(0);
                c.this.bZ.setAdTemplate(c.this.qx.mAdTemplate);
            }
        }
    };

    private boolean hA() {
        return this.qx.pj ? com.kwad.components.ad.reward.j.b(this.qx) : com.kwad.components.ad.reward.j.c(this.qx);
    }

    @Override
    public final void ah() {
        super.ah();
        com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        if (hA()) {
            return;
        }
        this.bZ.setVisibility(0);
        this.bZ.setAdTemplate(this.qx.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.bZ = (ComplianceTextView) findViewById(R.id.ksad_compliance_view);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
    }
}
