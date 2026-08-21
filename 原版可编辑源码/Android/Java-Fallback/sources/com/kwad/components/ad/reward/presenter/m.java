package com.kwad.components.ad.reward.presenter;

public final class m extends com.kwad.components.ad.reward.presenter.a {
    private final com.kwad.components.ad.reward.e.k gd;
    private com.kwad.components.core.video.l mVideoPlayStateListener;




    public m() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.m$2 r0 = new com.kwad.components.ad.reward.presenter.m$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            com.kwad.components.ad.reward.presenter.m$3 r0 = new com.kwad.components.ad.reward.presenter.m$3
            r0.<init>(r1)
            r1.gd = r0
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.m r0) {
            r0.hE()
            return
    }

    private void hE() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r3.qx
            boolean r1 = r1.po
            boolean r0 = com.kwad.components.core.t.h.d(r0, r1)
            if (r0 == 0) goto L19
            com.kwad.components.ad.reward.j r0 = r3.qx
            android.content.Context r0 = r0.mContext
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.core.t.h.f(r0, r1)
        L19:
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = com.kwad.components.ad.reward.presenter.h.A(r0)
            if (r0 != 0) goto L36
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r3.qx
            boolean r1 = r1.po
            boolean r0 = com.kwad.components.core.t.h.d(r0, r1)
            if (r0 == 0) goto L30
            goto L36
        L30:
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.fR()
            return
        L36:
            com.kwad.components.ad.reward.presenter.m$1 r0 = new com.kwad.components.ad.reward.presenter.m$1
            r0.<init>(r3)
            r1 = 200(0xc8, double:9.9E-322)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.components.ad.reward.d r0 = com.kwad.components.ad.reward.d.fw()
            com.kwad.components.ad.reward.e.k r1 = r2.gd
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            com.kwad.components.ad.reward.d r0 = com.kwad.components.ad.reward.d.fw()
            com.kwad.components.ad.reward.e.k r1 = r2.gd
            r0.b(r1)
            return
    }
}
