package com.kwad.components.ad.interstitial.f;

public final class b extends com.kwad.components.core.n.g implements android.view.View.OnClickListener {
    private static boolean lG;
    private android.widget.TextView gQ;
    private com.kwad.components.ad.interstitial.d.c jf;
    private com.kwad.components.core.widget.KSCornerImageView lB;
    private android.widget.TextView lC;
    private android.widget.TextView lD;
    private android.widget.TextView lE;
    private android.widget.TextView lF;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(com.kwad.components.ad.interstitial.d.c r4) {
            boolean r0 = com.kwad.components.ad.interstitial.f.b.lG
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            com.kwad.components.ad.interstitial.f.b.lG = r0
            com.kwad.components.ad.interstitial.f.b r0 = new com.kwad.components.ad.interstitial.f.b
            r0.<init>()
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            org.json.JSONObject r2 = r2.toJson()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "KEY_TEMPLATE"
            r1.putString(r3, r2)
            r0.setArguments(r1)
            r0.e(r4)
            com.kwad.components.ad.interstitial.d r4 = r4.hG
            android.app.Activity r4 = r4.getOwnerActivity()
            android.app.FragmentManager r4 = r4.getFragmentManager()
            java.lang.String r1 = "interstitialCloseDialog"
            r0.show(r4, r1)
            return
    }

    private void e(com.kwad.components.ad.interstitial.d.c r1) {
            r0 = this;
            r0.jf = r1
            return
    }

    private void i(android.view.View r4) {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_intercept_app_icon
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.components.core.widget.KSCornerImageView r0 = (com.kwad.components.core.widget.KSCornerImageView) r0
            r3.lB = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_intercept_app_title
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.gQ = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_intercept_dialog_desc
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lC = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_intercept_dialog_detail
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lD = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_intercept_dialog_btn_continue
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lE = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_intercept_dialog_btn_deny
            android.view.View r4 = r4.findViewById(r0)
            android.widget.TextView r4 = (android.widget.TextView) r4
            r3.lF = r4
            r0 = 6
            android.view.View[] r0 = new android.view.View[r0]
            com.kwad.components.core.widget.KSCornerImageView r1 = r3.lB
            r2 = 0
            r0[r2] = r1
            android.widget.TextView r1 = r3.gQ
            r2 = 1
            r0[r2] = r1
            android.widget.TextView r1 = r3.lC
            r2 = 2
            r0[r2] = r1
            android.widget.TextView r1 = r3.lD
            r2 = 3
            r0[r2] = r1
            android.widget.TextView r1 = r3.lE
            r2 = 4
            r0[r2] = r1
            r1 = 5
            r0[r1] = r4
            com.kwad.sdk.d.a.a.a(r3, r0)
            return
    }

    private void initData() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.core.widget.KSCornerImageView r1 = r5.lB
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r0)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            r4 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r1, r2, r3, r4)
            android.widget.TextView r1 = r5.gQ
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bO(r0)
            r1.setText(r2)
            android.widget.TextView r1 = r5.lC
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r0)
            r1.setText(r2)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.a.aN(r1)
            if (r1 == 0) goto L36
            android.widget.TextView r1 = r5.lD
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            r1.setText(r0)
        L36:
            return
    }

    @Override
    public final android.view.View a(android.view.LayoutInflater r4, android.view.ViewGroup r5) {
            r3 = this;
            android.os.Bundle r0 = r3.getArguments()
            java.lang.String r1 = "KEY_TEMPLATE"
            java.lang.String r0 = r0.getString(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: org.json.JSONException -> L1a
            r1.<init>()     // Catch: org.json.JSONException -> L1a
            r3.mAdTemplate = r1     // Catch: org.json.JSONException -> L1a
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r2.<init>(r0)     // Catch: org.json.JSONException -> L1a
            r1.parseJson(r2)     // Catch: org.json.JSONException -> L1a
            goto L1e
        L1a:
            r0 = move-exception
            r0.printStackTrace()
        L1e:
            int r0 = com.kwad.sdk.R.layout.ksad_interstitial_exit_intercept_dialog
            android.view.View r4 = r4.inflate(r0, r5)
            r3.i(r4)
            r3.initData()
            return r4
    }

    @Override
    public final void onActivityCreated(android.os.Bundle r4) {
            r3 = this;
            super.onActivityCreated(r4)
            android.app.Dialog r4 = r3.getDialog()
            android.view.Window r4 = r4.getWindow()
            if (r4 != 0) goto Le
            return
        Le:
            android.app.Dialog r0 = r3.getDialog()
            r1 = 0
            r0.setCanceledOnTouchOutside(r1)
            r0 = -1
            r4.setLayout(r0, r0)
            android.app.Dialog r4 = r3.getDialog()
            android.view.Window r4 = r4.getWindow()
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r0.<init>(r1)
            r4.setBackgroundDrawable(r0)
            r3.setCancelable(r1)
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            if (r4 == 0) goto L4c
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            r2 = 149(0x95, float:2.09E-43)
            com.kwad.sdk.core.report.j r1 = r1.ci(r2)
            r2 = 9
            com.kwad.sdk.core.report.j r1 = r1.ck(r2)
            com.kwad.sdk.core.report.a.d(r4, r0, r1)
        L4c:
            return
    }

    @Override
    public final void onClick(android.view.View r6) {
            r5 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r5.jf
            r1 = 0
            if (r0 == 0) goto L9f
            com.kwad.components.core.widget.KSCornerImageView r0 = r5.lB
            boolean r0 = r6.equals(r0)
            r2 = 2
            r3 = 9
            if (r0 == 0) goto L1f
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.components.ad.interstitial.d r0 = r6.hG
            android.content.Context r0 = r0.getContext()
            r4 = 127(0x7f, float:1.78E-43)
        L1a:
            r6.a(r0, r4, r2, r3)
            goto L9f
        L1f:
            android.widget.TextView r0 = r5.gQ
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L32
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.components.ad.interstitial.d r0 = r6.hG
            android.content.Context r0 = r0.getContext()
            r4 = 128(0x80, float:1.8E-43)
            goto L1a
        L32:
            android.widget.TextView r0 = r5.lC
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L45
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.components.ad.interstitial.d r0 = r6.hG
            android.content.Context r0 = r0.getContext()
            r4 = 129(0x81, float:1.81E-43)
            goto L1a
        L45:
            android.widget.TextView r0 = r5.lD
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L58
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.components.ad.interstitial.d r0 = r6.hG
            android.content.Context r0 = r0.getContext()
            r4 = 131(0x83, float:1.84E-43)
            goto L1a
        L58:
            android.widget.TextView r0 = r5.lE
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L72
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.mAdTemplate
            r0 = 0
            com.kwad.sdk.core.report.j r2 = new com.kwad.sdk.core.report.j
            r2.<init>()
            com.kwad.sdk.core.report.j r2 = r2.ck(r3)
            com.kwad.sdk.core.report.a.c(r6, r0, r2)
            goto L9f
        L72:
            android.widget.TextView r0 = r5.lF
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto L9f
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            r0 = -1
            com.kwad.sdk.core.video.videoview.a r2 = r6.ex
            r6.a(r1, r0, r2)
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.components.ad.interstitial.d r6 = r6.hG
            r6.dismiss()
            com.kwad.components.ad.interstitial.d.c r6 = r5.jf
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.mAdTemplate
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            r2 = 151(0x97, float:2.12E-43)
            com.kwad.sdk.core.report.j r0 = r0.ci(r2)
            com.kwad.sdk.core.report.j r0 = r0.ck(r3)
            com.kwad.sdk.core.report.a.a(r6, r0)
        L9f:
            r5.dismiss()
            com.kwad.components.ad.interstitial.f.b.lG = r1
            return
    }
}
