package com.kwad.components.ad.splashscreen.c.c;

public abstract class a extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.components.core.webview.b.i {
    private com.kwad.components.core.webview.b.h lp;

    public a() {
            r0 = this;
            r0.<init>()
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

    public void a(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            return
    }

    public void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            return
    }

    @Override
    public void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.core.webview.b.h r0 = r3.lp
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r2 = 0
            r0.a(r2, r1, r3)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            return
    }

    public void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            return
    }

    @Override
    public final void em() {
            r0 = this;
            return
    }

    @Override
    public com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            return r0
    }

    @Override
    public void onCreate() {
            r3 = this;
            super.onCreate()
            com.kwad.components.core.webview.b.h r0 = new com.kwad.components.core.webview.b.h
            android.content.Context r1 = r3.getContext()
            r2 = 1000(0x3e8, float:1.401E-42)
            r0.<init>(r1, r2)
            r3.lp = r0
            return
    }

    @Override
    public void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.h r0 = r1.lp
            r0.jv()
            return
    }
}
