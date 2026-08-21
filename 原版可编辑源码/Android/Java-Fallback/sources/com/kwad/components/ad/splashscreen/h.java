package com.kwad.components.ad.splashscreen;

public final class h extends com.kwad.sdk.mvp.a {
    private com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener BR;
    public com.kwad.components.ad.splashscreen.e.a Cd;
    public com.kwad.sdk.core.h.a Ce;
    private java.util.List<com.kwad.components.ad.splashscreen.g> Cf;
    private java.util.List<com.kwad.components.ad.splashscreen.f> Cg;
    private boolean Ch;
    public boolean Ci;
    public boolean Cj;
    public int Ck;
    public int Cl;
    public long Cm;
    public long Cn;
    public long Co;
    public long Cp;
    public long Cq;
    public long Cr;
    public long Cs;
    public boolean isWebTimeout;
    public com.kwad.sdk.internal.api.SceneImpl mAdScene;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    public com.kwad.sdk.utils.bi mTimerHelper;
    public com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;



    public interface a {
        void b(com.kwad.sdk.core.report.j r1);
    }

    public h() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.Cf = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.Cg = r0
            r0 = 0
            r1.Ch = r0
            r1.Ci = r0
            r1.Cj = r0
            r1.isWebTimeout = r0
            return
    }

    static com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener b(com.kwad.components.ad.splashscreen.h r0) {
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r0.BR
            return r0
    }

    private void kJ() {
            r2 = this;
            r2.kK()
            java.util.List<com.kwad.components.ad.splashscreen.g> r0 = r2.Cf
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.splashscreen.g r1 = (com.kwad.components.ad.splashscreen.g) r1
            r1.kD()
            goto L9
        L19:
            return
    }

    private void kK() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = new com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            long r2 = r2.posId
            r1.<init>(r2)
            r2 = 8
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setStatus(r2)
            com.kwad.components.core.webview.b.d.a r2 = com.kwad.components.core.webview.b.d.a.sb()
            java.util.List r2 = r2.sc()
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setElementTypes(r2)
            com.kwad.sdk.utils.bi r2 = r4.mTimerHelper
            if (r2 == 0) goto L2a
            long r2 = r2.getTime()
            goto L2c
        L2a:
            r2 = -1
        L2c:
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setShowEndTime(r2)
            boolean r2 = r4.Cj
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setRotateComposeTimeout(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            long r2 = com.kwad.sdk.core.response.b.b.cT(r2)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setTkDefaultTimeout(r2)
            int r2 = r4.Ck
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setSoSource(r2)
            long r2 = r4.Cm
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setSoLoadTime(r2)
            int r2 = r4.Cl
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setOfflineSource(r2)
            long r2 = r4.Cn
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setOfflineLoadTime(r2)
            long r2 = r4.Co
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setTkFileLoadTime(r2)
            long r2 = r4.Cp
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setTkInitTime(r2)
            long r2 = r4.Cq
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setTkRenderTime(r2)
            long r2 = r4.Cr
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setNativeLoadTime(r2)
            boolean r2 = r4.isWebTimeout
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setWebTimeout(r2)
            long r2 = r4.Cs
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setWebLoadTime(r2)
            int r2 = com.kwad.sdk.core.response.b.b.de(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setInteractiveStyle(r2)
            int r2 = com.kwad.sdk.core.response.b.b.df(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = r1.setInteractivityDefaultStyle(r2)
            long r2 = com.kwad.sdk.core.response.b.a.E(r0)
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r0 = r1.setCreativeId(r2)
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.p(r0)
            com.kwad.components.core.webview.b.d.a r0 = com.kwad.components.core.webview.b.d.a.sb()
            r0.sd()
            return
    }

    private void kL() {
            r2 = this;
            java.util.List<com.kwad.components.ad.splashscreen.f> r0 = r2.Cg
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.splashscreen.f r1 = (com.kwad.components.ad.splashscreen.f) r1
            r1.kz()
            goto L6
        L16:
            return
    }

    public static boolean m(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r1.adSplashInfo
            int r1 = r1.fullScreenClickSwitch
            r0 = 1
            if (r1 != r0) goto L8
            return r0
        L8:
            r1 = 0
            return r1
    }

    public static boolean o(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = com.kwad.sdk.core.response.b.b.cK(r1)
            if (r0 == 0) goto Le
            boolean r1 = com.kwad.sdk.core.response.b.a.aV(r1)
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public final void S(android.content.Context r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            boolean r0 = r0.mPvReported
            if (r0 != 0) goto L23
            com.kwad.components.ad.splashscreen.local.a.T(r3)
            com.kwad.components.core.t.b r3 = com.kwad.components.core.t.b.qj()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1 = 0
            r3.a(r0, r1, r1)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_SPLASH
            java.lang.String r1 = "adShowSuccess"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r0, r1)
            r3.report()
            r2.kF()
        L23:
            return
    }

    public final void Y(int r3) {
            r2 = this;
            java.util.List<com.kwad.components.ad.splashscreen.g> r0 = r2.Cf
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.splashscreen.g r1 = (com.kwad.components.ad.splashscreen.g) r1
            r1.X(r3)
            goto L6
        L16:
            return
    }

    public final void a(int r2, android.content.Context r3, int r4, int r5, com.kwad.components.ad.splashscreen.h.a r6) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            r0.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r0.P(r3)
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r0)
            com.kwad.components.core.e.d.a$a r3 = r3.ao(r5)
            r5 = 0
            com.kwad.components.core.e.d.a$a r3 = r3.am(r5)
            com.kwad.components.core.e.d.a$a r3 = r3.an(r4)
            com.kwad.components.core.e.d.a$a r2 = r3.am(r2)
            com.kwad.components.ad.splashscreen.h$1 r3 = new com.kwad.components.ad.splashscreen.h$1
            r3.<init>(r1, r4, r6)
            com.kwad.components.core.e.d.a$a r2 = r2.a(r3)
            com.kwad.components.core.e.d.a.a(r2)
            return
    }

    public final void a(com.kwad.components.ad.splashscreen.f r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.ad.splashscreen.f> r0 = r1.Cg
            r0.add(r2)
            return
    }

    public final void a(com.kwad.components.ad.splashscreen.g r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.splashscreen.g> r0 = r1.Cf
            r0.add(r2)
            return
    }

    public final void b(com.kwad.components.ad.splashscreen.f r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.ad.splashscreen.f> r0 = r1.Cg
            r0.remove(r2)
            return
    }

    public final void b(com.kwad.components.ad.splashscreen.g r2) {
            r1 = this;
            java.util.List<com.kwad.components.ad.splashscreen.g> r0 = r1.Cf
            r0.remove(r2)
            return
    }

    public final void c(int r7, android.content.Context r8, int r9, int r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public final void g(int r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r2 = r1.BR
            r0 = 0
            if (r2 == 0) goto L8
            r2.onAdShowError(r0, r3)
        L8:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.mAdTemplate
            java.lang.String r3 = java.lang.String.valueOf(r3)
            com.kwad.components.ad.splashscreen.monitor.a.b(r2, r0, r3)
            r1.kJ()
            return
    }

    public final void kE() {
            r1 = this;
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r1.BR
            if (r0 == 0) goto L7
            r0.onAdClicked()
        L7:
            return
    }

    public final void kF() {
            r5 = this;
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            long r1 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            long r3 = r3.showStartTime
            long r1 = r1 - r3
            com.kwad.components.ad.splashscreen.monitor.a.e(r0, r1)
            com.kwad.components.ad.splashscreen.monitor.b.kO()
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r1 = 1
            r0.bc(r1)
            com.kwad.sdk.utils.bi r0 = r5.mTimerHelper
            if (r0 == 0) goto L23
            r0.startTiming()
        L23:
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r5.BR
            if (r0 == 0) goto L2a
            r0.onAdShowStart()
        L2a:
            return
    }

    public final void kG() {
            r3 = this;
            boolean r0 = r3.Ch
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r3.Ch = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = o(r0)
            if (r0 == 0) goto L1f
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            boolean r0 = r0.converted
            if (r0 == 0) goto L1b
            goto L1f
        L1b:
            r3.kL()
            goto L50
        L1f:
            com.kwad.sdk.core.report.z$a r0 = new com.kwad.sdk.core.report.z$a
            r0.<init>()
            com.kwad.sdk.utils.bi r1 = r3.mTimerHelper
            if (r1 == 0) goto L2e
            long r1 = r1.getTime()
            r0.duration = r1
        L2e:
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            r2 = 14
            com.kwad.sdk.core.report.j r1 = r1.ch(r2)
            r2 = 22
            com.kwad.sdk.core.report.j r1 = r1.cm(r2)
            com.kwad.sdk.core.report.j r0 = r1.a(r0)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r2 = 0
            com.kwad.sdk.core.report.a.b(r1, r0, r2)
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r3.BR
            if (r0 == 0) goto L50
            r0.onAdShowEnd()
        L50:
            r3.kJ()
            return
    }

    public final void kH() {
            r1 = this;
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r1.BR
            if (r0 == 0) goto L7
            r0.onAdShowEnd()
        L7:
            return
    }

    public final void kI() {
            r1 = this;
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r1.BR
            if (r0 == 0) goto L7
            r0.onSkippedAd()
        L7:
            r1.kJ()
            return
    }

    public final void kM() {
            r2 = this;
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r2.mRootContainer
            com.kwad.components.ad.splashscreen.h$2 r1 = new com.kwad.components.ad.splashscreen.h$2
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    public final android.view.ViewGroup p(com.kwad.sdk.core.response.model.AdInfo r3) {
            r2 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.splashscreen.b.a.Cz
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            if (r0 != 0) goto Lb
            com.kwad.sdk.core.view.AdBaseFrameLayout r3 = r2.mRootContainer
            return r3
        Lb:
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r2.mRootContainer
            boolean r1 = com.kwad.components.ad.splashscreen.f.c.v(r3)
            if (r1 == 0) goto L16
            int r1 = com.kwad.sdk.R.id.ksad_splash_right_top_view_stub
            goto L18
        L16:
            int r1 = com.kwad.sdk.R.id.ksad_splash_left_top_view_stub
        L18:
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewStub r0 = (android.view.ViewStub) r0
            if (r0 == 0) goto L27
            android.view.View r3 = r0.inflate()
        L24:
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            goto L39
        L27:
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r2.mRootContainer
            boolean r3 = com.kwad.components.ad.splashscreen.f.c.v(r3)
            if (r3 == 0) goto L32
            int r3 = com.kwad.sdk.R.id.ksad_splash_right_top_root
            goto L34
        L32:
            int r3 = com.kwad.sdk.R.id.ksad_splash_left_top_root
        L34:
            android.view.View r3 = r0.findViewById(r3)
            goto L24
        L39:
            r0 = 0
            r3.setVisibility(r0)
            return r3
    }

    @Override
    public final void release() {
            r1 = this;
            com.kwad.components.ad.splashscreen.e.a r0 = r1.Cd
            if (r0 == 0) goto L7
            r0.release()
        L7:
            com.kwad.sdk.core.h.a r0 = r1.Ce
            if (r0 == 0) goto Le
            r0.release()
        Le:
            return
    }

    public final void setSplashScreenAdListener(com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r1) {
            r0 = this;
            r0.BR = r1
            return
    }
}
