package com.kwad.components.ad.reward.presenter.e;

public final class a extends com.kwad.components.ad.reward.presenter.f.d implements com.kwad.components.ad.reward.j.a {
    private boolean of;
    private com.kwad.sdk.widget.KSFrameLayout vX;
    private com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo vY;
    private com.kwad.components.core.webview.jshandler.am vZ;
    private com.kwad.components.ad.reward.e.f wa;



    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.of = r0
            com.kwad.components.ad.reward.presenter.e.a$1 r0 = new com.kwad.components.ad.reward.presenter.e.a$1
            r0.<init>(r1)
            r1.wa = r0
            return
    }

    private void U(boolean r3) {
            r2 = this;
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.vX
            com.kwad.components.ad.reward.presenter.e.a$2 r1 = new com.kwad.components.ad.reward.presenter.e.a$2
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.e.a r0) {
            r0.iN()
            return
    }

    static com.kwad.sdk.widget.KSFrameLayout b(com.kwad.components.ad.reward.presenter.e.a r0) {
            com.kwad.sdk.widget.KSFrameLayout r0 = r0.vX
            return r0
    }

    static com.kwad.components.core.webview.jshandler.am c(com.kwad.components.ad.reward.presenter.e.a r0) {
            com.kwad.components.core.webview.jshandler.am r0 = r0.vZ
            return r0
    }

    private void iN() {
            r1 = this;
            boolean r0 = r1.of
            if (r0 == 0) goto L13
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = r1.vY
            if (r0 != 0) goto L9
            goto L13
        L9:
            boolean r0 = r0.isPlayEndShow()
            if (r0 == 0) goto L13
            r0 = 1
            r1.U(r0)
        L13:
            return
    }

    private void iO() {
            r1 = this;
            boolean r0 = r1.of
            if (r0 == 0) goto L13
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = r1.vY
            if (r0 != 0) goto L9
            goto L13
        L9:
            boolean r0 = r0.isSkipShow()
            if (r0 == 0) goto L13
            r0 = 1
            r1.U(r0)
        L13:
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            super.a(r1)
            r0.vZ = r1
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = com.kwad.sdk.core.response.b.b.bP(r0)
            r2.vY = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.wa
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.a(r2)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r3.getContext()
            int r1 = com.kwad.sdk.utils.be.getScreenWidth(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            int r1 = (int) r1
            r4.width = r1
            android.content.Context r1 = r3.getContext()
            int r1 = com.kwad.sdk.utils.be.getScreenHeight(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            float r1 = r1 + r2
            int r0 = (int) r1
            r4.height = r0
            return
    }

    @Override
    public final void cc() {
            r1 = this;
            super.cc()
            r0 = 0
            r1.of = r0
            r1.U(r0)
            return
    }

    @Override
    public final boolean cd() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void eh() {
            r1 = this;
            super.eh()
            r0 = 1
            r1.of = r0
            return
    }

    public final com.kwad.components.ad.reward.page.BackPressHandleResult gA() {
            r1 = this;
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            if (r0 == 0) goto L19
            com.kwad.sdk.widget.KSFrameLayout r0 = r1.vX
            if (r0 != 0) goto L9
            goto L19
        L9:
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L16
            com.kwad.components.ad.reward.j.a.d r0 = r1.wk
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = r0.gA()
            return r0
        L16:
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED
            return r0
        L19:
            com.kwad.components.ad.reward.page.BackPressHandleResult r0 = com.kwad.components.ad.reward.page.BackPressHandleResult.NOT_HANDLED
            return r0
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            com.kwad.sdk.widget.KSFrameLayout r0 = r1.vX
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-pre-landingpage-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void iP() {
            r0 = this;
            r0.iN()
            return
    }

    @Override
    public final void iQ() {
            r0 = this;
            r0.iO()
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_pre_form_card
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r1.vX = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.wa
            r0.c(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.b(r2)
            return
    }
}
