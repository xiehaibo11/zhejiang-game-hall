package com.kwad.components.ad.splashscreen.c.b;

public final class a extends com.kwad.components.ad.splashscreen.c.c.a implements com.kwad.components.ad.splashscreen.g, com.kwad.sdk.core.h.c {
    private com.kwad.components.core.webview.b.a.m ED;
    com.kwad.components.ad.splashscreen.f Ey;
    private android.widget.FrameLayout lr;
    private com.kwad.components.core.webview.jshandler.am wH;



    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.splashscreen.c.b.a$2 r0 = new com.kwad.components.ad.splashscreen.c.b.a$2
            r0.<init>(r1)
            r1.Ey = r0
            return
    }

    static com.kwad.components.ad.splashscreen.h a(com.kwad.components.ad.splashscreen.c.b.a r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    private com.kwad.components.core.webview.jshandler.o a(com.kwad.sdk.core.webview.b r4) {
            r3 = this;
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.components.core.e.d.c r1 = r1.mApkDownloadHelper
            com.kwad.components.ad.splashscreen.c.b.a$1 r2 = new com.kwad.components.ad.splashscreen.c.b.a$1
            r2.<init>(r3)
            r0.<init>(r4, r1, r2)
            return r0
    }

    static com.kwad.components.ad.splashscreen.h b(com.kwad.components.ad.splashscreen.c.b.a r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    static android.widget.FrameLayout c(com.kwad.components.ad.splashscreen.c.b.a r0) {
            android.widget.FrameLayout r0 = r0.lr
            return r0
    }

    private com.kwad.components.core.webview.b.a.m lz() {
            r1 = this;
            com.kwad.components.core.webview.b.a.m r0 = new com.kwad.components.core.webview.b.a.m
            r0.<init>()
            r1.ED = r0
            return r0
    }

    @Override
    public final void X(int r2) {
            r1 = this;
            com.kwad.components.core.webview.b.a.m r0 = r1.ED
            if (r0 == 0) goto L7
            r0.aP(r2)
        L7:
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
            com.kwad.components.core.webview.b.a.m r2 = r0.lz()
            r1.c(r2)
            return
    }

    @Override
    public final void aK() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            boolean r0 = r0.Cj
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto Le
            r0.rD()
        Le:
            return
    }

    @Override
    public final void aL() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            boolean r0 = r0.Cj
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto Le
            r0.rE()
        Le:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.a(r2)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            r0.a(r2)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.f r1 = r2.Ey
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
    public final void cc() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rC()
        Lc:
            android.widget.FrameLayout r0 = r2.lr
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void eh() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            boolean r0 = r0.Cj
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto L13
            r0.rz()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rA()
        L13:
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
            java.lang.String r1 = "ksad-splash-play-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void kD() {
            r0 = this;
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.splash_tk_play_card_view
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.lr = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rC()
        Lc:
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.b(r2)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.f r1 = r2.Ey
            r0.b(r1)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            r0.b(r2)
            return
    }
}
