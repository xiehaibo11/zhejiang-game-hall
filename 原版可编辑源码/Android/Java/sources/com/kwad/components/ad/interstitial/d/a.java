package com.kwad.components.ad.interstitial.d;

import android.view.OrientationEventListener;
import android.view.View;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.widget.ComplianceTextView;
import com.kwad.components.core.widget.KsAutoCloseView;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.ai;

public final class a extends b {
    private ComplianceTextView ja;
    private OrientationEventListener jb;
    private KsAutoCloseView jc;

    private void a(final c cVar) {
        OrientationEventListener orientationEventListener = new OrientationEventListener(cVar.hG.getContext()) {
            @Override
            public final void onOrientationChanged(int i) {
                a.this.b(cVar);
            }
        };
        this.jb = orientationEventListener;
        if (orientationEventListener.canDetectOrientation()) {
            this.jb.enable();
        } else {
            this.jb.disable();
        }
    }

    private void b(c cVar) {
        h(this.ja);
        if (ai.IO()) {
            com.kwad.sdk.d.a.a.b(this.jc, 0, com.kwad.sdk.d.a.a.a(getContext(), 25.0f), 0, 0);
        } else {
            com.kwad.sdk.d.a.a.b(this.jc, 0, 0, 0, 0);
        }
        this.ja.setVisibility(0);
        this.ja.setAdTemplate(cVar.mAdTemplate);
    }

    private void h(View view) {
        int iA = com.kwad.sdk.d.a.a.a(getContext(), 4.0f);
        int iA2 = com.kwad.sdk.d.a.a.a(getContext(), 4.0f);
        com.kwad.sdk.d.a.a.b(view, iA2, iA, iA2, 0);
    }

    @Override
    public final void ah() {
        super.ah();
        final c cVar = (c) Gk();
        cVar.a(new c.e() {
            @Override
            public final void onError() {
                a.this.b(cVar);
                a.this.a(cVar);
            }
        });
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.ja = (ComplianceTextView) findViewById(R.id.ksad_compliance_view);
        this.jc = (KsAutoCloseView) findViewById(R.id.ksad_interstitial_auto_close);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        OrientationEventListener orientationEventListener = this.jb;
        if (orientationEventListener != null) {
            orientationEventListener.disable();
        }
    }
}
