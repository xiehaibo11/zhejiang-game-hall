package com.kwad.components.ad.reward.presenter;

public final class l extends com.kwad.components.ad.reward.presenter.a {
    private long gz;
    private com.kwad.components.ad.reward.e.b mAdOpenInteractionListener;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private com.kwad.components.core.video.l sr;
    private com.kwad.components.core.video.l ss;



    public l() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.l$1 r0 = new com.kwad.components.ad.reward.presenter.l$1
            r0.<init>(r1)
            r1.ss = r0
            com.kwad.components.ad.reward.presenter.l$2 r0 = new com.kwad.components.ad.reward.presenter.l$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static long a(com.kwad.components.ad.reward.presenter.l r0, long r1) {
            r0.gz = r1
            return r1
    }

    static com.kwad.components.ad.reward.e.b a(com.kwad.components.ad.reward.presenter.l r0) {
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            return r0
    }

    static long b(com.kwad.components.ad.reward.presenter.l r2) {
            long r0 = r2.gz
            return r0
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r3.qx
            r1 = 0
            r0.pF = r1
            com.kwad.components.ad.reward.j r0 = r3.qx
            r1 = 0
            r0.pG = r1
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.b r0 = r0.mAdOpenInteractionListener
            r3.mAdOpenInteractionListener = r0
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L21
            com.kwad.components.core.video.l r0 = r3.ss
            goto L23
        L21:
            com.kwad.components.core.video.l r0 = r3.mVideoPlayStateListener
        L23:
            r3.sr = r0
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r3.sr
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.sr
            r0.b(r1)
            return
    }
}
