package com.kwad.components.ad.splashscreen.c;

public final class c extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.sdk.core.h.c {
    private android.widget.TextView CE;
    private com.kwad.components.ad.splashscreen.widget.a CF;
    private com.kwad.sdk.core.response.model.AdInfo.AdPreloadInfo CG;
    private boolean CH;
    private android.view.View CI;
    private com.kwad.sdk.core.response.model.AdInfo rZ;





    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.CH = r0
            return
    }

    private void a(android.view.ViewGroup r2, com.kwad.sdk.core.response.model.AdInfo r3) {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_splash_preload_tips
            android.view.View r2 = r2.findViewById(r0)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.CE = r2
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r2 = r3.adPreloadInfo
            r1.CG = r2
            android.widget.TextView r2 = r1.CE
            r3 = 8
            r2.setVisibility(r3)
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r2 = r1.CG
            if (r2 == 0) goto L31
            java.lang.String r2 = r2.preloadTips
            boolean r2 = com.kwad.sdk.utils.bc.isNullString(r2)
            if (r2 != 0) goto L31
            android.widget.TextView r2 = r1.CE
            r3 = 0
            r2.setVisibility(r3)
            android.widget.TextView r2 = r1.CE
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r3 = r1.CG
            java.lang.String r3 = r3.preloadTips
            r2.setText(r3)
            return
        L31:
            android.widget.TextView r2 = r1.CE
            r2.setVisibility(r3)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.c.c r0) {
            r0.kR()
            return
    }

    static com.kwad.components.ad.splashscreen.widget.a b(com.kwad.components.ad.splashscreen.c.c r0) {
            com.kwad.components.ad.splashscreen.widget.a r0 = r0.CF
            return r0
    }

    static android.view.View c(com.kwad.components.ad.splashscreen.c.c r0) {
            android.view.View r0 = r0.CI
            return r0
    }

    private com.kwad.components.ad.splashscreen.local.SplashSkipViewModel kQ() {
            r4 = this;
            com.kwad.components.ad.splashscreen.local.SplashSkipViewModel r0 = new com.kwad.components.ad.splashscreen.local.SplashSkipViewModel
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.rZ
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r1.adSplashInfo
            int r1 = r1.imageDisplaySecond
            if (r1 > 0) goto Lf
            r1 = 5
            goto L15
        Lf:
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.rZ
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r1.adSplashInfo
            int r1 = r1.imageDisplaySecond
        L15:
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.rZ
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r2 = r2.adSplashInfo
            int r2 = r2.videoDisplaySecond
            com.kwad.sdk.core.response.model.AdInfo r3 = r4.rZ
            int r3 = com.kwad.sdk.core.response.b.a.G(r3)
            int r2 = java.lang.Math.min(r2, r3)
            com.kwad.sdk.core.response.model.AdInfo r3 = r4.rZ
            boolean r3 = com.kwad.sdk.core.response.b.a.aU(r3)
            if (r3 == 0) goto L2e
            r1 = r2
        L2e:
            r0.skipSecond = r1
            return r0
    }

    private void kR() {
            r4 = this;
            com.kwad.components.ad.splashscreen.h r0 = r4.CM
            r0.kI()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.kwad.components.ad.splashscreen.h r1 = r4.CM
            com.kwad.components.ad.splashscreen.e.a r1 = r1.Cd
            if (r1 == 0) goto L22
            java.lang.String r1 = "duration"
            com.kwad.components.ad.splashscreen.h r2 = r4.CM     // Catch: org.json.JSONException -> L1e
            com.kwad.components.ad.splashscreen.e.a r2 = r2.Cd     // Catch: org.json.JSONException -> L1e
            long r2 = r2.getCurrentPosition()     // Catch: org.json.JSONException -> L1e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L1e
            goto L22
        L1e:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L22:
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.sdk.utils.bi r2 = r2.mTimerHelper
            if (r2 == 0) goto L37
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.sdk.utils.bi r2 = r2.mTimerHelper
            long r2 = r2.getTime()
            r1.duration = r2
        L37:
            com.kwad.sdk.core.report.j r2 = new com.kwad.sdk.core.report.j
            r2.<init>()
            r3 = 1
            com.kwad.sdk.core.report.j r2 = r2.ch(r3)
            r3 = 22
            com.kwad.sdk.core.report.j r2 = r2.cm(r3)
            com.kwad.sdk.core.report.j r1 = r2.a(r1)
            com.kwad.components.ad.splashscreen.h r2 = r4.CM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.sdk.core.report.a.b(r2, r1, r0)
            return
    }

    private synchronized void kT() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.CH     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L2c
            com.kwad.components.ad.splashscreen.widget.a r0 = r3.CF     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto La
            goto L2c
        La:
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.rZ     // Catch: java.lang.Throwable -> L2e
            boolean r0 = com.kwad.sdk.core.response.b.a.ci(r0)     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L2a
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.rZ     // Catch: java.lang.Throwable -> L2e
            boolean r0 = com.kwad.sdk.core.response.b.a.cj(r0)     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L1b
            goto L2a
        L1b:
            com.kwad.components.ad.splashscreen.h r0 = r3.CM     // Catch: java.lang.Throwable -> L2e
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate     // Catch: java.lang.Throwable -> L2e
            r1 = 124(0x7c, float:1.74E-43)
            r2 = 0
            com.kwad.sdk.core.report.a.b(r0, r1, r2)     // Catch: java.lang.Throwable -> L2e
            r0 = 1
            r3.CH = r0     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r3)
            return
        L2a:
            monitor-exit(r3)
            return
        L2c:
            monitor-exit(r3)
            return
        L2e:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    private static boolean r(com.kwad.sdk.core.response.model.AdInfo r0) {
            boolean r0 = com.kwad.sdk.core.response.b.a.cg(r0)
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private void s(com.kwad.sdk.core.response.model.AdInfo r3) {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_skip_view_area
            android.view.View r0 = r0.findViewById(r1)
            r2.CI = r0
            boolean r0 = com.kwad.sdk.core.response.b.a.ch(r3)
            if (r0 == 0) goto L33
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r3 = r3.adSplashInfo
            int r3 = r3.skipButtonPosition
            if (r3 != 0) goto L33
            android.view.View r3 = r2.CI
            r0 = 0
            r3.setVisibility(r0)
            android.view.View r3 = r2.CI
            com.kwad.components.ad.splashscreen.c.c$2 r0 = new com.kwad.components.ad.splashscreen.c.c$2
            r0.<init>(r2)
            r3.setOnClickListener(r0)
            android.view.View r3 = r2.CI
            com.kwad.components.ad.splashscreen.c.c$3 r0 = new com.kwad.components.ad.splashscreen.c.c$3
            r0.<init>(r2)
            r3.post(r0)
            return
        L33:
            android.view.View r3 = r2.CI
            r0 = 8
            r3.setVisibility(r0)
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            java.lang.String r0 = "SkipAdPresenter"
            java.lang.String r1 = "onPageVisible"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.splashscreen.widget.a r0 = r2.CF
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.rZ
            r0.x(r1)
            r2.kT()
            return
    }

    @Override
    public final void aL() {
            r2 = this;
            java.lang.String r0 = "SkipAdPresenter"
            java.lang.String r1 = "onPageInvisible"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.splashscreen.widget.a r0 = r2.CF
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.rZ
            r0.w(r1)
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            java.lang.String r0 = "SkipAdPresenter"
            java.lang.String r1 = "onBind"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r3.rZ = r0
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.rZ
            android.view.ViewGroup r0 = r0.p(r1)
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.rZ
            r3.a(r0, r1)
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.rZ
            boolean r1 = r(r1)
            if (r1 == 0) goto L2c
            int r1 = com.kwad.sdk.R.id.ksad_splash_skip_view
            goto L2e
        L2c:
            int r1 = com.kwad.sdk.R.id.ksad_splash_circle_skip_view
        L2e:
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.splashscreen.widget.a r0 = (com.kwad.components.ad.splashscreen.widget.a) r0
            r3.CF = r0
            com.kwad.components.ad.splashscreen.widget.a r0 = r3.CF
            com.kwad.components.ad.splashscreen.local.SplashSkipViewModel r1 = r3.kQ()
            com.kwad.sdk.core.response.model.AdInfo r2 = r3.rZ
            r0.a(r1, r2)
            com.kwad.components.ad.splashscreen.widget.a r0 = r3.CF
            com.kwad.components.ad.splashscreen.c.c$1 r1 = new com.kwad.components.ad.splashscreen.c.c$1
            r1.<init>(r3)
            r0.setOnViewListener(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.rZ
            r3.s(r0)
            com.kwad.components.ad.splashscreen.h r0 = r3.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.a(r3)
            return
    }

    public final void kS() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            com.kwad.components.ad.splashscreen.c.c$4 r1 = new com.kwad.components.ad.splashscreen.c.c$4
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.b(r1)
            com.kwad.components.ad.splashscreen.widget.a r0 = r1.CF
            r0.bd()
            return
    }
}
