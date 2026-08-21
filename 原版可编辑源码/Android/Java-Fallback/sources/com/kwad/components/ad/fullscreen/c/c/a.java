package com.kwad.components.ad.fullscreen.c.c;

public final class a extends com.kwad.components.ad.reward.presenter.f.d implements com.kwad.components.ad.reward.e.h {
    private android.widget.FrameLayout hi;
    private final com.kwad.components.ad.reward.e.f mPlayEndPageListener;


    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.c.a$1 r0 = new com.kwad.components.ad.fullscreen.c.c.a$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.fullscreen.c.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.widget.FrameLayout b(com.kwad.components.ad.fullscreen.c.c.a r0) {
            android.widget.FrameLayout r0 = r0.hi
            return r0
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
            boolean r0 = r2.cd()
            if (r0 != 0) goto La
            return
        La:
            android.widget.FrameLayout r0 = r2.hi
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r2)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.jshandler.t.a r3) {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            float r0 = com.kwad.sdk.d.a.a.aH(r0)
            android.content.Context r1 = r2.getContext()
            int r1 = com.kwad.sdk.d.a.a.getScreenWidth(r1)
            float r1 = (float) r1
            float r1 = r1 / r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            r3.width = r0
            r0 = 44
            r3.height = r0
            return
    }

    @Override
    public final void bS() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pl
            if (r0 == 0) goto Ld
            android.widget.FrameLayout r0 = r2.hi
            r1 = 8
            r0.setVisibility(r1)
        Ld:
            return
    }

    @Override
    public final void bT() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.reward.j r1 = r2.qx
            boolean r1 = r1.pl
            if (r1 == 0) goto L1a
            boolean r0 = com.kwad.sdk.core.response.b.a.am(r0)
            if (r0 != 0) goto L1a
            android.widget.FrameLayout r0 = r2.hi
            r1 = 0
            r0.setVisibility(r1)
        L1a:
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            super.cc()
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 0
            r0.pl = r1
            android.widget.FrameLayout r0 = r2.hi
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final boolean cd() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            if (r0 == 0) goto L14
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 != 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.hi
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-video-top-bar"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_top
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.hi = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            boolean r0 = r2.cd()
            if (r0 != 0) goto La
            return
        La:
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r2)
            return
    }
}
