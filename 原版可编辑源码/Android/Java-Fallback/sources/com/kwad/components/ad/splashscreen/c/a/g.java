package com.kwad.components.ad.splashscreen.c.a;

public final class g extends com.kwad.components.ad.splashscreen.c.c.a implements com.kwad.sdk.core.h.c {
    private android.widget.FrameLayout lr;
    private com.kwad.components.core.webview.jshandler.am wH;


    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.components.ad.splashscreen.h a(com.kwad.components.ad.splashscreen.c.a.g r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    private com.kwad.components.core.webview.jshandler.o a(com.kwad.sdk.core.webview.b r4) {
            r3 = this;
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            com.kwad.components.ad.splashscreen.c.a.g$1 r2 = new com.kwad.components.ad.splashscreen.c.a.g$1
            r2.<init>(r3)
            r0.<init>(r4, r1, r2)
            return r0
    }

    private void aa(int r4) {
            r3 = this;
            com.kwad.sdk.core.report.z$a r0 = new com.kwad.sdk.core.report.z$a
            r0.<init>()
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.utils.bi r1 = r1.mTimerHelper
            if (r1 == 0) goto L15
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.utils.bi r1 = r1.mTimerHelper
            long r1 = r1.getTime()
            r0.duration = r1
        L15:
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            r2 = 6
            com.kwad.sdk.core.report.j r1 = r1.cm(r2)
            com.kwad.sdk.core.report.j r0 = r1.a(r0)
            r1 = 2
            if (r4 != r1) goto L29
            r4 = 14
            goto L2a
        L29:
            r4 = 1
        L2a:
            r0.ch(r4)
            com.kwad.components.ad.splashscreen.h r4 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.b(r4, r0, r1)
            return
    }

    static com.kwad.components.ad.splashscreen.h b(com.kwad.components.ad.splashscreen.c.a.g r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    private void ly() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.splash_play_card_view
            android.view.View r0 = r0.findViewById(r1)
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            super.a(r1)
            r0.wH = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            super.a(r1, r2)
            com.kwad.components.core.webview.jshandler.o r2 = r0.a(r2)
            r1.c(r2)
            return
    }

    @Override
    public final void aK() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto L7
            r0.rD()
        L7:
            return
    }

    @Override
    public final void aL() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto L7
            r0.rE()
        L7:
            return
    }

    @Override
    public final void ah() {
            r1 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.a(r1)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            int r1 = r1.getWidth()
            float r1 = (float) r1
            int r0 = com.kwad.sdk.d.a.a.b(r0, r1)
            r3.width = r0
            android.content.Context r0 = r2.getContext()
            com.kwad.components.ad.splashscreen.h r1 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r1.mRootContainer
            int r1 = r1.getHeight()
            float r1 = (float) r1
            int r0 = com.kwad.sdk.d.a.a.b(r0, r1)
            r3.height = r0
            return
    }

    @Override
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r2) {
            r1 = this;
            super.b(r2)
            int r0 = r2.closeType
            r1.aa(r0)
            int r2 = r2.closeType
            r0 = 2
            if (r2 != r0) goto L13
            com.kwad.components.ad.splashscreen.h r2 = r1.CM
            r2.kM()
            return
        L13:
            com.kwad.components.ad.splashscreen.h r2 = r1.CM
            r2.kI()
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rC()
        Lc:
            r2.ly()
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void eh() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto Lc
            r0.rz()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rA()
        Lc:
            r2.ly()
            android.widget.FrameLayout r0 = r2.lr
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.lr
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-splash-end-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.splash_end_card_view
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.lr = r0
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            r0.rC()
        Lc:
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.b(r1)
            return
    }
}
