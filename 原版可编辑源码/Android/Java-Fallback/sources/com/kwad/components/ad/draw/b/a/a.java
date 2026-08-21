package com.kwad.components.ad.draw.b.a;

public final class a extends com.kwad.components.ad.draw.a.a {
    private boolean bH;
    private java.util.List<java.lang.Integer> cr;
    private volatile boolean cs;
    private com.kwad.sdk.widget.j ct;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.video.k mVideoPlayStateListener;



    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.bH = r0
            r1.cs = r0
            com.kwad.components.ad.draw.b.a.a$1 r0 = new com.kwad.components.ad.draw.b.a.a$1
            r0.<init>(r1)
            r1.ct = r0
            com.kwad.components.ad.draw.b.a.a$2 r0 = new com.kwad.components.ad.draw.b.a.a$2
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void a(com.kwad.components.ad.draw.b.a.a r0, long r1) {
            r0.c(r1)
            return
    }

    private void a(com.kwad.sdk.widget.j r3) {
            r2 = this;
            android.view.View r0 = r2.getRootView()
            boolean r1 = r0 instanceof com.kwad.sdk.core.view.AdBasePvFrameLayout
            if (r1 == 0) goto Ld
            com.kwad.sdk.core.view.AdBasePvFrameLayout r0 = (com.kwad.sdk.core.view.AdBasePvFrameLayout) r0
            r0.setVisibleListener(r3)
        Ld:
            return
    }

    static boolean a(com.kwad.components.ad.draw.b.a.a r0, boolean r1) {
            r0.cs = r1
            return r1
    }

    static com.kwad.components.ad.draw.a.b b(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static boolean b(com.kwad.components.ad.draw.b.a.a r0, boolean r1) {
            r0.bH = r1
            return r1
    }

    static com.kwad.components.ad.draw.a.b c(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    private void c(long r3) {
            r2 = this;
            float r3 = (float) r3
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            double r3 = (double) r3
            double r3 = java.lang.Math.ceil(r3)
            int r3 = (int) r3
            java.util.List<java.lang.Integer> r4 = r2.cr
            if (r4 == 0) goto L38
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L15
            goto L38
        L15:
            java.util.List<java.lang.Integer> r4 = r2.cr
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L38
            java.lang.Object r0 = r4.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r1 = r0.intValue()
            if (r3 < r1) goto L1b
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r4, r3, r1)
            java.util.List<java.lang.Integer> r3 = r2.cr
            r3.remove(r0)
        L38:
            return
    }

    static com.kwad.components.ad.draw.a.b d(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b e(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b f(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b g(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static boolean h(com.kwad.components.ad.draw.b.a.a r0) {
            boolean r0 = r0.bH
            return r0
    }

    static com.kwad.components.ad.draw.a.b i(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b j(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static boolean k(com.kwad.components.ad.draw.b.a.a r0) {
            boolean r0 = r0.cs
            return r0
    }

    static com.kwad.components.ad.draw.a.b l(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b m(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b n(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b o(com.kwad.components.ad.draw.b.a.a r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r2.cr = r0
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            com.kwad.sdk.widget.j r0 = r2.ct
            r2.a(r0)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            r0 = 0
            r2.a(r0)
            return
    }
}
