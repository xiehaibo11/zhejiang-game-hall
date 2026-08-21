package com.kwad.components.ad.fullscreen.c.a;

public final class d extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener {
    private android.widget.ImageView gK;
    private android.widget.TextView gL;
    private android.view.View gM;
    private com.kwad.components.ad.reward.e.e gN;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.video.l mVideoPlayStateListener;





    public d() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.gM = r0
            com.kwad.components.ad.fullscreen.c.a.d$1 r0 = new com.kwad.components.ad.fullscreen.c.a.d$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.fullscreen.c.a.d$2 r0 = new com.kwad.components.ad.fullscreen.c.a.d$2
            r0.<init>(r1)
            r1.gN = r0
            com.kwad.components.ad.fullscreen.c.a.d$3 r0 = new com.kwad.components.ad.fullscreen.c.a.d$3
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.fullscreen.c.a.d r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void b(com.kwad.components.ad.fullscreen.c.a.d r0) {
            r0.bU()
            return
    }

    private void bU() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.Set<com.kwad.components.ad.reward.e.e> r0 = r0.pf
            com.kwad.components.ad.reward.e.e r1 = r2.gN
            r0.add(r1)
            return
    }

    private void bX() {
            r2 = this;
            android.view.View r0 = r2.gM
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L9
            return
        L9:
            android.view.View r0 = r2.gM
            r1 = 0
            r0.setAlpha(r1)
            android.view.View r0 = r2.gM
            r1 = 0
            r0.setVisibility(r1)
            r0 = 2
            float[] r0 = new float[r0]
            r0 = {x0030: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            com.kwad.components.ad.fullscreen.c.a.d$4 r1 = new com.kwad.components.ad.fullscreen.c.a.d$4
            r1.<init>(r2)
            r0.addUpdateListener(r1)
            r0.start()
            android.view.View r0 = r2.gM
            r0.setOnClickListener(r2)
            return
    }

    static void c(com.kwad.components.ad.fullscreen.c.a.d r0) {
            r0.bX()
            return
    }

    static android.view.View d(com.kwad.components.ad.fullscreen.c.a.d r0) {
            android.view.View r0 = r0.gM
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.c(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            r2.bU()
            return
    }

    public final void f(long r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            long r0 = com.kwad.sdk.core.response.b.a.ad(r0)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 < 0) goto L11
            r2.bX()
        L11:
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.view.View r0 = r1.gM
            if (r2 != r0) goto La
            com.kwad.components.ad.reward.j r2 = r1.qx
            r0 = 0
            com.kwad.components.ad.reward.presenter.e.a(r2, r0)
        La:
            return
    }

    @Override
    public final void onCreate() {
            r3 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_skip_icon
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.gK = r0
            int r0 = com.kwad.sdk.R.id.ksad_top_toolbar_close_tip
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.gL = r0
            java.lang.String r0 = com.kwad.components.ad.fullscreen.a.b.bG()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 8
            if (r0 != 0) goto L36
            android.widget.TextView r0 = r3.gL
            java.lang.String r2 = com.kwad.components.ad.fullscreen.a.b.bG()
            r0.setText(r2)
            android.widget.ImageView r0 = r3.gK
            r0.setVisibility(r1)
            android.widget.TextView r0 = r3.gL
        L33:
            r3.gM = r0
            return
        L36:
            int r0 = com.kwad.components.ad.fullscreen.a.b.bF()
            if (r0 != 0) goto L41
            android.widget.ImageView r0 = r3.gK
            int r2 = com.kwad.sdk.R.drawable.ksad_page_close
            goto L45
        L41:
            android.widget.ImageView r0 = r3.gK
            int r2 = com.kwad.sdk.R.drawable.ksad_video_skip_icon
        L45:
            r0.setImageResource(r2)
            android.widget.TextView r0 = r3.gL
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r3.gK
            goto L33
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.Set<com.kwad.components.ad.reward.e.e> r0 = r0.pf
            com.kwad.components.ad.reward.e.e r1 = r2.gN
            r0.remove(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            return
    }
}
