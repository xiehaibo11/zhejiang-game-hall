package com.kwad.components.ad.f.b;

public final class c extends com.kwad.components.ad.f.a.a {
    private java.util.List<java.lang.Integer> cr;
    private volatile boolean cs;


    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.cs = r0
            return
    }

    static com.kwad.components.ad.f.a.b a(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static void a(com.kwad.components.ad.f.b.c r0, long r1) {
            r0.c(r1)
            return
    }

    static boolean a(com.kwad.components.ad.f.b.c r0, boolean r1) {
            r0.cs = r1
            return r1
    }

    static com.kwad.components.ad.f.a.b b(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static com.kwad.components.ad.f.a.b c(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
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
            if (r4 == 0) goto L3a
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L15
            goto L3a
        L15:
            java.util.List<java.lang.Integer> r4 = r2.cr
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L3a
            java.lang.Object r0 = r4.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r1 = r0.intValue()
            if (r3 < r1) goto L1b
            com.kwad.components.ad.f.a.b r4 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r4, r3, r1)
            java.util.List<java.lang.Integer> r3 = r2.cr
            r3.remove(r0)
        L3a:
            return
    }

    static com.kwad.components.ad.f.a.b d(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static com.kwad.components.ad.f.a.b e(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static boolean f(com.kwad.components.ad.f.b.c r0) {
            boolean r0 = r0.cs
            return r0
    }

    static com.kwad.components.ad.f.a.b g(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    static com.kwad.components.ad.f.a.b h(com.kwad.components.ad.f.b.c r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r2.cr = r0
            com.kwad.components.ad.f.b.c$1 r0 = new com.kwad.components.ad.f.b.c$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }
}
