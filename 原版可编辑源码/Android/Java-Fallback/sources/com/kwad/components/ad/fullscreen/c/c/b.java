package com.kwad.components.ad.fullscreen.c.c;

public final class b extends com.kwad.components.ad.reward.presenter.f.a {
    private com.kwad.sdk.core.g.d dO;
    private android.os.Vibrator dP;
    private android.widget.FrameLayout hk;
    private android.widget.ImageView hl;
    private com.kwad.components.ad.reward.e.h hm;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;






    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.c.b$1 r0 = new com.kwad.components.ad.fullscreen.c.c.b$1
            r0.<init>(r1)
            r1.hm = r0
            com.kwad.components.ad.fullscreen.c.c.b$2 r0 = new com.kwad.components.ad.fullscreen.c.c.b$2
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            return
    }

    static android.widget.FrameLayout a(com.kwad.components.ad.fullscreen.c.c.b r0) {
            android.widget.FrameLayout r0 = r0.hk
            return r0
    }

    static com.kwad.sdk.core.g.d b(com.kwad.components.ad.fullscreen.c.c.b r0) {
            com.kwad.sdk.core.g.d r0 = r0.dO
            return r0
    }

    private void bs() {
            r3 = this;
            com.kwad.sdk.core.g.d r0 = r3.dO
            if (r0 == 0) goto L5
            return
        L5:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            float r0 = com.kwad.sdk.core.response.b.b.ds(r0)
            com.kwad.sdk.core.g.d r1 = new com.kwad.sdk.core.g.d
            r1.<init>(r0)
            r3.dO = r1
            com.kwad.components.ad.fullscreen.c.c.b$3 r2 = new com.kwad.components.ad.fullscreen.c.c.b$3
            r2.<init>(r3)
            r1.a(r2)
            com.kwad.sdk.core.g.d r1 = r3.dO
            r1.e(r0)
            com.kwad.sdk.core.g.d r0 = r3.dO
            android.content.Context r1 = r3.getContext()
            r0.bg(r1)
            android.content.Context r0 = r3.getContext()
            if (r0 == 0) goto L42
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "vibrator"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.Vibrator r0 = (android.os.Vibrator) r0
            r3.dP = r0
        L42:
            return
    }

    static android.content.Context c(com.kwad.components.ad.fullscreen.c.c.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void ce() {
            r4 = this;
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.I(r0)
            com.kwad.components.ad.fullscreen.c.c.b$5 r1 = new com.kwad.components.ad.fullscreen.c.c.b$5
            r1.<init>(r4, r0)
            r2 = 1000(0x3e8, double:4.94E-321)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r1, r2)
            return
    }

    static android.widget.ImageView d(com.kwad.components.ad.fullscreen.c.c.b r0) {
            android.widget.ImageView r0 = r0.hl
            return r0
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.fullscreen.c.c.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.fullscreen.c.c.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context g(com.kwad.components.ad.fullscreen.c.c.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.fullscreen.c.c.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.content.Context i(com.kwad.components.ad.fullscreen.c.c.b r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.os.Vibrator j(com.kwad.components.ad.fullscreen.c.c.b r0) {
            android.os.Vibrator r0 = r0.dP
            return r0
    }

    static void k(com.kwad.components.ad.fullscreen.c.c.b r0) {
            r0.bs()
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.core.webview.jshandler.ao r3 = new com.kwad.components.core.webview.jshandler.ao
            com.kwad.components.ad.fullscreen.c.c.b$4 r0 = new com.kwad.components.ad.fullscreen.c.c.b$4
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 1
            r0.pk = r1
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            com.kwad.components.ad.reward.e.h r1 = r2.hm
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            r2.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L26
            android.widget.ImageView r0 = r2.hl
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_XY
            goto L2a
        L26:
            android.widget.ImageView r0 = r2.hl
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_CENTER
        L2a:
            r0.setScaleType(r1)
            r2.ce()
            return
    }

    @Override
    public final void cc() {
            r2 = this;
            super.cc()
            android.widget.FrameLayout r0 = r2.hk
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.hl
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r1 = 0
            r0.pk = r1
            return
    }

    @Override
    public final android.widget.FrameLayout getTKContainer() {
            r1 = this;
            android.widget.FrameLayout r0 = r1.hk
            return r0
    }

    @Override
    public final java.lang.String getTkTemplateId() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            java.lang.String r1 = "ksad-fullscreen-video-card"
            java.lang.String r0 = com.kwad.components.core.webview.b.j.b(r1, r0)
            return r0
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_js_full_card
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.hk = r0
            int r0 = com.kwad.sdk.R.id.ksad_tk_bg_view
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.hl = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            com.kwad.components.ad.reward.e.h r1 = r2.hm
            r0.b(r1)
            return
    }
}
