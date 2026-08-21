package com.kwad.components.ad.reward.presenter.b;

public final class b extends com.kwad.components.ad.reward.presenter.a {
    private com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest fH;
    private long gz;
    private final com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.ad.reward.model.AdLiveEndResultData> mNetworking;
    private com.kwad.components.ad.reward.m.p pt;
    private final com.kwad.components.core.video.l ss;
    private android.view.View tM;




    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.b.b$1 r0 = new com.kwad.components.ad.reward.presenter.b.b$1
            r0.<init>(r1)
            r1.mNetworking = r0
            com.kwad.components.ad.reward.presenter.b.b$2 r0 = new com.kwad.components.ad.reward.presenter.b.b$2
            r0.<init>(r1)
            r1.ss = r0
            return
    }

    static long a(com.kwad.components.ad.reward.presenter.b.b r0, long r1) {
            r0.gz = r1
            return r1
    }

    static android.view.View a(com.kwad.components.ad.reward.presenter.b.b r0, int r1) {
            android.view.View r0 = r0.findViewById(r1)
            return r0
    }

    static android.view.View a(com.kwad.components.ad.reward.presenter.b.b r0, android.view.View r1) {
            r0.tM = r1
            return r1
    }

    static com.kwad.components.ad.reward.m.p a(com.kwad.components.ad.reward.presenter.b.b r0, com.kwad.components.ad.reward.m.p r1) {
            r0.pt = r1
            return r1
    }

    static com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest a(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r0.fH
            return r0
    }

    static void b(com.kwad.components.ad.reward.presenter.b.b r0) {
            r0.hV()
            return
    }

    static void c(com.kwad.components.ad.reward.presenter.b.b r0) {
            r0.hW()
            return
    }

    static com.kwad.components.ad.reward.m.p d(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.m.p r0 = r0.pt
            return r0
    }

    static com.kwad.components.ad.reward.j e(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j f(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j g(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    private void hF() {
            r4 = this;
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            r2 = 24
            r0.cm(r2)
            r0.a(r1)
            com.kwad.components.core.t.b r1 = com.kwad.components.core.t.b.qj()
            com.kwad.components.ad.reward.j r2 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r3 = 0
            r1.a(r2, r3, r0)
            return
    }

    private void hV() {
            r2 = this;
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r2.fH
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.ad.reward.model.AdLiveEndResultData> r0 = r2.mNetworking
            com.kwad.components.ad.reward.presenter.b.b$3 r1 = new com.kwad.components.ad.reward.presenter.b.b$3
            r1.<init>(r2)
            r0.request(r1)
            return
    }

    private void hW() {
            r2 = this;
            android.view.View r0 = r2.tM
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    static long i(com.kwad.components.ad.reward.presenter.b.b r2) {
            long r0 = r2.gz
            return r0
    }

    static com.kwad.components.ad.reward.j j(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static android.view.View k(com.kwad.components.ad.reward.presenter.b.b r0) {
            android.view.View r0 = r0.tM
            return r0
    }

    static void l(com.kwad.components.ad.reward.presenter.b.b r0) {
            r0.hF()
            return
    }

    static com.kwad.components.ad.reward.j m(com.kwad.components.ad.reward.presenter.b.b r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L38
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.ss
            r0.a(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aY(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L38
            java.lang.Class<com.kwad.components.core.offline.api.a.a> r1 = com.kwad.components.core.offline.api.a.a.class
            com.kwad.sdk.components.a r1 = com.kwad.sdk.components.c.f(r1)
            com.kwad.components.core.offline.api.a.a r1 = (com.kwad.components.core.offline.api.a.a) r1
            if (r1 == 0) goto L38
            com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest r0 = r1.getAdLiveEndRequest(r0)
            r2.fH = r0
        L38:
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, com.kwad.components.ad.reward.model.AdLiveEndResultData> r0 = r2.mNetworking
            r0.cancel()
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L1b
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r2.ss
            r0.b(r1)
        L1b:
            return
    }
}
