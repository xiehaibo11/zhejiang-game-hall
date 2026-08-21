package com.kwad.components.core.e.a;

public final class f extends com.kwad.sdk.mvp.Presenter implements com.kwad.components.core.webview.b.i, com.kwad.sdk.core.h.c {
    private com.kwad.components.core.widget.a.b IT;
    private com.kwad.components.core.e.a.a Jd;
    private com.kwad.components.core.webview.jshandler.am cG;
    private com.kwad.components.core.webview.b.h lp;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;



    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.components.core.e.a.a a(com.kwad.components.core.e.a.f r0) {
            com.kwad.components.core.e.a.a r0 = r0.Jd
            return r0
    }

    private void ak(boolean r1) {
            r0 = this;
            if (r1 != 0) goto L7
            com.kwad.components.core.e.a.a r1 = r0.Jd
            r1.mK()
        L7:
            com.kwad.components.core.e.a.f$2 r1 = new com.kwad.components.core.e.a.f$2
            r1.<init>(r0)
            com.kwad.sdk.utils.bj.runOnUiThread(r1)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.o r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.p r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.b.t r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r2) {
            r1 = this;
            r1.cG = r2
            com.kwad.components.core.e.a.a r0 = r1.Jd
            r0.cG = r2
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r2) {
            r1 = this;
            java.lang.String r2 = "InstalledActivatePresenter"
            java.lang.String r0 = "onAdClicked"
            com.kwad.sdk.core.e.c.d(r2, r0)
            r2 = 0
            r1.ak(r2)
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            java.lang.String r0 = "InstalledActivatePresenter"
            java.lang.String r1 = "onPageVisible"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto Le
            r0.rD()
        Le:
            return
    }

    @Override
    public final void aL() {
            r2 = this;
            java.lang.String r0 = "InstalledActivatePresenter"
            java.lang.String r1 = "onPageInvisible"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.webview.jshandler.am r0 = r2.cG
            if (r0 == 0) goto Le
            r0.rE()
        Le:
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            java.lang.Object r0 = r3.Gk()
            com.kwad.components.core.e.a.a r0 = (com.kwad.components.core.e.a.a) r0
            r3.Jd = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r3.mAdTemplate = r0
            com.kwad.components.core.e.a.a r0 = r3.Jd
            com.kwad.components.core.widget.a.b r0 = r0.IT
            r3.IT = r0
            com.kwad.components.core.e.a.f$1 r0 = new com.kwad.components.core.e.a.f$1
            android.content.Context r1 = r3.getContext()
            r0.<init>(r3, r1)
            r3.lp = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r2 = 0
            r0.a(r2, r1, r3)
            com.kwad.components.core.widget.a.b r0 = r3.IT
            r0.a(r3)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r5) {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r4.getContext()
            int r1 = com.kwad.sdk.d.a.a.getScreenHeight(r1)
            float r1 = (float) r1
            android.content.Context r2 = r4.getContext()
            int r2 = com.kwad.sdk.d.a.a.getScreenWidth(r2)
            float r2 = (float) r2
            float r2 = r2 / r0
            r3 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r3
            int r2 = (int) r2
            r5.width = r2
            float r1 = r1 / r0
            float r1 = r1 + r3
            int r0 = (int) r1
            r5.height = r0
            return
    }

    @Override
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            r1 = 0
            r0.ak(r1)
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            java.lang.String r0 = "InstalledActivatePresenter"
            java.lang.String r1 = "onTkLoadFailed"
            com.kwad.sdk.core.e.c.d(r0, r1)
            r0 = 1
            r2.ak(r0)
            return
    }

    @Override
    public final void eh() {
            r2 = this;
            java.lang.String r0 = "InstalledActivatePresenter"
            java.lang.String r1 = "onTkLoadSuccess"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.e.a.a r0 = r2.Jd
            r0.bt()
            return
    }

    @Override
    public final void em() {
            r0 = this;
            return
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            com.kwad.components.core.e.a.a r0 = r1.Jd
            com.kwad.components.core.e.a.g r0 = r0.IS
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            java.lang.String r1 = "ksad-installed-activate-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.core.e.a.a r0 = r1.Jd
            com.kwad.components.core.e.a.g r0 = r0.IS
            return r0
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.h r0 = r1.lp
            r0.jv()
            com.kwad.components.core.widget.a.b r0 = r1.IT
            r0.b(r1)
            return
    }
}
