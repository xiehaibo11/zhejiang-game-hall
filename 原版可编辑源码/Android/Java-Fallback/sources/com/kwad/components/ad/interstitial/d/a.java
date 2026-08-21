package com.kwad.components.ad.interstitial.d;

public final class a extends com.kwad.components.ad.interstitial.d.b {
    private com.kwad.components.core.widget.ComplianceTextView ja;
    private android.view.OrientationEventListener jb;
    private com.kwad.components.core.widget.KsAutoCloseView jc;



    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.interstitial.d.a r0, com.kwad.components.ad.interstitial.d.c r1) {
            r0.b(r1)
            return
    }

    private void a(com.kwad.components.ad.interstitial.d.c r3) {
            r2 = this;
            com.kwad.components.ad.interstitial.d.a$2 r0 = new com.kwad.components.ad.interstitial.d.a$2
            com.kwad.components.ad.interstitial.d r1 = r3.hG
            android.content.Context r1 = r1.getContext()
            r0.<init>(r2, r1, r3)
            r2.jb = r0
            boolean r3 = r0.canDetectOrientation()
            if (r3 == 0) goto L19
            android.view.OrientationEventListener r3 = r2.jb
            r3.enable()
            return
        L19:
            android.view.OrientationEventListener r3 = r2.jb
            r3.disable()
            return
    }

    static void b(com.kwad.components.ad.interstitial.d.a r0, com.kwad.components.ad.interstitial.d.c r1) {
            r0.a(r1)
            return
    }

    private void b(com.kwad.components.ad.interstitial.d.c r4) {
            r3 = this;
            com.kwad.components.core.widget.ComplianceTextView r0 = r3.ja
            r3.h(r0)
            boolean r0 = com.kwad.sdk.utils.ai.IO()
            r1 = 0
            if (r0 != 0) goto L12
            com.kwad.components.core.widget.KsAutoCloseView r0 = r3.jc
            com.kwad.sdk.d.a.a.b(r0, r1, r1, r1, r1)
            goto L21
        L12:
            android.content.Context r0 = r3.getContext()
            r2 = 1103626240(0x41c80000, float:25.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r2)
            com.kwad.components.core.widget.KsAutoCloseView r2 = r3.jc
            com.kwad.sdk.d.a.a.b(r2, r1, r0, r1, r1)
        L21:
            com.kwad.components.core.widget.ComplianceTextView r0 = r3.ja
            r0.setVisibility(r1)
            com.kwad.components.core.widget.ComplianceTextView r0 = r3.ja
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            r0.setAdTemplate(r4)
            return
    }

    private void h(android.view.View r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            android.content.Context r2 = r3.getContext()
            int r1 = com.kwad.sdk.d.a.a.a(r2, r1)
            r2 = 0
            com.kwad.sdk.d.a.a.b(r4, r1, r0, r1, r2)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            java.lang.Object r0 = r2.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            com.kwad.components.ad.interstitial.d.a$1 r1 = new com.kwad.components.ad.interstitial.d.a$1
            r1.<init>(r2, r0)
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_compliance_view
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.widget.ComplianceTextView r0 = (com.kwad.components.core.widget.ComplianceTextView) r0
            r1.ja = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_auto_close
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.widget.KsAutoCloseView r0 = (com.kwad.components.core.widget.KsAutoCloseView) r0
            r1.jc = r0
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            android.view.OrientationEventListener r0 = r1.jb
            if (r0 == 0) goto La
            r0.disable()
        La:
            return
    }
}
