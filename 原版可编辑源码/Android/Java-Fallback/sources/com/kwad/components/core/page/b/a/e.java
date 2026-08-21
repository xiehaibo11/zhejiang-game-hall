package com.kwad.components.core.page.b.a;

public final class e extends com.kwad.components.core.page.b.a.a {
    private android.widget.LinearLayout Mu;
    private android.widget.TextView Mv;
    private android.widget.ImageView Mw;



    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.widget.LinearLayout a(com.kwad.components.core.page.b.a.e r0) {
            android.widget.LinearLayout r0 = r0.Mu
            return r0
    }

    private void oQ() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_bar
            android.view.View r0 = r3.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r3.Mu = r0
            com.kwad.components.core.page.b.a.b r0 = r3.MW
            java.lang.String r0 = r0.mPageTitle
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 8
            if (r0 != 0) goto L1c
            android.widget.LinearLayout r0 = r3.Mu
            r0.setVisibility(r1)
            return
        L1c:
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_bar_textview
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Mv = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_tip_close_btn
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.Mw = r0
            com.kwad.components.core.page.b.a.e$1 r2 = new com.kwad.components.core.page.b.a.e$1
            r2.<init>(r3)
            r0.setOnClickListener(r2)
            com.kwad.components.core.page.b.a.b r0 = r3.MW
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.bn(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bj(r0)
            if (r2 == 0) goto L5c
            android.widget.LinearLayout r1 = r3.Mu
            r2 = 0
            r1.setVisibility(r2)
            android.widget.TextView r1 = r3.Mv
            r1.setText(r0)
            android.widget.TextView r0 = r3.Mv
            r1 = 1
            r0.setSelected(r1)
            goto L61
        L5c:
            android.widget.LinearLayout r0 = r3.Mu
            r0.setVisibility(r1)
        L61:
            com.kwad.components.core.page.b.a.b r0 = r3.MW
            com.kwad.sdk.core.webview.KsAdWebView$c r1 = r3.oR()
            r0.a(r1)
            return
    }

    private com.kwad.sdk.core.webview.KsAdWebView.c oR() {
            r1 = this;
            com.kwad.components.core.page.b.a.e$2 r0 = new com.kwad.components.core.page.b.a.e$2
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void ah() {
            r0 = this;
            super.ah()
            r0.oQ()
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }
}
