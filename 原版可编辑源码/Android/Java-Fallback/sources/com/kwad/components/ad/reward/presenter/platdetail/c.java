package com.kwad.components.ad.reward.presenter.platdetail;

public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.sdk.widget.c {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;


    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private void M(boolean r5) {
            r4 = this;
            if (r5 == 0) goto L5
            r5 = 85
            goto L7
        L5:
            r5 = 153(0x99, float:2.14E-43)
        L7:
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.j r5 = r0.cg(r5)
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            com.kwad.sdk.utils.ac$a r0 = r0.getTouchCoords()
            com.kwad.sdk.core.report.j r5 = r5.c(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r4.qx
            org.json.JSONObject r1 = r1.mReportExtData
            java.lang.String r2 = "native_id"
            java.lang.String r3 = "videoPlayer"
            com.kwad.components.ad.reward.i.b.a(r0, r2, r3, r5, r1)
            com.kwad.components.ad.reward.j r5 = r4.qx
            com.kwad.components.ad.reward.e.b r5 = r5.mAdOpenInteractionListener
            r5.bE()
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.platdetail.c r0, boolean r1) {
            r0.M(r1)
            return
    }

    private void b(android.view.View r2, boolean r3) {
            r1 = this;
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.content.Context r2 = r2.getContext()
            r0.<init>(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r0.P(r2)
            com.kwad.components.ad.reward.presenter.platdetail.c$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.c$1
            r0.<init>(r1, r3)
            com.kwad.components.core.e.d.a$a r2 = r2.a(r0)
            com.kwad.components.core.e.d.c r3 = r1.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            r3 = 0
            com.kwad.components.core.e.d.a$a r2 = r2.am(r3)
            r3 = 3
            com.kwad.components.core.e.d.a$a r2 = r2.ao(r3)
            com.kwad.components.core.e.d.a.a(r2)
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            com.kwad.components.core.video.DetailVideoView r1 = r2.mDetailVideoView
            r0.<init>(r1, r2)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aR(r0)
            if (r0 == 0) goto L25
            java.lang.String r0 = "#B3000000"
            goto L27
        L25:
            java.lang.String r0 = "#4D000000"
        L27:
            int r0 = android.graphics.Color.parseColor(r0)
            com.kwad.components.core.video.DetailVideoView r1 = r2.mDetailVideoView
            r1.setBackgroundColor(r0)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            r1.b(r2, r0)
        Lc:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r1.mDetailVideoView = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.video.DetailVideoView r0 = r2.mDetailVideoView
            r1 = 0
            r0.setClickListener(r1)
            return
    }
}
