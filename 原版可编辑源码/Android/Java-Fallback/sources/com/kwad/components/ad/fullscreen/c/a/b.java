package com.kwad.components.ad.fullscreen.c.a;

public final class b extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener {
    private android.widget.TextView gB;
    private java.lang.String gC;
    private long gD;
    private boolean gE;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.video.l mVideoPlayStateListener;




    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.gE = r0
            com.kwad.components.ad.fullscreen.c.a.b$1 r0 = new com.kwad.components.ad.fullscreen.c.a.b$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.fullscreen.c.a.b$2 r0 = new com.kwad.components.ad.fullscreen.c.a.b$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.fullscreen.c.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void a(com.kwad.components.ad.fullscreen.c.a.b r0, long r1) {
            r0.f(r1)
            return
    }

    static void b(com.kwad.components.ad.fullscreen.c.a.b r0) {
            r0.bU()
            return
    }

    private void bU() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            long r0 = com.kwad.sdk.core.response.b.c.bS(r0)
            r2.gD = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.c.bT(r0)
            r2.gC = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            return
        L1b:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    private void bV() {
            r3 = this;
            android.widget.TextView r0 = r3.gB
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L9
            return
        L9:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            java.lang.String r0 = com.kwad.sdk.core.response.b.c.bT(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L32
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildNormalApmReporter()
            java.lang.String r1 = "response_biz_error_element_pv"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.dx(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.aK(r1)
            r1 = 0
            java.lang.String r2 = "ELEMENT_PLAY_DETAIL_CALL_IMPRESSION"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.W(r2, r1)
            r0.report()
            return
        L32:
            android.widget.TextView r1 = r3.gB
            r1.setText(r0)
            android.widget.TextView r0 = r3.gB
            r1 = 0
            r0.setVisibility(r1)
            android.widget.TextView r0 = r3.gB
            r0.setOnClickListener(r3)
            r3.bW()
            return
    }

    private void bW() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r3.qx
            org.json.JSONObject r1 = r1.mReportExtData
            r2 = 18
            com.kwad.sdk.core.report.a.b(r0, r2, r1)
            return
    }

    static void c(com.kwad.components.ad.fullscreen.c.a.b r0) {
            r0.notifyAdClick()
            return
    }

    private void f(long r3) {
            r2 = this;
            long r0 = r2.gD
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 < 0) goto L9
            r2.bV()
        L9:
            return
    }

    private void notifyAdClick() {
            r3 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            com.kwad.sdk.core.report.j r0 = r0.c(r1)
            r1 = 40
            com.kwad.sdk.core.report.j r0 = r0.cg(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.ad.reward.j r2 = r3.qx
            org.json.JSONObject r2 = r2.mReportExtData
            com.kwad.sdk.core.report.a.a(r1, r0, r2)
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r0.bE()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            r2.gE = r0
            if (r0 == 0) goto L17
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L17:
            r2.bU()
            return
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.widget.TextView r0 = r2.gB
            if (r3 != r0) goto L43
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r3.getContext()
            r0.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r0.P(r3)
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r0)
            r0 = 40
            com.kwad.components.core.e.d.a$a r3 = r3.an(r0)
            r0 = 1
            com.kwad.components.core.e.d.a$a r3 = r3.am(r0)
            r1 = 0
            com.kwad.components.core.e.d.a$a r3 = r3.am(r1)
            com.kwad.components.ad.reward.j r1 = r2.qx
            java.lang.String r1 = r1.fP()
            com.kwad.components.core.e.d.a$a r3 = r3.al(r1)
            com.kwad.components.core.e.d.a$a r3 = r3.ao(r0)
            com.kwad.components.ad.fullscreen.c.a.b$3 r0 = new com.kwad.components.ad.fullscreen.c.a.b$3
            r0.<init>(r2)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r0)
            com.kwad.components.core.e.d.a.a(r3)
        L43:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_detail_call_btn
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.gB = r0
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 0
            r1.gB = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            java.lang.String r0 = r2.gC
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
        L14:
            boolean r0 = r2.gE
            if (r0 == 0) goto L21
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
        L21:
            return
    }
}
