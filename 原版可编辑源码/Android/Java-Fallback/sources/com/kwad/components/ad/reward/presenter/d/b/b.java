package com.kwad.components.ad.reward.presenter.d.b;

public final class b extends com.kwad.components.ad.reward.presenter.a implements android.view.View.OnClickListener, com.kwad.components.ad.reward.presenter.d.b.c {
    private com.kwad.components.core.webview.b.e.e gt;
    private android.view.View vN;
    private boolean vO;
    private final java.lang.Runnable vP;



    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.d.b.b$1 r0 = new com.kwad.components.ad.reward.presenter.d.b.b$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.reward.presenter.d.b.b$2 r0 = new com.kwad.components.ad.reward.presenter.d.b.b$2
            r0.<init>(r1)
            r1.vP = r0
            return
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.d.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void b(com.kwad.components.ad.reward.presenter.d.b.b r0) {
            return
    }

    static void c(com.kwad.components.ad.reward.presenter.d.b.b r0) {
            r0.iK()
            return
    }

    private void iK() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showPageCloseBtn mPlayEndH5ShowSuccess: "
            r0.<init>(r1)
            com.kwad.components.ad.reward.j r1 = r3.qx
            boolean r1 = r1.pL
            r0.append(r1)
            java.lang.String r1 = ", needHideCloseButton: "
            r0.append(r1)
            boolean r1 = r3.vO
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RewardPlayEndCloseBtn"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.pL
            if (r0 == 0) goto L2c
            boolean r0 = r3.vO
            if (r0 == 0) goto L2c
            return
        L2c:
            android.view.View r0 = r3.vN
            r1 = 0
            r0.setVisibility(r1)
            android.view.View r0 = r3.vN
            r1 = 0
            r0.setAlpha(r1)
            android.view.View r0 = r3.vN
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r1 = 1065353216(0x3f800000, float:1.0)
            android.view.ViewPropertyAnimator r0 = r0.alpha(r1)
            r1 = 500(0x1f4, double:2.47E-321)
            android.view.ViewPropertyAnimator r0 = r0.setDuration(r1)
            r0.start()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.dA(r0)
            r2.vO = r0
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L22
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
        L22:
            return
    }

    @Override
    public final void iJ() {
            r4 = this;
            com.kwad.components.ad.reward.j r0 = r4.qx
            boolean r0 = r0.pu
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.components.ad.reward.j r0 = r4.qx
            long r0 = r0.pE
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L17
            java.lang.Runnable r0 = r4.vP
            r0.run()
            return
        L17:
            java.lang.Runnable r2 = r4.vP
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r2, r0)
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.view.View r0 = r1.vN
            if (r2 != r0) goto L39
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.core.playable.PlayableSource r2 = r2.fW()
            if (r2 == 0) goto L34
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_NOT_AUTO
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L2c
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.PENDANT_CLICK_AUTO
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L2c
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.PENDANT_AUTO
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L2c
            com.kwad.components.core.playable.PlayableSource r0 = com.kwad.components.core.playable.PlayableSource.ACTIONBAR_CLICK
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L34
        L2c:
            com.kwad.components.ad.reward.b r2 = com.kwad.components.ad.reward.b.fp()
            r2.fq()
            return
        L34:
            com.kwad.components.ad.reward.j r2 = r1.qx
            com.kwad.components.ad.reward.presenter.e.w(r2)
        L39:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_end_close_btn
            android.view.View r0 = r1.findViewById(r0)
            r1.vN = r0
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            android.view.View r0 = r2.vN
            r1 = 8
            r0.setVisibility(r1)
            java.lang.Runnable r0 = r2.vP
            com.kwad.sdk.utils.bj.b(r0)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            return
    }
}
