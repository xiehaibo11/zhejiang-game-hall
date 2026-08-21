package com.kwad.components.ad.reward.presenter.platdetail.a;

public final class b extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener {
    private android.widget.TextView gB;
    private long gD;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.video.l mVideoPlayStateListener;




    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.platdetail.a.b$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.b$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.b$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.b$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.platdetail.a.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void a(com.kwad.components.ad.reward.presenter.platdetail.a.b r0, long r1) {
            r0.f(r1)
            return
    }

    static void b(com.kwad.components.ad.reward.presenter.platdetail.a.b r0) {
            r0.bU()
            return
    }

    private void bU() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            long r0 = com.kwad.sdk.core.response.b.c.bS(r0)
            r2.gD = r0
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
            android.widget.TextView r0 = r3.gB
            com.kwad.components.ad.reward.presenter.platdetail.a.b$3 r1 = new com.kwad.components.ad.reward.presenter.platdetail.a.b$3
            r1.<init>(r3)
            r0.post(r1)
            return
    }

    private void bW() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.lang.String r1 = "native_id"
            r0.G(r1)
            return
    }

    static void c(com.kwad.components.ad.reward.presenter.platdetail.a.b r0) {
            r0.bW()
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

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            r2.bU()
            return
    }

    @Override
    public final void onClick(android.view.View r9) {
            r8 = this;
            android.widget.TextView r0 = r8.gB
            if (r9 != r0) goto L19
            com.kwad.components.ad.reward.j r1 = r8.qx
            r2 = 1
            android.content.Context r3 = r9.getContext()
            r4 = 40
            r5 = 1
            com.kwad.components.ad.reward.j r9 = r8.qx
            com.kwad.components.ad.reward.l.d r9 = r9.oV
            long r6 = r9.getPlayDuration()
            r1.a(r2, r3, r4, r5, r6)
        L19:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_detail_call_btn
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.gB = r0
            java.lang.String r1 = "topBarCallLabel"
            r0.setContentDescription(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            android.widget.TextView r0 = r2.gB
            r1 = 8
            r0.setVisibility(r1)
            return
    }
}
