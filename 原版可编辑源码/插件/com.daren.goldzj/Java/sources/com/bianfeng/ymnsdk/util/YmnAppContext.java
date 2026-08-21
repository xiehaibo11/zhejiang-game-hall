package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.pluginlibrary.BuildConfig;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.feature.d;
import com.bianfeng.ymnsdk.feature.f;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;

public class YmnAppContext {
    private static final String KEY_AREA_ID = "TD_AREA_ID";
    private static final String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final String KEY_DATAFUN_URL = "KEY_DATAFUN_HOST";
    private static final String KEY_GROUP_ID = "TD_GROUP_ID";
    private static final String KEY_HOST_URL = "YMN_HOST_VER";
    private static final String KEY_MAIN_ACTIVITY = "MAIN_ACTIVITY";
    private static final String KEY_PRODUCT_ID = "TD_PRODUCT_ID";
    private static final String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    public static final String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static final String TAG = "YmnAppContext";
    private static final String TD_SDK_APP_KEY = "TD_SDK_APP_KEY";
    private static int appId;
    private static String areaId;
    private static String channelId;
    private static String clientType;
    private static int configId;
    private static String datafunUrl;
    private static boolean debug;
    private static String groupId;
    private static String hostUrl;
    private static volatile boolean inited;
    private static String mainActivity;
    private static String pkgName;
    private static String productId;
    private static String sdkAppId;
    private static String sdkAppKey;
    private static String verCode;
    private static String verName;

    public static void check() {
        if (pkgName == null) {
            pkgName = "";
        }
        if (verName == null) {
            verName = "";
        }
        if (verCode == null) {
            verCode = "";
        }
        if (channelId == null) {
            channelId = "";
        }
        if (groupId == null) {
            groupId = "0";
        }
        if (clientType == null) {
            clientType = "1";
        }
        if (areaId == null) {
            areaId = "1";
        }
        if (hostUrl == null) {
            hostUrl = "";
        }
        if (TextUtils.isEmpty(sdkAppId)) {
            d.a(new f("未配置有猫腻 AppId")).a();
        }
    }

    public static String getApkPath(Context context) {
        try {
            return context.getApplicationInfo().sourceDir;
        } catch (Throwable unused) {
            return null;
        }
    }

    public static int getAppId() {
        return appId;
    }

    public static String getAreaId() {
        return areaId;
    }

    public static String getChannelId() {
        return channelId;
    }

    public static int getChannelIdInt() {
        try {
            return Integer.parseInt(channelId);
        } catch (Exception unused) {
            return 0;
        }
    }

    public static String getClientType() {
        return clientType;
    }

    public static int getConfigId() {
        return configId;
    }

    public static String getConfigIdStr() {
        return configId + "";
    }

    public static String getDataFunUrl() {
        return datafunUrl;
    }

    public static String getGroupId() {
        return groupId;
    }

    public static String getHostUrl() {
        return hostUrl;
    }

    public static String getMainActivity() {
        return mainActivity;
    }

    public static int getMetaDataValueInt(String str) {
        try {
            return AppContext.getInstance().getMetaDataValueInt(str);
        } catch (Exception unused) {
            return 0;
        }
    }

    public static String getMetaDataValueString(String str) {
        try {
            return AppContext.getInstance().getMetaDataValueString(str);
        } catch (Exception unused) {
            return "";
        }
    }

    public static String getPkgName() {
        return pkgName;
    }

    public static String getProductId() {
        return productId;
    }

    public static String getSdkAppId() {
        return sdkAppId;
    }

    public static String getSdkAppKey() {
        return sdkAppKey;
    }

    public static String getVerCode() {
        return verCode;
    }

    public static String getVerName() {
        return verName;
    }

    public static void init(Context context) {
        if (inited) {
            return;
        }
        inited = true;
        pkgName = AppContext.getInstance().getPkgName();
        verName = AppContext.getInstance().getVerName();
        verCode = AppContext.getInstance().getVerCode();
        appId = AppContext.getInstance().getAppId();
        sdkAppId = getMetaDataValueString(KEY_SDK_APP_ID);
        configId = AppContext.getInstance().getIdentify_id();
        clientType = AppContext.getInstance().getDeviceType();
        channelId = AppContext.getInstance().getChannelId();
        groupId = getMetaDataValueString(KEY_GROUP_ID);
        areaId = getMetaDataValueString(KEY_AREA_ID);
        productId = getMetaDataValueString(KEY_PRODUCT_ID);
        hostUrl = getMetaDataValueString(KEY_HOST_URL);
        datafunUrl = getMetaDataValueString(KEY_DATAFUN_URL);
        mainActivity = getMetaDataValueString(KEY_MAIN_ACTIVITY);
        sdkAppKey = getMetaDataValueString(TD_SDK_APP_KEY);
        check();
    }

    public static boolean isDebug() {
        debug = Boolean.parseBoolean(YmnProperties.getValue(BuildConfig.BUILD_TYPE));
        Logger.i(TAG, "debugMode is" + debug);
        return debug;
    }

    public static void setAppId(String str) {
        sdkAppId = str;
    }

    public static void setConfigId(int i) {
        configId = i;
    }

    public static void setGroupId(String str) {
        groupId = str;
    }

    public static void setSdkAppKey(String str) {
        sdkAppKey = str;
    }
}
