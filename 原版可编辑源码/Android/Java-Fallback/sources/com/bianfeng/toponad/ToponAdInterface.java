package com.bianfeng.toponad;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class ToponAdInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final java.lang.String TOPONAD_CLOSE_BANNER = "topon_close_banner_ad";
    private static final java.lang.String TOPONAD_CLOSE_INTERSTIAL = "topon_close_interstitial_ad";
    private static final java.lang.String TOPONAD_CLOSE_NATIVE = "toponad_close_native_ad";
    private static final java.lang.String TOPONAD_CLOSE_REWARDVIDEO = "topon_close_rewardvideo_ad";
    private static final java.lang.String TOPONAD_LOAD_BANNER = "topon_load_banner_ad";
    private static final java.lang.String TOPONAD_LOAD_INTERSTIAL = "topon_load_interstitial_ad";
    private static final java.lang.String TOPONAD_LOAD_NATIVE = "toponad_load_native_ad";
    private static final java.lang.String TOPONAD_LOAD_REWARDVIDEO = "topon_load_rewardvideo_ad";
    private static final java.lang.String TOPONAD_SHOW_BANNER = "topon_show_banner_ad";
    private static final java.lang.String TOPONAD_SHOW_INTERSTIAL = "topon_show_interstitial_ad";
    private static final java.lang.String TOPONAD_SHOW_NATIVE = "toponad_show_native_ad";
    private static final java.lang.String TOPONAD_SHOW_REWARDVIDEO = "topon_show_rewardvideo_ad";
    private static final int TOPON_AD_CLICK_ACTION = 121000;
    private static final int TOPON_AD_CLOSE_ACTION = 121001;
    private static final int TOPON_AD_COMPLETE_ACTION = 121005;
    private static final int TOPON_AD_ChECK_FAIL_ACTION = 121010;
    private static final int TOPON_AD_ERROR_ACTION = 121002;
    private static final int TOPON_AD_LOADED_ACTION = 121007;
    private static final int TOPON_AD_LOADING_ACTION = 121008;
    private static final int TOPON_AD_LOAD_API_ACTION = 121009;
    private static final int TOPON_AD_READY_ACTION = 121004;
    private static final int TOPON_AD_SHOW_ACTION = 121003;
    private static final int TOPON_AD_SHOW_API_ACTION = 121011;
    private static final int TOPON_AD_SHOW_FAIL_ACTION = 121012;
    private static final int TOPON_AD_VERIFY_ACTION = 121006;
    private com.bianfeng.toponad.ui.TopOnAdCallBack callback;
    private boolean isFirst;
    private boolean isInited;




    public ToponAdInterface() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isInited = r0
            com.bianfeng.toponad.ToponAdInterface$1 r0 = new com.bianfeng.toponad.ToponAdInterface$1
            r0.<init>(r1)
            r1.callback = r0
            r0 = 1
            r1.isFirst = r0
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_close_banner_ad")
    public void closeBanner() {
            r1 = this;
            java.lang.String r0 = "关闭banner广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.closeBanner()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_close_interstitial_ad")
    public void closeInterstial() {
            r1 = this;
            java.lang.String r0 = "关闭插屏广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.closeInterstial()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "toponad_close_native_ad")
    public void closeNative() {
            r1 = this;
            java.lang.String r0 = "关闭Native广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.closeBanner()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_close_rewardvideo_ad")
    public void closeRewardvideo() {
            r1 = this;
            java.lang.String r0 = "关闭激励视频广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.closeRewardVideoAd()
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "121"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "toponad"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 36
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "6.1.74"
            return r0
    }

    public void initTopon(android.content.Context r3) {
            r2 = this;
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            com.bianfeng.toponad.ToponAdInterface$3 r1 = new com.bianfeng.toponad.ToponAdInterface$3
            r1.<init>(r2, r3)
            r0.setTtCustomController(r1)
            java.lang.String r0 = "TOPON_APP_ID"
            java.lang.String r0 = r2.getMetaData(r0)
            java.lang.String r1 = "TOPON_APP_KEY"
            java.lang.String r1 = r2.getMetaData(r1)
            com.tkay.core.api.TYSDK.init(r3, r0, r1)
            r3 = 1
            r2.isInited = r3
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_load_banner_ad")
    public void loadBanner(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r8 = this;
            java.lang.String r0 = "加载banner广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.app.Activity r1 = r8.getActivity()
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            com.bianfeng.toponad.ui.TopOnAdApi.loadBanner(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_load_interstitial_ad")
    public void loadInterstial(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "加载插屏广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.app.Activity r0 = r1.getActivity()
            com.bianfeng.toponad.ui.TopOnAdApi.loadInterstial(r0, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "toponad_load_native_ad")
    public void loadNative(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r8 = this;
            java.lang.String r0 = "加载Native广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.app.Activity r1 = r8.getActivity()
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            com.bianfeng.toponad.ui.TopOnAdApi.loadBanner(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_load_rewardvideo_ad")
    public void loadRewardvideo(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "加载激励视频广告"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.toponad.ui.TopOnAdApi.loadRewardVideoAd(r0, r3)
            return
    }

    @Override
    public void onContextChanged(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.isFirst
            if (r0 == 0) goto La
            com.bianfeng.toponad.ResourceHelper.initResourceR(r2)
            r0 = 0
            r1.isFirst = r0
        La:
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L15
            boolean r0 = r1.isInited
            if (r0 != 0) goto L15
            r1.initTopon(r2)
        L15:
            return
    }

    @Override
    public void onInit(android.content.Context r3) {
            r2 = this;
            super.onInit(r3)
            com.bianfeng.toponad.ui.TopOnAdCallBack r0 = r2.callback
            com.bianfeng.toponad.ui.TopOnAdApi.setYSDKAdCallBack(r0)
            r0 = 0
            com.tkay.china.api.TYChinaSDKHandler.setAllowUseMdidSDK(r0)
            boolean r1 = com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.getShowDebugLog()
            if (r1 == 0) goto L22
            r0 = 1
            com.tkay.core.api.TYSDK.setNetworkLogDebug(r0)
            com.tkay.core.api.TYSDK.integrationChecking(r3)
            com.bianfeng.toponad.ToponAdInterface$2 r0 = new com.bianfeng.toponad.ToponAdInterface$2
            r0.<init>(r2)
            com.tkay.core.api.TYSDK.testModeDeviceInfo(r3, r0)
            goto L25
        L22:
            com.tkay.core.api.TYSDK.setNetworkLogDebug(r0)
        L25:
            boolean r0 = com.bianfeng.ymnsdk.util.YmnUtilsdk.isAgreeprivacy()
            if (r0 == 0) goto L2e
            r2.initTopon(r3)
        L2e:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_show_banner_ad")
    public void showBanner() {
            r1 = this;
            java.lang.String r0 = "显示banner广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.showBanner()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_show_interstitial_ad")
    public void showInterstial() {
            r1 = this;
            java.lang.String r0 = "显示插屏广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.showInterstial()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "toponad_show_native_ad")
    public void showNative() {
            r1 = this;
            java.lang.String r0 = "显示Native广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.showBanner()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "topon_show_rewardvideo_ad")
    public void showRewardvideo() {
            r1 = this;
            java.lang.String r0 = "显示激励视频广告"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.toponad.ui.TopOnAdApi.showRewardVideoAd()
            return
    }
}
