package com.kwad.components.ad.reward.presenter;

public final class j extends com.kwad.components.ad.reward.presenter.a {
    private final com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener sj;
    private final com.kwad.components.core.l.a.a sk;



    public j() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.j$1 r0 = new com.kwad.components.ad.reward.presenter.j$1
            r0.<init>(r1)
            r1.sj = r0
            com.kwad.components.ad.reward.presenter.j$2 r0 = new com.kwad.components.ad.reward.presenter.j$2
            r0.<init>(r1)
            r1.sk = r0
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L23
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.f.a r0 = r0.jS()
            com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener r1 = r2.sj
            r0.registerAdLiveCallerContextListener(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            com.kwad.components.core.l.a.a r1 = r2.sk
            r0.add(r1)
        L23:
            return
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            super.onDestroy()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L23
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.f.a r0 = r0.jS()
            com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener r1 = r2.sj
            r0.unRegisterAdLiveCallerContextListener(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            com.kwad.components.core.l.a.a r1 = r2.sk
            r0.remove(r1)
        L23:
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            return
    }
}
