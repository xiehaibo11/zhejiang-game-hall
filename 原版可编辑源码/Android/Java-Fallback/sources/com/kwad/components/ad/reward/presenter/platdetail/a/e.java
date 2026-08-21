package com.kwad.components.ad.reward.presenter.platdetail.a;

public final class e extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.h {
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private android.view.View vt;
    private android.view.View vu;
    private android.widget.ImageView vv;



    public e() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.platdetail.a.e$1 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.e$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.platdetail.a.e$2 r0 = new com.kwad.components.ad.reward.presenter.platdetail.a.e$2
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            com.kwad.components.ad.reward.presenter.platdetail.a r0 = new com.kwad.components.ad.reward.presenter.platdetail.a
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.reward.presenter.d.a r0 = new com.kwad.components.ad.reward.presenter.d.a
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.reward.presenter.f.i r0 = new com.kwad.components.ad.reward.presenter.f.i
            r0.<init>()
            r1.a(r0)
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.platdetail.a.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.platdetail.a.e r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void bQ() {
            r2 = this;
            android.view.View r0 = r2.vt
            r1 = 0
            r0.setVisibility(r1)
            android.view.View r0 = r2.vu
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    static void c(com.kwad.components.ad.reward.presenter.platdetail.a.e r0) {
            r0.bQ()
            return
    }

    private void iw() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.pl
            r1 = 8
            if (r0 != 0) goto Ld
            android.view.View r0 = r3.vu
            r0.setVisibility(r1)
        Ld:
            android.view.View r0 = r3.vt
            r2 = 0
            r0.setVisibility(r2)
            r3.getContext()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.s(r0)
            if (r0 == 0) goto L2b
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L2b
            android.widget.ImageView r0 = r3.vv
            r0.setVisibility(r1)
        L2b:
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
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L1e
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            android.view.View r0 = r2.vt
            r1 = 8
            r0.setVisibility(r1)
            android.view.View r0 = r2.vu
            goto L21
        L1e:
            android.view.View r0 = r2.vt
            r1 = 0
        L21:
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r2)
            return
    }

    @Override
    public final void bS() {
            r0 = this;
            r0.iw()
            return
    }

    @Override
    public final void bT() {
            r0 = this;
            r0.ix()
            return
    }

    public final void ix() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.pl
            r1 = 0
            r2 = 8
            if (r0 == 0) goto Lf
            android.view.View r0 = r3.vt
            r0.setVisibility(r2)
            goto L19
        Lf:
            android.view.View r0 = r3.vt
            r0.setVisibility(r2)
            android.view.View r0 = r3.vu
            r0.setVisibility(r1)
        L19:
            r3.getContext()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.components.ad.reward.j.s(r0)
            if (r0 == 0) goto L31
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L31
            android.widget.ImageView r0 = r3.vv
            r0.setVisibility(r1)
        L31:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_play_detail_top_toolbar
            android.view.View r0 = r1.findViewById(r0)
            r1.vt = r0
            int r0 = com.kwad.sdk.R.id.ksad_play_end_top_toolbar
            android.view.View r0 = r1.findViewById(r0)
            r1.vu = r0
            int r0 = com.kwad.sdk.R.id.ksad_blur_end_cover
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.vv = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            r2.iw()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r2)
            android.view.View r0 = r2.vu
            r1 = 8
            r0.setVisibility(r1)
            return
    }
}
