package com.kwad.components.core.page;

@com.kwad.sdk.api.core.KsAdSdkDynamicImpl(com.kwad.sdk.api.proxy.app.AdWebViewActivity.class)
public class DownloadLandPageActivity extends com.kwad.components.core.l.b<com.kwad.components.core.page.b.d> {
    public static final java.lang.String KEY_NEED_CLOSE_REWARD = "key_close_reward";
    public static final java.lang.String KEY_TEMPLATE = "key_template_json";
    private static final java.lang.String TAG = "DownloadLandPageActivity";
    public static boolean showingAdWebViewLandPage;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private android.widget.ImageView mBackIcon;
    private android.widget.ImageView mCloseIcon;
    private com.kwad.components.core.video.DetailVideoView mDetailVideoView;
    private boolean mIsRewardLandPage;
    private com.kwad.sdk.widget.KSRelativeLayout mKsadVideoContainer;
    private com.kwad.components.core.page.c.a mPlayModule;
    private android.widget.ImageView mVideoBlurBg;
    private android.widget.ImageView mVideoCover;
    private com.kwad.components.core.video.k mVideoPlayStateListener;









    static {
            return
    }

    public DownloadLandPageActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate access$000(com.kwad.components.core.page.DownloadLandPageActivity r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static void access$100(com.kwad.components.core.page.DownloadLandPageActivity r0) {
            r0.initNativeLandPage()
            return
    }

    static com.kwad.components.core.e.d.c access$200(com.kwad.components.core.page.DownloadLandPageActivity r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    static boolean access$300(com.kwad.components.core.page.DownloadLandPageActivity r0) {
            boolean r0 = r0.mIsRewardLandPage
            return r0
    }

    static android.widget.ImageView access$400(com.kwad.components.core.page.DownloadLandPageActivity r0) {
            android.widget.ImageView r0 = r0.mVideoCover
            return r0
    }

    static android.widget.ImageView access$500(com.kwad.components.core.page.DownloadLandPageActivity r0) {
            android.widget.ImageView r0 = r0.mCloseIcon
            return r0
    }

    private void buildView(com.kwad.components.core.widget.ComplianceTextView r4, com.kwad.sdk.widget.KSLinearLayout r5, com.kwad.components.core.widget.KsLogoView r6) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r0)
            if (r0 != 0) goto L41
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r4 = (android.widget.FrameLayout.LayoutParams) r4
            r0 = 80
            r4.gravity = r0
            boolean r4 = com.kwad.sdk.utils.ai.IN()
            r0 = 0
            if (r4 != 0) goto L31
            android.view.ViewGroup$LayoutParams r4 = r6.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r4 = (android.view.ViewGroup.MarginLayoutParams) r4
            android.content.Context r1 = r3.mContext
            r2 = 1120403456(0x42c80000, float:100.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            r4.setMargins(r0, r0, r0, r1)
            r6.setLayoutParams(r4)
        L31:
            r6.setVisibility(r0)
            android.view.ViewGroup$LayoutParams r4 = r5.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r4 = (android.widget.FrameLayout.LayoutParams) r4
            r6 = 17
            r4.gravity = r6
            r5.setLayoutParams(r4)
        L41:
            return
    }

    private com.kwad.components.core.video.k getVideoPlayStateListener() {
            r1 = this;
            com.kwad.components.core.page.DownloadLandPageActivity$6 r0 = new com.kwad.components.core.page.DownloadLandPageActivity$6
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            return r0
    }

    private com.kwad.components.core.page.b.f.a getWebViewStateListener() {
            r1 = this;
            com.kwad.components.core.page.DownloadLandPageActivity$3 r0 = new com.kwad.components.core.page.DownloadLandPageActivity$3
            r0.<init>(r1)
            return r0
    }

    private void handleCloseBtn() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            long r0 = com.kwad.sdk.core.response.b.a.ae(r0)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L13
            android.widget.ImageView r0 = r4.mCloseIcon
            r1 = 0
            r0.setVisibility(r1)
            goto L1d
        L13:
            android.widget.ImageView r2 = r4.mCloseIcon
            com.kwad.components.core.page.DownloadLandPageActivity$7 r3 = new com.kwad.components.core.page.DownloadLandPageActivity$7
            r3.<init>(r4)
            r2.postDelayed(r3, r0)
        L1d:
            android.widget.ImageView r0 = r4.mCloseIcon
            com.kwad.components.core.page.DownloadLandPageActivity$8 r1 = new com.kwad.components.core.page.DownloadLandPageActivity$8
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            return
    }

    private void initNativeLandPage() {
            r8 = this;
            int r0 = com.kwad.sdk.R.id.ksad_ad_land_page_native
            android.view.View r0 = r8.findViewById(r0)
            r1 = 0
            r0.setVisibility(r1)
            int r0 = com.kwad.sdk.R.id.ksad_compliance_view
            android.view.View r0 = r8.findViewById(r0)
            com.kwad.components.core.widget.ComplianceTextView r0 = (com.kwad.components.core.widget.ComplianceTextView) r0
            r0.setVisibility(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r8.mAdTemplate
            r0.setAdTemplate(r1)
            int r1 = com.kwad.sdk.R.id.ksad_ad_cover
            android.view.View r1 = r8.findViewById(r1)
            com.kwad.sdk.core.page.widget.RoundAngleImageView r1 = (com.kwad.sdk.core.page.widget.RoundAngleImageView) r1
            int r2 = com.kwad.sdk.R.id.ksad_ad_title
            android.view.View r2 = r8.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            int r3 = com.kwad.sdk.R.id.ksad_ad_info
            android.view.View r3 = r8.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            int r4 = com.kwad.sdk.R.id.ksad_info_container
            android.view.View r4 = r8.findViewById(r4)
            com.kwad.sdk.widget.KSLinearLayout r4 = (com.kwad.sdk.widget.KSLinearLayout) r4
            int r5 = com.kwad.sdk.R.id.ksad_land_page_logo
            android.view.View r5 = r8.findViewById(r5)
            com.kwad.components.core.widget.KsLogoView r5 = (com.kwad.components.core.widget.KsLogoView) r5
            int r6 = com.kwad.sdk.R.id.ksad_web_download_progress
            android.view.View r6 = r8.findViewById(r6)
            com.kwad.sdk.widget.DownloadProgressBar r6 = (com.kwad.sdk.widget.DownloadProgressBar) r6
            com.kwad.sdk.core.response.model.AdTemplate r7 = r8.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r7 = com.kwad.sdk.core.response.b.d.cg(r7)
            r8.setAdTitle(r2, r7)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r7.adBaseInfo
            java.lang.String r2 = r2.adDescription
            r3.setText(r2)
            r2 = 1107296256(0x42000000, float:32.0)
            r1.setRadius(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r7)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L72
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r7)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r8.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r2, r3)
        L72:
            r8.setAdkDownload(r6, r7)
            r8.buildView(r0, r4, r5)
            return
    }

    public static void launch(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3, boolean r4) {
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L9
            java.lang.Class<com.kwad.sdk.api.proxy.app.AdWebViewActivity> r0 = com.kwad.sdk.api.proxy.app.AdWebViewActivity.class
            goto Lb
        L9:
            java.lang.Class<com.kwad.sdk.api.proxy.app.KsFullScreenLandScapeVideoActivity> r0 = com.kwad.sdk.api.proxy.app.KsFullScreenLandScapeVideoActivity.class
        Lb:
            java.lang.Class<com.kwad.components.core.page.DownloadLandPageActivity> r1 = com.kwad.components.core.page.DownloadLandPageActivity.class
            com.kwad.sdk.service.b.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r2, r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r0)
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "key_template_json"
            r1.putExtra(r0, r3)
            java.lang.String r3 = "key_close_reward"
            r1.putExtra(r3, r4)
            r2.startActivity(r1)
            return
    }

    private void loadBlurImage(java.lang.String r4, android.widget.ImageView r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            r5.setVisibility(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r1 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r1.<init>()
            r2 = 50
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r1 = r1.setBlurRadius(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r1 = r1.build()
            com.kwad.components.core.page.DownloadLandPageActivity$2 r2 = new com.kwad.components.core.page.DownloadLandPageActivity$2
            r2.<init>(r3)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r5, r4, r0, r1, r2)
            return
    }

    private void setAdTitle(android.widget.TextView r2, com.kwad.sdk.core.response.model.AdInfo r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r0 = r0.appName
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r3.adBaseInfo
            java.lang.String r3 = r3.appName
            r2.setText(r3)
            return
        L12:
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r3.advertiserInfo
            java.lang.String r0 = r0.rawUserName
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r3 = r3.advertiserInfo
            java.lang.String r3 = r3.rawUserName
            r2.setText(r3)
        L23:
            return
    }

    private void setAdkDownload(com.kwad.sdk.widget.DownloadProgressBar r4, com.kwad.sdk.core.response.model.AdInfo r5) {
            r3 = this;
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r5)
            if (r0 == 0) goto L1c
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            com.kwad.components.core.page.DownloadLandPageActivity$4 r2 = new com.kwad.components.core.page.DownloadLandPageActivity$4
            r2.<init>(r3, r4, r5)
            r0.<init>(r1, r2)
            r3.mApkDownloadHelper = r0
            com.kwad.components.core.page.DownloadLandPageActivity$5 r5 = new com.kwad.components.core.page.DownloadLandPageActivity$5
            r5.<init>(r3)
            r4.setOnClickListener(r5)
        L1c:
            return
    }

    private void setVideoData() {
            r3 = this;
            com.kwad.sdk.widget.KSRelativeLayout r0 = r3.mKsadVideoContainer
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            r2 = -1
            if (r1 == 0) goto L1c
            android.content.Context r1 = r3.mContext
            int r1 = com.kwad.sdk.d.a.a.getScreenWidth(r1)
            int r1 = r1 * 9
            int r1 = r1 / 16
            r0.height = r1
            r0.width = r2
            goto L28
        L1c:
            android.content.Context r1 = r3.mContext
            int r1 = com.kwad.sdk.d.a.a.getScreenWidth(r1)
            int r1 = r1 / 2
            r0.width = r1
            r0.height = r2
        L28:
            com.kwad.sdk.widget.KSRelativeLayout r1 = r3.mKsadVideoContainer
            r1.setLayoutParams(r0)
            com.kwad.sdk.widget.KSRelativeLayout r0 = r3.mKsadVideoContainer
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            android.widget.ImageView r1 = r3.mVideoCover
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2)
            return
    }

    @Override
    public boolean checkIntentData(android.content.Intent r3) {
            r2 = this;
            android.content.Intent r3 = r2.getIntent()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = "key_template_json"
            java.lang.String r3 = r3.getStringExtra(r0)     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.core.response.model.AdTemplate r0 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Throwable -> L1c
            r0.<init>()     // Catch: java.lang.Throwable -> L1c
            if (r3 == 0) goto L19
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1c
            r0.parseJson(r1)     // Catch: java.lang.Throwable -> L1c
        L19:
            r2.mAdTemplate = r0     // Catch: java.lang.Throwable -> L1c
            goto L20
        L1c:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L20:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            if (r3 == 0) goto L26
            r3 = 1
            return r3
        L26:
            r3 = 0
            return r3
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 == 0) goto L9
            int r0 = com.kwad.sdk.R.layout.ksad_activity_ad_land_page
            return r0
        L9:
            int r0 = com.kwad.sdk.R.layout.ksad_activity_land_page_horizontal
            return r0
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "DownloadLandPageActivity"
            return r0
    }

    @Override
    public void initData() {
            r3 = this;
            r0 = 1
            com.kwad.components.core.page.DownloadLandPageActivity.showingAdWebViewLandPage = r0
            android.content.Intent r0 = r3.getIntent()
            java.lang.String r1 = "key_close_reward"
            r2 = 0
            boolean r0 = r0.getBooleanExtra(r1, r2)
            r3.mIsRewardLandPage = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r3.mAdInfo = r0
            return
    }

    @Override
    public void initView() {
            r4 = this;
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.widget.KSRelativeLayout r0 = (com.kwad.sdk.widget.KSRelativeLayout) r0
            int r1 = com.kwad.sdk.R.id.ksad_video_container
            android.view.View r1 = r4.findViewById(r1)
            com.kwad.sdk.widget.KSRelativeLayout r1 = (com.kwad.sdk.widget.KSRelativeLayout) r1
            r4.mKsadVideoContainer = r1
            int r1 = com.kwad.sdk.R.id.ksad_video_player
            android.view.View r1 = r0.findViewById(r1)
            com.kwad.components.core.video.DetailVideoView r1 = (com.kwad.components.core.video.DetailVideoView) r1
            r4.mDetailVideoView = r1
            int r2 = com.kwad.sdk.core.config.d.zX()
            r3 = 1
            r1.f(r3, r2)
            int r1 = com.kwad.sdk.R.id.ksad_video_blur_bg
            android.view.View r1 = r0.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            r4.mVideoBlurBg = r1
            int r1 = com.kwad.sdk.R.id.ksad_back_icon
            android.view.View r1 = r0.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            r4.mBackIcon = r1
            int r1 = com.kwad.sdk.R.id.ksad_right_close
            android.view.View r1 = r0.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            r4.mCloseIcon = r1
            int r1 = com.kwad.sdk.R.id.ksad_video_cover
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.mVideoCover = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            int r0 = r0.size()
            if (r0 <= 0) goto L6a
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = (com.kwad.sdk.core.response.model.AdInfo) r0
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.P(r0)
            android.widget.ImageView r1 = r4.mVideoBlurBg
            r4.loadBlurImage(r0, r1)
        L6a:
            android.widget.ImageView r0 = r4.mBackIcon
            com.kwad.components.core.page.DownloadLandPageActivity$1 r1 = new com.kwad.components.core.page.DownloadLandPageActivity$1
            r1.<init>(r4)
            r0.setOnClickListener(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r0)
            if (r0 == 0) goto L83
            r4.setVideoData()
        L83:
            boolean r0 = r4.mIsRewardLandPage
            if (r0 == 0) goto L8a
            r4.handleCloseBtn()
        L8a:
            return
    }

    @Override
    public com.kwad.components.core.l.a onCreateCallerContext() {
            r1 = this;
            com.kwad.components.core.page.b.d r0 = r1.onCreateCallerContext()
            return r0
    }

    @Override
    protected com.kwad.components.core.page.b.d onCreateCallerContext() {
            r6 = this;
            com.kwad.components.core.page.b.d r0 = new com.kwad.components.core.page.b.d
            r0.<init>(r6)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 == 0) goto L49
            android.content.Context r1 = r6.mContext
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.al(r1)
            r2 = 1
            r1.aJ(r2)
            com.kwad.components.core.page.c.a r1 = new com.kwad.components.core.page.c.a
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.mAdTemplate
            com.kwad.components.core.video.DetailVideoView r4 = r6.mDetailVideoView
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r5 = new com.kwad.sdk.api.KsVideoPlayConfig$Builder
            r5.<init>()
            com.kwad.sdk.api.KsVideoPlayConfig$Builder r2 = r5.videoSoundEnable(r2)
            com.kwad.sdk.api.KsVideoPlayConfig r2 = r2.build()
            r1.<init>(r3, r4, r2)
            r6.mPlayModule = r1
            r0.mPlayModule = r1
            com.kwad.components.core.page.c.a r1 = r6.mPlayModule
            com.kwad.components.core.video.k r2 = r6.getVideoPlayStateListener()
            r1.a(r2)
            java.util.List<com.kwad.components.core.l.a.a> r1 = r0.Lg
            com.kwad.components.core.page.c.a r2 = r6.mPlayModule
            r1.add(r2)
        L49:
            return r0
    }

    @Override
    public com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            r4 = this;
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 == 0) goto L19
            com.kwad.components.core.page.b.e r1 = new com.kwad.components.core.page.b.e
            r1.<init>()
            r0.a(r1)
        L19:
            com.kwad.components.core.page.b.f r1 = new com.kwad.components.core.page.b.f
            com.kwad.components.core.page.b.f$a r2 = r4.getWebViewStateListener()
            boolean r3 = r4.mIsRewardLandPage
            r1.<init>(r2, r3)
            r0.a(r1)
            return r0
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 0
            com.kwad.components.core.page.DownloadLandPageActivity.showingAdWebViewLandPage = r0
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            if (r0 == 0) goto Ld
            r0.clear()
        Ld:
            com.kwad.components.core.page.c.a r0 = r1.mPlayModule
            if (r0 == 0) goto L14
            r0.release()
        L14:
            return
    }
}
