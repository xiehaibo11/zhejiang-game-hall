package com.bykv.vk.openvk;

import android.content.Context;
import android.os.Bundle;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import com.bykv.vk.openvk.TTCodeGroupRit;
import com.bykv.vk.openvk.api.plugin.fw;
import com.bykv.vk.openvk.api.rg;
import com.bykv.vk.openvk.live.df;
import com.heytap.mcssdk.constant.MessageConstant;
import java.util.Map;

public final class TTVfSdk {
    public static final String INITIALIZER_CLASS_NAME = "com.bykv.vk.openvk.core.AdSdkInitializerHolder";
    private static final TTInitializer rg = new fw();

    public interface InitCallback {
        void fail(int i, String str);

        void success();
    }

    public static boolean isInitSuccess() {
        TTInitializer tTInitializer = rg;
        if (tTInitializer != null) {
            return tTInitializer.isInitSuccess();
        }
        return false;
    }

    public static void init(Context context, TTVfConfig tTVfConfig, InitCallback initCallback) {
        rg(context, tTVfConfig);
        Context applicationContext = context.getApplicationContext();
        TTInitializer tTInitializer = rg;
        if (tTInitializer == null) {
            initCallback.fail(MessageConstant.MessageType.MESSAGE_ALARM, "Load initializer failed");
        } else {
            tTInitializer.init(applicationContext, tTVfConfig, initCallback);
        }
    }

    private static void rg(Context context, TTVfConfig tTVfConfig) {
        if (tTVfConfig != null && tTVfConfig.isDebug()) {
            rg.rg();
        }
        if (Looper.getMainLooper() != Looper.myLooper()) {
            rg.rg("Wrong Thread ! Please exec TTAdSdk.init in main thread.");
        }
        rg(context, "Context is null, please check.");
        rg(tTVfConfig, "TTAdConfig is null, please check.");
        TTAppContextHolder.setContext(context);
        updateConfigAuth(tTVfConfig);
        tTVfConfig.setExtra(TTVfConstant.PANGLE_INIT_START_TIME, Long.valueOf(SystemClock.elapsedRealtime()));
        tTVfConfig.setExtra(TTVfConstant.KEY_S_C, "oppo");
        tTVfConfig.setExtra(TTVfConstant.KEY_L_S, true);
        tTVfConfig.setExtra(TTVfConstant.KEY_EXT_API_CODE, 999);
    }

    public static TTVfManager getVfManager() {
        TTInitializer tTInitializer = rg;
        if (tTInitializer != null) {
            return tTInitializer.getAdManager();
        }
        return null;
    }

    public static void updateAdConfig(TTVfConfig tTVfConfig) {
        TTVfManager adManager;
        if (tTVfConfig == null || (adManager = rg.getAdManager()) == null) {
            return;
        }
        Bundle bundle = new Bundle();
        if (!TextUtils.isEmpty(tTVfConfig.getData())) {
            bundle.putString("extra_data", tTVfConfig.getData());
        }
        if (!TextUtils.isEmpty(tTVfConfig.getKeywords())) {
            bundle.putString("keywords", tTVfConfig.getKeywords());
        }
        if (bundle.keySet().isEmpty()) {
            return;
        }
        adManager.getExtra(AdConfig.class, bundle);
    }

    public static void updateConfigAuth(TTVfConfig tTVfConfig) {
        df dfVarRg;
        if (tTVfConfig == null || (dfVarRg = df.rg()) == null) {
            return;
        }
        dfVarRg.rg(tTVfConfig.getInjectionAuth());
    }

    public static void updatePaid(boolean z) {
        TTVfManager adManager = rg.getAdManager();
        if (adManager == null) {
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putBoolean("is_paid", z);
        if (bundle.keySet().isEmpty()) {
            return;
        }
        adManager.getExtra(AdConfig.class, bundle);
    }

    public static void getCodeGroupRit(final long j, final TTCodeGroupRit.TTCodeGroupRitListener tTCodeGroupRitListener) {
        TTInitializer tTInitializer = rg;
        if (tTInitializer != null) {
            tTInitializer.getAdManager().register(new CodeGroupRitObject() {
                @Override
                public long getCodeGroupId() {
                    return j;
                }

                @Override
                public TTCodeGroupRit.TTCodeGroupRitListener getListener() {
                    return tTCodeGroupRitListener;
                }
            });
        } else if (tTCodeGroupRitListener != null) {
            tTCodeGroupRitListener.onFail(MessageConstant.MessageType.MESSAGE_ALARM, "please init sdk first!");
        }
    }

    private static void rg(Object obj, String str) {
        if (obj == null) {
            throw new IllegalArgumentException(str);
        }
    }

    public static boolean isOnePointFiveAdType(TTNtExpressObject tTNtExpressObject) {
        Map<String, Object> mediaExtraInfo;
        if (tTNtExpressObject == null) {
            mediaExtraInfo = null;
        } else {
            try {
                mediaExtraInfo = tTNtExpressObject.getMediaExtraInfo();
            } catch (Throwable th) {
                th.printStackTrace();
                return false;
            }
        }
        if (mediaExtraInfo == null || !mediaExtraInfo.containsKey("_tt_ad_type_onepointfive")) {
            return false;
        }
        return ((Boolean) mediaExtraInfo.get("_tt_ad_type_onepointfive")).booleanValue();
    }
}
