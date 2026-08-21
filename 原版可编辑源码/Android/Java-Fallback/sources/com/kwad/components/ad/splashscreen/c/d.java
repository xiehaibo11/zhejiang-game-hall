package com.kwad.components.ad.splashscreen.c;

public final class d extends com.kwad.components.ad.splashscreen.c.e {
    private java.util.List<java.lang.Integer> cr;
    private final com.kwad.components.core.video.k mVideoPlayStateListener;


    public d() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.splashscreen.c.d$1 r0 = new com.kwad.components.ad.splashscreen.c.d$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.d r0) {
            r0.kW()
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.d r0, long r1) {
            r0.c(r1)
            return
    }

    static void b(com.kwad.components.ad.splashscreen.c.d r0) {
            r0.kX()
            return
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
            int r0 = r0.intValue()
            if (r3 < r0) goto L1b
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r0, r3, r1)
            r4.remove()
        L38:
            return
    }

    private void kW() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.report.a.j(r0)
            return
    }

    private void kX() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.report.a.aA(r0)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r2.cr = r0
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto L20
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
        L20:
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto L12
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
        L12:
            return
    }
}
