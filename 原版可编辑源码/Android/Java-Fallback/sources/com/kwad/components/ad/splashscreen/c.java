package com.kwad.components.ad.splashscreen;

public final class c extends com.kwad.components.core.l.c<com.kwad.components.ad.splashscreen.h> implements android.content.DialogInterface.OnDismissListener, android.content.DialogInterface.OnShowListener {
    private com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener BR;
    private com.kwad.components.ad.splashscreen.f.d BS;
    private com.kwad.sdk.core.h.b bJ;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.internal.api.SceneImpl mAdScene;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private boolean mPageDismissCalled;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    private com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;



    private c(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mAdTemplate = r2
            com.kwad.sdk.internal.api.SceneImpl r1 = r2.mAdScene
            r0.mAdScene = r1
            r0.od()
            return
    }

    private static com.kwad.sdk.mvp.Presenter D(com.kwad.sdk.core.response.model.AdTemplate r6) {
            com.kwad.sdk.core.response.model.AdInfo r6 = com.kwad.sdk.core.response.b.d.cg(r6)
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            com.kwad.components.ad.splashscreen.c.k r1 = new com.kwad.components.ad.splashscreen.c.k
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.splashscreen.c.b r1 = new com.kwad.components.ad.splashscreen.c.b
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.splashscreen.c.c r1 = new com.kwad.components.ad.splashscreen.c.c
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.splashscreen.c.o r1 = new com.kwad.components.ad.splashscreen.c.o
            r1.<init>()
            r0.a(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r6)
            if (r1 == 0) goto L3d
            com.kwad.components.ad.splashscreen.c.d r1 = new com.kwad.components.ad.splashscreen.c.d
            r1.<init>()
            r0.a(r1)
            com.kwad.components.ad.splashscreen.c.q r1 = new com.kwad.components.ad.splashscreen.c.q
            r1.<init>()
            goto L42
        L3d:
            com.kwad.components.ad.splashscreen.c.h r1 = new com.kwad.components.ad.splashscreen.c.h
            r1.<init>()
        L42:
            r0.a(r1)
            boolean r1 = com.kwad.sdk.core.response.b.b.dn(r6)
            boolean r2 = com.kwad.sdk.core.response.b.b.dd(r6)
            boolean r3 = com.kwad.sdk.core.response.b.b.dh(r6)
            boolean r4 = com.kwad.sdk.core.response.b.b.dm(r6)
            boolean r5 = com.kwad.sdk.core.response.b.b.dj(r6)
            if (r1 != 0) goto L7e
            if (r5 == 0) goto L66
            com.kwad.components.ad.splashscreen.c.n r1 = new com.kwad.components.ad.splashscreen.c.n
            r1.<init>()
        L62:
            r0.a(r1)
            goto L7e
        L66:
            if (r2 == 0) goto L6e
            com.kwad.components.ad.splashscreen.c.m r1 = new com.kwad.components.ad.splashscreen.c.m
            r1.<init>()
            goto L62
        L6e:
            if (r3 == 0) goto L76
            com.kwad.components.ad.splashscreen.c.l r1 = new com.kwad.components.ad.splashscreen.c.l
            r1.<init>()
            goto L62
        L76:
            if (r4 == 0) goto L7e
            com.kwad.components.ad.splashscreen.c.p r1 = new com.kwad.components.ad.splashscreen.c.p
            r1.<init>()
            goto L62
        L7e:
            boolean r1 = com.kwad.sdk.core.response.b.a.aH(r6)
            if (r1 == 0) goto L8c
            com.kwad.components.ad.splashscreen.c.f r1 = new com.kwad.components.ad.splashscreen.c.f
            r1.<init>()
            r0.a(r1)
        L8c:
            boolean r6 = com.kwad.components.ad.splashscreen.h.o(r6)
            if (r6 == 0) goto L9a
            com.kwad.components.ad.splashscreen.c.a.f r6 = new com.kwad.components.ad.splashscreen.c.a.f
            r6.<init>()
            r0.a(r6)
        L9a:
            com.kwad.components.ad.splashscreen.c.j r6 = new com.kwad.components.ad.splashscreen.c.j
            r6.<init>()
            r0.a(r6)
            com.kwad.components.ad.splashscreen.c.a r6 = new com.kwad.components.ad.splashscreen.c.a
            r6.<init>()
            r0.a(r6)
            com.kwad.components.ad.splashscreen.c.g r6 = new com.kwad.components.ad.splashscreen.c.g
            r6.<init>()
            r0.a(r6)
            return r0
    }

    public static com.kwad.components.ad.splashscreen.c a(android.content.Context r5, com.kwad.sdk.core.response.model.AdTemplate r6, boolean r7, com.kwad.sdk.core.h.b r8, com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r9) {
            java.lang.String r0 = "show"
            java.lang.String r1 = "splash"
            r2 = 0
            com.kwad.sdk.i.a.ah(r1, r0)     // Catch: java.lang.Throwable -> L38
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L38
            r6.showStartTime = r3     // Catch: java.lang.Throwable -> L38
            com.kwad.components.ad.splashscreen.monitor.a.kN()     // Catch: java.lang.Throwable -> L38
            com.kwad.components.ad.splashscreen.monitor.a.F(r6)     // Catch: java.lang.Throwable -> L38
            com.kwad.components.ad.splashscreen.monitor.a.kN()     // Catch: java.lang.Throwable -> L38
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L38
            long r3 = r3.getSDKInitTime()     // Catch: java.lang.Throwable -> L38
            com.kwad.components.ad.splashscreen.monitor.a.c(r6, r3, r7)     // Catch: java.lang.Throwable -> L38
            android.content.Context r5 = com.kwad.sdk.m.l.wrapContextIfNeed(r5)     // Catch: java.lang.Throwable -> L38
            com.kwad.components.ad.splashscreen.c r3 = new com.kwad.components.ad.splashscreen.c     // Catch: java.lang.Throwable -> L38
            r3.<init>(r5, r6)     // Catch: java.lang.Throwable -> L38
            r3.setPageExitListener(r8)     // Catch: java.lang.Throwable -> L35
            r3.setSplashScreenAdListener(r9)     // Catch: java.lang.Throwable -> L35
            com.kwad.sdk.i.a.ai(r1, r0)     // Catch: java.lang.Throwable -> L35
            goto L51
        L35:
            r5 = move-exception
            r2 = r3
            goto L39
        L38:
            r5 = move-exception
        L39:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            java.lang.String r8 = r5.toString()
            com.kwad.components.ad.splashscreen.monitor.a.a(r6, r8, r7)
            com.kwad.sdk.KsAdSDKImpl r6 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r6 = r6.getIsExternal()
            if (r6 == 0) goto L52
            com.kwad.components.core.d.a.b(r5)
            r3 = r2
        L51:
            return r3
        L52:
            throw r5
    }

    private com.kwad.sdk.core.h.c a(com.kwad.components.ad.splashscreen.h r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.c$1 r0 = new com.kwad.components.ad.splashscreen.c$1
            r0.<init>(r1, r2)
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.splashscreen.c r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.sdk.mvp.a b(com.kwad.components.ad.splashscreen.c r0) {
            T extends com.kwad.sdk.mvp.a r0 = r0.Li
            return r0
    }

    static com.kwad.sdk.mvp.a c(com.kwad.components.ad.splashscreen.c r0) {
            T extends com.kwad.sdk.mvp.a r0 = r0.Li
            return r0
    }

    private int getSplashLayoutId() {
            r1 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.components.ad.splashscreen.b.a.Cz
            boolean r0 = com.kwad.sdk.core.config.d.a(r0)
            if (r0 == 0) goto Lb
            int r0 = com.kwad.sdk.R.layout.ksad_splash_screen_layout
            return r0
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            int r0 = r0.skipButtonPosition
            if (r0 != 0) goto L16
            int r0 = com.kwad.sdk.R.layout.ksad_splash_screen_skip_button_top_right
            return r0
        L16:
            int r0 = com.kwad.sdk.R.layout.ksad_splash_screen_skip_button_top_left
            return r0
    }

    private com.kwad.components.ad.splashscreen.h ku() {
            r5 = this;
            com.kwad.components.ad.splashscreen.f.d r0 = new com.kwad.components.ad.splashscreen.f.d
            android.view.ViewGroup r1 = r5.lJ
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            int r2 = com.kwad.sdk.core.response.b.a.cl(r2)
            r0.<init>(r1, r2)
            r5.BS = r0
            com.kwad.sdk.core.h.b r1 = r5.bJ
            r0.a(r1)
            com.kwad.components.ad.splashscreen.f.d r0 = r5.BS
            r0.sy()
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r5.mVideoPlayConfig
            if (r0 != 0) goto L37
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r1.adSplashInfo
            int r1 = r1.mute
            r2 = 1
            if (r1 == r2) goto L2c
            goto L2d
        L2c:
            r2 = 0
        L2d:
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.videoSoundEnable(r2)
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r0.build()
            r5.mVideoPlayConfig = r0
        L37:
            com.kwad.components.ad.splashscreen.h r0 = new com.kwad.components.ad.splashscreen.h
            r0.<init>()
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r1 = r5.BR
            r0.setSplashScreenAdListener(r1)
            com.kwad.sdk.core.view.AdBaseFrameLayout r1 = r5.mRootContainer
            r0.mRootContainer = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.sdk.internal.api.SceneImpl r1 = r5.mAdScene
            r0.mAdScene = r1
            com.kwad.sdk.api.KsVideoPlayConfig r1 = r5.mVideoPlayConfig
            r0.mVideoPlayConfig = r1
            com.kwad.components.ad.splashscreen.f.d r1 = r5.BS
            r0.Ce = r1
            com.kwad.components.core.e.d.c r1 = r5.mApkDownloadHelper
            r0.mApkDownloadHelper = r1
            com.kwad.sdk.utils.bi r1 = new com.kwad.sdk.utils.bi
            r1.<init>()
            r0.mTimerHelper = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 == 0) goto L7a
            com.kwad.components.ad.splashscreen.e.a r1 = new com.kwad.components.ad.splashscreen.e.a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            com.kwad.components.core.video.DetailVideoView r3 = r5.mDetailVideoView
            com.kwad.sdk.api.KsVideoPlayConfig r4 = r5.mVideoPlayConfig
            r1.<init>(r2, r3, r4)
            r0.Cd = r1
            com.kwad.sdk.core.h.a r2 = r0.Ce
            r2.a(r1)
        L7a:
            com.kwad.sdk.core.h.a r1 = r0.Ce
            com.kwad.sdk.core.h.c r2 = r5.a(r0)
            r1.a(r2)
            return r0
    }

    public static boolean m(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r1.adSplashInfo
            if (r0 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r1.adSplashInfo
            int r1 = r1.fullScreenClickSwitch
            r0 = 1
            if (r1 != r0) goto Lc
            return r0
        Lc:
            r1 = 0
            return r1
    }

    private void notifyPageDismiss() {
            r1 = this;
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r0.ye()
            boolean r0 = r1.mPageDismissCalled
            if (r0 == 0) goto Lc
            return
        Lc:
            r0 = 1
            r1.mPageDismissCalled = r0
            return
    }

    @Override
    public final void aa() {
            r1 = this;
            super.aa()
            T extends com.kwad.sdk.mvp.a r0 = r1.Li
            com.kwad.components.ad.splashscreen.h r0 = (com.kwad.components.ad.splashscreen.h) r0
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            if (r0 == 0) goto L14
            T extends com.kwad.sdk.mvp.a r0 = r1.Li
            com.kwad.components.ad.splashscreen.h r0 = (com.kwad.components.ad.splashscreen.h) r0
            com.kwad.components.ad.splashscreen.e.a r0 = r0.Cd
            r0.lB()
        L14:
            return
    }

    @Override
    public final void ab() {
            r2 = this;
            super.ab()
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L10
            r1 = 0
            r0.setOnDismissListener(r1)
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            r0.setOnShowListener(r1)
        L10:
            com.kwad.components.ad.splashscreen.f.d r0 = r2.BS
            r0.sz()
            r2.notifyPageDismiss()
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            int r0 = r1.getSplashLayoutId()
            return r0
    }

    @Override
    public final void initData() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r3.mAdInfo = r0
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r1.adSplashInfo
            int r1 = r1.mute
            r2 = 1
            if (r1 == r2) goto L18
            r1 = r2
            goto L19
        L18:
            r1 = 0
        L19:
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r0 = r0.videoSoundEnable(r1)
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r0.build()
            r3.mVideoPlayConfig = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            boolean r0 = r0.isVideoSoundEnable()
            if (r0 == 0) goto L2c
            r2 = 2
        L2c:
            r1.mInitVoiceStatus = r2
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.<init>(r1)
            r3.mApkDownloadHelper = r0
            r0.setOnDismissListener(r3)
            com.kwad.components.core.e.d.c r0 = r3.mApkDownloadHelper
            r0.setOnShowListener(r3)
            return
    }

    @Override
    public final boolean kt() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void kv() {
            r2 = this;
            android.view.ViewGroup r0 = r2.lJ
            int r1 = com.kwad.sdk.R.id.ksad_splash_root_container
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r2.mRootContainer = r0
            android.view.ViewGroup r0 = r2.lJ
            int r1 = com.kwad.sdk.R.id.ksad_splash_video_player
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r2.mDetailVideoView = r0
            r1 = 1
            r0.setAd(r1)
            com.kwad.components.core.video.DetailVideoView r0 = r2.mDetailVideoView
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r2.mRootContainer
            int r1 = com.kwad.sdk.R.id.splash_play_card_view
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.splashscreen.c$2 r1 = new com.kwad.components.ad.splashscreen.c$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public final com.kwad.sdk.mvp.a kw() {
            r1 = this;
            com.kwad.components.ad.splashscreen.h r0 = r1.ku()
            return r0
    }

    @Override
    public final com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            r1 = this;
            r1.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.mvp.Presenter r0 = D(r0)
            return r0
    }

    @Override
    public final void onDismiss(android.content.DialogInterface r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.components.core.e.c.b
            if (r0 == 0) goto Lb
            com.kwad.components.core.e.c.b r2 = (com.kwad.components.core.e.c.b) r2
            boolean r2 = r2.nb()
            goto Lc
        Lb:
            r2 = 0
        Lc:
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r0 = r1.BR     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L1d
            if (r2 == 0) goto L18
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r2 = r1.BR     // Catch: java.lang.Throwable -> L1e
            r2.onDownloadTipsDialogDismiss()     // Catch: java.lang.Throwable -> L1e
            goto L22
        L18:
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r2 = r1.BR     // Catch: java.lang.Throwable -> L1e
            r2.onDownloadTipsDialogCancel()     // Catch: java.lang.Throwable -> L1e
        L1d:
            return
        L1e:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L22:
            return
    }

    @Override
    public final void onShow(android.content.DialogInterface r1) {
            r0 = this;
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r1 = r0.BR     // Catch: java.lang.Throwable -> La
            if (r1 == 0) goto L9
            com.kwad.sdk.api.KsSplashScreenAd$SplashScreenAdInteractionListener r1 = r0.BR     // Catch: java.lang.Throwable -> La
            r1.onDownloadTipsDialogShow()     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return
    }

    @Override
    protected final void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            return
    }

    public final void setPageExitListener(com.kwad.sdk.core.h.b r1) {
            r0 = this;
            r0.bJ = r1
            return
    }

    public final void setSplashScreenAdListener(com.kwad.sdk.api.KsSplashScreenAd.SplashScreenAdInteractionListener r2) {
            r1 = this;
            r1.BR = r2
            T extends com.kwad.sdk.mvp.a r0 = r1.Li
            if (r0 == 0) goto Ld
            T extends com.kwad.sdk.mvp.a r0 = r1.Li
            com.kwad.components.ad.splashscreen.h r0 = (com.kwad.components.ad.splashscreen.h) r0
            r0.setSplashScreenAdListener(r2)
        Ld:
            return
    }
}
