package com.kwad.components.ad.splashscreen.c;

public final class j extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.components.core.offline.api.b.b Da;
    private long Db;
    private volatile boolean Dc;
    private final java.lang.Runnable Dd;
    private com.kwad.components.core.offline.api.b.a De;
    private com.kwad.components.core.webview.b.e.e gt;






    public j() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.Dc = r0
            com.kwad.components.ad.splashscreen.c.j$1 r0 = new com.kwad.components.ad.splashscreen.c.j$1
            r0.<init>(r1)
            r1.gt = r0
            com.kwad.components.ad.splashscreen.c.j$2 r0 = new com.kwad.components.ad.splashscreen.c.j$2
            r0.<init>(r1)
            r1.Dd = r0
            com.kwad.components.ad.splashscreen.c.j$3 r0 = new com.kwad.components.ad.splashscreen.c.j$3
            r0.<init>(r1)
            r1.De = r0
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.j r0) {
            r0.lj()
            return
    }

    static java.lang.Runnable b(com.kwad.components.ad.splashscreen.c.j r0) {
            java.lang.Runnable r0 = r0.Dd
            return r0
    }

    static boolean c(com.kwad.components.ad.splashscreen.c.j r0) {
            boolean r0 = r0.Dc
            return r0
    }

    static void d(com.kwad.components.ad.splashscreen.c.j r0) {
            r0.li()
            return
    }

    static long e(com.kwad.components.ad.splashscreen.c.j r2) {
            long r0 = r2.Db
            return r0
    }

    private void lh() {
            r2 = this;
            java.lang.Class<com.kwad.components.core.offline.api.b.b> r0 = com.kwad.components.core.offline.api.b.b.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.components.core.offline.api.b.b r0 = (com.kwad.components.core.offline.api.b.b) r0
            r2.Da = r0
            if (r0 == 0) goto L11
            com.kwad.components.core.offline.api.b.a r1 = r2.De
            r0.a(r1)
        L11:
            return
    }

    private void li() {
            r1 = this;
            boolean r0 = r1.Dc
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.Dc = r0
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.cN(r0)
            if (r0 == 0) goto L1e
            com.kwad.components.ad.splashscreen.c.j$4 r0 = new com.kwad.components.ad.splashscreen.c.j$4
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
        L1e:
            return
    }

    private void lj() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.dk(r0)
            if (r0 == 0) goto L1b
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            r1 = 1
            r0.Ci = r1
            com.kwad.components.ad.splashscreen.c.j$5 r0 = new com.kwad.components.ad.splashscreen.c.j$5
            r0.<init>(r2)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
        L1b:
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.cN(r0)
            if (r0 == 0) goto L2b
            java.lang.Runnable r0 = r3.Dd
            com.kwad.components.ad.splashscreen.h r1 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            long r1 = com.kwad.sdk.core.response.b.b.cT(r1)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r3.gt
            r0.a(r1)
        L2b:
            r3.lh()
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.Db = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.offline.api.b.b r0 = r2.Da
            if (r0 == 0) goto Lc
            com.kwad.components.core.offline.api.b.a r1 = r2.De
            r0.b(r1)
        Lc:
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.b.cN(r0)
            if (r0 == 0) goto L28
            java.lang.Runnable r0 = r2.Dd
            com.kwad.sdk.utils.bj.b(r0)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
        L28:
            return
    }
}
