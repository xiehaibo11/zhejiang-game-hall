package com.kwad.components.ad.reward.presenter.d.a;

public final class a extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.k.a.b {
    private com.kwad.sdk.core.webview.d.a.a cH;
    private android.widget.FrameLayout cQ;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private com.kwad.components.core.video.l mVideoPlayStateListener;
    private com.kwad.components.core.video.l sr;
    private com.kwad.components.core.video.l ss;
    private volatile long vy;
    private volatile boolean vz;






    public a() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.vy = r0
            r0 = 0
            r2.vz = r0
            com.kwad.components.ad.reward.presenter.d.a.a$1 r0 = new com.kwad.components.ad.reward.presenter.d.a.a$1
            r0.<init>(r2)
            r2.ss = r0
            com.kwad.components.ad.reward.presenter.d.a.a$2 r0 = new com.kwad.components.ad.reward.presenter.d.a.a$2
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.reward.presenter.d.a.a$4 r0 = new com.kwad.components.ad.reward.presenter.d.a.a$4
            r0.<init>(r2)
            r2.mPlayEndPageListener = r0
            com.kwad.components.ad.reward.presenter.d.a.a$5 r0 = new com.kwad.components.ad.reward.presenter.d.a.a$5
            r0.<init>(r2)
            r2.cH = r0
            return
    }

    static long a(com.kwad.components.ad.reward.presenter.d.a.a r0, long r1) {
            r0.vy = r1
            return r1
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.d.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static boolean a(com.kwad.components.ad.reward.presenter.d.a.a r0, boolean r1) {
            r0.vz = r1
            return r1
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.d.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j c(com.kwad.components.ad.reward.presenter.d.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.d.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.reward.presenter.d.a.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            r0 = 0
            r4.vy = r0
            r0 = 0
            r4.vz = r0
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r4.qx
            com.kwad.components.ad.k.a r1 = r1.pa
            com.kwad.components.ad.reward.j r2 = r4.qx
            com.kwad.components.ad.reward.l.d r2 = r2.oV
            boolean r2 = r2.jR()
            if (r2 == 0) goto L1f
            com.kwad.components.core.video.l r2 = r4.ss
            goto L21
        L1f:
            com.kwad.components.core.video.l r2 = r4.mVideoPlayStateListener
        L21:
            r4.sr = r2
            if (r1 == 0) goto L5f
            com.kwad.components.ad.reward.j r2 = r4.qx
            r3 = 1
            r2.pu = r3
            r1.a(r4)
            com.kwad.sdk.core.webview.d.a.a r2 = r4.cH
            r1.a(r2)
            android.widget.FrameLayout r2 = r4.cQ
            com.kwad.components.ad.reward.j r3 = r4.qx
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r3.mRootContainer
            r1.a(r2, r3, r0)
            com.kwad.components.ad.reward.presenter.d.a.a$3 r0 = new com.kwad.components.ad.reward.presenter.d.a.a$3
            r0.<init>(r4)
            r1.a(r0)
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.app.Activity r0 = r0.getActivity()
            r1.setActivity(r0)
            r1.aw()
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.e.f r1 = r4.mPlayEndPageListener
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r4.sr
            r0.a(r1)
        L5f:
            return
    }

    @Override
    public final void iA() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.components.ad.reward.presenter.e.u(r0)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_landing_page_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.cQ = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.e.f r1 = r2.mPlayEndPageListener
            r0.c(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.sr
            r0.b(r1)
            return
    }
}
