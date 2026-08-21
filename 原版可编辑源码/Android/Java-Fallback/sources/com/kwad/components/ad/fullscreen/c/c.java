package com.kwad.components.ad.fullscreen.c;

public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.h {
    private android.view.View gr;
    private android.view.View gs;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;



    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.c$1 r0 = new com.kwad.components.ad.fullscreen.c.c$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.fullscreen.c.c$2 r0 = new com.kwad.components.ad.fullscreen.c.c$2
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            com.kwad.components.ad.fullscreen.c.a.e r0 = new com.kwad.components.ad.fullscreen.c.a.e
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.fullscreen.c.b.a r0 = new com.kwad.components.ad.fullscreen.c.b.a
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.fullscreen.c.c.a r0 = new com.kwad.components.ad.fullscreen.c.c.a
            r0.<init>()
            r1.a(r0)
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.fullscreen.c.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void a(com.kwad.components.ad.fullscreen.c.c r0, boolean r1) {
            r1 = 0
            r0.i(r1)
            return
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.fullscreen.c.c r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void bQ() {
            r2 = this;
            android.view.View r0 = r2.gr
            r1 = 0
            r0.setVisibility(r1)
            android.view.View r0 = r2.gs
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    private void bR() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pl
            if (r0 != 0) goto L19
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pk
            if (r0 != 0) goto L19
            android.view.View r0 = r2.gr
            r1 = 0
            r0.setVisibility(r1)
            android.view.View r0 = r2.gs
            r1 = 8
            r0.setVisibility(r1)
        L19:
            return
    }

    static void c(com.kwad.components.ad.fullscreen.c.c r0) {
            r0.bQ()
            return
    }

    private void i(boolean r3) {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pl
            r1 = 8
            if (r0 != 0) goto Le
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pk
            if (r0 == 0) goto L1b
        Le:
            if (r3 != 0) goto L1b
            android.view.View r3 = r2.gr
            r3.setVisibility(r1)
            android.view.View r3 = r2.gs
            r3.setVisibility(r1)
            return
        L1b:
            android.view.View r3 = r2.gr
            r3.setVisibility(r1)
            android.view.View r3 = r2.gs
            r0 = 0
            r3.setVisibility(r0)
            return
    }

    @Override
    public final void a(com.kwad.components.core.playable.PlayableSource r1, com.kwad.components.ad.reward.e.l r2) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            if (r0 != 0) goto L29
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.a(r0)
            if (r0 == 0) goto L22
            goto L29
        L22:
            android.view.View r0 = r2.gr
            r1 = 0
        L25:
            r0.setVisibility(r1)
            return
        L29:
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            android.view.View r0 = r2.gr
            r1 = 8
            r0.setVisibility(r1)
            android.view.View r0 = r2.gs
            goto L25
    }

    @Override
    public final void bS() {
            r2 = this;
            r2.bR()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pk
            if (r0 == 0) goto L18
            android.view.View r0 = r2.gs
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L18
            android.view.View r0 = r2.gs
            r1 = 8
            r0.setVisibility(r1)
        L18:
            return
    }

    @Override
    public final void bT() {
            r1 = this;
            r0 = 1
            r1.i(r0)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_play_detail_top_toolbar
            android.view.View r0 = r1.findViewById(r0)
            r1.gr = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_end_top_toolbar
            android.view.View r0 = r1.findViewById(r0)
            r1.gs = r0
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
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r2)
            return
    }
}
