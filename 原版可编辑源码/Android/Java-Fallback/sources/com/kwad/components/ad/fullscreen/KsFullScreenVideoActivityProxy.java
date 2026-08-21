package com.kwad.components.ad.fullscreen;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class)
public class KsFullScreenVideoActivityProxy extends com.kwad.components.core.l.b<com.kwad.components.ad.reward.j> implements com.kwad.components.offline.api.core.adlive.listener.OnAdLiveResumeInterceptor {
    public static final java.lang.String KEY_TEMPLATE = "key_template_json";
    public static final java.lang.String KEY_VIDEO_PLAY_CONFIG = "key_video_play_config";
    private static final java.lang.String TAG = "FullScreenVideo";
    private static final java.util.HashMap<java.lang.String, com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener> sHashMap = null;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.components.ad.reward.e.b mAdOpenInteractionListener;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private com.kwad.components.ad.fullscreen.c.b mFullScreenPresenter;
    private com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener mInteractionListener;
    private boolean mIsBackEnable;
    private boolean mPageDismissCalled;
    public long mPageEnterTime;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;
    private android.widget.FrameLayout mPlayLayout;
    private org.json.JSONObject mReportExtData;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;
    public int mScreenOrientation;
    private com.kwad.sdk.utils.bi mTimerHelper;
    private com.kwad.sdk.api.KsVideoPlayConfig mVideoPlayConfig;



    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.sHashMap = r0
            return
    }

    public KsFullScreenVideoActivityProxy() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy$1 r0 = new com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy$2 r0 = new com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy$2
            r0.<init>(r1)
            r1.mAdOpenInteractionListener = r0
            return
    }

    static boolean access$002(com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy r0, boolean r1) {
            r0.mIsBackEnable = r1
            return r1
    }

    static com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener access$100(com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy r0) {
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r0.mInteractionListener
            return r0
    }

    static void access$200(com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy r0) {
            r0.notifyPageDismiss()
            return
    }

    private void createPlayModuleProxy(com.kwad.components.ad.reward.j r4) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r0)
            if (r0 == 0) goto L16
            com.kwad.components.ad.reward.l.a r0 = new com.kwad.components.ad.reward.l.a
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r0.<init>(r1)
            com.kwad.components.ad.reward.l.d r1 = new com.kwad.components.ad.reward.l.d
            r2 = 3
            r1.<init>(r2, r0)
            goto L23
        L16:
            com.kwad.components.ad.reward.l.c r0 = new com.kwad.components.ad.reward.l.c
            com.kwad.components.core.video.DetailVideoView r1 = r3.mDetailVideoView
            r0.<init>(r4, r1)
            com.kwad.components.ad.reward.l.d r1 = new com.kwad.components.ad.reward.l.d
            r2 = 1
            r1.<init>(r2, r0)
        L23:
            r4.a(r0)
            r4.oV = r1
            return
    }

    private static java.lang.String getListenerKey(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r2.adBaseInfo
            long r0 = r2.creativeId
            java.lang.String r2 = java.lang.String.valueOf(r0)
            return r2
    }

    private com.kwad.sdk.utils.bi getTimerHelper() {
            r1 = this;
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            if (r0 != 0) goto Le
            com.kwad.sdk.utils.bi r0 = new com.kwad.sdk.utils.bi
            r0.<init>()
            r1.mTimerHelper = r0
            r0.startTiming()
        Le:
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            return r0
    }

    private void initVideoPlayConfig(com.kwad.sdk.api.KsVideoPlayConfig r3) {
            r2 = this;
            java.lang.String r0 = r3.getShowScene()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            r0 = 0
            r2.mReportExtData = r0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r2.mReportExtData = r0
            java.lang.String r3 = r3.getShowScene()
            java.lang.String r1 = "ext_showscene"
            com.kwad.sdk.utils.t.putValue(r0, r1, r3)
        L1d:
            return
    }

    public static void launch(android.content.Context r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.sdk.api.KsVideoPlayConfig r5, com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener r6) {
            com.kwad.sdk.utils.l.cA(r4)
            boolean r0 = r5.isShowLandscape()
            if (r0 == 0) goto L16
            java.lang.Class<com.kwad.sdk.api.proxy.app.KsFullScreenLandScapeVideoActivity> r0 = com.kwad.sdk.api.proxy.app.KsFullScreenLandScapeVideoActivity.class
            java.lang.Class<com.kwad.components.ad.fullscreen.KsFullScreenLandScapeVideoActivityProxy> r1 = com.kwad.components.ad.fullscreen.KsFullScreenLandScapeVideoActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r3, r0)
            goto L22
        L16:
            java.lang.Class<com.kwad.sdk.api.proxy.app.FeedDownloadActivity> r0 = com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class
            java.lang.Class<com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy> r1 = com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r3, r0)
        L22:
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r0)
            org.json.JSONObject r0 = r4.toJson()
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "key_template_json"
            r1.putExtra(r2, r0)
            java.lang.String r0 = "key_video_play_config"
            r1.putExtra(r0, r5)
            java.util.HashMap<java.lang.String, com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener> r5 = com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.sHashMap
            java.lang.String r4 = getListenerKey(r4)
            r5.put(r4, r6)
            r3.startActivity(r1)
            com.kwad.sdk.a.a.c r3 = com.kwad.sdk.a.a.c.yb()
            r4 = 1
            r3.bc(r4)
            return
    }

    private void notifyPageDismiss() {
            r5 = this;
            boolean r0 = r5.mPageDismissCalled
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.mPageDismissCalled = r0
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r0.ye()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            r1 = 6
            com.kwad.sdk.utils.bi r2 = r5.getTimerHelper()
            long r2 = r2.getTime()
            org.json.JSONObject r4 = r5.mReportExtData
            com.kwad.sdk.core.report.a.a(r0, r1, r2, r4)
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = r5.mInteractionListener
            if (r0 == 0) goto L26
            r0.onPageDismiss()
        L26:
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy> r0 = com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.class
            java.lang.Class<com.kwad.sdk.api.proxy.app.KsFullScreenVideoActivity> r1 = com.kwad.sdk.api.proxy.app.KsFullScreenVideoActivity.class
            com.kwad.sdk.service.b.a(r1, r0)
            java.lang.Class<com.kwad.sdk.api.proxy.app.FeedDownloadActivity> r1 = com.kwad.sdk.api.proxy.app.FeedDownloadActivity.class
            com.kwad.sdk.service.b.a(r1, r0)
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r3) {
            r2 = this;
            android.content.Intent r3 = r2.getIntent()
            java.lang.String r0 = "key_video_play_config"
            java.io.Serializable r3 = r3.getSerializableExtra(r0)
            boolean r0 = r3 instanceof com.kwad.sdk.api.KsVideoPlayConfig
            if (r0 == 0) goto L12
            com.kwad.sdk.api.KsVideoPlayConfig r3 = (com.kwad.sdk.api.KsVideoPlayConfig) r3
            r2.mVideoPlayConfig = r3
        L12:
            android.content.Intent r3 = r2.getIntent()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r0 = "key_template_json"
            java.lang.String r3 = r3.getStringExtra(r0)     // Catch: java.lang.Throwable -> L2c
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L2c
            r0.<init>()     // Catch: java.lang.Throwable -> L2c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2c
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L2c
            r0.parseJson(r1)     // Catch: java.lang.Throwable -> L2c
            r2.mAdTemplate = r0     // Catch: java.lang.Throwable -> L2c
            goto L30
        L2c:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L30:
            com.kwad.sdk.api.KsVideoPlayConfig r3 = r2.mVideoPlayConfig
            if (r3 == 0) goto L3b
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            if (r3 != 0) goto L39
            goto L3b
        L39:
            r3 = 1
            return r3
        L3b:
            java.lang.String r3 = "fullscreen"
            java.lang.String r0 = "show"
            com.kwad.sdk.i.a.ai(r3, r0)
            r3 = 0
            return r3
    }

    @Override
    public void finish() {
            r0 = this;
            super.finish()
            r0.notifyPageDismiss()
            return
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_activity_fullscreen_video
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "KsFullScreenVideoActivityProxy"
            return r0
    }

    @Override
    public boolean handledAdLiveOnResume() {
            r1 = this;
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            boolean r0 = r0.fO()
            return r0
    }

    @Override
    public void initData() {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.mPageEnterTime = r0
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            r3 = 0
            com.kwad.components.ad.reward.monitor.a.a(r3, r2, r0)
            com.kwad.components.ad.reward.monitor.a.I(r3)
            java.util.HashMap<java.lang.String, com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener> r0 = com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.sHashMap
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            java.lang.String r1 = getListenerKey(r1)
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener r0 = (com.kwad.sdk.api.KsFullScreenVideoAd.FullScreenVideoAdInteractionListener) r0
            r4.mInteractionListener = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r4.mVideoPlayConfig
            boolean r0 = r0.isShowLandscape()
            r4.mScreenOrientation = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.api.KsVideoPlayConfig r1 = r4.mVideoPlayConfig
            boolean r1 = r1.isVideoSoundEnable()
            if (r1 == 0) goto L3b
            r1 = 2
            goto L3c
        L3b:
            r1 = 1
        L3c:
            r0.mInitVoiceStatus = r1
            com.kwad.sdk.api.KsVideoPlayConfig r0 = r4.mVideoPlayConfig
            r4.initVideoPlayConfig(r0)
            return
    }

    @Override
    public void initView() {
            r3 = this;
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r3.mRootContainer = r0
            int r1 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.video.DetailVideoView r0 = (com.kwad.components.core.video.DetailVideoView) r0
            r3.mDetailVideoView = r0
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r3.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_reward_play_layout
            android.view.View r0 = r0.findViewById(r1)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r3.mPlayLayout = r0
            com.kwad.components.core.video.DetailVideoView r0 = r3.mDetailVideoView
            int r1 = com.kwad.sdk.core.config.d.zX()
            r2 = 1
            r0.f(r2, r1)
            java.lang.String r0 = "fullscreen"
            java.lang.String r1 = "show"
            com.kwad.sdk.i.a.ai(r0, r1)
            return
    }

    @Override
    public boolean needAdaptionScreen() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.kwad.components.ad.fullscreen.c.b r0 = r1.mFullScreenPresenter
            if (r0 == 0) goto Lb
            boolean r0 = r0.bP()
            if (r0 == 0) goto Lb
            return
        Lb:
            boolean r0 = r1.mIsBackEnable
            if (r0 == 0) goto L12
            super.onBackPressed()
        L12:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FULLSCREEN
            java.lang.String r1 = "adShowSuccess"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r0, r1)
            r3.report()
            return
    }

    @Override
    protected com.kwad.components.ad.reward.j onCreateCallerContext() {
            r5 = this;
            com.kwad.components.ad.reward.j r0 = new com.kwad.components.ad.reward.j
            r0.<init>(r5)
            long r1 = r5.mPageEnterTime
            r0.mPageEnterTime = r1
            r1 = 0
            r0.oU = r1
            com.kwad.components.ad.reward.e.b r2 = r5.mAdOpenInteractionListener
            r0.mAdOpenInteractionListener = r2
            int r2 = r5.mScreenOrientation
            r0.mScreenOrientation = r2
            com.kwad.sdk.api.KsVideoPlayConfig r2 = r5.mVideoPlayConfig
            r0.mVideoPlayConfig = r2
            org.json.JSONObject r2 = r5.mReportExtData
            r0.mReportExtData = r2
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r5.mRootContainer
            r0.mRootContainer = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            r0.mAdTemplate = r2
            r5.createPlayModuleProxy(r0)
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            boolean r2 = com.kwad.sdk.core.response.b.a.ax(r2)
            if (r2 == 0) goto L3a
            com.kwad.components.core.e.d.c r2 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            org.json.JSONObject r4 = r5.mReportExtData
            r2.<init>(r3, r4)
            r0.mApkDownloadHelper = r2
        L3a:
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r2 = new com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl
            android.content.Context r3 = r5.mContext
            com.kwad.sdk.core.response.model.AdTemplate r4 = r5.mAdTemplate
            r2.<init>(r0, r3, r4)
            r0.oY = r2
            com.kwad.components.ad.reward.e.f r2 = r5.mPlayEndPageListener
            r0.b(r2)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            boolean r2 = com.kwad.sdk.core.response.b.b.bk(r2)
            if (r2 == 0) goto L5c
            com.kwad.components.ad.reward.l r2 = new com.kwad.components.ad.reward.l
            org.json.JSONObject r3 = r5.mReportExtData
            r4 = 0
            r2.<init>(r0, r3, r4)
            r0.oZ = r2
        L5c:
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            boolean r2 = com.kwad.sdk.core.response.b.a.bv(r2)
            if (r2 == 0) goto L73
            com.kwad.components.core.playable.a r2 = new com.kwad.components.core.playable.a
            int r3 = com.kwad.sdk.R.id.ksad_playable_webview
            android.view.View r3 = r5.findViewById(r3)
            com.kwad.sdk.core.webview.KsAdWebView r3 = (com.kwad.sdk.core.webview.KsAdWebView) r3
            r2.<init>(r3)
            r0.oX = r2
        L73:
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            boolean r2 = com.kwad.sdk.core.response.b.a.am(r2)
            if (r2 == 0) goto L86
            com.kwad.components.ad.k.a r2 = new com.kwad.components.ad.k.a
            r2.<init>()
            com.kwad.components.ad.k.a r2 = r2.ah(r1)
            r0.pa = r2
        L86:
            r0.pj = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            boolean r1 = com.kwad.sdk.core.response.b.a.bv(r1)
            if (r1 == 0) goto L97
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            long r1 = com.kwad.sdk.core.response.b.a.aj(r1)
            goto L9d
        L97:
            com.kwad.sdk.core.response.model.AdInfo r1 = r5.mAdInfo
            long r1 = com.kwad.sdk.core.response.b.a.ae(r1)
        L9d:
            r0.pE = r1
            com.kwad.sdk.utils.bi r1 = r5.getTimerHelper()
            r0.mTimerHelper = r1
            return r0
    }

    @Override
    public com.kwad.components.core.l.a onCreateCallerContext() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.onCreateCallerContext()
            return r0
    }

    @Override
    public com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            r4 = this;
            com.kwad.components.ad.fullscreen.b r0 = new com.kwad.components.ad.fullscreen.b
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.<init>(r1)
            com.kwad.components.ad.fullscreen.c.b r1 = new com.kwad.components.ad.fullscreen.c.b
            r4.getActivity()
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r4.mRootContainer
            T extends com.kwad.components.core.l.a r3 = r4.mCallerContext
            com.kwad.components.ad.reward.j r3 = (com.kwad.components.ad.reward.j) r3
            r1.<init>(r4, r2, r0, r3)
            r4.mFullScreenPresenter = r1
            return r1
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            r2.notifyPageDismiss()
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            if (r0 == 0) goto L21
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.F(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L21
            android.content.Context r1 = r2.mContext
            android.content.Context r1 = r1.getApplicationContext()
            com.kwad.sdk.core.videocache.f r1 = com.kwad.sdk.core.videocache.c.a.bj(r1)
            r1.dQ(r0)
        L21:
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            if (r0 == 0) goto L3e
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L3e
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.f.a r0 = r0.jS()
            r0.removeInterceptor(r2)
        L3e:
            java.util.HashMap<java.lang.String, com.kwad.sdk.api.KsFullScreenVideoAd$FullScreenVideoAdInteractionListener> r0 = com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.sHashMap
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            java.lang.String r1 = getListenerKey(r1)
            r0.remove(r1)
            r0 = 0
            r2.mInteractionListener = r0
            return
    }

    @Override
    public void onPause() {
            r3 = this;
            super.onPause()
            com.kwad.sdk.utils.bi r0 = r3.getTimerHelper()
            r0.Kc()
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            if (r0 == 0) goto L16
            T extends com.kwad.components.core.l.a r0 = r3.mCallerContext
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            r1 = -1
            r0.mPageEnterTime = r1
        L16:
            return
    }

    @Override
    public void onPreCreate(android.os.Bundle r2) {
            r1 = this;
            super.onPreCreate(r2)
            android.content.Intent r2 = r1.getIntent()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = "key_template"
            r2.removeExtra(r0)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            com.kwad.sdk.utils.bi r0 = r1.getTimerHelper()
            r0.Kb()
            return
    }
}
