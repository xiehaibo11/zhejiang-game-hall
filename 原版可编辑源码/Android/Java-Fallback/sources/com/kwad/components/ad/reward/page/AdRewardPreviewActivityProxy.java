package com.kwad.components.ad.reward.page;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.AdWebViewActivity.class)
public class AdRewardPreviewActivityProxy extends com.kwad.components.core.n.c {
    public static final java.lang.String KEY_TEMPLATE = "key_template_json";
    private static final java.lang.String KEY_URL = "key_langingpage_url";
    private static final java.lang.String TAG = "AdRewardPreviewActivityProxy";
    public static com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener mInteractionListener;
    private boolean counterPaused;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.core.webview.KsAdWebView mAdWebView;
    private boolean mCheckExposureResult;
    public com.kwad.components.ad.reward.k mCloseDialog;
    private int mCount;
    private android.view.View mCountDownLayout;
    private android.widget.TextView mCountDownTips;
    private boolean mEnableSkip;
    private android.os.Handler mHandler;
    private long mLastDown;
    protected com.kwad.components.core.widget.KsLogoView mLogoView;
    private int mSkipCount;
    private android.view.View mSkipCountDownBtn;
    private android.view.View mSkipCountDownDiv;
    private long mStartPlayTime;
    private com.kwad.sdk.utils.bi mTimerHelper;
    private java.lang.String mUrl;
    private android.widget.ImageView mWebCloseBtn;
    private com.kwad.sdk.core.view.AdBaseFrameLayout mWebContainer;










    public AdRewardPreviewActivityProxy() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r0 = 0
            r2.mEnableSkip = r0
            r2.counterPaused = r0
            r0 = 1
            r2.mCheckExposureResult = r0
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate access$000(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void access$100(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            r0.showCloseDialog()
            return
    }

    static android.widget.TextView access$1000(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            android.widget.TextView r0 = r0.mCountDownTips
            return r0
    }

    static android.widget.ImageView access$1100(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            android.widget.ImageView r0 = r0.mWebCloseBtn
            return r0
    }

    static long access$1200(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r2) {
            long r0 = r2.mLastDown
            return r0
    }

    static long access$1202(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0, long r1) {
            r0.mLastDown = r1
            return r1
    }

    static com.kwad.sdk.core.view.AdBaseFrameLayout access$1300(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mWebContainer
            return r0
    }

    static void access$1400(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0, int r1) {
            r0.checkRequest(r1)
            return
    }

    static boolean access$1502(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0, boolean r1) {
            r0.mCheckExposureResult = r1
            return r1
    }

    static long access$1600(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r2) {
            long r0 = r2.mStartPlayTime
            return r0
    }

    static boolean access$200(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            boolean r0 = r0.counterPaused
            return r0
    }

    static boolean access$202(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0, boolean r1) {
            r0.counterPaused = r1
            return r1
    }

    static android.os.Handler access$300(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static int access$400(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            int r0 = r0.mCount
            return r0
    }

    static int access$410(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r2) {
            int r0 = r2.mCount
            int r1 = r0 + (-1)
            r2.mCount = r1
            return r0
    }

    static boolean access$502(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0, boolean r1) {
            r0.mEnableSkip = r1
            return r1
    }

    static void access$600(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            r0.skipToEnd()
            return
    }

    static int access$700(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            int r0 = r0.mSkipCount
            return r0
    }

    static int access$710(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r2) {
            int r0 = r2.mSkipCount
            int r1 = r0 + (-1)
            r2.mSkipCount = r1
            return r0
    }

    static android.view.View access$800(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            android.view.View r0 = r0.mSkipCountDownBtn
            return r0
    }

    static android.view.View access$900(com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy r0) {
            android.view.View r0 = r0.mSkipCountDownDiv
            return r0
    }

    private void checkRequest(int r2) {
            r1 = this;
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$7 r0 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$7
            r0.<init>(r1, r2)
            com.kwad.sdk.core.network.p r2 = r1.exposureRequest()
            r0.request(r2)
            return
    }

    private com.kwad.sdk.core.network.p<com.kwad.components.core.p.d, com.kwad.components.ad.reward.model.RewardCallBackRespInfo> exposureRequest() {
            r1 = this;
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$8 r0 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$8
            r0.<init>(r1)
            return r0
    }

    private com.kwad.sdk.core.report.z.b getClientParams() {
            r2 = this;
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r1 = 0
            r0.ati = r1
            return r0
    }

    private com.kwad.sdk.core.webview.KsAdWebView.d getWebErrorListener() {
            r1 = this;
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$5 r0 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$5
            r0.<init>(r1)
            return r0
    }

    public static void launch(android.app.Activity r1, com.kwad.sdk.core.response.model.AdTemplate r2, java.lang.String r3, com.kwad.sdk.api.KsRewardVideoAd.RewardAdInteractionListener r4) {
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener = r4
            java.lang.Class<com.kwad.sdk.api.proxy.app.AdWebViewActivity> r4 = com.kwad.sdk.api.proxy.app.AdWebViewActivity.class
            java.lang.Class<com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy> r0 = com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.class
            com.kwad.sdk.service.b.a(r4, r0)
            android.content.Intent r4 = new android.content.Intent
            java.lang.Class<com.kwad.sdk.api.proxy.app.AdWebViewActivity> r0 = com.kwad.sdk.api.proxy.app.AdWebViewActivity.class
            r4.<init>(r1, r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r0)
            org.json.JSONObject r2 = r2.toJson()
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "key_template_json"
            r4.putExtra(r0, r2)
            java.lang.String r2 = "key_langingpage_url"
            r4.putExtra(r2, r3)
            r1.startActivity(r4)     // Catch: java.lang.Exception -> L2f
            r2 = 0
            r1.overridePendingTransition(r2, r2)     // Catch: java.lang.Exception -> L2f
            return
        L2f:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            com.kwad.sdk.crash.b.l(r1)
            return
    }

    private void showCloseDialog() {
            r4 = this;
            com.kwad.components.ad.reward.k r0 = r4.mCloseDialog
            if (r0 == 0) goto Lb
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lb
            return
        Lb:
            int r0 = r4.mCount
            int r0 = r0 + 1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "还差"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r0 = "秒就可以获取奖励"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.kwad.components.ad.reward.k$c r0 = com.kwad.components.ad.reward.k.H(r0)
            android.app.Activity r1 = r4.getActivity()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$9 r3 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$9
            r3.<init>(r4)
            com.kwad.components.ad.reward.k r0 = com.kwad.components.ad.reward.k.a(r1, r2, r0, r3)
            r4.mCloseDialog = r0
            return
    }

    private void skipToEnd() {
            r3 = this;
            android.view.View r0 = r3.mCountDownLayout
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r3.mWebCloseBtn
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener
            if (r0 == 0) goto L22
            boolean r2 = r3.mCheckExposureResult
            if (r2 == 0) goto L22
            r0.onRewardVerify()
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener     // Catch: java.lang.Throwable -> L1e
            r0.onRewardStepVerify(r1, r1)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L22:
            return
    }

    public void checkExposure() {
            r6 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r0.adRewardInfo
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r0 = r0.callBackStrategyInfo
            int r0 = r0.impressionCheckMs
            long r0 = (long) r0
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L2d
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            long r2 = com.kwad.sdk.core.response.b.a.Y(r2)
            r4 = 5000(0x1388, double:2.4703E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L2d
            android.os.Handler r2 = r6.mHandler
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$6 r3 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$6
            r3.<init>(r6)
            r2.postDelayed(r3, r0)
        L2d:
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r3) {
            r2 = this;
            android.content.Intent r3 = r2.getIntent()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = "key_template_json"
            java.lang.String r3 = r3.getStringExtra(r0)     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L1a
            r0.<init>()     // Catch: java.lang.Throwable -> L1a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1a
            r0.parseJson(r1)     // Catch: java.lang.Throwable -> L1a
            r2.mAdTemplate = r0     // Catch: java.lang.Throwable -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L1e:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            if (r3 != 0) goto L2b
            java.lang.String r3 = "reward"
            java.lang.String r0 = "show"
            com.kwad.sdk.i.a.ai(r3, r0)
            r3 = 0
            return r3
        L2b:
            r3 = 1
            return r3
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_activity_reward_preview
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "AdRewardPreviewActivityProxy"
            return r0
    }

    public com.kwad.sdk.utils.bi getTimerHelper() {
            r1 = this;
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            if (r0 != 0) goto Lb
            com.kwad.sdk.utils.bi r0 = new com.kwad.sdk.utils.bi
            r0.<init>()
            r1.mTimerHelper = r0
        Lb:
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            return r0
    }

    @Override
    public void initData() {
            r2 = this;
            android.content.Intent r0 = r2.getIntent()
            java.lang.String r1 = "key_langingpage_url"
            java.lang.String r0 = r0.getStringExtra(r1)
            r2.mUrl = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdStyleInfo r1 = r0.adStyleInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r1 = r1.adBrowseInfo
            int r1 = r1.adBrowseDuration
            int r0 = com.kwad.sdk.core.response.b.a.W(r0)
            r2.mCount = r1
            int r0 = java.lang.Math.min(r0, r1)
            r2.mSkipCount = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.mStartPlayTime = r0
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener
            if (r0 == 0) goto L36
            r0.onVideoPlayStart()     // Catch: java.lang.Throwable -> L32
            return
        L32:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L36:
            return
    }

    @Override
    public void initView() {
            r5 = this;
            int r0 = com.kwad.sdk.R.id.ksad_video_webview
            android.view.View r0 = r5.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r5.mAdWebView = r0
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            com.kwad.sdk.core.report.z$b r1 = r5.getClientParams()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            r1 = 0
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bk(r1)
            r2 = 1
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bm(r2)
            com.kwad.sdk.core.webview.KsAdWebView$d r2 = r5.getWebErrorListener()
            com.kwad.sdk.core.webview.a.c$a r0 = r0.b(r2)
            com.kwad.sdk.core.webview.KsAdWebView r2 = r5.mAdWebView
            r2.setClientConfig(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r5.mAdWebView
            r0.onActivityCreate()
            int r0 = com.kwad.sdk.R.id.ksad_web_close_btn
            android.view.View r0 = r5.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r5.mWebCloseBtn = r0
            int r0 = com.kwad.sdk.R.id.ksad_landing_page_root
            android.view.View r0 = r5.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            r5.mWebContainer = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_preview_logo
            android.view.View r0 = r5.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r5.mLogoView = r0
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            r0.aa(r2)
            android.widget.ImageView r0 = r5.mWebCloseBtn
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$1 r2 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$1
            r2.<init>(r5)
            r0.setOnClickListener(r2)
            int r0 = com.kwad.sdk.R.id.ksad_reward_preview_skip_layout
            android.view.View r0 = r5.findViewById(r0)
            r5.mCountDownLayout = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_preview_skip_div
            android.view.View r0 = r5.findViewById(r0)
            r5.mSkipCountDownDiv = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_preview_skip_btn
            android.view.View r0 = r5.findViewById(r0)
            r5.mSkipCountDownBtn = r0
            int r0 = com.kwad.sdk.R.id.ksad_reward_preview_skip_time
            android.view.View r0 = r5.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r5.mCountDownTips = r0
            int r0 = r5.mSkipCount
            if (r0 > 0) goto L96
            android.view.View r0 = r5.mSkipCountDownBtn
            r0.setVisibility(r1)
            android.view.View r0 = r5.mSkipCountDownDiv
            r0.setVisibility(r1)
            goto La2
        L96:
            android.view.View r0 = r5.mSkipCountDownBtn
            r2 = 8
            r0.setVisibility(r2)
            android.view.View r0 = r5.mSkipCountDownDiv
            r0.setVisibility(r2)
        La2:
            android.view.View r0 = r5.mSkipCountDownBtn
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$2 r2 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$2
            r2.<init>(r5)
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r5.mCountDownTips
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "激励领取视频还有"
            r2.<init>(r3)
            int r3 = r5.mCount
            r2.append(r3)
            java.lang.String r3 = "秒"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.setText(r2)
            android.os.Handler r0 = r5.mHandler
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$3 r2 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$3
            r2.<init>(r5)
            r3 = 1000(0x3e8, double:4.94E-321)
            r0.postDelayed(r2, r3)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r2 = r5.mUrl
            if (r2 == 0) goto L117
            com.kwad.components.core.e.d.c r2 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            r2.<init>(r3)
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L117
            boolean r0 = com.kwad.sdk.core.config.d.zo()
            if (r0 == 0) goto L117
            android.app.Activity r0 = r5.getActivity()
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            if (r0 == 0) goto L117
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.app.Activity r3 = r5.getActivity()
            r0.<init>(r3)
            com.kwad.components.core.e.d.a$a r0 = r0.am(r1)
            com.kwad.components.core.e.d.a$a r0 = r0.an(r1)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r3)
            com.kwad.components.core.e.d.a$a r0 = r0.ap(r1)
            r2.m(r0)
        L117:
            java.lang.String r0 = r5.mUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L122
            java.lang.String r0 = r5.mUrl
            goto L12c
        L122:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aK(r0)
        L12c:
            com.kwad.sdk.core.webview.KsAdWebView r1 = r5.mAdWebView
            r1.loadUrl(r0)
            com.kwad.sdk.utils.bi r0 = r5.getTimerHelper()
            r0.startTiming()
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r5.mWebContainer
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$4 r1 = new com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy$4
            r1.<init>(r5)
            r0.a(r1)
            return
    }

    @Override
    public void onActivityCreate() {
            r2 = this;
            super.onActivityCreate()
            java.lang.String r0 = "reward"
            java.lang.String r1 = "show"
            com.kwad.sdk.i.a.ai(r0, r1)
            return
    }

    @Override
    public void onBackPressed() {
            r5 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r5.mAdWebView
            if (r0 == 0) goto L15
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L15
            com.kwad.sdk.core.webview.KsAdWebView r0 = r5.mAdWebView
            r0.goBack()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.report.a.aB(r0)
            return
        L15:
            boolean r0 = r5.mEnableSkip
            if (r0 == 0) goto L39
            super.onBackPressed()
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener
            if (r0 == 0) goto L28
            r0.onVideoPlayEnd()     // Catch: java.lang.Throwable -> L24
            goto L28
        L24:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L28:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            r1 = 11
            com.kwad.sdk.utils.bi r2 = r5.getTimerHelper()
            long r2 = r2.getTime()
            r4 = 0
            com.kwad.sdk.core.report.a.a(r0, r1, r2, r4)
            return
        L39:
            r5.showCloseDialog()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r3 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_REWARD
            java.lang.String r1 = "adShowSuccess"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.buildMethodCheck(r0, r1)
            r3.report()
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            com.kwad.sdk.api.KsRewardVideoAd$RewardAdInteractionListener r0 = com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener
            if (r0 == 0) goto L7
            r0.onPageDismiss()
        L7:
            r0 = 0
            com.kwad.components.ad.reward.page.AdRewardPreviewActivityProxy.mInteractionListener = r0
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.mAdWebView
            if (r1 == 0) goto L13
            r1.onActivityDestroy()
            r2.mAdWebView = r0
        L13:
            super.onDestroy()
            android.os.Handler r1 = r2.mHandler
            r1.removeCallbacksAndMessages(r0)
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            r0 = 0
            r1.overridePendingTransition(r0, r0)
            com.kwad.sdk.utils.bi r0 = r1.getTimerHelper()
            r0.Kc()
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
