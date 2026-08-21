package com.kwad.components.ad.splashscreen.c.a;

public final class e extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.components.core.webview.b.e.e gt;


    public e() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.splashscreen.c.a.e$1 r0 = new com.kwad.components.ad.splashscreen.c.a.e$1
            r0.<init>(r1)
            r1.gt = r0
            return
    }

    static com.kwad.components.ad.splashscreen.h a(com.kwad.components.ad.splashscreen.c.a.e r0) {
            com.kwad.components.ad.splashscreen.h r0 = r0.CM
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            return
    }
}
