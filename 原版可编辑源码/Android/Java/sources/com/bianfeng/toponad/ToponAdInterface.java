package com.bianfeng.toponad;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.util.Log;
import com.bianfeng.toponad.common.SplashConstants;
import com.bianfeng.toponad.ui.TopOnAdApi;
import com.bianfeng.toponad.ui.TopOnAdCallBack;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnUtilsdk;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.bykv.vk.openvk.TTCustomController;
import com.kuaishou.weapon.p0.g;
import com.tkay.china.api.TYChinaSDKHandler;
import com.tkay.core.api.DeviceInfoCallback;
import com.tkay.core.api.TYSDK;
import com.tkay.network.toutiao.TTTYInitManager;

@YPlugin(entrance = YPlugin.Entrance.APPLICATION, strategy = YPlugin.Policy.FORCE)
public class ToponAdInterface extends YmnPluginWrapper {
    private static final String TOPONAD_CLOSE_BANNER = "topon_close_banner_ad";
    private static final String TOPONAD_CLOSE_INTERSTIAL = "topon_close_interstitial_ad";
    private static final String TOPONAD_CLOSE_NATIVE = "toponad_close_native_ad";
    private static final String TOPONAD_CLOSE_REWARDVIDEO = "topon_close_rewardvideo_ad";
    private static final String TOPONAD_LOAD_BANNER = "topon_load_banner_ad";
    private static final String TOPONAD_LOAD_INTERSTIAL = "topon_load_interstitial_ad";
    private static final String TOPONAD_LOAD_NATIVE = "toponad_load_native_ad";
    private static final String TOPONAD_LOAD_REWARDVIDEO = "topon_load_rewardvideo_ad";
    private static final String TOPONAD_SHOW_BANNER = "topon_show_banner_ad";
    private static final String TOPONAD_SHOW_INTERSTIAL = "topon_show_interstitial_ad";
    private static final String TOPONAD_SHOW_NATIVE = "toponad_show_native_ad";
    private static final String TOPONAD_SHOW_REWARDVIDEO = "topon_show_rewardvideo_ad";
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
    private boolean isInited = false;
    private TopOnAdCallBack callback = new TopOnAdCallBack() {
        @Override
        public void onADClicked(String str) {
            Logger.i("那种广告的点击" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_CLICK_ACTION, str);
        }

        @Override
        public void onADDismissed(String str) {
            Logger.i("那种广告的关掉" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_CLOSE_ACTION, str);
        }

        @Override
        public void onNoAD(String str, String str2) {
            Logger.i("那种广告的错误" + str + "|errMessage：" + str2);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_ERROR_ACTION, str + "|" + str2);
        }

        @Override
        public void onADPresent(String str) {
            Logger.i("那种广告的展示" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_SHOW_ACTION, str);
        }

        @Override
        public void onAdReady(String str) {
            Logger.i("那种广告的准备" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_READY_ACTION, str);
        }

        @Override
        public void onCompletedAd(String str) {
            Logger.i("那种广告的完成" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_COMPLETE_ACTION, str);
        }

        @Override
        public void onAdLoaded(String str) {
            Logger.i("那种广告的已加载过" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_LOADED_ACTION, str);
        }

        @Override
        public void onRewardVerifyAd(String str) {
            Logger.i("那种广告的激励校验" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_VERIFY_ACTION, str);
        }

        @Override
        public void onAdLoading(String str) {
            Logger.i("那种广告的正在加载中" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_LOADING_ACTION, str);
        }

        @Override
        public void onAdLoadApi(String str) {
            Logger.i("那种广告的调起加载api" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_LOAD_API_ACTION, str);
        }

        @Override
        public void onAdShowCheckFail(String str) {
            Logger.i("那种广告的显示校验失败" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_ChECK_FAIL_ACTION, str);
        }

        @Override
        public void onAdShowApi(String str) {
            Logger.i("那种广告的显示api调用" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_SHOW_API_ACTION, str);
        }

        @Override
        public void onAdShowFail(String str) {
            Logger.i("那种广告的显示失败" + str);
            ToponAdInterface.this.sendResult(ToponAdInterface.TOPON_AD_SHOW_FAIL_ACTION, str);
        }
    };
    private boolean isFirst = true;

    @Override
    public String getPluginId() {
        return "121";
    }

    @Override
    public String getPluginName() {
        return "toponad";
    }

    @Override
    public int getPluginVersion() {
        return 36;
    }

    @Override
    public String getSdkVersion() {
        return "6.1.74";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        TopOnAdApi.setYSDKAdCallBack(this.callback);
        TYChinaSDKHandler.setAllowUseMdidSDK(false);
        if (UtilsLogger.getShowDebugLog()) {
            TYSDK.setNetworkLogDebug(true);
            TYSDK.integrationChecking(context);
            TYSDK.testModeDeviceInfo(context, new DeviceInfoCallback() {
                @Override
                public void deviceInfo(String str) {
                    Log.e("zzx", str);
                }
            });
        } else {
            TYSDK.setNetworkLogDebug(false);
        }
        if (YmnUtilsdk.isAgreeprivacy()) {
            initTopon(context);
        }
    }

    @Override
    public void onContextChanged(Context context) {
        if (this.isFirst) {
            ResourceHelper.initResourceR(context);
            this.isFirst = false;
        }
        if (!(context instanceof Activity) || this.isInited) {
            return;
        }
        initTopon(context);
    }

    @YFunction(name = TOPONAD_LOAD_REWARDVIDEO)
    public void loadRewardvideo(String str) {
        Logger.i("加载激励视频广告" + str);
        TopOnAdApi.loadRewardVideoAd(getActivity(), str);
    }

    @YFunction(name = TOPONAD_SHOW_REWARDVIDEO)
    public void showRewardvideo() {
        Logger.i("显示激励视频广告");
        TopOnAdApi.showRewardVideoAd();
    }

    @YFunction(name = TOPONAD_CLOSE_REWARDVIDEO)
    public void closeRewardvideo() {
        Logger.i("关闭激励视频广告");
        TopOnAdApi.closeRewardVideoAd();
    }

    @YFunction(name = TOPONAD_LOAD_INTERSTIAL)
    public void loadInterstial(String str) {
        Logger.i("加载插屏广告");
        TopOnAdApi.loadInterstial(getActivity(), str);
    }

    @YFunction(name = TOPONAD_SHOW_INTERSTIAL)
    public void showInterstial() {
        Logger.i("显示插屏广告");
        TopOnAdApi.showInterstial();
    }

    @YFunction(name = TOPONAD_CLOSE_INTERSTIAL)
    public void closeInterstial() {
        Logger.i("关闭插屏广告");
        TopOnAdApi.closeInterstial();
    }

    @YFunction(name = TOPONAD_LOAD_BANNER)
    public void loadBanner(String str, String str2, String str3, String str4, String str5, String str6) {
        Logger.i("加载banner广告");
        TopOnAdApi.loadBanner(getActivity(), str, str2, str3, str4, str5, str6);
    }

    @YFunction(name = TOPONAD_SHOW_BANNER)
    public void showBanner() {
        Logger.i("显示banner广告");
        TopOnAdApi.showBanner();
    }

    @YFunction(name = TOPONAD_CLOSE_BANNER)
    public void closeBanner() {
        Logger.i("关闭banner广告");
        TopOnAdApi.closeBanner();
    }

    @YFunction(name = TOPONAD_LOAD_NATIVE)
    public void loadNative(String str, String str2, String str3, String str4, String str5, String str6) {
        Logger.i("加载Native广告");
        TopOnAdApi.loadBanner(getActivity(), str, str2, str3, str4, str5, str6);
    }

    @YFunction(name = TOPONAD_SHOW_NATIVE)
    public void showNative() {
        Logger.i("显示Native广告");
        TopOnAdApi.showBanner();
    }

    @YFunction(name = TOPONAD_CLOSE_NATIVE)
    public void closeNative() {
        Logger.i("关闭Native广告");
        TopOnAdApi.closeBanner();
    }

    public void initTopon(final Context context) {
        TTTYInitManager.getInstance().setTtCustomController(new TTCustomController() {
            @Override
            public boolean isCanUseLocation() {
                return Build.VERSION.SDK_INT < 23 || context.checkSelfPermission(g.g) == 0;
            }

            @Override
            public boolean isCanUsePhoneState() {
                return Build.VERSION.SDK_INT < 23 || context.checkSelfPermission("android.permission.READ_PHONE_STATE") == 0;
            }

            @Override
            public boolean isCanUseWriteExternal() {
                return Build.VERSION.SDK_INT < 23 || context.checkSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE") == 0;
            }
        });
        TYSDK.init(context, getMetaData(SplashConstants.TOPONAD_APP_ID), getMetaData(SplashConstants.TOPONAD_APP_KEY));
        this.isInited = true;
    }
}
