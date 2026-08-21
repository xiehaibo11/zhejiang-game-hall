package com.kwad.components.ad.reward.presenter.d.b;

public final class a extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener, com.kwad.components.ad.reward.presenter.d.b.c {
    private com.kwad.components.core.webview.b.e.e gt;
    private android.widget.TextView vK;
    private android.widget.TextView vL;



    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.d.b.a$1 r0 = new com.kwad.components.ad.reward.presenter.d.b.a$1
            r0.<init>(r1)
            r1.gt = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.d.b.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void b(com.kwad.components.ad.reward.presenter.d.b.a r0) {
            return
    }

    private void bW() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r3.qx
            org.json.JSONObject r1 = r1.mReportExtData
            r2 = 17
            com.kwad.sdk.core.report.a.b(r0, r2, r1)
            return
    }

    static void c(com.kwad.components.ad.reward.presenter.d.b.a r0) {
            r0.iI()
            return
    }

    static void d(com.kwad.components.ad.reward.presenter.d.b.a r0) {
            r0.notifyAdClick()
            return
    }

    private void iH() {
            r5 = this;
            com.kwad.components.ad.reward.j r0 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.c.bU(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L2d
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildNormalApmReporter()
            java.lang.String r1 = "response_biz_error_element_pv"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.dx(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.aK(r1)
            r1 = 0
            java.lang.String r2 = "ELEMENT_PLAY_END_CALL_IMPRESSION"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.W(r2, r1)
            r0.report()
            return
        L2d:
            com.kwad.components.ad.reward.j r1 = r5.qx
            int r1 = r1.mScreenOrientation
            r2 = 1
            r3 = 0
            r4 = 8
            if (r1 != r2) goto L49
            android.widget.TextView r1 = r5.vL
            r1.setVisibility(r4)
            android.widget.TextView r1 = r5.vK
            r1.setText(r0)
            android.widget.TextView r0 = r5.vK
            r0.setVisibility(r3)
            android.widget.TextView r0 = r5.vK
            goto L5a
        L49:
            android.widget.TextView r1 = r5.vK
            r1.setVisibility(r4)
            android.widget.TextView r1 = r5.vL
            r1.setText(r0)
            android.widget.TextView r0 = r5.vL
            r0.setVisibility(r3)
            android.widget.TextView r0 = r5.vL
        L5a:
            r0.setOnClickListener(r5)
            r5.bW()
            return
    }

    private void iI() {
            r5 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            r1 = 39
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.components.ad.reward.j r1 = r5.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.reward.j r2 = r5.qx
            org.json.JSONObject r2 = r2.mReportExtData
            java.lang.String r3 = "native_id"
            java.lang.String r4 = "endTopBar"
            com.kwad.components.ad.reward.i.b.a(r1, r3, r4, r0, r2)
            return
    }

    private void notifyAdClick() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L14
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
        L14:
            return
    }

    @Override
    public final void iJ() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = r0.pu
            if (r0 == 0) goto L7
            return
        L7:
            r1.iH()
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.widget.TextView r0 = r1.vK
            if (r2 == r0) goto L8
            android.widget.TextView r0 = r1.vL
            if (r2 != r0) goto L37
        L8:
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r2 = r2.getContext()
            r0.<init>(r2)
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r0.P(r2)
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r0)
            r0 = 0
            com.kwad.components.core.e.d.a$a r2 = r2.am(r0)
            r0 = 1
            com.kwad.components.core.e.d.a$a r2 = r2.ao(r0)
            com.kwad.components.ad.reward.presenter.d.b.a$2 r0 = new com.kwad.components.ad.reward.presenter.d.b.a$2
            r0.<init>(r1)
            com.kwad.components.core.e.d.a$a r2 = r2.a(r0)
            com.kwad.components.core.e.d.a.a(r2)
        L37:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_end_left_call_btn
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.vK = r0
            int r0 = com.kwad.sdk.R.id.ksad_end_right_call_btn
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.vL = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            android.widget.TextView r0 = r2.vK
            r1 = 8
            r0.setVisibility(r1)
            android.widget.TextView r0 = r2.vL
            r0.setVisibility(r1)
            return
    }
}
